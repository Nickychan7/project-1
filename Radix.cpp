#include <iostream>
#include <time.h>

using namespace std;
int cekdig(int a)
{
	int cek=1;
	bool jalan = true;
	for(int i=1;jalan == true;)
	{
		if(a/i<10)
		{
			jalan = false;
		}
		else
		{
			cek++;
			i = i * 10;
		}
	}
	return cek;
}

void radik(int a)
{
	puts("");
	int *arr, digit = 1;
	arr = new int [a];
	int *temp;
	temp = new int [a];
	srand(time(NULL));
	cout<<"Data : ";
	for(int i=0;i<a;i++)
	{
		if(i%10==0)
		{
			puts("");
		}
		int r = rand()%1000000;
		arr[i]=r;
		temp[i]=r;
		cout<<r<<" ";
		if(cekdig(r)>digit)
		{
			digit = cekdig(r);
		}
	}
	puts("");
	cout<<"Jumlah Digit Terbanyak : "<<digit;
	puts("");
	for(;digit>0;)
	{
		int jnol=1;
		for(int i=1;i<digit;i++)
		{
			jnol= jnol * 10;
		}
		cout<<"Jumlah Nol : "<<jnol<<endl;
		int *temp2;
		temp2 = new int [a];
		for(int k=0, t2=0;k<=9;)
		{
			for(int y=0;y<a;y++)
			{
				if(temp[y]/jnol==k)
				{
					t2++;///jbhvbhbb
				}
			}
		}
	}
}

void main()
{
	int x;
	cout<<"input : ";cin>>x;
	radik(x);
}