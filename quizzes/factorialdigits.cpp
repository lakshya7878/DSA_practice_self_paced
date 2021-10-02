#include <iostream>
#include <cmath>
using namespace std;
// This function returns the number of digits present in num!
int count_digits(int num){
   // factorial exists only if num <= 0
   if (num < 0){
      return 0;
   }
   // base case
   if (num <= 1){
      return 1;
   }
   // else iterate through num and calculate the
   // value
   double d = 0;
   for (int i=2; i<=num; i++){
      d += log10(i);
   }
   return floor(d) + 1;
}
int main(){
   cout<<"number of digits in factorial(1) is: "<<count_digits(1)<< endl;
   cout<<"number of digits in factorial(6) is: "<<count_digits(6) << endl;
   cout<<"number of digits in factorial(106) is: "<<count_digits(106) << endl;
   return 0;
}