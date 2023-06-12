
#include <iostream>
using namespace std;

int findNthTerm(int a, int d, int N) {
    return a + (N - 1) * d;
}

int main() {
    int a ;  // First term
    int d ;  // Common difference
    int N ;  // Term number
    cin>>a>>d>>N;

    int nthTerm = findNthTerm(a, d, N);

    cout << nthTerm << endl;

    return 0;
}
