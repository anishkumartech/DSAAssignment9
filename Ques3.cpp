#include <iostream>
using namespace std;

int factorial(int N) {
    int result = 1;

    for (int i = 1; i <= N; i++) {
        result *= i;
    }

    return result;
}

int main() {
    int N ;
    cin>>N;
    int result = factorial(N);

    cout << result << endl;

    return 0;
}

