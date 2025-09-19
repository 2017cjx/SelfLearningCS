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

// Q40: 二分木の高さ（空なら0）
int height(TreeNode* root){
    /* TODO */
    return 0;
}

// Q41: 幅優先（レベル順）で値を vector に
vector<int> bfs_values(TreeNode* root){
    /* TODO */
    return {
}; }

// Q42: 二分探索木 BST へ挿入して root を返す
TreeNode* bst_insert(TreeNode* root, int x){
    /* TODO */
    return nullptr;
}

// Q43: BST で値 x を探索
bool bst_find(TreeNode* root, int x){
    /* TODO */
    return false;
}

// Q44: 中序(inorder) 走査で昇順 vector を返す
void inorder_dfs(TreeNode* root, vector<int>& out){
    /* TODO */
}

/* ====================
 * 14. ツリー系応用/配列変換
 * ==================== */

// Q45: 配列の最小値と最大値を返す pair
pair<int,int> minmax_arr(const vector<int>& a){
    /* TODO */
    return {0,0
}; }

// Q46: レベル毎平均（各レベルの平均を double で）
vector<double> level_averages(TreeNode* root){
    /* TODO */
    return {
}; }

// Q47: 有効な BST か検証（範囲制約）
bool valid_bst(TreeNode* root, long long lo=LLONG_MIN, long long hi=LLONG_MAX){
    /* TODO */
    return false;
}

/* =====================
 * 15. ビット・数値小課題
 * ===================== */

int main(){ return 0; }
