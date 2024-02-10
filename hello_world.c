#include <stdio.h>
int main(){

    printf("hello world\n");
    printf("hello c\n");

    // this a comment 
    /* this is a multiline
    comment

    /n= new line
    /t= tab
    */
    printf("1\t2\t3\t4\n5\t\n");
    printf("this is an ecaped quotes \"double quotes\" and \'single quotes\'\n");

    //this a variable
    int x; //this is declaration


    x= 10;// tniis is initialization

    int y = 15; //this is declaration and initialization

    float anotherVar = 12434.3445; //stores floating point variables

    int age = 13; //integer

    char grade = 'A';//stores a single character

    /* there are no strings in c as strings are technically objects, C is not object oriented
    to store a string, we use an array */

    char name[]  = "hello c"; //array of characters

    printf("this prints an integer: % d\n",age);// %d is a formart specifier
    printf("this prints a char: %c\n",grade);
    printf("this outputs a float: %f\n",anotherVar);
    printf("this prints a string: %s ",name);


    return 0;
}