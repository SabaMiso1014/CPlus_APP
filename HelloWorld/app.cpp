// Hello World
#include <iostream>
using namespace std;
int main() {
    cout << "Hello World!" << endl;
    return 0;
}

// 変数
#include <cstdint>
using namespace std;
int main() {
    //変数の宣言、初期化
    int32_t a;//宣言
    uint32_t b = 249u;//末尾に'u', 'U'を付けると、符号なしの数となる
    char c = 'n'; //文字は '' で囲う
    double d = 3.141592;//初期化
    constexpr float e = 2.71;//constexprを前につけると定数となる。
    //変数への代入
    a = 128;
    d = a;//暗黙にキャストされる
    b = (uint32_t)a;//(型名)を変数の前につけると、明示的にキャストする
    //e = 3.14; エラー　定数に代入などにより変更できない
}

// 配列
#include <array>
using namespace std;
int main() {
    std::array<int32_t, 6> ary;//int32_t型、要素数6の配列
    std;;array<int32_t, 6> ary2{0,1,2,3,4,5};//それぞれの値で各要素を初期化
    for(int32_t i = 0; i < 6; i++){
        ary[i] = i;//[ ]で各要素にアクセスする
    }
    for(auto ar : ary2){//c++におけるforeachのようなもの 後述する
        //arは各要素 ary2[i]と同じ感じ
        std::cout << ar << ','; //0,1,2,3,4,5,
    }
}

// コンテナ
#include <vector>
using namespace std;
int main() {
    std::vector<int32_t> vec;
    for(int32_t i = 0; i < 10; i++){
        int32_t n;
        std::cin >> n;
        vec.push_back(n);//末尾に要素を追加
    }
}


// 演算子
#include <iostream>
using namespace std;
int main() {
    int32_t a = 0;
    a = 3 + 2; //a is 5
    a = 3 - 2; //a is 1
    a = 3 * 2; //a is 6
    a = 3 / 2; //a is 1  整数のため小数は切り捨てられる
    a = 3 % 2; //a is 1　3を2で割った余り
}

// 関数
#include <iostream>
using namespace std;
int main() {
    int32_t add(int32_t a, int32_t b);
}

// if文
#include <iostream>
using namespace std;
int main() {
    int32_t abs(int32_t a){
        if(a > 0){//aが0よりおっきい
            return a;
        }
        else if(a == 0){//そうじゃなくてaが0のとき
            return 0;
        }
        else{//そうじゃない
            return -a;
        }
    }
}

// for文
#include <iostream>
using namespace std;
int main() {
    int32_t i;
    for(i = 0; i < 10; i++){//iを0で初期化し、i < 10を満たすとき、i++をする
        //ループ内
        if(i == 2) break; //iが2のとき、forループから抜け出す
    }
    //初期化式内で変数宣言をすると、forループ内でのみその変数が有効になる
    for(int32_t j = 0; j < 10; j++){//jを0で初期化し、j < 10を満たすとき、j++をする
        //ループ内
    }
    i = 0;  //これは有効
    // j = 0; これは無効
    for(;;){
        //条件式に何も書かないと、無限ループ
    }
}

// While文
#include <iostream>
using namespace std;
int main() {
    bool Update(){
        return system.Update(); //終了するときはfalseが返る
    }
    int main(){
        while(Update()){
            //終了操作がされるまで実行される
        }
        return 0;
    }
}
