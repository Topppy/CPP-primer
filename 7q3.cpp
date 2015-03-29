#include<iostream>
using namespace std;
struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};
void show_box( const box a);
void reset_box( box * ps);
int main()
{
	box t =	{"Black",1.00,2.00,3.00,4.1	};
	show_box(t);
	cout<<"reset the volume of box \n";
	reset_box(&t);
	show_box(t);
	return 0;
}

void show_box(const box a)
{
	cout<<"The box a is : \n"
	<<"maker: "<<a.maker <<endl
	<<"height: "<<a.height <<endl
	<<"width: "<<a.width <<endl
	<<"length: "<<a.length <<endl
	<<"volume: "<<a.volume <<endl;
}
void reset_box(box* ps)
{
	ps->volume =ps->height*ps->length *ps->width ;
}