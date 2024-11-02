#include <iostream>
using namespace std;

int factorial(int num) {
        int facto = 1;
        for (int i = 1; i <= num; i++) {
            facto = facto * i;
        }
        return facto;
}

int permutation(int n, int r) {
    return factorial(n) / factorial(n-r);
}

int combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n-r));
}

int main() {
    int n, r;

    cout << "Give me positive integers for n and r? (n has to be >= r): ";
    cin >> n >> r;

    if (n <= 0 || r <= 0 || r > n) {
        cout << "Invalid Input. Remember that n and r has to be positive along with n >= r" << endl;
        return 1;
    }

    cout << "\nn    r    nPr    nCr" << endl;
    cout << "----------------------" << endl;

    for (int i = r; i <= n; i++) {
        int nPr = permutation(n, i);
        int nCr = combination(n, i);
        cout << n << "    " << i << "    " << nPr << "    " << nCr << endl;
    }
}
