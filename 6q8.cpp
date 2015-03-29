#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
int main()
{
	char filename[60]="6q8file.txt";
	ifstream inFile;
	inFile.open(filename);
	if(!inFile.is_open())
	{
		cout<<"Could not open the file.\n"
			<<filename<<endl
			<<"program terminating.\n";
		exit(EXIT_FAILURE);
	}
	int count=0;
	char ch;
	inFile>>ch;
	while(inFile.good())
	{
		++count;
		inFile>>ch;
	}
	//if(inFile.eof())
	//	cout<<"end of the file.\n";
	//else if(inFile.fail())
	//	cout<<"input terminated by data mismatch.\n";
	//else
	//	cout<<"input terminated for unknown reason.\n";
	cout<<"chars read: "<<count<<endl;
	inFile.close();
	return 0;
}