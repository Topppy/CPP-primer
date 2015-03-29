#include<iostream>
using namespace std;
const int Len = 66;
const int Divs = 6;
void subdivide(char ar[],int low, int high, int level);
int main()
{
	char rular[Len];
	int i;
	for(i=1;i<Len-2;i++)
		rular[i] =' ';
	rular[Len-1] = '\0';
	int max = Len-2;
	int min = 0;
	rular[min] = rular[max]='|';
	cout<<rular<<endl;
	for(i=1; i<=Divs; i++)
	{
		subdivide(rular,min,max,i);//i阶分割
		cout<<rular<<endl;
		for(int j = 1; j<Len-2; j++)
			rular[j]=' ';//重置尺子至初始化
	}
	return 0;
}
void subdivide(char ar[],int low, int high, int level)
{
	if (level ==0)
		return;
	int mid =(high +low)/2;
	ar[mid] = '|';
	subdivide(ar,low,mid,level-1);//分割左边
	subdivide(ar,mid,high,level-1);//分割右边
}