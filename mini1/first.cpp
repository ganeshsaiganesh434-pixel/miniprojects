#include<iostream>
#include<string>
#include<cctype>
using namespace std;
 class collegeCource{
    private:
    string courseID;
    char grade;
    int credits;
    int gradePoints;
    float honorpoints;
    public:
    void set_courseID(string CID){
        courseID=CID;

    }
    void set_grade(char g){
        grade=g;
    }
    void set_credit(int cr){
        credits=cr;

    }
    int  calculateGradePoints(char g){



        switch (g)
        {
            //it just switches to upper case alphabet
           g= toupper(grade);

        case 'A':return 10;
        case 'B':return 9;
        case 'C':return 8;
        case 'D':return 7;
        case 'E':return 6;
        case 'F':return 5;
     /* code */
            break;
        
        default:return 0;
            break;
        }


    }
    float  calculateHonorPoints(int gp,int cr){
return gp*cr;



    }
    void display(){
        gradePoints=calculateGradePoints(grade);
        honorpoints=calculateHonorPoints(gradePoints,credits);
        cout<<gradePoints<<" "<<honorpoints<<endl;

    }

    

};


int main() {
    collegeCource c1, c2;

    // First course
    c1.set_courseID("CS101");
    c1.set_grade('A');
    c1.set_credit(4);
    c1.display();

    // Second course
    c2.set_courseID("MA102");
    c2.set_grade('b');  // lowercase input, still works due to toupper
    c2.set_credit(3);
    c2.display();

    return 0;
}



