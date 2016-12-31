#include <iostream>

using namespace std;

void solutionTask7(const char str[])
{
    int counterNames = 0;
    int counterBreeds = 0;
    bool hasCap = false;
    bool space = true;
    int counter = 0;

    while (true)
	{
		if (str[counter] >= 'A' && str[counter] <= 'Z')
		{
			hasCap = true;
		}
		if (str[counter] == '\0' || str[counter] == ' ')
		{
			if (hasCap)
			{
				counterNames++;
			}
			else
			{
				if (!space)
				{
					counterBreeds++;
				}
			}
			hasCap = false;
			space = true;
		}
		else
		{
			space = false;
		}

		if (str[counter] == '\0')
		{
			break;
		}
		counter++;
	}
	cout <<"The ratio between Names and Breeds is: "<<counterNames << "/" << counterBreeds << endl;
}

int main()
{
    const int maxLength = 256;
	char str[maxLength];
	cout << "Enter the breeds and the names." << endl;
	cin.getline(str, maxLength);

	solutionTask7(str);

	return 0;
}
