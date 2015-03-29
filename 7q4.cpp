#include<iostream>
using namespace std;
long double pro(int n,int p);
int main()
{
	cout<<"Enter total of field number on the game\n" 
		<<"and the number of picks allowed: ";
	int total,pick,special;
	long double pro1,pro2;
	while((cin>>total>>pick)&&pick<=total)
	{
		cout<<"请输入特选号码的区间大小： ";
		if(!(cin>>special))
			break;
		pro1=pro(total,pick);
		pro2=pro(special,1);
		cout<<"The chances of getting all "
		    <<pick<<" picks is one in "
			<<pro1<<".\n";
		cout<<"The chances of getting the special number is one in "
			<<pro2<<endl;
		cout<<"You have one chance in "
			<<pro1*pro2
			<<" of winning.\n"
			<<"Next set of numbers (q to quit): ";
	}

	return 0;
}

long double pro(int n,int p)
{
	double ans=1.0;
	for(n,p;p>0;n--,p--)
		ans=ans*n/p;
	return ans;

}