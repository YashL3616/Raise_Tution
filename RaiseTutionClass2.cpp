#include<iostream>
using namespace std;
class student
{
    public:
    char name[50];
    int status;

    void insert()
    {
        cout<<"Enter name\n";
        cin>>name;
        cout<<"Enter Status(1/2)\n";
        cin>>status;
    }

    void display()
    {
        cout<<"Name:"<<name<<"status:";
        if(status==1)
        {
            cout<<"pass";
        }
        else{
            cout<<"Fail";
        }
    
    }

};
int main()
{
    int p,f;
    student stud[3];
    cout<<"Enter Input\n";

    for(int i=0;i<3;i++)
    {
        cout<<"Enter detail for "<<(i+1)<<endl;
        stud[i].insert();
        if(stud[i].status==1)
        {
            p++;

        }
        else
        {
            f++;
        }
        
    }
    cout<<"Display\n";
        for(int i=0;i<3;i++)
    {
       stud[i].display();
        
    }

    return 0;
}
