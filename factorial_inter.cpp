#include <iostream>
using namespace std;
int main()
{
   int n,i;
   long double factorial; 
   cout << "numero para factorial: ";
   cin >> n;
   factorial=1;
   for(i=1;i<=n;i++)
        factorial = factorial * i;
   cout << endl << "Factorial es"  << factorial << endl;
   return 0;
}