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
	while(cin>>w&&strcmp("Done",w))/*���д����ص�����strcmp��
								   ��Done����w��ȷ���0����ʱ&&
								   ������Ϊ0��while�ж�Ϊ�٣�
								   ѭ��������
								   while(cin>>w) ���������У�
								   �Կո�Ϊ�ָ����浽w���档
		*/
		count++;
	cout<<"you have erntered "<<count<<" words\n";
	return 0;

}