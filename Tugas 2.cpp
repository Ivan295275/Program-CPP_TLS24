#include <iostream>
using namespace std;

int main()
{
    int employee;
    float base_salary;
    float final_salary;
    int years;
    int perform;
    
    cout << "The number of employees: ";
    cin >> employee;
    for (int i = 1; i <= employee; i++){
        cout << "Enter the base salary: ";
        cin >> base_salary;
        cout << "Enter years of experience: ";
        cin >> years;
        cout << "Enter performance rating: ";
        cin >> perform;
        
        cout << "Employee " << i << endl;
        if (years >= 5) {
            base_salary = base_salary + (base_salary * 10 / 100);
        } 
        if (perform == 5) {
            base_salary = base_salary + (base_salary * 5 / 100);
        }
        if (perform == 1) {
            base_salary = base_salary - (base_salary * 10 / 100);
        }
        cout << "The final salary: " << base_salary << endl;
        final_salary += base_salary;
    }
    cout << "The total salary of all employees combined: " << final_salary;
    

    return 0;
}