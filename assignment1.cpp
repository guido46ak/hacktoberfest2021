#include <iostream>
using namespace std;

struct student
{
    string name;
    string email;
    int rollno;
    long phoneno;
    float sgpa;
};
void display(student a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "\nName : " << a[i].name << endl;
        cout << "Email: " << a[i].email << endl;
        cout << "Phone No : " << a[i].phoneno << endl;
        cout << "Roll No : " << a[i].rollno << endl;
        cout << "CGPA : " << a[i].sgpa << endl;
    }
}

void bubblesort(student a[], int n)
{
    double temp;
    string str;
    int count = 0;
    while (count < n)
    {
        for (int i = 0; i < count; i++)
        {
            if (a[i].rollno > a[i + 1].rollno)
            {
                temp = a[i].rollno;
                a[i].rollno = a[i + 1].rollno;
                a[i + 1].rollno = temp;
                temp = a[i].sgpa;
                a[i].sgpa = a[i + 1].sgpa;
                a[i + 1].sgpa = a[i].sgpa;
                temp = a[i].phoneno;
                a[i].phoneno = a[i + 1].phoneno;
                a[i + 1].phoneno = temp;
                str = a[i].name;
                a[i].name = a[i + 1].name;
                a[i + 1].name = str;
                str = a[i].email;
                a[i].email = a[i + 1].email;
                a[i + 1].email = str;
                display(a, n);
            }
        }
        count++;
    }
}
void Insertionsort(student a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        string str = a[i].name;
        string str1 = a[i].email;
        int r = a[i].rollno;
        float s = a[i].sgpa;
        double ph = a[i].phoneno;

        int j = i - 1;
        while (a[j].name > str && j >= 0)
        {
            a[j + 1].name = a[j].name;
            a[j + 1].email = a[j].email;
            a[j + 1].phoneno = a[j].phoneno;
            a[j + 1].rollno = a[j].rollno;
            a[j + 1].sgpa = a[j].sgpa;
            j--;
        }
        a[j + 1].name = str;
        a[j + 1].email = str1;
        a[j + 1].rollno = r;
        a[j + 1].sgpa = s;
        a[j + 1].phoneno = ph;
    }
}
void swap(student a[], int i, int j)
{

    float temp = a[i].sgpa;
    a[i].sgpa = a[j].sgpa;
    a[j].sgpa = temp;
    double t;
    string k;
    k = a[i].name;
    a[i].name = a[j].name;
    a[j].name = k;
    k = a[i].email;
    a[i].email = a[j].email;
    a[j].email = k;
    t = a[i].phoneno;
    a[i].phoneno = a[j].phoneno;
    a[j].phoneno = t;
    t = a[i].rollno;
    a[i].rollno = a[j].rollno;
    a[j].rollno = t;
}
int partition(student a[], int l, int r)
{
    float pi = a[r].sgpa;
    int i = l - 1;
    for (int j = l; j < r; j++)
    {
        if (a[j].sgpa > pi)
        {
            i++;
            swap(a, i, j);
        }
    }
    swap(a, i + 1, r);
    return i + 1;
}
void Quicksort(student a[], int l, int r)
{
    int pi;
    if (l < r)
    {
        pi = partition(a, l, r);
        Quicksort(a, l, pi - 1);
        Quicksort(a, pi + 1, r);
    }
}
void Linersearch(student a[], int n)
{
    float s;
    cout << "Enter SGPA of student to search : ";
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s == a[i].sgpa)
        {
            cout <<"\n"<< a[i].name << endl;
            cout << a[i].email << endl;
            cout << a[i].rollno << endl;
            cout << a[i].phoneno << endl;
            cout << a[i].sgpa << endl;
        }
        else
        {
            continue;
        }
    }
}
int Binarysearch(student a[], int n)
{
    Insertionsort(a, n);
    string str;
    cout << "Enter name of student to search : ";
    cin >> str;
    int s = 0;
    int e = n;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (a[mid].name == str)
        {
            cout <<"\n"<< a[mid].name << endl;
            cout << a[mid].email << endl;
            cout << a[mid].rollno << endl;
            cout << a[mid].phoneno << endl;
            cout << a[mid].sgpa << endl;
            return 0;
        }
        else if (a[mid].name < str)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
}

int main()
{
    int n = 3;
    int b, x;
    student a[n];
    a[0].name = "Vishal";
    a[0].email = "vishal@gmail.com";
    a[0].phoneno = 123456;
    a[0].rollno = 4;
    a[0].sgpa = 92.4;

    a[1].name = "Keshav";
    a[1].email = "keshav@gmail.com";
    a[1].phoneno = 1234563;
    a[1].rollno = 2;
    a[1].sgpa = 93.5;

    a[2].name = "Shalini";
    a[2].email = "shalini@gmail.com";
    a[2].phoneno = 12347563;
    a[2].rollno = 8;
    a[2].sgpa = 91.77;
    do
    {

        cout << "Enter operation you want to perform  \n";
        cout << "Enter 1 for Bubble Sort : \nEnter 2 for Insertion Sort : \nEnter 3 for Quick Sort : \nEnter 4 for Liner Search : \nEnter 5 for Binary Search : ";
        cin >> b;

        switch (b)
        {
        case 1:
            bubblesort(a, n);
            break;

        case 2:
            Insertionsort(a, n);
            display(a, n);
            break;
        case 3:
            Quicksort(a, 0, n - 1);
            display(a, n);
            break;
        case 4:
            Linersearch(a, n);
            break;
        case 5:
            Binarysearch(a, n);
            break;
        default:
            cout << "Enter valid Input ";
            break;
        }
        cout << "Enter 1 to continue and 0 to exit : ";
        cin >> x;
    } while (x != 0);
}