#include <iostream>
#include <stdio.h>
#include <cstring>

using namespace std;

int main() {

std::string studname;
std::string course;
std::string yrname;
int yrlvl;
float units, tuition, downpayment, balance;

// INPUT

std::cout<<"Enter Student Name           : ";
std::getline(std::cin, studname);
std::cout<<"Enter Program/Course         : ";
std::getline(std::cin, course);
cout<<"Enter Year Level (1-5)       : ";
cin>>yrlvl;
cout<<"Enter Number of Units        : ";
cin>>units;

if (yrlvl==1)
{
    yrname = "Freshman";
    tuition = units * 1500;
    downpayment = tuition *.30;
    balance = tuition - downpayment;
}
else if (yrlvl==2)
{
    yrname = "Sophomore";
    tuition = units * 1800;
    downpayment = tuition *.30;
    balance = tuition - downpayment;
}
else if (yrlvl==3)
{
    yrname = "Junior";
    tuition = units * 2000;
    downpayment = tuition *.30;
    balance = tuition - downpayment;
}
else if (yrlvl==4 || yrlvl==5)
{
    yrname = "Senior";
    tuition = units * 2300;
    downpayment = tuition *.30;
    balance = tuition - downpayment;
}

// OUTPUT

cout<<"\n \t\t\t\t\t ENROLLMENT SLIP \n\n";
std::cout << "Student Name                 :"<<studname<<endl;
std::cout << "Program/Course               :"<<course<<endl;
std::cout << "Year Name                    :"<<yrname<<endl;
cout<<"No. of Units                 :"<<units<<endl;
cout<<"Tuition Fee                  :"<<tuition<<endl;
cout<<"Down Payment                 :"<<downpayment<<endl;
cout<<"Balance                      :"<<balance<<endl;


cout << endl;
system ("PAUSE");
return EXIT_SUCCESS;

}

