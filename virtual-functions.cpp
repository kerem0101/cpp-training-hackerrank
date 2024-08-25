#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person{
    public:
    
        virtual void getdata(){
            
        }
        
        virtual void putdata(){
            
        }
};


class Professor : public Person{
  
  public:
    string name;
    int age;
    int publications;
    static int id;
    int curr_id;
    void getdata(){
        cin>>name>>age>>publications;
    }
    void putdata(){
        cout<<name<<" "<<age<<" "<<publications<<" "<<curr_id<<"\n";
    }
    
    Professor(){
        curr_id = ++id;
    }
    
};

class Student : public Person{

    public:
        
        string name;
        int age;
        int marks[6];
        static int id;
        int curr_id;
        int sum_of_marks(){
           int sum = 0;
           for(int i = 0; i<6; i++){
               sum+=marks[i];
           } 
           return sum;
        }
        void getdata(){
            cin>>name>>age>>marks[0]>>marks[1]>>marks[2]>>marks[3]>>marks[4]>>marks[5];
        }
        void putdata(){
            cout<<name<<" "<<age<<" "<<sum_of_marks()<<" "<<curr_id<<"\n";
        }
        Student(){
            curr_id = ++id;
        }
};


int Student::id = 0;
int Professor::id = 0;

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}

