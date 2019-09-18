#include<iostream>
#include<iomanip>
using namespace std;
void display(int ran[5][6])
{
	
	for(int i=0;i<=4;i++)
	{
		for(int j=0;j<=5;j++)
		{
		cout<<"";
		ran[i][j]=rand() % 9;
		cout << setw(5) << setfill(' ') <<ran[i][j];
		}
		cout<<endl;
	}
	cout<<"----------------display---------------\n";
	cout<<"     0    1    2    3    4    5\n";
	cout<<"--------------------------------------\n";
}
void graph(int ran[5][6])
{

	for(int i=0;i<=4;i++)
		{
			cout<<i+1;
			for(int j=0;j<=5;j++)
			{
				
				if(ran[i][j]!=0)
				{
					cout<<setw(5)<<"*";
				}
				else if(ran[i][j]==0){
					cout<<setw(5)<<" ";
				}
			}
	cout<<endl;
	}	
}
int main()
{
	int ran[5][6];
	srand(time(NULL));
	for(int i=0;i<=4;i++)
	{
		for(int j=0;j<=5;j++)
		{
		ran[i][j]=rand() % 9;
		}
	}
	display(ran);
	graph(ran);
	return 0;
}