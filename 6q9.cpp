#include <iostream>
#include <fstream>
#include<cstdlib>
using namespace std;
const int Size=30;
struct donation
{
	char name[Size];
	double money;
};
int main()
{ 
	ifstream inFile;
	char filename[Size];
	cout<<"enter the filename you eant to open: ";
	cin.getline(filename,Size);
	inFile.open(filename);

	if(!inFile.is_open())
	{
		cout<<"Could not open the file.\n"
			<<filename<<endl
			<<"program terminating.\n";
		exit(EXIT_FAILURE);
	}
                                                                                                    
	int num;
	inFile>>num;
	//if(inFile.good())
	//	cout<<num<<endl;
	if(num)
	{
		donation *p= new donation [num];
		for(int i=0;i<num;i++)
			{
				inFile.get();
				inFile.getline((*(p+i)).name,Size);
				inFile>>(*(p+i)).money;
			}

		//cout<<(*(p)).name<<"\n"<<(*(p)).money<<" RMB\n";

		cout<<"\nGrand Patrons: \n";
		int count=0;
		for(int i=0;i<num;i++)
		{
			if((*(p+i)).money>10000)
			{
				cout<<(*(p+i)).name<<"\n"<<(*(p+i)).money<<" RMB\n";
				count++;
			}
		}
		if(!count)
			cout<<"none.\n";

		cout<<"\nPatrons: \n";
		int count0=0;
		for(int i=0;i<num;i++)
		{
			if((*(p+i)).money<=10000)
			{
				cout<<(*(p+i)).name<<"\n"<<(*(p+i)).money<<" RMB\n";
				count0++;
			}
		}
		if(!count0)
			cout<<"none.\n";
		delete [] p;
	}
	else
		cout<<"none.\n";
	


	return 0;
}