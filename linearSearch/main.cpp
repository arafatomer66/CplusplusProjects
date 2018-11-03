#include <iostream>

using namespace std;

int linearSearch(int x ,int arr[])
{
    int n = sizeof(arr);

    for( int i= 0 ; i < 5;i++)
    {
        if ( arr[i] == x )
        {
            cout << "Number Found" ;
        }


    }



}


int main()
{
    int m ;
    int array1[] = {4,5,3,7,1};
    cin >> m ;
    linearSearch(m ,array1);

    return 0;
}
