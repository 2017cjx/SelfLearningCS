# 二分木
## 二分木とは
- 各ノード（節）に高々2つの子（left/right）を持つ木構造
- 代表的なバリエーション
    - 二分探索木（BST）：左部分木 < 根 < 右部分木の順序性を満たす
    - ヒープ：親子に代償関係を課す（最小/最大）、ただし探索順序は保証しない
    - 完全二分木：下から２段目まで全て埋まり、最下段は左から詰めてある
    - 満二分木：全ての内部ノードがちょうど2子を持つ

## 基本のノード定義
```c++
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(): val(0), left(nullptr), right(nullptr){}
    TreeNode(int x): val(x), left(nullptr), right(nullptr){}
    TreeNode(int x, TreeNode* l, TreeNode* r): val(x), left(l), right(r){}
}
```
- メンバ初期化リスト：`:`を使うことで、クラスや構造体のメンバを初期化できる。オブジェクトを作るときに同時に初期化する
- 構造体とクラスの違い
    - デフォルトのアクセス修飾子
        - struct：public
        - class：private
    - デフォルトの継承
        - struct：public継承
        - class：private継承
    - 共通点（structとclassでできることはほぼ同じ）
        - メンバ変数を持てる
        - メンバ関数を持てる
        - コンストラクタ・デストラクタが使える
        - 継承できる
        - アクセス修飾子を指定できる
    - 構造体とクラスが両方ある背景
        - 元々構造体はC言語でデータの入れ物（メソッドは持てない）だった。これをC++も最初は引き継いだ
        - C++は「C with Classes」として開発された。そこでclassが導入された
        - Cとの後方互換を意識して、structも残ったが、実際にはstructもclassもほぼ同じ機能を持つように進化した

## よく使う走査
### 再帰版（覚えやすい・書きやすい）
```c++
// 根->左->右
void preorder(TreeNode* root){
    if(!root) return;
    // visit(root->val);
    preoder(root->left);
    preorder(root->right);
}

// 左→根→右（BST）なら昇順
void inorder(TreeNode* root){
    if(!root) return;
    inorder(root->left);
    // visit(root->val);
    inorder(root->right);
}

// 左→右→根
void postorder(TreeNode* root){
    if(!root) return;
    postorder(root->left);
    postorder(root->right);
    // visit(root->val);
}
```

### 反復版：幅優先（レベル順）
キューを使う。距離や最短経路的な性質、各レベルごとの処理に便利。
```c++
#include <queue>
void levelOrder(TreeNode* root){
    if(!root) return;
    std::queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
        int sz = q.size();
        for(int i = 0; i < sz; ++i){
            TreeNode* cur = q.front();
            q.pop();
            // visit(cur->val);
            if(cur->left) q.push(cur->left);
            if(cur->right) q.push(cur->right);
        }
    }
}
```

### 反復版で中順（左→根→右）
```c++
#include <stack>
void inporderIter(TreeNode* root){
    std::stack<TreeNode*> st;
    TreeNode* cur = root;
    while(cur || !st.emptyu()){
        while(cur) { st.push(cur); cur = cur->left;} 
        cur = st.top(); // curがnullptrであればstackの先頭のNodeを格納する
        st.pop();
        // visit(cur->val);
        cur = cur->right;
    }
}
```

## よく出る基本タスク
### 高さ（最大深さ）
```c++
int maxDepth(TreeNode* root){
    if(!root) return 0;
    return 1 + std::max(maxDepth(root->left), maxDepth(root->right));
}
```

### ノード数/葉の数
```c++
int countNodes(Tree* root) {
    if(!root) return 0;
    return 1 + countNodes(root->left) + countNodes(root->right);
}

bool isLeaf(TreeNode* x) {
    return x && !x->left && !x->right;
}

int countLeaves(TreeNode* x){
    if(!root) return 0;
    if(isLeaf(root)) return 1;
    return countLeaves(root->left) + countLeaves(root->right);
}
```
### 二分探索木（BST）での探索・挿入
```c++
TreeNode* searchBST(TreeNode* root, int target){
    while(root) {
        if(root->val == target) return root;
        root = (target < root->val) ? root->left : root->right;
    }
    return nullptr;
}

TreeNode* insertBST(TreeNode* root, int x){
    if(!root) return new TreeNode(x);
    if (x < root->val){
        root->left = insertBST(root->left, x);
    } else {
        root->right = insertBST(root->right, x);
    }
    return root;
}
```
## BSTへの挿入
### 逐次挿入でBSTを作る
```c++
#include <bist/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(): val(0), left(nullptr), right(nullptr){}
    TreeNode(int x): val(x), left(nullptr), right(nullptr){}
    TreeNode(int x, TreeNode* l, TreeNode* r): val(x), left(l), right(r){}
};

TreeNode* insertBTS(TreeNode* root, int x){
    if(!root) return new TreeNode(x);
    if(x < root->val) {
        root->left = insertBST(root->left, x);
    } else {
        root->right = insertBST(root->right, x);
    }
    return root;
}

TreeNode* buildBSTFromVector(const vector<int>& a){
    TreeNode* root = nullptr;
    for(int x : a) {
        root = insertBST(root,x);
    }
    return root;
}
```

### ソート済み配列から"高さバランスBST"をお口く
```cpp
TreeNode* buildBalancedFromSorted(const vector<int>& a, int l, int r){
    if (l > r) return nullptr;
    int m = l + (r-l) / 2;
    TreeNode* root = new TreeNode(a[m]);
    root->left = buildBalancedFromSorted(a, l, m-1);
    root->right = buildBalancedFromSorted(a, m+1, r);
    return root;
}

TreeNode* buildBalancedFromSorted(const vector<int>& a){
    return buildBalancedFromSorted(a, 0, (int)a.size()-1);
}
```

