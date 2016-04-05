#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int inWeight,cowNumber,topFiveWeight=0;
	vector<int> weight;
	int i;

	ifstream inFile("file.in",ios::in);
	if(!inFile){
		cerr<<"Failed opening"<<endl;
		exit(1);
	}
	inFile>>cowNumber;
	if(cowNumber<=5||cowNumber>=10000){
		cout<<"Your number n of cows="<<cowNumber<<endl<<
			"The number n must be 5<n<10000"<<endl;
		exit(1);
	}
	while(inFile>>inWeight){
		weight.push_back(inWeight);
	}
	sort(weight.begin(),weight.end());
	for(i=cowNumber-1;i>=cowNumber-5;--i)
		topFiveWeight+=weight.at(i);
	cout<<topFiveWeight<<endl;

	return 0;
}
