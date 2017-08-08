#include<iostream>
using namespace std;
struct Sale_data{
	string isbn() const {return this->bookNo;};
	Sale_data& combine(const Sale_data &);
	double avg_prince() const;
	string bookNo;
	unsigned unit_sold=0;
	double revnue=0.0;
};
Sale_data add(const Sale_data &,const Sale_data&);
ostream &print(ostream&,const Sale_data&);
istream &read(istream&,Sale_data&);
