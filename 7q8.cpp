#include<iostream>
using namespace std;
const int SLEN = 30;
struct student{
	char fullname[SLEN];
	char hobby[SLEN];
	int coplevel;
};
int getinfo(student pa[],int n );
void display1(student st);
void display2(const student * ps);
void display3(const student pa[],int n);

int main()
{
	cout<<"Enter class size: ";
	int class_size;
	cin>>class_size;
	while(cin.get()!='\n')
		continue;
	student *ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu,class_size);
	for(int i=0;i<entered; i++)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu, entered);
	delete [] ptr_stu;
	cout<<"Done.\n";
	return 0;
}
int getinfo(student pa[],int n )
{
	int i;
	for( i= 0;i<n;i++)
	{
		cout<<"Enter fullname of student #"<<i+1<<" : ";	
		cin.getline(pa[i].fullname,SLEN );
		if(!strcmp(pa[i].fullname,"") )//如何判定字符串为空
		{
			break;
		}
		cout<<"Enter hooby of student #"<<i+1<<" : ";
		cin>>pa[i].hobby ;
		cout<<"enter coplevel of student #"<<i+1<<" : ";
		cin>>pa[i].coplevel ;
		cin.get();
		}
	return i;
}

void display1(student st)
{
	cout<<"fullname: "<<st.fullname 
		<<"\nhobby: "<<st.hobby 
		<<"\ncoplevel: "<<st.coplevel <<endl;
}
void display2(const student * ps)
{
	cout<<"fullname: "<<ps->fullname 
		<<"\nhobby: "<<ps->hobby 
		<<"\ncoplevel: "<<ps->coplevel <<endl;
}
void display3(const student pa[],int n)
{
	for(int i= 0; i< n;i++)
	{
		cout<<"fullname: "<<pa[i].fullname 
		<<"\nhobby: "<<pa[i].hobby 
		<<"\ncoplevel: "<<pa[i].coplevel <<endl;
	}
}