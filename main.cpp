#include <iostream>
using namespace std;

int main()
{
   char upperLet, lowerLet;
   int upperVal, lowerVal;

   // first do the L/l values. place in both char and int and show:
   upperLet = 'L';
   lowerLet = 'l';
   upperVal = upperLet;
   lowerVal = lowerLet;
   cout << upperLet << " has ASCII value: " << upperVal << endl;
   cout << lowerLet << " has ASCII value: " << lowerVal << endl << endl;

   // next do the E/e values. place in both char and int and show:
   upperLet = 'E';
   lowerLet = 'e';
   upperVal = upperLet;
   lowerVal = lowerLet;
   cout << upperLet << " has ASCII value: " << upperVal << endl;
   cout << lowerLet << " has ASCII value: " << lowerVal << endl << endl;

   return (0);
}
