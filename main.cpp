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

   // next do the F/f values. place in both char and int and show:
   upperLet = 'F';
   lowerLet = 'f';
   upperVal = upperLet;
   lowerVal = lowerLet;
   cout << upperLet << " has ASCII value: " << upperVal << endl;
   cout << lowerLet << " has ASCII value: " << lowerVal << endl << endl;

   return (0);
}
