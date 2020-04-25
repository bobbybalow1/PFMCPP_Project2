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
 wide character
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
    char firstInitial = 66;
    char lastInitial = 66;
    char middleInitial = 66;
    bool thisIsTrue = true;
    bool thisIsFalse = false;
    bool isCorrect = true;
    float firstFloat = 10.0f;
    float secondFloat = 1.f;
    float thirdFloat = 10.f;
    double firstDouble = 10.44449;
    double secondDouble = 11.5;
    double thirdDouble = 12.000;
    
    ignoreUnused(number); //passing each variable declared to the ignoreUnused() function
    ignoreUnused(secondNumber);
    ignoreUnused(thirdNumber);
    ignoreUnused(firstInitial);
    ignoreUnused(lastInitial);
    ignoreUnused(middleInitial);
    ignoreUnused(thisIsTrue);
    ignoreUnused(thisIsFalse);
    ignoreUnused(isCorrect);
    ignoreUnused(firstFloat);
    ignoreUnused(secondFloat);
    ignoreUnused(thirdFloat);
    ignoreUnused(firstDouble);
    ignoreUnused(secondDouble);
    ignoreUnused(thirdDouble);
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
void myFunction2(int color, double size)
    { 
    ignoreUnused(color, size);
    }

//Function 3
int dog(int water = 1, int food = 0, int walk = 0)
    { 
    ignoreUnused(water, food, walk);
    return {}; //function returns int.
    }

//Function 4
double food(double burger, double fries, int drink)
{ 
    ignoreUnused(burger, fries, drink);
    return {}; //function returns int.
}

//Function 5
void driveCar(int keys, float car)
{
    ignoreUnused(keys, car);
}

//Function 6
bool rightSide(int left = 0, int right = 1)
{ 
    ignoreUnused(left, right);
    return {}; //function returns int.
}

//Function 7
bool invest(float returnOnInvestment)
{ 
    ignoreUnused(returnOnInvestment);
    return {}; //function returns int.
}

//Function 8
double unusedItems(float unused1, float unused2, float unused3)
{ 
    ignoreUnused(unused1, unused2, unused3);
    return {}; //function returns int.
}

//Function 9
bool playSound(int carHorn, double scream)
{ 
    ignoreUnused(carHorn, scream);
    return {}; //function returns int.
}

//Function 10
double homework(int doHomework, float timeInvested, double turnIn)
{ 
    ignoreUnused(doHomework, timeInvested, turnIn);
    return {}; //function returns int.
}


int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    yearsWorking(); //already initiailized
    //2)
    myFunction2(1, 1.0000005);
    //3)
    dog(); //already initialized
    //4)
    food(1024, -1024, 8);
    //5)
    driveCar(3, 1.000); // No "f" here for the 2nd value that is a float, correct? 
    //6)
    rightSide(); //already initialized
    //7)
    invest(1382346);
    //8)
    unusedItems(3, 5, 10);
    //9)
    playSound(1, 0);
    //10)
    homework(1, 1.00, 0);
    
    ignoreUnused(carRented);
    std::cout << "good to go!" << std::endl;
    return 0;   
}
