#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter rows and columns\n";
    cin >> n >> m;
    cout << "Enter matrix elements\n";
    int arr[n][m]; 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Matrix is:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}