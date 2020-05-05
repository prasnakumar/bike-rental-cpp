#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
char bike[20]="bike.txt",rents[20]="rents.txt";
struct record
{
    char bike[50],brand_name[50],mileage[40],rating[10];
};
class a{
public:void pack(record r);
    void unpack(record r);
    void bikes();
    void rents();
    void addbikes();};

void a::pack(record r)
{fstream fp;
fp.open(bike,ios::out|ios::app);
char buff[45];
strcpy(buff,r.bike);
strcat(buff,"|");
strcat(buff,r.brand_name);
strcat(buff,"|");
strcat(buff,r.mileage);
strcat(buff,"|");
strcat(buff,r.rating);
strcat(buff,"|");
for(int i=0;i<70-strlen(buff);i++)
    strcat(buff,"|");
fp<<buff<<endl;
fp.close();
}
void a::addbikes(){

record r;
cout<<"enter the bike\n";
cin>>r.bike;
cout<<"enter the brand name\n";
cin>>r.brand_name;
cout<<"enter the mileage of bike \n";
cin>>r.mileage;
cout<<"rate the condition of the bike out of 5\n";
cin>>r.rating;
pack(r);
}
void a::bikes(){
cout<<"the bikes are here\n";

}
void a::rents(){
cout<<"the rents are\n ";
}

int main()
{char number;
a b;

    cout<<"1. BIKES";
    cout<<"2. add bikes";
    cout<<"3. rents";
    cout<<"4. Exit";

    while('4'){
            cin>>number;
    switch(number)
    {case '1':
        b.bikes();
        break;
case '2':
    b.addbikes();
    break;
case '3':
    b.rents();
    break;

case '4':
    exit(0);
    }
    }
    }
