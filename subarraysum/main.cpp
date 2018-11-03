#include <iostream>

using namespace std;



// Driver program
int main()
{
    int sum = 0 ;
    int best = 0  ;
    int arr[] = { 2, 3,4};
    int n = sizeof(arr)/sizeof(arr[0]);


    for (int k  =0 ; k <n ; k++)
    {
        sum = max(arr[k],sum+arr[k]);
        best = max (best , sum) ;
    }


    cout <<best << endl;

    return 0;
}
