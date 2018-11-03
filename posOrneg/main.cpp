#include <iostream>

using namespace std;

int main()
{
    int i ;
    int digit;
    int pos = 0 ;
    int neg = 0  ;
    for (i=0 ; i<10 ; i++)
    {
        cout << "Enter your digits (-9 to +9) :" <<endl;
        cin >> digit ;

        if (digit >= 0) {pos++;}
        else {neg++;}
    }
    cout << "Number of positive number is :" << pos << endl;
    cout << "Number of negative number is :" << neg << endl;
    return 0;
}
