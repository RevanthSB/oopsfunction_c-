#include<iostream>
#include<string>
using namespace std;

class student {

private:
    int rollno;
    string name;
    int ANT;
    int TOC;
    int MPMC;
public:
    student(int r, string n, int A, int T, int M);
    void setANT(int A);
    void setTOC(int T);
    void setMPMC(int M);
    string getname();
    int getrollno();
    int getTOC();
    int getANT();
    int getMPMC();
    int totalmark();
    char grade();
};
student::student(int r, string n, int A, int T, int M) {
    rollno = r;
    name = n;
    setANT(A);
    setTOC(T);
    setMPMC(M);
}
void student::setANT(int A) {
    if (A <= 100) {
        ANT = A;
    }
    else {
        ANT = 0;
    }
}

void student::setTOC(int T) {
    if (T <= 100) {
       TOC = T;
    }
    else {
        TOC = 0;
    }
}

void student::setMPMC(int M) {
    if (M <= 100) {
        MPMC = M;
    }
    else {
        MPMC = 0;
    }
}

string student::getname() {
    return name;
}
int student::getrollno() {
    return rollno;
}
int student::getTOC() {
    return TOC;
}
int student::getANT(){
    return ANT;
}
int student::getMPMC() {
    return MPMC;
}

int student::totalmark() {
    return  (TOC + ANT + MPMC) / 3;
}

char student::grade() {
    float avg = totalmark();
    if (avg >= 60) {
        return 'A';
    }
    else if (40 <= avg && avg < 60) {
        return 'B';
    }
    else {
        return 'C';
    }
}

void main() {
    
    string name;
    int rollno;
    int TOC;
    int ANT;
    int MPMC;
    cout << "enter the name : " << endl;
    getline(cin, name);
    cout << "enter the rollno : " << endl;
    cin >> rollno;
    cout << "enter the TOC mark : " << endl;
    cin >> TOC;
    cout << "enter the ANT mark : " << endl;
    cin >> ANT;
    cout << "enter the MPMC mark : " << endl;
    cin >> MPMC;
    cout << endl;
    student s( rollno,name,TOC, ANT, MPMC);
    cout << endl;
    cin.ignore();
    cout << "enter the name : " << endl;
    getline(cin, name);
    cout << "enter the rollno : " << endl;
    cin >> rollno;
    cout << "enter the TOC mark : " << endl;
    cin >> TOC;
    cout << "enter the ANT mark : " << endl;
    cin >> ANT;
    cout << "enter the MPMC mark : " << endl;
    cin >> MPMC;
    cout << endl << endl;
    student s1( rollno,name, TOC, ANT, MPMC);
    cout << "NAME = " << s.getname() << endl;
    cout << "ROLL NO = " << s.getrollno() << endl;
    cout << "TOC = " << s.getTOC() << endl;
    cout << "ANT = " << s.getANT() << endl;
    cout << "MPMC = " << s.getMPMC() << endl;
    cout << "TOTAL MARK = " << s.totalmark() << endl;
    cout << "GRADE = " << s.grade() << endl;
    cout << endl << endl;
    cout << "NAME = " << s1.getname() << endl;
    cout << "ROLL NO = " << s1.getrollno() << endl;
    cout << "TOC = " << s1.getTOC() << endl;
    cout << "ANT = " << s1.getANT() << endl;
    cout << "MPMC = " << s1.getMPMC() << endl;
    cout << "TOTAL MARK = " << s1.totalmark() << endl;
    cout << "GRADE = " << s1.grade() << endl;
    cout << endl << endl;
}