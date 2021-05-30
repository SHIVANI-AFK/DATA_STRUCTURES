#include <bits/stdc++.h>
using namespace std;
int calcNodes(int M, int I)
{
    int result = 0;

    result = I * (M - 1) + 1;

    return result;
}
int main()
{
    int M = 10, I = 10;

    cout << "Leaf nodes = " << calcNodes(M, I);

    return 0;
}

