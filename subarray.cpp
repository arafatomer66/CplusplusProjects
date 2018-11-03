#include <iostream>

using namespace std;

void subArray(int arr[], int n)
{
    int best = 0 ;
    // Pick starting point
    for (int i=0; i <n; i++)
    {
        // Pick ending point
        for (int j=i; j<n; j++)
        {
            int sum = 0;
            // Print subarray between current starting
            // and ending points
            for (int k=i; k<=j; k++){
                sum = arr[k]+sum ;
            }
            best = max(best, sum);

        }
    }
    return best ;
}

// Driver program
int main()
{
    int arr[] = { 2, 3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "All Non-empty Subarrays\n";
    cout << subArray(arr, n) << endl;;
    return 0;
}
