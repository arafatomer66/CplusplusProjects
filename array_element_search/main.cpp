#include <iostream>

using namespace std;

int main()
{
    int arrNum[10] = {5,8,23,4,6,8,54,9,7,4} ;

    int target = 548 ;

    for(int i = 0 ; i < sizeof(arrNum) ; i++)
    {
        if (arrNum[i] == target)
        {
        cout <<"Found" <<endl ;

        }
    }


    return 0;
}
