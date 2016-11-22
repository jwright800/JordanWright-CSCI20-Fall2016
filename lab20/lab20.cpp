#include <iostream>
#include <cstring>
using namespace std;
 
int main()
{
    char firststr[10];
    int firstname = 0;
    char *head = firststr;
    char *tail = firststr;
    cout << "Please enter a 10 letter word or less" << endl;
    cin >> firststr;
    strlen(firststr);
    firstname = strlen(firststr);
    cout << "Your word is " << firststr << endl;
    if (firstname<10)
    {
        while (*head != '\0')   //while cstring character is not null turminator
        {
            cout << *head;      //*head points to charater in cstring array. Prints characters in order.
            head++;             //increments array index by one by incrementing head address.
        }
    }
    else
    {
        cout << "WARNING WORD TOO BIG TO DISPLAY!!" << endl;
    }
    cout << endl;
    tail = &firststr[strlen(firststr) - 1]; //sets tails address to the address of the last character
    if (firstname < 10)
    {
        while (*tail>0)         // prints all characters in reverse.
        {
            cout << *tail;
            tail--;
        }
    }
    cout << endl;
    head = firststr;
    tail = &firststr[strlen(firststr) - 1];
    head++;
    tail--;
    if (*head == *tail)         //only compares if the second and second to last character are the same. Doesn't check for true palindrome.
    {
        cout << "It is an palindrome!" << endl;
    }
    else
    {
        cout << "It is not an palindrome" << endl;
    }

    return 0;
}