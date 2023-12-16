#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
class Inventory {
    private:
    int id, price, mfddate;
    char name[20], company[20];
    public:
    void input(){
        cout<<"\nEnter the id of product:";
			cin>>id;
			cout<<"\n name:";
			cin>>name;
			cout<<"\nPrice:";
			cin>>price;
			cout<<"\nMfd-Date:";
			cin>>mfddate;
			cout<<"\nEnter name of Company:";
			cin>>company;
                }

                void display() {
                    cout<<"\nProduct ID:"<<id;
			        cout<<"\nProduct Name:"<<name;
			        cout<<"\nPrice:"<<price;
			        cout<<"\nMfd-DAte:"<<mfddate;
			        cout<<"\nName of Company:"<<company;
                }

                void add() {
			fstream fout;
			Inventory Is;
			fout.open("inventory.txt",ios::app | ios::out | ios::binary);
			cout<<"\nThe Inventory System record:";
			Is.input();
			fout.write((char *)&Is,sizeof(Is));
			fout.close();
		}

        void displayall()
		{
			fstream fin;
			Inventory Is;
			fin.open("inventory.txt", ios::in | ios::binary);
			fin.seekg(0);
			fin.read((char *)&Is,sizeof(Is));
			while(!fin.eof())
			{
				Is.display();
				fin.read((char *)&Is,sizeof(Is));
			}
			fin.close();
		}


};
int main()
{
    int n;
	cout<<"Enter the detail of the product:"<<endl;
    cout<<"Enter the number of products:"<<endl;
    cin>>n;
	Inventory s1[n];
	for(int i=0;i<n;i++)
	{
		s1[i].add();
	}	
	s1[0].displayall();
	return 0;
}