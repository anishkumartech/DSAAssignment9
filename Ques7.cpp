#include <iostream>
using namespace std;

void swap(char& a, char& b) {
    char temp = a;
    a = b;
    b = temp;
}

void printPermutations(string str, int start, int end) {
    if (start == end) {
        cout << str << endl;
        return;
    }

    for (int i = start; i <= end; i++) {
        swap(str[start], str[i]);
        printPermutations(str, start + 1, end);
        swap(str[start], str[i]);
    }
}

void printAllPermutations(string str) {
    int n = str.length();
    printPermutations(str, 0, n - 1);
}

int main() {
    string S ;
    cin>>S;

    printAllPermutations(S);

    return 0;
}

