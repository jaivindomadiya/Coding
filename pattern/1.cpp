// 1 2 3
// 4 5 6
// 7 8 9

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<< "Enter N :";
    cin >> n;

    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n-i-1;j++)
        {
            cout << " ";
        }
        cout << "*";
        if(i != 0 )
        {
            for(int j = 0;j<2*i-1;j++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}