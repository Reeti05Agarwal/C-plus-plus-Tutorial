#include<iostream>
using namespace std;

int summ(int num)
{
    int su=0;
    for (int i=1; i<=num; i++)
    {
        su+=i;
    }
    return su;
}


int main()
{
    int n;
    cin>>n;

    cout<<summ(n)<<endl;

    return 0;
}