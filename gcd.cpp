#include <iostream>

//Naive apporach
int gcd_naive(int a, int b) {
  int current_gcd = 1;

  for (int d = 2; d <= a && d <= b; d++) {
    if (a % d == 0 && b % d == 0) {
      if (d > current_gcd) {
        current_gcd = d;
      }
    }
  }

  return current_gcd;
}

//Fast apporach
int gcd_fast(int a, int b)
{
     while(a!=b)
     {
         if(a>b)
            a-=b;
         else
            b-=a;
     }

     return a;
}



int main() {
  int a, b;

  //Input the value
 std::cin>>a>>b;

 //Display the value
 std::cout<<gcd_fast(a,b);
  return 0;
}///By appu13
