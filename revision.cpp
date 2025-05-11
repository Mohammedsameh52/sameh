

#include <iostream>
using namespace std;
class Employee {
protected:
    string name;
    int id;
    float salary;
public:
    Employee()
    {
        name = "unknown";
        id = 0;
        salary = 0;

    }

    Employee(string n,int i ,float s)
    {
        name = n;
        id = i;
        salary = s;
    
    
    }
    
    virtual float get_total_salary() = 0;
    virtual void print()
    {
        cout << "name: " << name << "emp_id = " << id << "Basic salary: " << salary;
    
    }

};

class salees :public Employee {
private:
    float gross_sales;
    float commission_rate;
public:
    salees(string n, int i, float s, float gs, float cr) :Employee(n, i, s)
    {
        gross_sales = gs;
        commission_rate = cr;

    }
    float get_total_salary() 
     {
        return salary + (gross_sales * commission_rate);


    }
    void print() 
    {
        Employee::print();
        cout << "gross_sales= " << gross_sales << "commission_rate = " << commission_rate;


    }
};
class engineer :public Employee 
{
private:
    string specialty;
    int Experience;
    int overtime_hour; 
    float hour_rate;
public:
    engineer(string n, int i, float s, string sp, int e, int oh, float ra) :Employee(n, i, s)

    {
        specialty = sp;
        Experience = e;
        overtime_hour = oh;
        hour_rate = ra;


    }
    float get_total_salary()
    {
        return salary + (overtime_hour * hour_rate);
    }
    void print()

    {
        Employee::print();
        cout << "specialty = " << specialty << "Experience = " << Experience << "overtime_hour = " << overtime_hour << "hour_rate = " << hour_rate << endl;



    }



};
int main()
{
    std::cout << "Hello World!\n";
}