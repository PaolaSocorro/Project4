/*
Program: sort.cpp
Author:  Paola Socorro
Project:   Project 4
Date:    May 27, 2014
*/

#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
/* Sources: 
http://www.cplusplus.com/reference/cstdlib/rand/

*/

using namespace std;

void bubbleSort(int[],int);
void selectionSort(int[],int);

int main()
{
	srand (time(0));
	int const S = 25;
	int bubbleNums[S];
	int selNums[S];
	cout<<"Unsorted Numbers"<<endl;
	for(int i=0; i< S;i++)
	{
		bubbleNums[i] = rand()%100+1;
		selNums[i]= bubbleNums[i];
		cout<<bubbleNums[i]<<" ";
		//cout<<selNums[i]<<" ";
	}

	cout<<endl;
	
	bubbleSort(bubbleNums,S);
	selectionSort(selNums,S);
	cout<<endl;
	cout<<"\n";
	cout<<"Bubble Sort Algorithm"<<endl;
	for(int i=0; i< S;i++)
	{
		cout<<bubbleNums[i]<<" ";
		//cout<<selNums[i]<<" ";
	}
	cout<<endl;
	cout<<"\n";
	cout<<"Selection Sort Algorithm"<<endl;

		for(int i=0; i< S;i++)
	{
		//cout<<bubbleNums[i]<<" ";
		cout<<selNums[i]<<" ";
	}
	cout<<endl;
	cout<<"\n";

	return 0;
}
void bubbleSort(int barr[], int n)
{
	bool pass = true;
	int temp;
	int count=0;
	while (pass)
	{
		pass=false;
		count++;
		for(int i=0; i<n-count;i++)
		{
			if(barr[i]>barr[i+1]){
				temp=barr[i];
				barr[i]=barr[i+1];
				barr[i+1]=temp;
				pass=true;
			}

		}
	}
}


void selectionSort(int sarr[],int n)
{
	int temp=0;
	for(int i=0; i<n;i++)
	{
		for(int j=0; j<n;j++)
		{
			if(sarr[i]<sarr[j])
			{
				temp=sarr[i];
				sarr[i]=sarr[j];
				sarr[j]=temp;
			}
		}
	
	}

}

