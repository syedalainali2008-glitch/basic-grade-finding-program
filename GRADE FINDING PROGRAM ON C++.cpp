#include<iostream>
using namespace std;
int main()
{
    int english;
    cout<<"ENTER YOUR ENGLISH MARKS:";
    cin>>english;
    int maths;
    cout<<"ENTER YOUR MATHS MARKS:";
    cin>>maths;
    int science;
    cout<<"ENTER YOUR SCIENCE MARKS:";
    cin>>science;
     int physics;
    cout<<"ENTER YOUR PHYSICS MARKS:";
    cin>>physics;
     int chemistry;
    cout<<"ENTER YOUR CHEMISTRY MARKS:";
    cin>>chemistry;
     int biology;
    cout<<"ENTER YOUR BIOLOGY MARKS:";
    cin>>biology;
     int computer_science;
    cout<<"ENTER YOUR COMPUTER SCIENCE MARKS:";
    cin>>computer_science;
    int marks=(maths+english+science+computer_science+physics+chemistry+biology);
    int percentage=marks;
    if(percentage>=300 && percentage<=400){
        cout<<"YOU ARE FAIL"<<endl;
    }
    else if(percentage>400 && percentage<=550){
        cout<<"GRADE D"<<endl;
        
    }
    else if (percentage>550 && percentage<=660){
        cout<<"GRADE C"<<endl;
    }
    else if (percentage>660 && percentage<=750 ){
        cout<<"GRADE B"<<endl;
    } 
    else if (percentage>750 && percentage<=850){
        cout<<"WELL DONE YOU HAVE GRADE A:"<<endl;
    }
    else if (percentage>850){
        cout<<" CONGRATULATION YOU GET GRADE A1"<<endl;
        
    }
    
    return 0;

    
}
