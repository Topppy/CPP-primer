#include<iostream>
const int Size = 8;
int sum_arr(int arr[],int n);
using namespace std;
int main()
{
	int a[Size]={1,2,4,8,16,32,64,128};
	int total=sum_arr(a,Size);
	cout<<"total cookies eaten: "<<total<<endl;
	return 0;
}  
int sum_arr(int arr[],int n)
{
	int total=0;
	for(int i=0;i<n;i++)
		total+=arr[i];
	return total;
}