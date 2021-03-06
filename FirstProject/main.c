#include <stdio.h> // Standard Input Output
#include <string.h>
#include "FirstHeader.h"

// Use <> to search in the default dir, use "" to search in the current dir

/*
 * How to declare a "#define":
 * - Write #define
 * - Write the name of the const
 * - Assign it a value. YOU CAN'T CHANGE IT LATER, AND YOU DON'T NEED "=" NOR ";"
 */

#define MYNAME "McFest Borealis"

int main()
{
    printf("My name do be %s\n", MYNAME);
    /*
     * %s -> Strings
     * %c -> chars
     * %d -> Whole numbers (1, 2, 3...)
     * %f -> floating point numbers (floats) (3.141592...)
     * %.xf -> x Round floating point numbers to the value of x ( "I am %.2f human" -> "I am 99.17 human" BUT NOT "I am 99,99999 human"). It also rounds it
    */
    printf("Pi is: %.2f\n", 3.141592);
    printf("Pi is: %.1f\n", 3.141592);
    printf("Pi is: %.5f\n", 3.141592);

    /*Variable rules:
     * Can't start with a number or an underscore ("_")
     * NO SPACES
     * No non-ascii symbols (like &, €, ´, ...)
     * Do not name them like functions
     *
     * Define a variable by:
     *  1: Define the type of data - int, string, float, bool...
     *  2: Write the name of it
     *
     *  You can later add a value to the variable by calling it and asigning it a value with " = (value)"
    */

    int age; // Create variable "Age"
    age = 14; // Asign the value "14" to Age

    printf("I am %d years old\n", age);

    //You can also do some math operations with variables

    int ageCY; //Age CURRENT YEAR
    ageCY = 2022-2007;
    printf("I am %d years old\n", ageCY);

    //You can also do math with other variables
    int Value1;
    int Value2;
    int Value3;

    Value1 = 1;
    Value2 = 2;
    Value3 = Value1 + Value2;

    printf("The values are: %d, %d y %d\n", Value1, Value2, Value3);

    //Life hack: You can also give value to the variables in the same line

    int Valor1 = 10;
    int Valor2 = 20;
    int Valor3 = Valor1-Valor2;

    printf("Valor 3 is: %d\n", Valor3);

    //String terminators: To use less memory, when you're using a string, end the string with "\0". Ex: "Rigoberto Canales\0"

    /*
     * Arrays!!
     * How to create them:
     * - Set the data type (Char...)
     * - Give it a name
     * - Add brackets next to the name and put the value (in bytes) of the array. Remember to count the String Terminator and Whitespaces!
     */

    char name[18] = "Rigoberto Canales";

    printf("My name is %s\n", name);

    // You can access a value of the array by writing the name of the array, and between the brackets, adding the position
    // For single characters, use '' instead of ""

    name[5] = 'p';
    printf("My name is not %s\n", name);

    // Life hack! You don't actually need to count the values manually. If you leave the brackets empty, The compiler will count them for you!
    char food[] = "Borgir";

    printf("%s is an edible item\n", food);

    // If you want to change the value of an array, you have to use the  function "strcpy();"
    // Syntax of the function: (Array you want to change, the string you want to set it to)
    // Also, you'll want to include string.h (#include <string.h>

    strcpy(food, "Bacon");

    printf("%s is an edible item\n", food);

    //Example: am I allowed to date someone?

    int girlsAge = (CURRENTAGE/2)+7;
    printf("%s can date girls that are %d or older\n", MANAME, girlsAge);

    char firstName[20];
    char crush[20];
    int numberOfChildren;

    //When using scanf, you can't use whitespaces
    printf("What is your name? \n");
    scanf("%s", firstName);

    printf("Who's your crush? \n");
    scanf("%s", crush);

    //IMPORTANT: You need to put "&" before every variable that isn't an array
    printf("How many children do you plan on having? \n");
    scanf("%d", &numberOfChildren);

    printf("%s and %s are in love and they'll have %d children\n", firstName, crush, numberOfChildren);


    int weight = 134;
    printf("If i eat a materwelon, I'll weight %d stones\n", weight+41);
    // If I eat a materwelon, I'll weight 175 stones


    //Order of operations work like we were taught at school.

    int a = 1 + 2 * 3;
    printf("Result: %d\n", a);
    //Result: 7

    int b = (1 + 2) * 3;
    printf("Result: %d\n", b);
    //Result = 9

    /*
     * How to assign the same value to different variables
     * 1 - Make the variables equal to themselves and to a value
     */

    int c;
    int d;
    int e;

    c = d = e = 100;

    printf("C = %d, D = %d, E = %d\n", c, d, e);
    // C = 100, D = 100, E = 100

    float age1, age2, age3, avg;
    age1 = age2 = 14.6;
    printf("Write your age\n");
    scanf("%f", &age3);
    avg = (age1 + age2 + age3)/3;
    printf("Average is %f\n", avg);



    int pageViews = 0;
    pageViews = pageViews + 1;
    printf("Page views: %d\n", pageViews);

    //Like in every programming language, you can use x += y instead of x = x + y

    float bal = 1000.0;

    bal *= 1.41;
    printf("Balance is : %f\n", bal);
    bal *= 1.41;
    printf("Balance is : %f\n", bal);
    bal *= 1.41;
    printf("Balance is : %f\n", bal);

    /*
     * **Typecasting** - Change the type of variable temporarily
     * Just write (dataType) behind the variable!
     */

    float avgProfit;
    int pumpkinPrice = 10;
    int sales = 65;
    int daysWork = 7;

    // -> Wrong
    avgProfit = (pumpkinPrice * sales) / daysWork;
    printf("The profit is %.2f Euros\n", avgProfit);

    // -> Right
    avgProfit = ((float)pumpkinPrice * (float)sales ) / (float)daysWork;
    printf("The profit is %.2f Euros\n", avgProfit);

    /*
     * IF Statements! You love it, I love it, everyone loves it!
     * Syntax is like almost everywhere
     * if(statement)
     * {
     *
     * }
     * And like everywhere, math conditions are the same (==, >=, <=, !=...)
     */
    if(avg > 9)
    {
        printf("Sociedad\n");
    }
    if(avgProfit < 9)
    {
        printf("Sociedad\n");
    }
    int ageRequest;
    printf("Write your age, so we can verify you can access this content: \n");
    scanf("%d", &ageRequest);

    char sex;
    printf("What's your sex? m/f \n");
    // On GCC and CMake (The most used compilers), You need to leave a space behind the %c!
    scanf(" %c", &sex);

    if(ageRequest >= 18)
    {
        printf("Welcome to the website ");
        //You can also put ifs inside of other if statements!
        if(sex == 'm')
        {
            printf("dud!");
        }
        else
        {
            printf("gal!");
        }
    }
    else
    {
        printf("Go away voldemort\n");
    }
    return 0;

}
