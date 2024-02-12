#include<iostream.h>
#include<conio.h>
class Number
{
int x,y;
public:
void accept(int a,int b)
{
x=a;
y=b;
}
void display()
{
cout<<"x="<<x<<"\n";
cout<<"y"<<y<<"\n";
}
friend void operator-(Number &obj)
{
obj.x=-obj.x;
obj.y=obj.y;
}
};
int main()
{
Number N;
clrscr();
N.accept(10,20);
N.display();
operator-(N);
cout<<"\n After unary minus handled variable are:"<<"\n";
N.display();
return 0;
}