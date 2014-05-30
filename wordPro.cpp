/*
Program: wordPro.cpp
Author:  Paola Socorro
Project:   Project 4
Date:    May 29, 2014
*/

#include <iostream>
#include <string>


using namespace std;
string capsFix(string);
void main()
{
	bool end=false;
	string data,fixed;
	cout<<"Enter a string to fix"<<endl;

	while(end==false)
	{
		getline(cin,data);
		fixed=capsFix(data);
		cout<<fixed<<endl;
		cout<<'\n';
		cout<<"Enter another string"<<endl;
		cout<<'\n';

	}
}
string capsFix(string str)
{
	for(int i=1;i<str.length();i++)
	{
		if(str[i]==' ')
			str[i]==' ';
		else
			str[i]=tolower(str[i]);
	}
	return str;
}