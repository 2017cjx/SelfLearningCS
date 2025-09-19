# 連結リスト

## 連結リストとは何か

**連結リスト**：一連のノード（要素）がポインタを介して連結されたデータ構造。

- 各ノードはデータ部と次のノードを指すポイント部から構成され、一方向または双方向に連結することができる
- C++において、連結リストは動的なデータ構造として非常に有用で、データの挿入や削除を効率的に行うことができる。この特性は、静的な配列では難しい操作を可能にし、プログラムの柔軟性を高める要因となっている

### 基本的な連結リストの作成

```C++
#include <iostream>
using namespace std;

// ノードの構造を定義するクラス
class Node {
    public:
        int data;
        Node* next; // 次のノードへのポインタ。間接演算子を使ってポインタ変数として定義

        // コンストラクタ
        Node(int d){
            data = d;
            next = nullptr;
        }
};

// 連結リストを操作するためのクラス

class LinkedList {
    Node* head; // リストの先頭ノードへのポインタ

    public:
        LinkedList(){
            head = nullptr;
        }

        // リストの最後尾ににノードを追加する関数
        void addNode(int d){
            Node* newNode = new Node(d); // コンストラクタで新しいノードを作成
            newNode->next = nullptr;

            if (head==nullptr){
                head = newNode;
                return;
            }

            // 末尾まで移動
            Node* temp = head;
            while (temp->next != nullptr){
                temp = temp->next;
            }

            // 最後のノードのnextに新ノードを繋げる
            temp->next = newNode;
        }

        void display(){
            Node* current = head;
            while(current!=nullptr){
                cout << current->data << "->";
                current = current->next;
            }
            cout << "null" << endl;
        }
}

int main(){
    Linkedlist list;
    list.addNode(1);
    list.addNode(2);
    list.addNode(3);
    list.display(); // 1->2->3->null
    return 0;
}
```

- `Node* newNode = new Node(d);`

  new 演算子は、ヒープ領域にオブジェクトを作り、その「アドレス」を返す。

  そのため、`Node* newNode`の後にアドレス演算子`&`が不要

- `newNode->next = nullptr;`

  アロー演算子`->`は、アドレスの指すオブジェクトのメンバ変数を指定できる。

  `newNode->next`は、`(*newNode).next`（間接演算子を使って newNode の値を指定）と同等。

### ノードの挿入

この関数では、指定された位置 pos に新しいノードを挿入する。
位置が０の場合はリストの先頭に挿入し、それ以外の場合は指定された位置に挿入する。
もし指定された位置がリストの範囲外である場合は、エラーメッセージを表示し、新しく作成したノードを削除する

```c++
void insertNode(int pos, int d){

    Node* newNode = new Node(d); // 新しく挿入するノードを生成する

    if(pos==0){
        newNode->next = head; // newNodeをheadの前に接続する
        head = newNode; // 先頭を改めてnewNodeであると宣言する
        return; // 関数を終了する
    }

    Node* current = head;
    for(int i = 0; i < pos-1 && current!= nullptr; i++){ // ポインタがnullptrでない限り、指定された位置posまでcurrentを進める
        current = current->next;
    }

    if (current == nullptr){ // ポインタがnullptrであるということは、連結リストの最終に達してしまったということ。つまり、指定された位置posがリストの長さ外であることを表す
        cout << "1がリストの範囲外です" << endl;
        delete newNode;
        return;
    }

    newNode->next = current->next; // newNodeの持つポインタを、指定位置のノードの次に指す
    current->next = newNode; // 指定位置の一つ前のノードのポインタをnewNodeに指す
}
```

### ノードの削除

```c++
void insertNode(int d){

    Node* current = head;
    Node* previous = nullptr; // 一つ前のノードもトラッキングする

    while (current->data != d && current->next!=nullptr){
        previous = current;
        current = current->next
    }

    if (current->next==nullptr){
        cout << "ノードなし" << endl;
        return;
    }

    if (current == head){
        head = current->next;
    } else {
        previout->next = current->next;
    }

    delete current;
}
```

### リストの走査

```c++
void traverse(){
    Node* current = head;
    while(current!=nullptr){
        cout << current->data << "->";
        current = current->next;
    }
    cout << "null" << endl;
}
```

### 逆順リストの作成
```c++
void reverse(){
    Node* current = head;
    Node* previous = nullptr;
    Node* next = nullptr;

    while(current!=nullptr){
        next = current->next; // current->nextを退避させている
        current->next = previous;
        previous = current;
        current = next;
    }

    head = previous;
}
```
