#include <iostream>

using namespace std;

void solutionTask3(char str[])
{
    int counter = 0;
    bool found = false;
    while (str[counter] != '\0')
    {
        if (str[counter] == 'T')
		{
			cout <<"T has been found at position " << (counter + 1) << endl;
			found = true;
		}
		counter++;
    }
    if (!found)
	{
		cout  << "T was not found in the string.";
	}
}

int main()
{
    const int maxLenght = 256;
    char str[maxLenght];
    cout << "Enter your string." << endl;
    cin.getline(str,maxLenght);
    solutionTask3(str);
    return 0;
}
