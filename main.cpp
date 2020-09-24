#include <iostream>

using namespace std;

int fib(int N) {
    if(N < 2) {
        return N;
    }
    if(N == 2) {
        return 1;
    }
    int a = 0, b = 1, result=0;
    for(int i=2; i<=N; ++i) {
        result = a + b;
        a = b;
        b = result;
    }
    return result;
}

int fibRecursion(int N) {
    if (N < 2) {
        return N;
    } else if (N == 2) {
        return 1;
    } else {
        return fibRecursion(N - 1) + fibRecursion(N-2);
    }
}

int main() {
    for (int i = 0; i < 10; ++i) {
        cout << fibRecursion(i) << endl;
    }

}
