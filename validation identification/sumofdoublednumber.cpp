#include <iostream>

using namespace std;



int DoubleValue(int x )
{

    int y = x*2 ;

    if (y < 10)
    {
        cout <<"Your Doubled Number Is :" << y <<endl;
        return y ;
    }
    else
    {
        cout << "Your number is : " << y <<endl;
        int sum ;
        sum = 1 + (y % 10);
        cout << "Sum of your doubled numbers individual digits is : " <<sum << endl ;
        return sum ;
    }
}


int main()
{
    char digit ;

    cin >> digit ;
    DoubleValue(digit);

    return 0;
}
