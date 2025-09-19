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

// Q56: 文字列配列の中で最頻出文字列を返す（複数同率なら辞書順最小）
string most_frequent_string(const vector<string>& ss){
    /* TODO */
    return "";
}

// Q57: 2 つの配列の共通要素（重複なし昇順）
vector<int> intersection_sorted(vector<int> a, vector<int> b){
    /* TODO */
    return {
}; }

/* =======================
 * 20. 小さなアルゴリズム集
 * ======================= */

// Q58: 配列 a の 2Sum（和 target）有無（unordered_set）
bool two_sum_exists(const vector<int>& a, int target){
    /* TODO */
    return false;
}

// Q59: 区間 [l,r] 和の prefix-sum によるクエリ（前計算配列 ps を受け取り答えを返す）
long long range_sum_query(const vector<long long>& ps, int l, int r){
    /* TODO */
    return 0;
}

// Q60: (not found in source)

int main(){ return 0; }
