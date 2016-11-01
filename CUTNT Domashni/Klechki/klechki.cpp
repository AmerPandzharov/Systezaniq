#include <iostream>

using namespace std;

int main()
{
	int sk1,fk1,sk2,fk2,sk3,fk3;
	int dul1,dul2,dul3;
	cin>>sk1>>fk1>>sk2>>fk2>>sk3>>fk3;
	dul1 = fk1 - sk1;
	dul2 = fk2 - sk2;
	dul3 = fk3 - sk3;
	if(dul1 > dul2) swap(dul1,dul2);
	if(dul1 > dul3) swap(dul1,dul3);
	if(dul2 > dul3) swap(dul2,dul3);
	if(fk1 >= sk2&&fk2 >= sk3)
    {
        cout<<1<<endl;
        cout<<dul1<<" "<<dul3<<endl;
    }
    else if(fk1 >= sk2&&fk2 < sk3)
    {
        cout<<2<<endl;
        cout<<dul1<<" "<<dul3<<endl;
    }
    else if(fk2 >= sk3)
    {
        cout<<2<<endl;
        cout<<dul1<<" "<<dul3<<endl;
    }
    else
    {
        cout<<3<<endl;
        cout<<dul1<<" "<<dul3<<endl;
    }
    return 0;
	
	//Alabala
}
