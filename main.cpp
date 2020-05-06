#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t)
 put them here: 
 ****************************
 integer
 character
 boolean
 floating point
 double floating point
 void
 ****************************
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration function.
    give each declaration an initial value
        just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        'void' is a return type. you do not need to declare 3 variables of type 'void'.
    at the end of the function, pass each variable to the ignoreUnused function
 
3) write out 10 functions
    each declaration should have a random number of parameters in the function parameter list.
    add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    pass each of your function parameters to the ignoreUnused function. 
    if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    
5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variable to ignoreUnused() as you did in variableDeclarations()
    see main() for an example of this.
 
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    int secondNumber = 3;
    int thirdNumber = 4;
    char firstInitial = 'B';
    char lastInitial = 'B';
    char middleInitial = 'B';
    bool thisIsTrue = true;
    bool thisIsFalse = false;
    bool isCorrect = true;
    float firstFloat = 10.0f;
    float secondFloat = 1.f;
    float thirdFloat = 10.f;
    double firstDouble = 10.44449;
    double secondDouble = 11.5;
    double thirdDouble = 12.000;
    
    ignoreUnused (number, secondNumber, thirdNumber, firstInitial, lastInitial, middleInitial, thisIsTrue, thisIsFalse, isCorrect, firstFloat, secondFloat, thirdFloat, firstDouble, secondDouble, thirdDouble);
}
/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

//Function 1
int yearsWorking(int job1 = 4, int job2 = 10)
{ 
    ignoreUnused(job1, job2);
    return {}; //function returns int.
}

//Function 2
void paintCar(int color, double howMuchPaint)
{ 
    ignoreUnused(color, howMuchPaint); // Do I need to include this or just remove this because it returns void?
}

//Function 3
bool careForDog(int hasWater = 1, int hasFood = 0, int hasWalk = 0)
{ 
    ignoreUnused(hasWater, hasFood, hasWalk);
    return {}; //function returns bool.
}

//Function 4
double eatDinner(double numOfBurgers = 1.00000, double numOfFries = 192.0005, int numOfDrink = 5)
{ 
    ignoreUnused(numOfBurgers, numOfFries, numOfDrink);
    return {}; //function returns double.
}

//Function 5
void createAccounts(int numOfUsers, float howMuchMoney)
{
    ignoreUnused(numOfUsers, howMuchMoney);
}

//Function 6
bool backgroundCheck(int numOfCrimes = 0, int numOfTickets = 1)
{ 
    ignoreUnused(numOfCrimes, numOfTickets);
    return {}; //function returns bool.
}

//Function 7
bool invest(float returnOnInvestment)
{ 
    ignoreUnused(returnOnInvestment);
    return {}; //function returns bool.
}

//Function 8
double record(float lengthOfRecording, float sizeOfRecording, float fileFormat)
{ 
    ignoreUnused(lengthOfRecording, sizeOfRecording, fileFormat);
    return {}; //function returns int.
}

//Function 9
bool playSound(int howManyTimes, double howLong)
{ 
    ignoreUnused(howManyTimes, howLong);
    return {}; //function returns bool.
}

//Function 10
double doHomework(int amountCompleted, float timeInvested, double finalScore)
{ 
    ignoreUnused( amountCompleted, timeInvested, finalScore );
    return {}; //function returns int.
}


int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)

    auto workedForYears = yearsWorking(); //already initiailized
    
    //2)
    
    paintCar(3, 1.250);
    
    //3)
    
    auto dogCaredFor = careForDog(); //already initialized
    
    //4)
    
    auto finishedDinner = eatDinner(); // already initialized
    
    //5)
    
    createAccounts(100, 1000000.f);
    
    //6)
    
    auto eligibleForHiring = backgroundCheck(); //already initialized
    
    //7)
    
    auto madeInvestment = invest(10.5);
    
    //8)
    
    auto songRecorded = record(3.0105f, 10.2f, 2); //Do you pass floats with "f" at the end? or do you leave it as just a number?
    
    //9)
    
    auto userSound = playSound(1, 0.01000);
    
    //10)
    
    auto completedHomework = doHomework(100, 52.0, 100.00);
    
    //IGNORE FUNCTIONS
    ignoreUnused( carRented, workedForYears, dogCaredFor, finishedDinner, eligibleForHiring, madeInvestment, songRecorded, userSound, completedHomework );

    std::cout << "good to go!" << std::endl;
    return 0;   
}
