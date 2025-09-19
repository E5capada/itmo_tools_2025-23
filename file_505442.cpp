#include <iostream>
using namespace std;
int main() {
    int n, m, k;
    cin >> n;
    cin>> m;
    cin >> k;
    int mA[n][m];
    int mB[m][k];
    int mC[n][k];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mA[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < k; j++) {
            cin >> mB[i][j];
        }
    }
    int sum=0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            for (int o = 0; o < m; o++) {
                sum+=mA[i][o]*mB[o][j];
            }
            mC[i][j]=sum;
            sum=0;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            if (j>=1) {
                cout << " ";
            }
            cout << mC[i][j];
        }
        cout << endl;
    }
    return 0;

}