#include <iostream>
using namespace std;
void transpose(int input[2][2], int output[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            output[i][j] = input[i][j];
        }
    }
}
void Add(int mat1[2][2], int mat2[2][2], int result[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}
int main()
{
    int A[2][2], B[2][2];
    int AT[2][2], BT[2][2];
    int Sum1[2][2], Sum2[2][2];
    int team1[2][2], team2[2][2];
    int X[2][2];
    cout << "Enter the value of matrix A (2X2):" << "\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> A[i][j];
        }
    }
    cout << "Enter the value of matrix B (2X2):" << "\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> B[i][j];
        }
    }
    transpose(A, AT);
    transpose(B, BT);

    Add(A, AT, Sum1);
    Add(B, BT, Sum2);

    transpose(Sum1, team1);
    transpose(Sum2, team2);

    Add(team1, team2, X);

    cout << "The result of matrix :" << "\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << X[i][j] << " "; 
        }
        cout << endl; 
    }
    return 0;
}