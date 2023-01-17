#include <iostream>
using namespace std;

int main(){
    int days[1000];
    days[0] = 0;
    int N, Q;
    int a, b;
    cin >> N >> Q;

    for (int i = 1; i < N; i++){
        cin >> days[i];
        days[i] += days[i-1];
    }

    for (int i = 0; i < Q; i++){
        cin >> a >> b;
        a ++;
        b ++;
        cout << days[b] - days[a] << endl;
    }

}