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

// Q13: 配列 a の最大値
int vmax(const vector<int>& a){
    /* TODO */
    return 0;
}

// Q14: 配列 a を反転（in-place）
void reverse_inplace(vector<int>& a){
    /* TODO */
}

// Q15: 文字列 s を反転して返す
string rev_str(string s){
    /* TODO */
    return "";
}

// Q16: 文字列 s が回文か（英数字のみ小文字比較）
bool is_palnum(string s){
    /* TODO */
    return false;
}

// Q17: 文字列 s の単語数（空白で分割、連続空白は1区切り）
int count_words(const string& s){
    /* TODO */
    return 0;
}

/* =========================
 *  5. ポインタ & 参照の基礎
 * ========================= */

// Q18: ポインタで x と y の値を入れ替える
void swap_ptr(int* x, int* y){
    /* TODO */
}

// Q19: 参照で x と y を入れ替える
void swap_ref(int& x, int& y){
    /* TODO */
}

// Q20: 配列ポインタ走査で合計（begin, size）
long long sum_ptr(const int* p, int n){
    /* TODO */
    return 0;
}

/* =====================
 *  6. スタック / キュー
 * ===================== */

int main(){ return 0; }
