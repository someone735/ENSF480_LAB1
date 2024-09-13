/*
File name: company.cpp
Assignment: Lab 1 Excerise C
Completed by: John Tumacder 
Submission date: Sept 13, 2024
*/


#include <vector>
#include <string>

using namespace std;

struct Employee{
    private: 
        string name;
        string address;
        string DOB;
        string occupation;
    
    public:
        string get_name()const;
        void set_name(const string nam);

        string get_address()const;
        void set_address(const string newAddress);

        string get_DOB()const;
        void set_DOB(const string date);

        string get_occupation() const;
        void set_occupation(const string);
};

struct Customer{
    private:
        string name;
        string address;
        string phoneNum;

    public:
        string get_name()const;
        void set_name(const string nam);

        string get_address()const;
        void set_address(const string newAddress);
        
        string get_phoneNum()const;
        void set_phoneNum(const string phone);
};

struct Company {
    private:
        string companyName;
        string companyAddress;
        string dateEstablished;
        vector<Employee> employees;
        vector<Customer> customers;

    public:
        vector<Employee> get_employees() const;
        void set_employees(const vector<Employee> newEmployees);
        
        vector<Customer> get_customers() const;
        void set_customers(const vector<Customer> newCustomers);

};