#include<iostream>

using namespace std;

int main()
{
    int a,b,lent;
    int nz = 1;
    cin>>a>>b>>lent;
    int kray = 0;
    int ostlent = 0;
    if(a % lent == 0)
    {
        kray += a / lent;
    }
    else
    {
        kray += a / lent + 1;
        ostlent += lent - (a % lent);
    }

    if(b % lent == 0)
    {
        kray += b / lent;
    }
    else
    {
        if(ostlent > b % lent)
        {
            ostlent -= b % lent;
            kray += b / lent;
        }
        else
        {
            nz = 2;
            kray += b / lent + 1;
            ostlent += lent - (b % lent);
        }
    }


    if(a % lent == 0)
    {
        kray += a / lent;
    }
    else
    {
        if(ostlent > a % lent)
        {
            ostlent -= a % lent;
            kray += a / lent;
        }
        else
        {
            kray = a / lent + 1;
            ostlent += lent - (a % lent);
        }
    }

    if(b % lent == 0)
    {
        kray += b / lent;
    }
    else
    {
        if(ostlent > b % lent)
        {
            ostlent -= b % lent;
            kray += b / lent;
        }
        else
        {
            kray += b / lent + 1;
            ostlent += lent - (b % lent);
        }
    }
    cout<<kray*nz<<endl;
    return 0;
}
