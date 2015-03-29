#include<iostream>
#include<string>
#include<cstring>
using namespace std;
const int NUM = 200;
int main()
{
	char w[NUM];
	string s[20];
	int count=0;
	cout<<"enter your word(done to exit):";
	while(cin>>w&&strcmp("Done",w))/*这行代码重点在于strcmp，
								   “Done”与w相等返回0，此时&&
								   运算结果为0，while判定为假，
								   循环结束。
								   while(cin>>w) 从输入流中，
								   以空格为分隔保存到w里面。
		*/
		count++;
	cout<<"you have erntered "<<count<<" words\n";
	return 0;

}