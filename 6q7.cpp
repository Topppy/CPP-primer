#include<iostream>
#include<cctype>
#include<string>
#include<cstring>
using namespace std;
int main()
{
	cout<<"enter words (q to quit): ";
	string str;
	char ch;
	int an=0,bn=0,cn=0;
	cin>>str;
	while(str!="q")
	{
		ch=tolower(str[0]);
		if (isalpha(ch))
		{
			if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
				an++;
			else 
				bn++;
		}
		else 
			cn++;
		cin>>str;

	}
	cout<<an<<" words begainning with vowels.\n"
		<<bn<<" words begainning with consonants.\n"
		<<cn<<" others\n";

	return 0;
}