#include <iostream>
#include <cmath>

using namespace std;
void solutionTask5()
{
    char c;
    cout << "Enter your capital letter" << endl;
    cin >> c;
    if(c >= 'A' && c <= 'Z')
    {
    for (char current = 'A'; current <= c; current++)
    {
        for (char letters = current; letters >= 'A'; letters--)
        {
            cout << letters;
        }
        cout << endl;
    }
    }
    else
    {
        cout << "Enter a capital letter.";
    }
}

int main()
{
    solutionTask5();
	return 0;
}
