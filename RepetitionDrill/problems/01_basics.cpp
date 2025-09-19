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

// Q1: int a,b の和を返せ
int sum2(int a, int b){
    /* TODO */
    return 0;
}

// Q2: double x を int へ明示的キャストして返せ
int cast_to_int(double x){
    /* TODO */
    return 0;
}

// Q3: 文字 c が英字なら true
bool is_alpha_char(char c){
    /* TODO */
    return false;
}

// Q4: 文字列 s の英字を小文字化して返す（cctype 使用）
string to_lower_letters(string s){
    /* TODO */
    return "";
}

// Q5: 三項演算子で a,b の大きい方を返せ
int max2_ternary(int a, int b){
    /* TODO */
    return 0;
}

/* ===========
 *  2. 条件分岐
 * =========== */

// Q6: 非負なら "non-negative"、負なら "negative"
string sign_str(int x){
    /* TODO */
    return "";
}

// Q7: 年 y がうるう年か（西暦）
bool is_leap(int y){
    /* TODO */
    return false;
}

// Q8: switch で 1..7 を曜日名に（1=Mon）それ以外は "NA"
string weekday_name(int d){
    /* TODO */
    return "";
}

/* =======
 *  3. ループ
 * ======= */

// Q9: 1..n の合計
long long sum_1_to_n(int n){
    /* TODO */
    return 0;
}

// Q10: n の階乗（n<=12想定）
int fact(int n){
    /* TODO */
    return 0;
}

// Q11: フィボナッチ n 項目（0,1,1,2...）を返す（反復で）
long long fib_iter(int n){
    /* TODO */
    return 0;
}

// Q12: 配列 a の平均（小数）
double avg(const vector<int>& a){
    /* TODO */
    return 0;
}

/* ===================
 *  4. 配列・文字列基礎
 * =================== */

int main(){ return 0; }
