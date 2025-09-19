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

// Q26: 配列 a の重複を除いた昇順 vector
vector<int> unique_sorted(vector<int> a){
    /* TODO */
    return {
}; }

// Q27: 最初に出現する重複要素（なければ INT_MIN）
int first_duplicate(const vector<int>& a){
    /* TODO */
    return INT_MIN;
}

// Q28: 文字列 s の各文字頻度を map<char,int> で返す
map<char,int> freq_map(const string& s){
    /* TODO */
    return {
}; }

/* ==================
 *  9. ソート / 探索基礎
 * ================== */

// Q29: バブルソート（昇順, in-place）
void bubble_sort(vector<int>& a){
    /* TODO */
}

// Q30: 二分探索（存在判定, a は昇順）
bool bin_search(const vector<int>& a, int x){
    /* TODO */
    return false;
}

/* ==============
 * 10. 再帰の基礎
 * ============== */

// Q31: 再帰で 1..n 合計
int sum_rec(int n){
    /* TODO */
    return 0;
}

// Q32: 再帰で配列 a の最大値（[l,r)）
int vmax_rec(const vector<int>& a, int l, int r){
    /* TODO */
    return 0;
}

// Q33: 再帰で文字列を反転
string rev_rec(const string& s){
    /* TODO */
    return "";
}

/* =============
 * 11. 構造体/クラス
 * ============= */
struct Point{ int x; int y; };

int main(){ return 0; }
