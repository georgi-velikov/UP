#include <iostream>

using namespace std;

void solutionTask2(const char str[], char character)
{
    int counter = 0;
    bool found = false;
	while (str[counter] != '\0')
	{
		if (str[counter] == character)
		{
			cout <<"The character you have input has been found at position " << (counter + 1) << endl;
			found = true;
		}

		if (found)
		{
			cout <<str[counter];
		}

		counter++;
	}

	if (!found)
	{
		cout << character << "The character you are searching for was not found in the string.";
	}
}

int main()
{
    const int maxChar = 256;
    char str[maxChar];
    char c;
    cout << "Enter your string." << endl;
    cin.getline(str, maxChar);
    cout << "Enter the char you are surching for." << endl;
    cin >> c;

    solutionTask2(str, c);
    return 0;
}
