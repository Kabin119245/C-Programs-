#include<iostream>
using namespace std;
void show(char mychar[20]="Aayush",int Num=3)
{
	char *p=mychar;
	int i,n;
	n=Num;
	cout<<"Number of characters to be printed is "<<n<<endl;
	for(i=0;i<n;i++)
	{
		cout<<p[i];
	}	
}

int main()
{
	cout<<"Outut with default arguments \n";
	show();
	return(0);
}