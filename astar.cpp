#include<iostream>
using namespace std;

int x[10], n = 4;

bool check(int r, int c)
{
    for(int i=0; i<r; i++)
    {
        if(x[i]==c || abs(x[i]-c)==abs(i-r))
            return false;
    }
    return true;
}

bool queen(int r)
{
    if(r == n)
        return true;

    for(int c=0; c<n; c++)
        if(check(r,c))
        {
            x[r] = c;

            if(queen(r+1))
                return true;
        }

    return false;
}

int main()
{
    if(queen(0))
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(x[i]==j)
                    cout<<"Q ";
                else
                    cout<<". ";
            }
            cout<<endl;
        }
    }
    else
    {
        cout<<"No Solution";
    }
}