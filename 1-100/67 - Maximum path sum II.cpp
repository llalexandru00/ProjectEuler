#include <iostream>
#include <fstream>

using namespace std;

int DP[105][105], M[105][105], maxim;

ifstream fin("in.in");

int main()
{
    for (int i=1; i<=101; i++)
        for (int j=1; j<=i; j++)
            fin>>M[i][j];
    for (int i=1; i<=101; i++)
        for (int j=1; j<=i; j++)
            DP[i][j]=max(DP[i-1][j], DP[i-1][j-1])+M[i][j];
    for (int i=1; i<=101; i++)
        maxim = max(maxim, DP[101][i]);
    cout<<maxim;
    return 0;
}
