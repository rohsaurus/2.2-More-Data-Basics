/**
*Rohan Parikh
*2.2 More Data Basics
* 13 October 2020 -
* Extra Thing on AP String: Asks user for favorite food and adds it with color and age
* Extra Thing on More Programs - Data Basics: spamMail divided by two and also multipled by 3
* Extra Thing on Cin and setPrecesion - tells employee if there is no change or if customer did not pay enough money
* Extra thing on divison and modulus - After user enter a 3 digit number and it prints they will be asked if they want to do the same with a 4 digit number
**/

#include <iomanip>
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

    cout << "Enter the amount of troy pounds of precious metals you have \n";
    double troyLB;
    cin >> troyLB;
    double lbToOZ = troyLB*16;
    double OZTog = lbToOZ*31.1034768;
    cout << "You have " << OZTog << " grams worth of precious metals!\n";
}

void worksheetCinAndSet()
{
    //The cost of making a pizza at The Corner Pizza Shop is as follows:
    //A cost of $1.20 per pizza, regardless of size, to cover employee and store operation fees.
    //The cost of pizza ingredients varies by the size of the pizza according to the formula
    //$0.05*diameter*diameter.
    //Write a program that allows the user to enter a diameter and prints the cost of making a pizza of that
    //size.

    cout << "Enter the diameter of your pizza. This will dictate the cost.\n";
    // Collecting user input
    int diamater;
    cin >> diamater;
    // formula for pizza cost 
    double pizzaCost = ((diamater*diamater)*.05)+1.20;
    // set preceision makes sure only amounts for money are printed
    // fixed is to force it to print two decmials
    cout << fixed;
    cout<< "Your total cost for pizza is $" << setprecision(2) << pizzaCost << "\n";

    // A fast food restaurant charges $1.99 for burgers, $0.99 for fries, and $1.10 for sodas. Write a
   // program that allows a restaurant employee to enter an order (the number of burgers, fries and sodas),
   // and then display the total cost before tax, the tax (at 7%), the final total cost and the customer's
   // change given the amount tendered.

   cout << "Enter the amount of burgers you want: \n";
   int burgers;
   cin >> burgers;
   cout << "Enter the amount of fries you would like to purchase: \n";
   int fries;
   cin >> fries;
   cout << "Enter the number of sodas you would like to purchase: \n";
   int soda;
   cin >> soda;

   // calculating cost

   double burgerCost = burgers * 1.99;
   double friesCost = fries * .99;
   double sodaCost = soda * 1.10;
   double subTotal = burgerCost+friesCost+sodaCost;
   double total = subTotal * 1.07;

   // Printing value
    cout << fixed;
   cout << "Subtotal is: $" << setprecision(2) << subTotal << "\n";
   cout << "Total cost is: $" << setprecision(2) << total << "\n";
   cout << "How much did the customer pay?\n";

   // calculating if there is any charge or not
   double amountPayed;
   cin >> amountPayed;

   if (amountPayed > total)
   {
    double charge = amountPayed - total;
    cout << "The charge is: $" << setprecision(2) << charge << "\n";
   }
 // extra thing: customer get no change
 else if (amountPayed == total)
  cout << "No change needs to be given to the customer\n";
 // extra thing customer did not pay enough
 else
 {
  double amountUnpaid = total - amountPayed;
  cout << "The customer is still missing $" << setprecision(2) << amountUnpaid << ". The customer still needs to pay that much.\n";
 }
}

void worksheetDivisonAndModulus()
{
 // A computer programming contest requires teams of 5 members each. Write a program that
 //asks for the number of players, and then gives the number of teams and the number of players left
 //over.

 cout << "Enter the amount of programmers: \n";
 int programmers;
 cin >> programmers;
 int teams = programmers/5;
 int leftOver = programmers%5;
 cout << "There will be " << teams << " teams and " << leftOver << " leftover students.\n";


 // Write a program that accepts a three-digit number and displays the digits each on a single
 //line. The sum of the digits will also be printed.

 cout << "Enter a three digit number:\n";
 string threeDigitNumber;
 cin >> threeDigitNumber;
 cout << "The first digit is: " << threeDigitNumber.substr(0,1) << "\n";
 cout << "The second digit is: " << threeDigitNumber.substr(1,1) << "\n";
 cout << "The third digit is: " << threeDigitNumber.substr(2,3) << "\n";


 // Extra thing if user wants four digit number or not

 cout << "Would you like to enter a four digit number?\n";
 string choice;
 cin >> choice;
 if (choice == "yes")
 {
  cout << "Enter a four digit number\n";
  string fourDigitNumber;
  cin >> fourDigitNumber;
  cout << "The first digit is: " << fourDigitNumber.substr(0,1) << "\n";
  cout << "The second digit is " << fourDigitNumber.substr(1,1) << "\n";
  cout << "The third digit is " << fourDigitNumber.substr(2,1) << "\n";
  cout << "The fourth digit is " << fourDigitNumber.substr(3,4) << "\n";
 }
 else
  cout << "Oh well\n";
}

int main ()
{
    //Method for the programs required in the worksheet called Worksheet APString
   
    worksheetAPString();

    // Method for programs in the worksheet called More Programs - Data Basics
   
    worksheetMorePrograms();

    // Method for programs in the worksheet using cin and setprecision
    
    worksheetCinAndSet();

   // Method for programs in the worksheet divison and modulus
    worksheetDivisonAndModulus();
}
