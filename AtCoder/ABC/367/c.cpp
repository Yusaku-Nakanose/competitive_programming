#include <iostream>
#include <vector>

using namespace std;

void generateSequences(int N, int K, const vector<int>& R) {
    vector<int> current(N, 1);  // 全ての要素を1で初期化

    while (true) {
        // 現在の数列の合計を計算
        int sum = 0;
        for (int num : current) {
            sum += num;
        }

        // 合計がKの倍数なら出力
        for (int i = 0; i < N; i++) {
            cout << current[i] << (i == N-1 ? "\n" : " ");
        }

        // 次の数列を生成
        int i = N - 1;
        while (i >= 0 && current[i] == R[i]) {
            current[i] = 1;
            i--;
        }

        // 全ての組み合わせを試し終えたら終了
        if (i < 0) break;

        // 次の数を試す
        current[i]++;
    }
}

int main() {
    int N = 3, K = 2;
    vector<int> R = {2, 1, 3};
    
    generateSequences(N, K, R);

    return 0;
}