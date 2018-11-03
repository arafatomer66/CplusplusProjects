#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//Task 1
enum type { fax = 'f', atHome = 'h', atWork = 'w', mobile = 'm', others = 'o'};
//Task 2
struct contactInfo
{
    type t;
    int id;
    string pNumber;
    string uName;
};
const int nContacts = 10;
contactInfo slist[nContacts];
contactInfo TheContacts[nContacts];
int contactsId = 0 ;

//Task 3
int ifExist(string fn, string ln)
{
    string name = fn + " " + ln ;
    for (int i = 0 ; i<nContacts ; ++i)
    {
        if (TheContacts[i].uName == name)
            return ++i ;
    }
    return false;
}

bool addCon()
{
    // Entering the contact information
    char t;
    string fName;
    string lName;
    string number;
    cout << "Enter the number : ";
    cin.ignore();

    getline(cin , number);
    cout << "Enter first and last name : ";
    cin >> fName;
    cin >> lName;
    cout << "Enter type (f = fax , h = home , m = mobile , w = work , o = others) : ";
    cin >> t;
    if (ifExist(fName,lName) || contactsId >= nContacts)
    {
        cout << ((contactsId >= nContacts)? "You have reached the maximum size , can't enter any contacts !\n" : "The name already entered!!\n");
        return false ;
    }
    else
    {
        TheContacts[contactsId].uName = fName + " " + lName;
        TheContacts[contactsId].pNumber = number;
        TheContacts[contactsId].pNumber = number;
        TheContacts[contactsId].t =(type)t;
        contactsId++;
    }
    return true;
}

//Task 4
bool deleteCon()
{
    string fName;
    string lName;
    cout << "Enter first and last name : ";
    cin >> fName;
    cin >> lName;
    int id = ifExist(fName,lName);
    if (id != 0)
    {
        --id;
        for (int i = id+1 ; i<contactsId ; ++i)
        {
            TheContacts[i-1].uName = TheContacts[i].uName;
            TheContacts[i-1].pNumber = TheContacts[i].pNumber;
            TheContacts[i-1].id = TheContacts[i].id;

        }
        contactsId--;
        cout << "Contact is deleted !\n";
        return true;

    }
    else
        return false;

}

//Task 5
bool compare(contactInfo a, contactInfo b)
{

    return (a.uName <= b.uName);
}


void printCon()
{
    for (int i = 0 ; i<contactsId ; ++i)
    {
        slist[i].uName = TheContacts[i].uName;
        slist[i].pNumber = TheContacts[i].pNumber;
        slist[i].id = TheContacts[i].id;
    }
    sort(slist,slist+contactsId, compare);
    for (int i = 0 ; i<contactsId ; ++i)
    {
        contactInfo& c = slist[i];
        cout << c.uName << "\t\t" << c.pNumber << "\t\t(" << c.t <<")\n";
    }
}


void deleteMemo()
//Remove everything
{
    contactsId = 0;
    cout << "Memory is deleted successfully\n";
}

//Task 6
int main()
{
    int choose , ok = 1;
    while (ok)
    {
        cout << "*** " << contactsId << " contacts entries ***\n0 end\n1 add contact\n2 delete contact\n3 show all contacts \n9 delete memory\nany other : exit\n";
        cin >> choose;

        switch (choose)
        {
        case 1 :
            addCon();
            break;
        case 2 :
            deleteCon();
            break;
        case 3 :
            printCon();
            break;
        case 9 :
            deleteMemo();
            break;
        default :
            return 0;

        }
    }
}
