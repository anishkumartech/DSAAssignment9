#include <iostream>
using namespace std;

int sumOfNaturalNumbers(int n) {
    int sum = (n * (n + 1)) / 2;
    return sum;
}

int main() {
    int n ;
    cin>>n;
    int result = sumOfNaturalNumbers(n);

    cout << result << endl;

    return 0;
}

