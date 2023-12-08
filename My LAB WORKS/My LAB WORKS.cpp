
#include <iostream>
using namespace std;
int main()
{
     int ArraySize;
     cout << "Enter the size of the array: ";
     cin >>ArraySize;
     double *myArray = new double[ArraySize];
     cout << "Enter " << ArraySize << " integers, pressing Enter after each one:\n";
     for (int i = 0; i < ArraySize; ++i) {
         std::cin >> myArray[i];
     }
     double sum = 0;
     for (int i = ArraySize-1;  i>= 0; i--)
     {
         sum += myArray[i];
     }
     double a;
     a= sum / (ArraySize) ;
     double sum2=0;
     for (int i = 0; i < ArraySize; i++)
     {
         sum2 =sum2 + pow((myArray[i] - a),2);
     }
     double solution;
     solution = sqrt(sum2/(ArraySize-1));
     cout << solution;

}



