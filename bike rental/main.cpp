#include <iostream>
#include <fstream>
#include  <string.h>
using namespace std;
char bike[50]="bike.txt";

void rented_bike()
{

    fstream stud;
    fstream temp;
    fstream del;
    stud.open(bike,ios::in);
    temp.open("temp.txt",ios::out);
    del.open("del.txt",ios::out);
    char id[10];
    char bikename[25];
    char model[25];
    char milage[25];
    char rent[20];
    char a[25];
    cin.ignore();
    cout<<" \n\t enter the bikeid  to be rented  record : ";
    cin.getline(a,25);
    while(!stud.eof())
    {
        stud.getline(id,25,'|');
        stud.getline(bikename,25,'|');
        stud.getline(model,25,'|');
        stud.getline(milage,25,'|');
        stud.getline(rent,25);
        if(strcmp(id,a)==0)
        {
            del<<id<<'|'<<bikename<<'|'<<model<<'|'<<milage<<'|'<<rent<<'\n';
            continue;
        }
        else
        {
            temp<<id<<'|'<<bikename<<'|'<<model<<'|'<<milage<<'|'<<rent<<'\n';
        }


    }
    temp.close();
    stud.close();
    del.close();

    stud.open(bike,ios::out);
    temp.open("temp.txt",ios::in);
    while(!temp.eof())
    {
        temp.getline(id,25,'|');
        temp.getline(bikename,25,'|');
        temp.getline(model,25,'|');
        temp.getline(milage,25,'|');
        temp.getline(rent,25);
        stud<<id<<'|'<<bikename<<'|'<<model<<'|'<<milage<<'|'<<rent<<'\n';
    }
    temp.close();
    stud.close();
    //remove("temp.txt");
    cout<<"\n done !!! \n";
}
void delete_bike()
{

    fstream stud;
    fstream temp;
    fstream del;
    stud.open(bike,ios::in);
    temp.open("temp.txt",ios::out);
    del.open("del.txt",ios::out);
    char id[10];
    char bikename[25];
    char model[25];
    char milage[25];
    char rent[20];
    char a[25];
    cin.ignore();
    cout<<" \n\t enter the bikeid  to be rented  record : ";
    cin.getline(a,25);
    while(!stud.eof())
    {
        stud.getline(id,25,'|');
        stud.getline(bikename,25,'|');
        stud.getline(model,25,'|');
        stud.getline(milage,25,'|');
        stud.getline(rent,25);
        if(strcmp(id,a)==0)
        {
            continue;
        }
        else
        {
            temp<<id<<'|'<<bikename<<'|'<<model<<'|'<<milage<<'|'<<rent<<'\n';
        }


    }
    temp.close();
    stud.close();
    del.close();

    stud.open(bike,ios::out);
    temp.open("temp.txt",ios::in);
    while(!temp.eof())
    {
        temp.getline(id,25,'|');
        temp.getline(bikename,25,'|');
        temp.getline(model,25,'|');
        temp.getline(milage,25,'|');
        temp.getline(rent,25);
        stud<<id<<'|'<<bikename<<'|'<<model<<'|'<<milage<<'|'<<rent<<'\n';
    }
    temp.close();
    stud.close();
    //remove("temp.txt");
    cout<<"\n done !!! \n";
}
void update_bike()
{
    fstream stud;
    fstream temp;

    stud.open(bike,ios::in);
    temp.open("temp.txt",ios::out);
    char id[10];
    char bikename[25];
    char model[25];
    char milage[25];
    char rent[20];
    char a[25];
    cin.ignore();
    cout<<" \n\t enter the bikeid  to update record : ";
    cin.getline(a,25);
    while(!stud.eof())
    {
         stud.getline(id,25,'|');
        stud.getline(bikename,25,'|');
        stud.getline(model,25,'|');
        stud.getline(milage,25,'|');
        stud.getline(rent,25);
        if(strcmp(id,a)==0)
        {

            cout<<" \n\tenter new value of record  \n ";
            cout<<" \n bike id : ";
            cin.getline(id,25);
            cout<<" \n the name of the bike : ";
            cin.getline(bikename,25);
            cout<<" \n model ";
            cin.getline(model,25);
               cout<<" \n milage: ";
            cin.getline(milage,25);
               cout<<" \n rent";
            cin.getline(rent,25);
            temp<<id<<'|'<<bikename<<'|'<<model<<'|'<<milage<<'|'<<rent<<'\n';
        }
        else
        {
            temp<<id<<'|'<<bikename<<'|'<<model<<'|'<<milage<<'|'<<rent<<'\n';
        }


    }
    temp.close();
    stud.close();

    stud.open(bike,ios::out);
    temp.open("temp.txt",ios::in);
    while(!temp.eof())
    {
        temp.getline(id,25,'|');
        temp.getline(bikename,25,'|');
        temp.getline(model,25,'|');
        temp.getline(milage,25,'|');
        temp.getline(rent,25);
        stud<<id<<'|'<<bikename<<'|'<<model<<'|'<<milage<<'|'<<rent<<'\n';
    }
    temp.close();
    stud.close();
    remove("temp.txt");
    cout<<"\n done !!! \n";
}
void display_all()
{
 char id[10];
    char bikename[25];
    char model[25];
    char milage[25];
    char rent[20];
    char a[25];
    fstream stud;
    stud.open(bike,ios::in);

    cout<< " \n\t id \t bike \t model \t milage \t rent \n";
    while(!stud.eof())
    {
        stud.getline(id,25,'|');
        stud.getline(bikename,25,'|');
        stud.getline(model,25,'|');
        stud.getline(milage,25,'|');
        stud.getline(rent,25);
        cout<< "\n \t "<< id << "\t"<<bikename<< "\t" << model<< "\t" << milage <<"\t"<<rent<<endl;

    }
}
void search_bike(   )
{

    fstream stud;
    stud.open(bike,ios::in);
    char id[10];
    char bikename[25];
    char model[25];
    char milage[25];
    char rent[20];
    char a[25];
    cout<<" \n enter the bikeid  to search about it : ";
    cin.ignore();
    cin.getline(a,25);
    int x=0;
    cout<< " \n\t id \t bike \t model \t milage \t rent \n";
    while(!stud.eof())
    {
        stud.getline(id,25,'|');
        stud.getline(bikename,25,'|');
        stud.getline(model,25,'|');
        stud.getline(milage,25,'|');
        stud.getline(rent,25);
        if(strcmp(id, a)==0)
        {

        cout<< "\n \t "<< id << "\t"<<bikename<< "\t" << model<< "\t" << milage <<"\t"<<rent<<endl;
            x=1;
            break;
        }

    }
    if(x==0)
    {
        cout<<" \n not found !!!!\n";
    }
    stud.close();
}
void  insert_bike()
{

    char id[10];
    char bikename[25];
    char model[25];
    char milage[25];
    char rent[20];
    char a[25];
    fstream stud;
    stud.open(bike, ios::app);
    cin.ignore();
    cout<<" \n bike id : ";
    cin.getline(id,25);
    cout<<" \n the name of the bike : ";
    cin.getline(bikename,25);
    cout<<" \n model ";
    cin.getline(model,25);
    cout<<" \n milage: ";
    cin.getline(milage,25);
    cout<<" \n rent";
    cin.getline(rent,25);
    stud<<id<<'|'<<bikename<<'|'<<model<<'|'<<milage<<'|'<<rent<<'\n';
    cout<< "done !";
    stud.close();
}

int main()
{
    bool flag=true;
    while (flag)
    {
        cout << " insert : 1 \n search : 2 \n display all : 3 \n update : 4 \n delete :  5 \n write your choose : ";
        int c;
        cin>>c;
        switch (c)
        {
        case 1 :
            insert_bike();
            break;
        case 2:
            search_bike();
            break;
        case 3:
            display_all();
            break;
        case 4 :
            update_bike();

            break;
        case 5 :
            delete_bike();
            break;
        default :
            cout << " \n choose right number \n";
        }
        cout << " if you continue to use program press ' y ' \n ";
        char f;
        cin>>f;
        if(f!='y')
        {
            flag=false;
        }
    }
    return 0;
}

