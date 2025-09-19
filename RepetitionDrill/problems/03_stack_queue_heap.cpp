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

// Q21: 括弧列の正当性（()[]{}）を stack で判定
bool valid_brackets(const string& s){
    /* TODO */
    return false;
}

// Q22: queue を使って与えられた配列の要素を同順で取り出した vector を返す
vector<int> queue_pass_through(const vector<int>& a){
    /* TODO */
    return {
}; }

// Q23: 単語を逆順に並べる（stack 使用）
string reverse_words_stack(const string& s){
    /* TODO */
    return "";
}

/* ===================
 *  7. deque / priority_queue
 * =================== */

// Q24: deque で両端から要素を操作: 入力 a を前後交互に push し、出力 vector を返す
vector<int> alternate_deque(const vector<int>& a){
    /* TODO */
    return {
}; }

// Q25: priority_queue 最大ヒープで上位 k 要素を降順に返す
vector<int> topk_max(const vector<int>& a, int k){
    /* TODO */
    return {
}; }

/* ===========================
 *  8. set / unordered_set / map
 * =========================== */

int main(){ return 0; }
