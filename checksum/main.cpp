#include <iostream>

using namespace std;



int DoubleValue(int x )
{

    int y = x*2 ;

    if (y < 10)
    {

        return y ;
    }
    else
    {
        int sum =0  ;
        sum = 1 + (y % 10);
        return sum ;
    }
}

int main()
{

    int digit ;
    int sum = 0 ;

    for ( int i = 1 ; i<= 6 ; i++ )
    {
        cout << "Enter your digits (1-9):" ;
        cin >> digit ;
        if (i % 2 == 0) {sum = sum + digit  ;}
        else
          {sum = sum + DoubleValue(digit);}
    }

    cout << "Sum :" << sum <<endl ;

    if (sum % 10 == 0)
    {
        cout << "Sum is divisible by 10 ." ;
    }
    else
    {
        cout << "Sum is not divisible by 10 ." ;
    }

}
