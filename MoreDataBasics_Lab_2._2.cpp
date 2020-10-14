#include <cwchar>
#include <iostream>
using namespace std;


// Extra Thing for worksheetAPString: 
void worksheetAPString()
{
    // Combine user gmail username and @gmail.com to form one email
   string gmail;
    cout << "Enter your gmail username: \n";
    cin >> gmail;
    cout << "Your email address is " << gmail << "@gmail.com\n";
    
    // Create a string with a name and then print it then change it to user name
    string person = "Charlie Brown";
    cout << person;
    cout << "\n";
    cout << "What is your name \n";
    cin >> person;
    cout << "Your name is " << person;
    cout << "\n";
    
    // Ask the user to enter their name, street address, then ask for the city, state,
    // and zip including a comma between the city and state.

}
/**
 *Rohan Parikh
 *2.2 More Data Basics
 *
**/
int main ()
{
    //Method for the programs required in the worksheet called Worksheet APString
    worksheetAPString();
}
