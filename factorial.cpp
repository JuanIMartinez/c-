
#include <iostream>
using namespace std;
int main()
{
   int n,i;
   long double factorial; 
   n=7;
   factorial=1;
   for(i=1;i<=n;i++)
        factorial = factorial * i;
   cout << endl << "Factorial es"  << factorial << endl;
   return 0;
}