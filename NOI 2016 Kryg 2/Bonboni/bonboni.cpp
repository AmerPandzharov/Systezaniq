#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

long minNumber(long a, long b)
{
    if(a > b)
    {
        return b;
    }

    return a;
}

int main()
{
    long a,b,c;
    cin>>a>>b>>c;
    long res = 0;
    bool isFirst = true;
    res+=3;
    a -= 1;
    b -= 1;
    c -= 1;

    if(a < 0)
    {
        res = 0;
    }
    else if(b < 0)
    {
        res = 1;
    }
    else if(c < 0)
    {
        res = 2;
    }
    else {while(true)
    {
        if(a == 0 || b == 0 || c == 0)
        {
            break;
        }

        if(isFirst)
        {
            a--;
        }
        else
        {
            c--;
        }

        b--;

        isFirst = !isFirst;

        res += 2;
    }

    if(a == 0 || c == 0)
    {
        if(b - 1 == 0)
        {
            res += 2;
        }
        else if (b - 1 > 0)
        {
            res += 2;
        }
    }
    else if(b == 0 && a == 0)
    {
        res += 1;
    }
    else if(b == 0 && c == 0)
    {
        res += 1;
    }
    }
    cout<<res<<endl;
    return 0;
}
