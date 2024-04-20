#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int rows, cols;
    cin >> rows >> cols;
    for (int i = 1; i <= cols; i++)
    {
        for (int i = 1; i <= rows; i++)
        {
            cout << " * ";
        }
        cout<<endl;
    }

    cout << "Hello World";
    return 0;
}