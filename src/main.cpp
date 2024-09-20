#include <iostream>
using namespace std;


int main()
{
    string usrName;
    

    while (true)
    {cout << "Enter your name: ";
    getline(cin, usrName);
    if (usrName == "exit") {break;}
    
    if (usrName == "Joe Szirmai" )
    { cout << usrName << " is gay as hell." << endl << endl;}
    
    else if (usrName == "Brotuzak" )
    { cout << usrName << " proves bald is beautiful." << endl << endl;}
    
    else if (usrName == "Clef" )
    { cout << usrName << "? Hello world!" << endl << endl;}
    
    else if(usrName == "Matt Garrison")
    { cout << usrName << " is the lead." << endl << endl;}
    
    else if(usrName == "Gabe Cavazos")
    { cout << usrName << " doesn't get paid enough." << endl << endl;}
    
    else if(usrName == "Matt Steele")
    { cout << usrName << " needs a vacation." << endl << endl;}
    
    else if(usrName == "Taylor Cavazos")
    { cout << usrName << " is the most beautiful woman in the world!" << endl << endl;}
    
    else if(usrName == "Nolan Hobbs")
    { cout << usrName << "? Norte califas!" << endl << endl;}
    
    else if(usrName == "Tony Cisneros")
    { cout << usrName << " went Weast instead of East." << endl << endl;}
    
    else if(usrName == "Jack Gonzales")
    { cout << usrName << " needs some new Legos...." << endl << endl;}
    
    else {cout << usrName << " is a really cool guy."<< endl << endl;}
    
    }
    return 0;
    
    
   }
