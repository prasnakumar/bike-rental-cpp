#include <iostream>

using namespace std;
class a{
public:int bikes();
void rents();};

int a::bikes(){
cout<<"the bikes are here\n";;

}
void a::rents(){
cout<<"the rents are ";
}

int main()
{char number;
a b;

    cout<<"1. BIKES";
    cout<<"2. Rents";
    cout<<"3. Exit";

    while('3'){
            cin>>number;
    switch(number)
    {case '1':
        b.bikes();
        break;
case '2':
    b.rents();
    break;

case '3':
    exit(0);
    }
    }
    }
