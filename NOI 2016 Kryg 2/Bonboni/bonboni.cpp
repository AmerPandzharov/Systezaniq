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

    res+=3;
    a -= 1;
    b -= 1;
    c -= 1;

    bool isFirst = true;

    while(true)
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
            res += 3;
        }
    }
    else
    {
        res += 1;
    }

    cout<<res<<endl;
    return 0;
}
