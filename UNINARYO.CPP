#include<iostream.h>
#include<conio.h>
class  Numbers
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
cout<<"y="<<x<<"\n";
}
void operator-()
{
x=-x;
y=-y;
}
};
int main()
{
Numbers N;
clrscr();
N.accept(10,20);
N.display();
-N;
cout<<"\n After unary minus handled variable are"<<"\n " ;
N.display();
return (0);
}