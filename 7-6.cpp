#include<iostream>
using namespace std;
const int Size=8;
int sum_arr(int arr[],int n);
int main()
{
	int cookies[Size]={1,2,4,8,16,32,64,128};
	cout<<cookies<<" = array addredd, ";
	cout<<sizeof cookies<<" = size of cookies\n";
	int sum=sum_arr(cookies,Size);
	cout<<"total cookies eaten: "<<sum<<endl;
	sum=sum_arr(cookies,3);
	cout<<"first three eaters ate: "<<sum<<" cookies.\n";
	sum=sum_arr(cookies+4,4);
	cout<<"last four eaters ate: "<<sum<<" cookies.\n";
	return 0;
}
int sum_arr(int arr[],int n)
{
	int total=0;
	cout<<arr<<" = arr, ";
	cout<<sizeof arr<<" = sizeof cookies.\n";
	for(int i=0;i<n;i++)
		total+=arr[i];
	return total;
}