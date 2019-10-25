
#include <iostream>

using namespace std;

int max(int a, int b) { return (a > b)? a : b;}

int rodCutting(int price[], int n)
{
   int val[n+1];
   val[0] = 0;
   int i, j; 

   for (i = 1; i<=n; i++)
   {
       int maxVal = 0;

       for (j = 0; j < i; j++)
         maxVal = max(maxVal, price[j] + val[i-j-1]);

       val[i] = maxVal;
   }

   return val[n];
}

int main()
{

    int arr[] = {1, 5, 8, 9, 10, 17, 17, 20, 24, 30};
    int size = 4;
    cout<<"Maximo valor obtenido: "<< rodCutting(arr, size);

    return 0;
}
