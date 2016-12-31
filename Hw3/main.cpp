#include <iostream>
using namespace std;

void task1()
{
    const int maxLenght = 50;
    char str[maxLenght];
    char c;
    int counter = 0;
    while(counter <50)
    {
        cin.get(c);
       if (c == '\n')
       {
            break;
       }
        str[counter] = c;
        counter++;
    }
    if(counter >=30 && counter <= 50)
        //Разбирам условието, че трябва да са от 30 до 50 символа, а примера е с по-малко. Предполагам, че не пречи.
    {
    cout << "There are " << counter << " characters."<< endl;
    cout << "First character is " << str[0]<< endl;
    cout << "Middle character is " << str[counter/2]<< endl;
    cout << "Last character is " <<str[counter-1]<< endl;
    }
    else
    {
        cout << "You need to enter between 30 and 50 characters.";
    }
}

int main()
{
    cout << "Enter characters."<< endl;
    task1();
    return 0;
}

