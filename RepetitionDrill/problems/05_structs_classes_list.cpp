// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <unordered_set>
#include <queue>
#include <stack>
#include <deque>
#include <climits>
#include <cctype>
#include <sstream>  // istringstream 用
#include <sstream>
using namespace std;

// Local definitions for standalone build
struct ListNode {
    int val;
    ListNode* next;
    ListNode(): val(0), next(nullptr) {}
    ListNode(int x): val(x), next(nullptr) {}
    ListNode(int x, ListNode* n): val(x), next(n) {}
};

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(): val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x): val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* l, TreeNode* r): val(x), left(l), right(r) {}
};

struct Point { int x, y; };

// Q34: Point p のマンハッタン距離 |x|+|y|
int manhattan(const Point& p){
    /* TODO */
    return 0;
}

class Counter{
    int c;
public:
    Counter():c(0){
    
};
    void inc(){
    /* TODO */
}
    void dec(){
    /* TODO */
}
    int val() const { /* TODO */ return 0; }
};

// Q35: Counter を使って n 回 inc し値を返す
int count_up(int n){
    /* TODO */
    return 0;
}

/* ==================
 * 12. 単方向リンクリスト
 * ================== */
struct ListNode{
    int val;
    ListNode* next;
    ListNode(int v):val(v),next(nullptr){
    
}
};

// Q36: 末尾に追加（head 参照渡し）
void push_back(ListNode*& head, int v){
    /* TODO */
}

// Q37: 値 x を持つ最初のノードを削除（存在しなければ何もしない）
void erase_first(ListNode*& head, int x){
    /* TODO */
}

// Q38: リストを反転（反復）
ListNode* reverse_list(ListNode* head){
    /* TODO */
    return nullptr;
}

// Q39: サイクル検出（Floyd）
bool has_cycle(ListNode* head){
    /* TODO */
    return false;
}

/* =============
 * 13. 木構造基礎
 * ============= */
struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int v):val(v),left(nullptr),right(nullptr){
    
}
};

int main(){ return 0; }
