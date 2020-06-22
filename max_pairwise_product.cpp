#include <iostream>
#include <vector>
#include <algorithm>
#include<cstdlib>
#include<bits/stdc++.h>


long long MaxPairwiseProduct_fast (std:: vector<int>&numbers)

{
    int n=numbers.size();
    //Sorting the vector
    sort(numbers.begin(),numbers.end());
    //Returning the product of last two elements
    return (long long)numbers[n-1]*numbers[n-2];

}

int main() {
    int n1;

    // Receiving input
    std::cin >> n1;
    std::vector<int> numbers(n1);
    for (int i = 0; i < n1; ++i) {
        std::cin >> numbers[i];
    }

    //Display output
    std::cout << MaxPairwiseProduct_fast(numbers)<< "\n";
    return 0;
}//by appu13
