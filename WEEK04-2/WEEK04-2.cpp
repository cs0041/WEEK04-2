#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    if (a >= 0)
    {
        for (int i = 0; i < a; i++)
        {
            if (i == 0)
            {
                for (int j = 0; j < a; j++)
                {
                    cout << "*";
                }
            }
            else if (i == a - 1)
            {
                for (int j = 0; j < a; j++)
                {
                    cout << "*";
                }
            }
            else
            {
                for (int j = 0; j < a; j++)
                {
                    if (j == 0)
                    {
                        cout << "*";
                    }
                    else if (j == a - 1)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }

            }
            cout << endl;
        }
    }
    return 0;
}



