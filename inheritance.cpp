#include <iostream>
using namespace std;
class Student
{
    int USN;
    string s_name;
    int s_age;

public:
    void getData()
    {
        cout << "Enter University Serial Number: ";
        cin >> USN;
        cout << "Enter the name of the student: ";
        cin.ignore();
        getline(cin, s_name);
        v
                cout
            << "Enter the age of the student: ";
        cin >> s_age;
    }

    int returnAge()
    {
        return s_age;
    }
};
class Ugstudent : public Student
{
    int sem;
    float fees;
    float stipend;

public:
    void getInfo()
    {
        cout << "Enter the semester: ";
        cin >> sem;
        cout << "Enter the fees: ";
        cin >> fees;
        cout << "Enter the stipend: ";
        cin >> stipend;
    }

    int returnSem()
    {
        return sem;
    }
};
class Pgstudent : public Student
{
    int sem;
    float fees;
    float stipend;

public:
    void getInfo()
    {
        cout << "Enter the semester: ";
        cin >> sem;
        cout << "Enter the fees: ";
        cin >> fees;
        cout << "Enter the stipend: ";
        cin >> stipend;
    }
    v

        int
        returnSem()
    {
        return sem;
    }
};
int main()
{
    cout << "Enter the number of Under Graduate students: ";
    int n;
    cin >> n;

    Ugstudent u[n];

    for (int i = 0; i < n; i++)
    {
        cout << "UG Record " << i + 1 << ":" << endl;
        u[i].getData();
        u[i].getInfo();
    }
    cout << "Enter the number of Post Graduate students: ";
    int m;
    cin >> m;

    Pgstudent p[m];

    for (int i = 0; i < m; i++)
    {
        cout << "PG Record " << i + 1 << ":" << endl;
        p[i].getData();
        p[i].getInfo();
    }

    cout << "Semester wise average age: " << endl;
    cout << "Undergraduate Students: " << endl;
    for (int i = 1; i <= 8; i++)
    {
        float temp = 0, count = 0;
        for (int j = 0; j < n; j++)
        {
            if (u[j].returnSem() == i)
            {
                temp += u[j].returnAge();
                count++;
            }
        }
        float result;
        result = temp / count;
        v if (count == 0)
            result = 0;

        cout << "Sem " << i << ": " << result << endl;
    }

    cout << "Postgraduate Students: " << endl;
    for (int i = 1; i <= 4; i++)
    {
        float temp = 0, count = 0;
        for (int j = 0; j < m; j++)
        {
            if (p[j].returnSem() == i)
            {
                temp += p[j].returnAge();
                count++;
            }
        }
        float result;
        result = temp / count;
        if (count == 0)
            result = 0;
        cout << "Sem " << i << ": " << result << endl;
    }
    return 0;
}
