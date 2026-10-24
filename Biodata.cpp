#include <iostream>
#include <string>
using namespace std;
class employee
{
protected:
    string name;
    int emp_id;

public:
    void getEmployee()
    {
        cout << "Enter Employee Name: ";
        cin >> name;

        cout << "Enter Employee ID: ";
        cin >> emp_id;
    }

    void displayEmployee()
    {
        cout << "\nEmployee Name : " << name;
        cout << "\nEmployee ID   : " << emp_id;
    }
};

class personal : virtual public employee
{
protected:
    int age;
    string address;

public:
    void getPersonal()
    {
        cout << "Enter Age: ";
        cin >> age;

        cout << "Enter Address: ";
        cin >> address;
    }

    void displayPersonal()
    {
        cout << "\nAge           : " << age;
        cout << "\nAddress       : " << address;
    }
};

class professional : virtual public employee
{
protected:
    string designation;
    float salary;

public:
    void getProfessional()
    {
        cout << "Enter the Designation: ";
        cin >> designation;

        cout << "Enter the Salary: ";
        cin >> salary;
    }

    void displayProfessional()
    {
        cout << "\nDesignation    : " << designation;
        cout << "\nSalary         : " << salary;
    }
};

class academics : virtual public employee
{
protected:
    string qualification;
    float percentage;

public:
    void getAcademic()
    {
        cout << "Enter the Qualification: ";
        cin >> qualification;

        cout << "Enter Percentage: ";
        cin >> percentage;
    }
    void displayAcademic()
    {
        cout << "\nQualification  : " << qualification;
        cout << "\nPercentage     : " << percentage << "%";
    }
};
class Biodata : public personal,
                public professional,
                public academics
{
public:
    void getData()
    {
        getEmployee();
        getPersonal();
        getProfessional();
        getAcademic();
    }
    void displayData()
    {
        cout << "\n===== EMPLOYEE BIODATA =====";

        displayEmployee();

        cout << "\n--- Personal Record ---";
        displayPersonal();

        cout << "\n--- Professional Record ---";
        displayProfessional();

        cout << "\n--- Academic Record ---";
        displayAcademic();
    }
};
int main()
{
    Biodata b;

    b.getData();
    b.displayData();

    return 0;
}
