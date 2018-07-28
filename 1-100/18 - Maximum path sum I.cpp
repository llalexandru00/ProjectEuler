#include <iostream>
#include <fstream>

using namespace std;

int DP[105][105], M[105][105], maxim;

ifstream fin("in.in");

void bkt(int x, int y, int sum)
{
    if (x==16)
    {
        if (sum>maxim)
            maxim=sum;
        return;
    }
    bkt(x+1, y, sum+M[x][y]);
    bkt(x+1, y+1, sum+M[x][y]);
}

int main()
{
    for (int i=1; i<=15; i++)
        for (int j=1; j<=i; j++)
            fin>>M[i][j];
    bkt(1, 1, 0);
    cout<<maxim;
    return 0;
}
