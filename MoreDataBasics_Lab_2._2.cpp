/**
*Rohan Parikh
*2.2 More Data Basics
* 13 October 2020 -
* Extra Thing on AP String: Asks user for favorite food and adds it with color and age
* Extra Thing on More Programs - Data Basics: spamMail divided by two and also multipled by 3
**/

#include <cwchar>
#include <iostream>
#include <string>
using namespace std;


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
    cin.ignore();
    getline(cin,person);
    cout << "Your name is " << person;
    cout << "\n";

    
    // Ask the user to enter their name, street address, then ask for the city, state,
    // and zip including a comma between the city and state.
    cout << "Enter your name \n";
    string name;
    getline(cin,name);
    cout << "Enter your street address \n";
    string streetAddress;
    getline(cin,streetAddress);
    cout << "Enter your town, state and zip with a comma in between town and state \n";
    string town;
    getline(cin,town);
    string nameAndAddress = name + " " + streetAddress + " " + town;
    // Findind index of comma to do substring and print town only
    int commaIndex = town.find(",");
    cout << "The length of your town is: " << town.substr(0,commaIndex).length();

    // Printing luke skywalker

    string luke = "Luke";
    string skywalker = "Skywalker";
    cout<<"\n" << luke.substr() << " " << skywalker.substr();

    //Ask a user to enter their age

    cout << "\nEnter your age.";
    int age;
    cin >> age;
    cout << "\n";
    cout << "Enter your favorite color";
    string color;
    cin >> color;
    // Extra thing favorite food
    cout << "\n What is your favorite food? \n";
    string food;
    cin.ignore();
    getline(cin,food);
    cout << "You are " << age << " years old and you love the color " << color << ". You also love to eat " << food << "\n";

    // User enters a random sentence and then length of sentence is printed

    cout << "Type in a random sentence\n";
    string sentence;
    getline(cin,sentence);
    cout << "Length of sentence: " << sentence.length() << "\n";     
}

void worksheetMorePrograms()
{
        // Write a program that asks for the weight of a postal package in pounds and converts this weight to ounces
    cout << "What is the weight of a package in pounds?\n";
    int poundsWeight;
    cin >> poundsWeight;
    cout << "Your package weight in ounces is: " << poundsWeight*16 << "\n";

    //Write a program that asks for a user's height in integer inches and then converts this
    //height to feet and inches.

    cout << "Enter your height in inches\n";
    int inchesHeight;
    cin >> inchesHeight;
    int feet = inchesHeight/12;
    int remainingInches = inchesHeight%12;
    cout << "Your height in feet and inches is " << feet << " feet and " << remainingInches << " inches.\n";

    //Write a program that asks the user's age and then prints how old the person will be in
   // one and one-half decades.

    cout << "What is your current age?\n";
    int age;
    cin >> age;
    cout << "In 15 years, you will be " << age + 15 << " years old!\n";

    // Write a program that asks the user for the number of miles driven on a recent
    //vacation trip and for the number of gallons of gasoline used. Print the miles per gallon
    //achieved during the trip.

    cout << "How many miles did you drive on a recent road trip?\n";
    double miles;
    cin >> miles;
    cout << "How many gallons of fuel did you use?\n";
    double gallons;
    cin >> gallons;
    cout << "You got an MPG rating of " << miles/gallons << " miles per gallon\n";

    //Write a program that converts the user’s age in years to days. Print both values and
   // label them. Assume a constant 365 days per year for this problem.

    cout << "We will use the age you already provided again. \n";
    int days = age*365;
    cout << "You are " << days << " days old, user. \n";

    //Write a program that creates an integer variable called spamMail. Assign 55 to this
    //variable. Also have the program calculate what twice spamMail will be and what
    //spamMail squared will be. The program should print all three values and label them.

    int spamMail = 55;
    int spamMailMultiply2 = spamMail*2;
    int spamMailSqaured = spamMail*spamMail;

    // Extra thing: spamMail divided by two and also multipled by 3
    int spamMailDivided2 = spamMail/2;
    int spamMailMultiply3 = spamMail*3;

    // printing

    cout << "SpamMail: " << spamMail << "\nSpamMail Multipled by 2: " << spamMailMultiply2 <<
    "\nSpamMail squared: " << spamMailSqaured << "\nSpamMail divided by 2: " << spamMailDivided2
    << "\nSpamMail Multipled by 3: " << spamMailMultiply3 << "\n";

    // Precious metals, such as gold, are often measured in troy ounces. There are 12 troy
    //ounces in every troy pound. Write a program to determine the number of grams in a troy
    //pound, given the number of pounds.
    //(1 troy ounce = 31.1034768 grams)
}

int main ()
{
    //Method for the programs required in the worksheet called Worksheet APString
    worksheetAPString();

    // Method for programs in the worksheet called More Programs - Data Basics
    worksheetMorePrograms();
}
