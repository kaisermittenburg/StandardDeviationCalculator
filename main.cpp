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

	//int num =std::stoi(argv[1]);
	srand(time(NULL));
	std::cout<<"\n\nEnter the number of data entries: \n";
	std::cin>>numEntries;
	double arr [numEntries];
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
	if(answer > 0)
	{
		answer = sqrt(answer);
	}
	else 
	{
		std::cout<<"\nStandard Variance was either 0 or negative... \n";
	}
	std::cout<<"\nThe mean is: "<<mean<<"\n";
	std::cout<<"The standard deviation is: "<< answer <<"\n\n\n";
	return 0;
}
