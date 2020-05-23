#include <iostream>
using namespace std;

int top = -1;

void push(char stack[],char x)
{
	top = top + 1;
	stack[top] = x;
}

void pop()
{
	top = top -1;
}

int size()
{
	return top + 1;
}

int topelement(char stack[])
{
	return stack[top];
}

void flip(char stack[],int len)
{
	for (int i=0;i<=len;i++)
	{
		if (stack[i]=='H') stack[i]='T';
		else if (stack[i]=='T') stack[i]='H';
	}
}

int main()
{	
	int T;cin>>T;
	for (int i=0;i<T;i++)
	{
		int n,op;
		cin>>n>>op;
		char stack[n];
		for (int j=0;j<n;j++)
		{
			char x;
			cin>>x;
			push(stack,x);
		}

		int sz = size();

		char t;
		for (int j=op;j>0;j--)
		{
			t = topelement(stack);
			if (t=='H')
			{
				pop();
				flip(stack,top);
			}

			else 
			{
				pop();
			}
		}

		//flip(stack,top);

		/*for (int j = 0;j<sz;j++)
			cout<<stack[j]<<" ";*/

		int counter=0;int s= size();
		for (int j=0;j<s;j++)
		{
			if (stack[j]=='H')
			{
				counter+=1;pop();
			}

			else pop();
		}

		cout<<counter<<endl;

	}
	return 0;

}