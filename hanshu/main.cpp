#include"Sale_data.h"
using namespace std;
int main()
{
	Sale_data total;
	if(read(cin,total)){
		Sale_data trans;
		while(read(cin,trans)){
			if(total.isbn()==trans.isbn())	
				total.combine(trans);
			else{
				print(cout,total)<<endl;
				total=trans;	
			}
		}
	}
	else{
		cerr<<"no data"<<endl;
	}
	return 0;
	
}
