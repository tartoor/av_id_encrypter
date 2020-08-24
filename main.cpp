#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
using namespace std;

int uarr[10]={0,1,2,3,4,5,6,7,8,9};

void inp(char arr[],int length)
{
	for(int i=0;i<length;i++)
	{
		cin>>arr[i];
		//cout<<arr[i];
	}
}

void cti (char arr[],int intarr[],int length)
{
	for(int i=0;i<length;i++)
	{
		switch(arr[i])
		{
			case 48:
				intarr[i]=uarr[0];
				break;
			case 49:
				intarr[i]=uarr[1];
				break;
			case 50:
				intarr[i]=uarr[2];
				break;
			case 51:
				intarr[i]=uarr[3];
				break;
			case 52:
				intarr[i]=uarr[4];
				break;
			case 53:
				intarr[i]=uarr[5];
				break;
			case 54:
				intarr[i]=uarr[6];
				break;
			case 55:
				intarr[i]=uarr[7];
				break;
			case 56:
				intarr[i]=uarr[8];
				break;
			case 57:
				intarr[i]=uarr[9];
				break;
			default:
				intarr[i]=(int)(arr[i]);
				break;
				
		}
		//cout<<intarr[i];
		
	}
}

void gao(int arr[],int length)
{
	srand(time(NULL));
	int ran,t0,t1;
	//gen
	for(int i=0;i<length;i++)
	{
		if(arr[i]==0)
		{
			cout<<"0.0.0.";
		}
		else
		{
		//ran x t0 + t1
		ran =rand()%(arr[i]+1);
		while(ran==0)
		{
			ran =rand()%(arr[i]+1);
		}
		t0 =arr[i] /ran;
		t1 =arr[i] %ran;
		cout<<ran<<" "<<t0<<" "<<t1<<" ";
		}

	}
	cout<<endl<<length*3;
	
}

int main() 
{
	int l;
	cin>>l;
	const int len = l;
	char nam[len];
	int intnam[len];
	//input
	inp(nam,len);
	//turn char to int
	cti(nam,intnam,len);
	//gen and out
	gao(intnam,len);
	cout<<endl;
	system("pause");
	return 0;
}
