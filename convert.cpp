/*
Program: convert.cpp
Author:  Paola Socorro
Project:   Project 4
Date:    May 29, 2014
*/
//I wasn't sure if you meant this or a windows form with menus and buttons. 
//I figured it had to mean this since windows forms hasn't been taught in class, though i now it from a previous c++ class.


#include <iostream>

using namespace std;

float milestoK(float);
float FtoC(float);

void main()
{
	int select=-1;
	int sel=-1;
	float data=0, result=0;
	//1: Miles to Kilometers___or___2: Fahrenheit to Celsius -> "
	cout<<"Welcome to the Conversion program."<<endl;
	while (select !=0 && sel!=0)
	{
		cout<<"Enter 0: to Exit___1: for OPTIONS ";
		cin>>select;
		if(select ==1)
		{
			cout<<"\n";
			cout<<"1: MILES"<<endl;
			cout<<"2: DEGF"<<endl;
			cout<<"0: EXIT ";
			cin>>sel;
			cout<<"\n";
			if(sel==1){
				cout<<"Enter the MILES to convert to Kilometers ";
				cin>>data;
				result=milestoK(data);
				cout<<data<<" Miles is "<<result<<" Kilometers"<<endl;
				cout<<"\n";
			}
			if(sel==2){
				cout<<"Enter the Fahrenheits to convert to Celsius ";
				cin>>data;
				result=FtoC(data);
				cout<<data<<" Fahrenheit is "<<result<<" Celsius"<<endl;
				cout<<"\n";
			}
			//else
				//cout<<"Please Enter 0,1 or 2 as your selection"<<endl;
		}
		else
			cout<<"Please Enter 0,1 or 2 as your selection"<<endl;
	}
}
float milestoK(float m)
{
	int k=0;
	k=m/0.62137;
	return k;
}
float FtoC(float f)
{
	int c=0;
	c= 5*(f-32)/9;
	return c;
}