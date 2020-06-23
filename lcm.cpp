#include <iostream>

//Naive apporach
long long lcm_naive(int a, int b) {
  for (long l = 1; l <= (long long) a * b; ++l)
    if (l % a == 0 && l % b == 0)
      return l;

  return (long long) a * b;
}

//Fast apporach
long long lcm_fast(int a, int b)
{
   long long  n=(long long)0;
    while(n <= (long long)a*b)
    {
        n+=a;
        if(n%b==0)
        {
            return n;
        }
    }

     return (long long) a * b;
}


int main() {
  int a,b;

  //Input the value
  std::cin>>a>>b;

  //Display the value
  std::cout<<lcm_fast(a,b);

  return 0;
}//By appu13
