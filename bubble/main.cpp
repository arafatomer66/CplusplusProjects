#include <iostream>

using namespace std;


int showArray(int arr[]){

    int n = sizeof(arr)+1;

    for (int i = 0 ; i < n ; i++)
    {

        cout << arr[i] << endl;
    }

}



int bubbleSort(int arr[]){


    for (int i = 0 ; i < sizeof(arr);i++)
    {
        for (int j =0 ; j < sizeof(arr)-1;j++)
        {
            if (arr[j]>arr[j+1])
                {
                swap(arr[j],arr[j+1]);

            }

        }


    }


}



int main()
{
    int arr[5] = {4,3,5,2,1} ;

     cout <<bubbleSort(arr);
    return 0;

}
