//Created By Ahmed Hamdy Kotp

#ifndef Budget_H
#define Budget_H
#include <string>
#include <map>


using namespace std;
class Budget  {
private :
	map<string, double> categories;
public :
    //Constructor

    //setters


    //getters
    double getTotalSpent() const;
    double getRemaining() const;
    double getBalance(const string& category_name) const;
    //methods
    Budget();
    void spend(const string& category_name, double amount);
    void add_category(const string& category_name);
    void deposit(const string& category_name, double amount);
    void overview() const;
    void advice() const;
    static double total_budget;

};

#endif 
