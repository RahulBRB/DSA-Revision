//Calculate the sum of N terms of Fibonacci series. fib(0)=1 and fib(1)=1

#include <iostream>
using namespace std;


int sumOfNFibonacci(int n){
    if(n==0){
        return 1;
    }

    int fib0=1, fib1=1;
    int sum = fib0 + fib1;

    for(int i=2;i<n;++i){
        int fibNext = fib0+fib1;
        sum+=fibNext;

        fib0=fib1;
        fib1=fibNext;
    }
    return sum;
}

int main() {
    int N;
    cout << "Enter the number of Fibonacci terms (N): ";
    cin >> N;

    int result = sumOfNFibonacci(N);
    cout << "The sum of the first " << N << " Fibonacci terms is: " << result << endl;

    return 0;
}
