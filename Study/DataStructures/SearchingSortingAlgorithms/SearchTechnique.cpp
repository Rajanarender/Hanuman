#include<iostream>
using namespace std;

/*******************************************************
Implementation of Linear Search using Iterative method
*******************************************************/

/*
int func(int arr[],int key)
{
	for(int i=0;i<5;i++)
	{
		if(arr[i] == key)
		{
			return i;
		}
	}
}

int main()
{
	int x[5]={2,4,6,8,10},key;
	cout<<"Enter the Key"<<endl;
	cin>>key;
	int pos=func(x,key);
	cout<<"Entered key element is at index position:"<<pos<<endl;
}
*/

/*******************************************************************
Implementation of Binary Search using Iterative and Recursive methods
*********************************************************************/

int func(int x[],int l,int r,int key)
{
        int m=0;
	while(l<=r)
	{
		m=(l+r)/2;
		if(key == x[m])
			return m;
		else if(key > x[m])
                        l=m+1;
			//func(x,m+1,r,key); you need to comment the while() statement for Recursive
		else if(key < x[m])
                        r=m-1;
			//func(x,l,m-1,key);
	}
}

int main()
{
	int x[5]={2,4,6,8,10},key;
        cout<<"Enter the Key"<<endl;
	cin>>key;
	int pos= func(x,0,4,key); //0,4 are start,end index positions
	cout<<"Entered key element is at index position:"<<pos<<endl;
}


