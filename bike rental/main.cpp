#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
char bike[20]="bike.txt",rents[20]="rents.txt";
struct record
{
    char bike[50],brand_name[50],mileage[40],rents[10];
};
class a{
public:void pack(record r);
    record unpack(char a[]);
    void bikes();
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
strcat(buff,r.rents);
strcat(buff,"|");
for(int i=0;i<70-strlen(buff);i++)
    strcat(buff,"|");
fp<<buff<<endl;
fp.close();
}
record a::unpack(char buff[])
{
    record r;
    int i=0,j=0;
    while(buff[j]!='|')
        r.bike[i++]=buff[j++];
    r.bike[i]='\0';
    i=0;
    j++;
  while(buff[j]!='|')
        r.brand_name[i++]=buff[j++];
    r.brand_name[i]='\0';
    i=0;
    j++;
      while(buff[j]!='|')
        r.mileage[i++]=buff[j++];
    r.mileage[i]='\0';
    i=0;
    j++;
       while(buff[j]!='|')
        r.rents[i++]=buff[j++];
    r.rents[i]='\0';
    return(r);
    }
void a::addbikes(){
record r;
cout<<"enter the bike\n";
cin>>r.bike;
cout<<"enter the model\n";
cin>>r.brand_name;
cout<<"enter the mileage of bike \n";
cin>>r.mileage;
cout<<"cost for per hour of usage\n";
cin>>r.rents;
pack(r);
}
void a::bikes(){
cout<<"all the bikes";
fstream fp;
char buff[45];
record r;
fp.open(bike,ios::in);
cout<<"\n#\tbike\tmodel\tmileage\trent cost per hr\n";
int c=1;
while(1)
{fp.getline(buff,70);
    if(fp.eof())break;
    r=unpack(buff);
cout<<c++<<"\t"<<r.bike<<"\t"<<r.brand_name<<"\t"<<r.mileage<<"\t"<<r.rents<<endl;

}
fp.close();
}
int main()
{char number;
a b;

    cout<<"1. BIKES";
    cout<<"2. add bikes";
    cout<<"3. display all bikes";
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
    b.bikes();
    break;

case '4':
    exit(0);
    }
    }
    }
