#include<iostream>

using namespace std;

int main()
{
    int a[4];
    cin>>a[0]>>a[1]>>a[2]>>a[3];
    int nula = 0,zbor = 0;

    for(int i = 0; i < 4; i++)
    {
        if(a[i] == 0)
        {
            nula++;
        }
        else
        {
            zbor += a[i];
        }
    }
    bool tf = true;
    int nishto[2];
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0;j < 4;j++)
        {
            nishto[0] = i + 1;
            if(a[j] == nishto[0])
            {
                tf = false;
            }
        }
        if(tf == true)
        {
            break;
        }
        tf = true;
    }


    for(int i = 0; i < 4; i++)
    {
        for(int j = 0;j < 4;j++)
        {
            nishto[1] = i + 1;
            if(a[j] == nishto[1]||nishto[0] == nishto[1])
            {
                tf = false;
            }
        }
        if(tf == true)
        {
            break;
        }
        tf = true;
    }

    if(nula == 0)
    {
        cout<<a[0]<<" "<<a[1]<<endl;
    }
    if(nula == 1)
    {
        for(int i = 0; i < 4; i++)
        {
            if(a[i] == 0)
            {
                cout<<i + 1<<" "<<10 - zbor<<endl;;
            }
        }
    }
    if(nula == 2)
    {
        int maxx = nishto[0],minx = nishto[1];
        if(maxx < minx) swap(minx,maxx);
        cout<<minx<<" "<<maxx<<endl;
    }
}
