#include <iostream>

using namespace std;

int main()
{

    cout << "Enter a character (1-9) : " << endl;
    char a ;
    cout << "Your entered char's value  : " ;
    a = cin.get();
    int digit = a;
    cout << "Your entered char's value in Integer : " << digit << endl;
    cout << "After converting char to digit : " << digit - 48 << endl;





    return 0;
}
