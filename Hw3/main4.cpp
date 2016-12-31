#include <iostream>

using namespace std;

void solutionTask4()
{
    char capLetter;
    cout << "Enter your capital letter." << endl;
    cin >> capLetter;
    int stars = 0;
    if(capLetter <= 'Z' && capLetter >= 'A')
    {
    for (char current = 'A';current <= capLetter; current ++)
    {
        cout << current;
        for (int i = 0; i < stars; i++)
        {
            cout << "*";
        }
        if (stars > 0)
		{
			cout << current;
		}
		cout << endl;
        if (stars == 0)
        {
            stars += 1;
        }
        else
        {
            stars += 2;
        }
    }
    stars = stars -2;
    for (char current = capLetter - 1; current >= 'A'; current--)
	{
		cout << current;

		stars -= 2;

		for (int i = 0; i < stars; i++)
		{
			cout << "*";
		}

		if (stars > 0)
		{
			cout << current;
		}

		cout << endl;
	}
	}
	else
    {
        cout << "Input a capital letter.";
    }
}

int main()
{
    solutionTask4();
    return 0;
}
