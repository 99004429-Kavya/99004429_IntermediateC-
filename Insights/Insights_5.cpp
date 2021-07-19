/**
 * @file Insights_5.cpp
 * @author Kavya
 * @brief 
 * @version 0.1
 * @date 2021-07-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/**
 * @brief enum named AccountType
 * 
 */
enum AccountType
{ Prepaid,Postpaid };

/**
 * @brief Customer Class
 * 
 */
class Customer{
    
private:    
    string m_custId;
    string m_custName;
    string m_phone;
    double m_balance;
    AccountType m_type;
public:
    Customer();
    Customer(string ,string ,string , double );
    Customer(string ,string ,string);
    Customer(const Customer& ref);
    void credit(double);
    void makeCall(double);
    double getBalance() const;
    string getid() const;
    string getnumber() const;
    string display ()const;

    ~Customer();
};

//Empty Constructor
Customer::Customer(/* args */):m_custId("?"), m_custName("?"), m_phone("?"), m_balance(0.0)
{
    
}

// Parameterized construtor
Customer::Customer(string m_custId,string m_custName,string m_phone,double m_balance):m_custId(m_custId), m_custName(m_custName), m_phone(m_phone), m_balance(m_balance)
{

}

Customer::Customer(string m_custId,string m_custName,string m_phone):m_custId(m_custId), m_custName(m_custName), m_phone(m_phone)
{

}
Customer::Customer(const Customer& ref):m_custId(ref.m_custId), m_custName(ref.m_custName), m_phone(ref.m_phone), m_balance(ref.m_balance)

{

}

Customer::~Customer()
{
    
 }

void Customer::credit(double c_Amount)
{
    m_balance=m_balance + c_Amount;
    
}
void Customer::makeCall(double m_phone)
{
    cout<<"Calling...."<<m_phone<<endl;
}
double Customer::getBalance ()const
{
    return m_balance;
}
string Customer::getid() const
{
    return m_custId;
}
string Customer::getnumber() const
{
    return m_phone;
}
string Customer::display ()const
{
    return m_custName;
}
int main()
{
ifstream inFile;

string id;
string name;
string number;
float balance; 

inFile.open("sample.csv");
if (inFile.is_open()) {
    cout << "File has been opened" << endl;
}
else {
    cout << "File has not found" << endl;
}

while (!inFile.eof()) {
    getline ( inFile, id, ',' );
    getline ( inFile, name, ',' );
    getline ( inFile, number, ',' );
    inFile >> balance;
    Customer c1(id,name,number,balance);

    cout << "ID: " << c1.getid() << endl;
    cout << "Name: " << c1.display()<< endl;
    cout << "Phone Number: " << c1.getnumber() << endl;
    cout << "Balance: " << c1.getBalance()<< endl;
}
inFile.close();
return 0;
} 