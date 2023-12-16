#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
class hospital
{
	char name[20];
	int id;
	char addr[20];
	int age;
	char type[20];
	public:
		void input()
		{
			cout<<"\nEnter the patient id:";
			cin>>id;
			cout<<"\nEnter Patient name:";
			cin>>name;
			//cout<<"\nAddress:";
			//cin>>addr;
			//cout<<"\nAge:";
			//cin>>age;
			//cout<<"\nEnter type of visiting department:";
			//cin>>type;
		}
		void display()
		{
			cout<<"\nPatient ID:"<<id;
			cout<<"\nPatient Name:"<<name;
			//cout<<"\nAddress:"<<addr;
			//cout<<"\nAge:"<<age;
			//cout<<"\nType:"<<type;
		}
		void add()
		{
			fstream fout;
			hospital s;
			fout.open("hospital.txt",ios::app | ios::out | ios::binary);
			cout<<"\nThe Hospital record:";
			s.input();
			fout.write((char *)&s,sizeof(s));
			fout.close();
		}
		void displayall()
		{
			fstream fin;
			hospital s;
			fin.open("hospital.txt", ios::in | ios::binary);
			fin.seekg(0);
			fin.read((char *)&s,sizeof(s));
			while(!fin.eof())
			{
				s.display();
				fin.read((char *)&s,sizeof(s));
			}
			fin.close();
		}
};
/*int main()
{
	cout<<"Enter the detail of the patient:"<<endl;
	hospital s1;
	s1.add();
	s1.displayall();
	return 0;
}
*/
//in case of 10 patients/employee/students

int main()
{
	cout<<"Enter the detail of the patient:"<<endl;
	hospital s1[5];
	for(int i=0;i<5;i++)
	{
		s1[i].add();
	}	
	s1[0].displayall();
	return 0;
}
