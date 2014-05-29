/*
Program: binsearch.cpp
Author:  Paola Socorro
Project:   Project 4
Date:    May 27, 2014
*/

#include <iostream>
#include <stdlib.h>     
#include <time.h> 

/* Sources: 
 key equal to 8

    b) key equal to 81
   
    c) key equal to 82

*/

using namespace std;
int binSearch(int[],int,int,int);//array, lowerbound, upperbound, key.
void bubbleSort(int[],int); //bubble sort from question 1. 
int main()
{
	int const S =27;
	int numbers [S] = {12,30,33,81,99,85,28,24,25,24,26,27,9,41,32,35,23,39,43,41,46,56,62,8,20,22,18};
	int pos;
	int key;
	bubbleSort(numbers,S);

	for(int i=0; i< S;i++)
	{
		cout<<numbers[i]<<" ";
		//cout<<selNums[i]<<" ";
	}
	cout<<"\n";
	cout<<"Enter a number to find ";
	cin>>key;
	pos=binSearch(numbers,0,S,key);
	if(pos==-1)
		cout<<"Number not found"<<endl;
	else{
		cout<<"\n";
		cout<<"Found "<<key<<" at position "<<pos<<endl;

	}

}
int binSearch(int arr[],int lower,int upper,int key){

	if(lower<=upper){
		int pos=(lower+upper)/2;
		if(key==arr[pos])
			return pos;
		else if (key<arr[pos])
			return binSearch(arr,lower,pos-1,key);
		else 
			return binSearch(arr,pos+1,upper,key);
	}

return -1;
}

void bubbleSort(int barr[], int n)
{
	bool pass = true;
	int temp;
	int count=0;
	while (pass)
	{	pass=false;
		count++;
		for(int i=0; i<n-count;i++)
		{
			if(barr[i]>barr[i+1]){
				temp=barr[i];
				barr[i]=barr[i+1];
				barr[i+1]=temp;
				pass=true;
			}}}}