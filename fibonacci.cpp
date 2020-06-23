#include <iostream>
#include <cassert>



int fibonacci_naive(int n) {
    if (n <= 1)
        return n;

    return fibonacci_naive(n - 1) + fibonacci_naive(n - 2);
}

int fibonacci_fast(int n) {
    int a=0;
    int b=1;
    int temp;
    if(n<=1)
        return n;

    for(int i=2;i<=n;i++)
    {
       temp=a+b;
       a=b;
       b=temp;
    }

    return b;
}



int main() {

    int n;
    std::cin>>n;
    std::cout<<fibonacci_fast(n);

    return 0;
}
