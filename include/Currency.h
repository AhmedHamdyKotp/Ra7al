//created by Ahmed Hamdy Kotp at 3/24/2024


#ifndef Currency_H
#include <iostream>
#include "Budget.h"
#include <string>
using namespace std;

class Currency : public Budget
{
private :
	double Value_in_dollars;
public :
	Currency();
	double convert(double& value_in_dollar) ;
};

#endif
