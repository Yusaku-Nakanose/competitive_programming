#include <iostream>
#include <vector>

using namespace std;

void generateSequences(int N, int K, const vector<int>& R, vector<int>& current, int index, int sum) {
    if (index == N) {
        if (sum % K == 0) {
            for (int i = 0; i < N; ++i) {
                //cout << current[i] << (i == N-1 ? "\n" : " ");
            }
        }
        return;
    }

    for (int i = 1; i <= R[index]; ++i) {
        current[index] = i;
        for (int i = 0; i < N; ++i) {
            cout << current[i] << (i == N-1 ? "\n" : " ");
        }
        generateSequences(N, K, R, current, index + 1, sum + i);
    }
}

int main() {
    int N, K;
    cin >> N >> K;
    
    vector<int> R(N);
    for (int i = 0; i < N; ++i) {
        cin >> R[i];
    }

    vector<int> current(N);
    generateSequences(N, K, R, current, 0, 0);

    return 0;
}