#include<iostream>
using namespace std;
int i=0;
struct student
{ 
    string roll,name,clas; 
    float tot,obt,per;
}s[10];
void control_panel()
{
    cout<<"\n\n\n\t\t\t\tcontrol panel";
    cout<<"\n\n 1.insert record";
     cout<<"\n 2. display record";
     cout<<"\n 3. search record";
     cout<<"\n 4. update record";
     cout<<"\n 5. delete record";
     cout<<"\n 6. exit";
     cout<<"\n\n enter your choice:";
}
void insert(student s[])
{
    system("cls");
    cout<<"\n\n\t\t\t\tinsert record";
    cout<<"\n\n Roll no.:";
    cin>>s[i].roll;
    cout<<"\n\t\t\tName:";
    cin>>s[i].name;
    cout<<"\n clas:";
    cin>>s[i].clas;
    cout<<"\n\t\ttotal marks:";
    cin>>s[i].tot;
    cout<<"\n\t\t obtained marks:";
    cin>>s[i].obt;
    s[i].per=(s[i].obt/s[i].tot)*100;
}
 int main()
{
    int choice;
    char x;
    system("cls");
    control_panel();
    cin>>choice;
    switch(choice)
    {
        case 1:
        do
        {
        insert(s);
        i++;
        cout<<"\n\n Do you want another record(y,n):";
        cin>>x;
        }while(x=='y');
             break;
        case2:
             break;
        case 3:
             break;
        case4:
            break;
        case 5:
            break;
        case 6:
            exit(0);
       default:
       cout<<"\n\n invalid value...please try again...";
    } 
    system("pause");
}

#include<iostream>
using namespace std;
int i=0;
struct student
{ 
    string roll,name,clas; 
    float tot,obt,per;
}s[10];
void control_panel()
{
    cout<<"\n\n\n\t\t\t\tcontrol panel";
    cout<<"\n\n 1.insert record";
     cout<<"\n 2. display record";
     cout<<"\n 3. search record";
     cout<<"\n 4. update record";
     cout<<"\n 5. delete record";
     cout<<"\n 6. exit";
     cout<<"\n\n enter your choice:";
}
void insert(student s[])
{
    system("cls");
    cout<<"\n\n\t\t\t\tinsert record";
    cout<<"\n\n Roll no.:";
    cin>>s[i].roll;
    cout<<"\n\t\t\tName:";
    cin>>s[i].name;
    cout<<"\n clas:";
    cin>>s[i].clas;
    cout<<"\n\t\ttotal marks:";
    cin>>s[i].tot;
    cout<<"\n\t\t obtained marks:";
    cin>>s[i].obt;
    s[i].per=(s[i].obt/s[i].tot)*100;
}
 int main()
{
    int choice;
    char x;
    system("cls");
    control_panel();
    cin>>choice;
    switch(choice)
    {
        case 1:
        do
        {
        insert(s);
        i++;
        cout<<"\n\n Do you want another record(y,n):";
        cin>>x;
        }while(x=='y');
             break;
        case2:
             break;
        case 3:
             break;
        case4:
            break;
        case 5:
            break;
        case 6:
            exit(0);
       default:
       cout<<"\n\n invalid value...please try again...";
    } 
    system("pause");
}
       
       
       
             
                 
    
