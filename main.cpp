#include<string>
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<math.h>
int main(int argc, char** argv)
{
	double answer = 0.0;
	int numEntries = 0;
	double mean = 0.0;
	double arr [numEntries];
	//int num =std::stoi(argv[1]);
	srand(time(NULL));
	std::cout<<"Enter the number of data entries: \n";
	std::cin>>numEntries;
	std::cout<<"Enter number and press enter until all data entries have been entered \n";
	for(int i = 0; i<numEntries; i++)
	{
		std::cin>>arr[i];
		mean += arr[i];				
	}
	mean = mean/numEntries;
	for(int i = 0; i<numEntries;i++)
	{
		double x = arr[i]-mean;
		x = x*x;
		answer += x;		
	}
		
	answer = answer/(numEntries-1);
	answer = sqrt(answer);
	std::cout<<"The standard deviation is: "<< answer <<"\n";
	return 0;
}
