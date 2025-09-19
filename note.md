## 125 Valid Palindrome

https://leetcode.com/problems/valid-palindrome?envType=study-plan-v2&envId=top-interview-150

- `cctype`を使って文字判定
  - `#include <cctype>`
  - `std::isalnum`で文字がアルファベット/数字かを判定
  - `std::tolower`で小文字に変換
  - `(unsigned char)`をつける
    - `unsigned`を付けると、負のあたいを持てなくなる代わりに、正の範囲が 2 倍になる
    - `char`は実装によって`-128~127`か、`0~255`になる
    - `isasnum`や`tolower`など`<cctype>`関数は負の値が渡ると未定義動作
    - 必ず`0~255`に収まるように`unsigned char`にキャストする
- 何度も`i<j`するのは、i や j の値が頻繁に変わるため。
  - `i>=j`になった場合は、両端が中央に行き着いたという意味で、true を返す。
- `i++`よりも`++i`を使ったほうが良い
  - `i++`は値を返した後で i を増やす
  - `++i`は i を返してから値を増やす
  - `++i`の方が無駄なコピーが発生せずに最適

```c++
#include <cctype>
#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0, j = (int)s.length() - 1;

        while (i < j) {
            // 左を英数字まで進める
            while (i < j && !std::isalnum((unsigned char)s[i])) ++i;
            // 右を英数字まで戻す
            while (i < j && !std::isalnum((unsigned char)s[j])) --j;

            if (i < j) {
                if (std::tolower((unsigned char)s[i]) != std::tolower((unsigned char)s[j])) {
                    return false;
                }
                ++i;
                --j;
            }
        }
        return true;
    }
};

```

## 141 Linked List Cycle

https://leetcode.com/problems/linked-list-cycle?envType=study-plan-v2&envId=top-interview-150

- 一つずつ進む`slow`と 2 つずつ進む`fast`を走査させ、重なったら`true`とする。
- `fast && fast->next`の条件で走査させる
  - `fast`：現状が`nullptr`ではない
  - `fast->next`：次が`nullptr`ではない
- `nullptr`は`false`的に扱える

## 104 Maximum Depth of Binary Tree

https://leetcode.com/problems/maximum-depth-of-binary-tree?envType=study-plan-v2&envId=top-interview-150

- std::max を使って、右部分木と左部分木を再帰で走らせ、最大値を取得する

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
#include <iostream>
using namespace std;

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (!root) {
            return 0;
        }

        return 1 + std::max(maxDepth(root->left), maxDepth(root->right));
    }
};
```

### 637.

```cpp
#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> result;
        if (!root) return result;

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int sz = q.size();   // このレベルのノード数
            long long sum = 0;   // 合計値 (int だとオーバーフローの可能性)

            for (int i = 0; i < sz; ++i) { // そのレベルのノード数だけ繰り返す。そのレベルのノードはすでにqueueに入っている
                TreeNode* cur = q.front(); q.pop();
                sum += cur->val;
                // そのレベルの下のレベルのノードをqueueに入れていく。ただしszで処理回数は縛っているので、この処理はそのレベルのノード数のみ行われる
                if (cur->left) q.push(cur->left);
                if (cur->right) q.push(cur->right);
            }

            result.push_back((double)sum / sz);
        }

        return result;
    }
};

```
