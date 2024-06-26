// Created By Ahmed Hamdy Kotp at 3/23/2024


#ifndef Budget_H
#define Budget_H
#include <string>
#include <map>

using namespace std;


class Budget
{
private :
	map<string, double> categories;
	double total_budget;
public :
	  void add_category(const string& category_name, double amount);
    double getBalance(const string& category_name) const;
    void spend(const string& category_name, double amount);
    void deposit(const string& category_name, double amount);
    double getTotalSpent() const;
    double getRemaining() const;
    void overview() const;
    void advice() const;
};

#endif 
