/*
Program: filemerge.cpp
Author:  Paola Socorro
Project:   Project 4
Date:    May 28, 2014
*/

#include <iostream>   
#include <string> 
#include <fstream>

/* Sources: 


*/

using namespace std;
void mergeData(ifstream&,ifstream&,ofstream&);
string removeSpace(string);
//int countWords(string);
void countWords(ifstream&);
int wordCount;


int main()
{
	ifstream data;
	ifstream data2;
	//ifstream data3;
	ofstream outdata;
	ifstream endFile;
	string line,file1,file2,file3,file4;

	cout<<"Enter names of files to merge. Add .txt and Enter each name in a new line"<<endl;
	cin>>file1;
	cin>>file2;


	data.open(file1);
	if(data.fail()){return 0;}
	data2.open(file2);
	if(data2.fail()){return 0;}
	outdata.open("output.txt");
	if(outdata.fail()){return 0;}
	
	mergeData(data,data2,outdata); //Merging files together into a third. 
	
	data.close();
	data2.close();
	outdata.close();

	endFile.open("output.txt");
	if(endFile.fail()){return 0;}
	countWords(endFile);
	cout<<"Word Count is: "<<wordCount<<endl;
	cout<<"Longest Word: "<<endl;
	cout<<"Shortest Word: "<<endl;
	endFile.close();
}
void mergeData(ifstream&data,ifstream&data2,ofstream&outdata)
{
	string line1,line2,merge;
	if (data.is_open() && data2.is_open())
  {
	  getline(data,line1);
	  //cout<<line1<<endl;
	  getline(data2,line2);
	  //cout<<line2<<endl;
	  merge=line1+" "+line2+".";
	  merge=removeSpace(merge);
	  outdata<<merge;
  }
  else cout << "Unable to open file"; 
}
string removeSpace(string data)
{
	for(unsigned int i=0; i<data.length();i++)
	{	for(unsigned int j=0;j<data.length();j++)
		{
			if(data.at(j)==' ' && data.at(j+1)==' ')
				data.erase(j+1,1);}}
	return data;}
void countWords(ifstream& data)
{	string word;
	while(!data.eof()){
		data>>word;
		wordCount++;
	}}
