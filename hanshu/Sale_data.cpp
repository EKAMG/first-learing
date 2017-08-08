#include"Sale_data.h"
//#include<iostream>
using namespace std;
Sale_data& Sale_data::combine (const Sale_data &rhs)
{
	revnue+=rhs.revnue;
	unit_sold+=rhs.unit_sold;
	return *this;
}
double Sale_data::avg_prince() const
{
	if(!unit_sold)
		return 0.0;
	else
		return revnue/unit_sold;
}
Sale_data add(const Sale_data &rhs1,const Sale_data &rhs2){
	Sale_data rhs3=rhs1;
	rhs3.combine(rhs2);
	return rhs3;
}
istream &read(istream &is,Sale_data &rhs1){
	double prince=0.0;
	is>>rhs1.bookNo>>rhs1.unit_sold>>prince;
	rhs1.revnue=rhs1.unit_sold*prince;
	return is;
} 
ostream &print(ostream &os,const Sale_data &item){
	os<<item.bookNo<<"  "<<item.unit_sold<<"  "<<item.revnue<<"  "<<item.avg_prince();
	return os;
}

