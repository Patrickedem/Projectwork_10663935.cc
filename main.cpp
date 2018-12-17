#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <windows.h>
#include <time.h>

using namespace std;

//Structure defining

//For students
struct student
{
 string fname;//for student first name
 string lname;//for student last name
 string Registration;//for Registration No number
 string classes;//for the class info
 string programme;//for course info
 string email;//for email info
}studentData;//Variable of student type

//For teachers
struct teacher
{
 string fst_name;//first name of teacher
 string lst_name;//last name of teacher
 string qualification;//Qualification of teacher
 string exp;//Experiance of the person
 string pay;//Pay of the Teacher
 string subj;//subject whos he/she teach
 string lec;//Lecture per Week
 string addrs;//Adders of teacher home
 string cel_no;//Phone number
 string blod_grp;//Bool Group
 string serves;//Number of serves in School
 string email;//for teachers email

}teacher[50];//Variable of teacher type

//Main function

int main()
{
	int login();
	login();

int i=0,j;//for processing usage
char choice;//for getting choice
char choicem;
int data;
char code1,code2,code3,code4,code5;
string find;//for sorting
string srch;

while(1)//outer loop
{
 system("cls");//Clear screen

//Level 1-Display process
 cout<<"\t\t\t\t\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
 cout<<"\n\n\t\t\t\t\t  SCHOOL MANAGEMENT SYSTEM\n\n";
 cout<<"\t\t\t\t\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
 cout<<"\n\n\t\t\t\t\t\t:MAIN SCREEN:\n\n";
 cout<<"\t\t\t\t\t1. Students Information"<<endl;
 cout<<"\t\t\t\t\t2. Teacher Information"<<endl;
 cout<<"\t\t\t\t\t3. Exit Program"<<endl;
  cout<<"\n\n\t\t\t\tEnter your choice: ";
 cin>>choice;

system("cls");//Clear screen

switch(choice)//First switch


case '1': //Student
 {
while(1)//inner loop-1
{
system("cls");//Clear screen
//Level-2 display
cout<<"\t\t\t\tSTUDENTS INFORMATION AND BIO DATA SECTION\n\n\n";
cout<<"\t\t\t\t\t1. Create new entry\n";
cout<<"\t\t\t\t\t2. Modify Record\n";
cout<<"\t\t\t\t\t3. Delete Record\n";
cout<<"\t\t\t\t\t4. Find and display entry\n";
cout<<"\t\t\t\t\t5. Print Academic Result\n";
cout<<"\t\t\t\t\t6. Jump to main\n";
cout<<"\n\n\t\t\t\tEnter your choice: ";
cin>>choice;

switch (choice)//Second switch

{
case '1'://Insert data
{
    ofstream f1("student.txt",ios::app);

for( i=0;choice!='n';i++)
{

if((choice=='y')||(choice=='Y')||(choice=='1'))
{
	system("CLS");
 cout<<"\t\t\t\t\tNEW ENTRY\n\n";
 cout<<"\t\t\t\t\tEnter First name: ";
 cin>>studentData.fname;
 cout<<"\n\t\t\t\t\tEnter Last name: ";
 cin>>studentData.lname;
 cout<<"\n\t\t\t\t\tEnter Registration number: ";
 cin>>studentData.Registration;
 cout<<"\n\t\t\t\t\tEnter class: ";
 cin>>studentData.classes;
 cout<<"\n\t\t\t\t\tEnter Email: ";
 cin>>studentData.email;
 cout<<"\n\t\t\t\t\tEnter Course: ";
 cin>>studentData.programme;

 f1<<studentData.fname<<endl<<studentData.lname<<endl<<studentData.Registration<<endl<<studentData.classes<<endl<<studentData.email<<endl<<studentData.programme;
 cout<<"\n\n\t\t\t\t\tDo you want to enter data: ";
 cout<<"\n\t\t\t\t\tPress Y for Continue and N to Finish:  ";
 cin>>choice;
 getchar();
}
}
f1.close();
}
continue;//control back to inner loop -1
case '2':
{
    while(1)
    {
        system("cls");
        //display option for modify
        cout<<"\n\n\t\t\t\t1. Modify Course";
        cout<<"\n\n\t\t\t\t2. Modify Student Record\n\t";
        cin>>choicem;
        system("cls");
    switch(choicem)
    {
        case '1':
        {
        cout<<"\n\t\t\t\tMODIFY COURSE\n\n";
        cout<<"Enter five courses: ";
        cin>>code1;
        cin>>code2;
        cin>>code3;
        cin>>code4;
        cin>>code5;
        cout<<"\tCourse Code\t\t\t\t\tCredit Hours\n"<<code1<<code2<<code3<<code4<<code5<<endl;
        }break;

        case '2':
            {
 ofstream f2("student.txt",ios::app);
   system("cls");

 cout<<"\t\t\t\t\tMODIFY STUDENT RECORDS\n\n";
 cout<<"\n\t\t\t\t\tEnter First name: ";
 cin>>studentData.fname;
 cout<<"\n\t\t\t\t\tEnter Last name: ";
 cin>>studentData.lname;
 cout<<"\n\t\t\t\t\tEnter Registration number: ";
 cin>>studentData.Registration;
 cout<<"\n\t\t\t\t\tEnter class: ";
 cin>>studentData.classes;
 cout<<"\n\t\t\t\t\tEnter Email: ";
 cin>>studentData.email;
 cout<<"\n\t\t\t\t\tEnter Programme: ";
 cin>>studentData.programme;
 f2<<studentData.fname<<endl<<studentData.lname<<endl<<studentData.Registration<<endl<<studentData.classes<<endl<<studentData.email<<endl<<studentData.programme;

 f2.close();
            }break;
        }


}//case 2
}//inner switch

case '3':
{
    ofstream f3("student.txt");
system("cls");
cout<<"\n\n\n\n\t\t\t\t" ;
cout<<"Enter your First Name: ";
cin >>studentData.fname;

  if(("student.txt") == 0)
        {
            remove ("student.txt");
            delete ("student.txt");
        }
        cout<<"\n\n\n\n\t\t\t\tDelete is be successful";


    for(int process=0;process<25;process++)
  {
    int delay(150);
    cout<<".";
  }

}//case 3
continue;

case '4'://Display data
{  ifstream f4("student.txt");
system("CLS");
cout<<"\n\t\t\t\tDISPLAY STUDENT'S ENTRY\n";
cout<<"\n\t\t\t\t\tEnter First name to be displayed: ";
cin>>find;
cout<<endl;
int notFound = 0;
for( j=0;(j<i)||(!f4.eof());j++)
{

getline(f4,studentData.fname);

if(studentData.fname==find)
{
 notFound = 1;
 cout<<"\n\t\t\t\t\tFirst Name: "<<studentData.fname<<endl;
 cout<<"\n\t\t\t\t\tLast Name: "<<studentData.lname<<endl;
 cout<<"\n\t\t\t\t\tRegistration Number: "<<studentData.Registration<<endl;
 cout<<"\n\t\t\t\t\tClass: "<<studentData.classes<<endl;
 cout<<"\n\t\t\t\t\temail: "<<studentData.email<<endl;
 cout<<"\n\t\t\t\t\tProgramme: "<<studentData.programme<<endl<<endl;
}

}


if(notFound == 0){

cout<<"\n\t\t\tNo Record Found"<<endl;
}
f4.close();
cout<<"Press any key two times to proceed";
getch();//To hold data on screen
getch();//To hold data on screen

}
continue;//control back to inner loop -1
case '5':
{
    system("cls");
    ifstream infile;
    ifstream t4("student Record.txt",ios::app);
    infile>>data;
    cout<<data<<endl;


}break;
continue;//Control pass to inner loop-2

case '6'://Jump to main
{
break;//inner switch
}//case 6



break;//inner while


continue;//control pass to 1st loop
}//outer case 1


break;//outer loop
}
system("cls");
continue;

case '2'://Teachers biodata
{
while(1)//inner loop-2
{
system("cls");//Clear screen
//Level-2 Display process
cout<<"\t\t\t\tTEACHER INFORMATION AND BIODATA SECTION\n\n\n";
cout<<"\t\t\t\t\t1. Create new entry\n";
cout<<"\t\t\t\t\t2. Modify Record\n";
cout<<"\t\t\t\t\t3. Delete Record\n";
cout<<"\t\t\t\t\t4. Student Grade\n";
cout<<"\t\t\t\t\t5. Find and display\n";
cout<<"\t\t\t\t\t6. Jump to main\n";
cout<<"\n\n\t\t\t\tEnter your choice: ";
cin>>choice;

switch (choice)//Third switch
{
case '1'://Insert data
{
ofstream t1("teacher.txt",ios::app);

for(i=0;choice!='n'&& choice!='N';i++)
{

 if((choice=='y')||(choice=='Y')||(choice=='1'))
 {
 	system("CLS");
  cout<<"\n\t\t\t\t\t\tNew Entry\n\n";
  cout<<"\n\t\t\t\t\tEnter First name: ";
  cin>>teacher[i].fst_name;
  cout<<"\n\t\t\t\t\tEnter Last name:: ";
  cin>>teacher[i].lst_name;
  cout<<"\n\t\t\t\t\tEnter Qualification: ";
  cin>>teacher[i].qualification;
  cout<<"\n\t\t\t\t\tEnter Experiance(year): ";
  cin>>teacher[i].exp;
  cout<<"\n\t\t\t\t\tEnter Year in this college: ";
  cin>>teacher[i].serves;
  cout<<"\n\t\t\t\t\tEnter Subject: ";
  cin>>teacher[i].subj;
  cout<<"\n\t\t\t\t\tEnter Lecture(per Week): ";
  cin>>teacher[i].lec;
  cout<<"\n\t\t\t\t\tEnter Pay: ";
  cin>>teacher[i].pay;
  cout<<"\n\t\t\t\t\tAddress: ";
  cin>>teacher[i].addrs;
  cout<<"\n\t\t\t\t\tEnter Phone Number: ";
  cin>>teacher[i].cel_no;
  cout<<"\n\t\t\t\t\tEnter Blood Group: ";
  cin>>teacher[i].blod_grp;

  t1<<teacher[i].fst_name<<endl<<teacher[i].lst_name<<endl
   <<teacher[i].qualification<<endl<<teacher[i].exp<<endl
   <<teacher[i].serves<<endl<<teacher[i].subj<<endl<<teacher[i].lec
   <<endl<<teacher[i].pay<<endl<<teacher[i].addrs<<endl<<teacher[i].cel_no<<endl<<teacher[i].blod_grp<<endl;
  cout<<"\n\n\t\t\t\t\tDo you want to enter data: ";
  cin>>choice;
  getchar();
 }//if
}//for loop
//for finding through name
system("cls");

t1.close();
}//case 1

continue;//Control pass to inner loop-2

case '2'://case 2
{
  ofstream t2("teacher.txt",ios::app);
    system("cls");
  if(("teacher.txt") == 0)
    	system("CLS");
  cout<<"\t\t\t\t\tMODIFY RECORD\n\n";
  cout<<"\n\t\t\t\t\tEnter First name: ";
  cin>>teacher[i].fst_name;
  cout<<"\n\t\t\t\t\tEnter Last name:: ";
  cin>>teacher[i].lst_name;
  cout<<"\n\t\t\t\t\tEnter Qualification: ";
  cin>>teacher[i].qualification;
  cout<<"\n\t\t\t\t\tEnter Experiance(year): ";
  cin>>teacher[i].exp;
  cout<<"\n\t\t\t\t\tEnter Year in this college: ";
  cin>>teacher[i].serves;
  cout<<"\n\t\t\t\t\tEnter Subject: ";
  cin>>teacher[i].subj;
  cout<<"\n\t\t\t\t\tEnter Lecture(per Week): ";
  cin>>teacher[i].lec;
  cout<<"\n\t\t\t\t\tEnter Pay: ";
  cin>>teacher[i].pay;
  cout<<"\n\t\t\t\t\tAddress: ";
  cin>>teacher[i].addrs;
  cout<<"\n\t\t\t\t\tEnter Phone Number: ";
  cin>>teacher[i].cel_no;
  cout<<"\n\t\t\t\t\tEnter Blood Group: ";
  cin>>teacher[i].blod_grp;

  t2<<teacher[i].fst_name<<endl<<teacher[i].lst_name<<endl
   <<teacher[i].qualification<<endl<<teacher[i].exp<<endl
   <<teacher[i].serves<<endl<<teacher[i].subj<<endl<<teacher[i].lec
   <<endl<<teacher[i].pay<<endl<<teacher[i].addrs<<endl<<teacher[i].cel_no<<endl<<teacher[i].blod_grp<<endl;

system("cls");

t2.close();
}//case 2

case '3':
{
    ifstream t2("teacher.txt",ios::app);
    system("cls");
  if(("teacher.txt") == 0)
        {
            remove ("teacher.txt");
            delete ("teacher.txt");
        }


    for(int process=0;process<25;process++)
  {
    int delay(15000);
    cout<<".";
  }
  cout<<"delete successful ";
}//case 3
continue;

case '4':
    {
        system("cls");
        char date[9];
        _strdate(date);
        ofstream t4("student.txt",ios::app);
        system("cls");
        int waiting(40000);
        cout<<"\t\t\t\t\t\t"<<date<<endl;
        cout<<"\n\t\t\t\tSTUDENT GRADE\n";
        cout <<"\n\t\t\tCourse\t\t\t\tGrade\n";
        cout<<"\n\t\t\tUGRC210\t\t\t\tA";
        cout<<"\n\t\t\tCSCD211\t\t\t\tB";
        cout<<"\n\t\t\tMATHS233\t\t\t\tC+";
        cout<<"\n\t\t\tMATHS211\t\t\t\tB+";
        cout<<"\n\t\t\tSTAT211\t\t\t\t\tB";
        t4<<date<<endl<<"STUDENT GRADE"<<endl<<"CourseGrade"<<endl<<"UGRC210  A"<<endl<<"CSCD211  B"
        <<endl<<"MATHS233 C+"<<endl<<"MATHS211  B+"<<endl<<"STAT211  B"<<endl;
        t4.close();

    }break;

case '5'://Display data
{
ifstream t5("teacher.txt");
system("CLS");
cout<<"\n\t\t\t\tDISPLAY TEACHER'S ENTRY\n";
cout<<"\n\t\t\t\t\tEnter name to be displayed: ";
cin>>find;

cout<<endl;
int notFound = 0;
for( j=0;((j<i)||(!t5.eof()));j++)
{

 getline(t5,teacher[j].fst_name);

 if(teacher[j].fst_name==find)
 {
  notFound = 1;
  cout<<"\n\t\t\t\t\tFirst name: "<<teacher[j].fst_name<<endl;
  getline(t5,teacher[j].lst_name);
  cout<<"\n\t\t\t\t\tLast name: "<<teacher[j].lst_name<<endl;
  getline(t5,teacher[j].qualification);
  cout<<"\n\t\t\t\t\tQualification: "<<teacher[j].qualification<<endl;
  getline(t5,teacher[j].exp);
  cout<<"\n\t\t\t\t\tExperience: "<<teacher[j].exp<<endl;

  getline(t5,teacher[j].serves);
  cout<<"\n\t\t\t\t\tYear in this School: "<<teacher[j].serves<<endl;

  getline(t5,teacher[j].subj);
  cout<<"\n\t\t\t\t\tSubject: "<<teacher[j].subj<<endl;

  getline(t5,teacher[j].lec);
  cout<<"\n\t\t\t\t\tLecture (per Week): "<<teacher[j].lec<<endl;
  getline(t5,teacher[j].pay);
  cout<<"\n\t\t\t\t\tPay: "<<teacher[j].pay<<endl;

  getline(t5,teacher[j].addrs);
  cout<<"\n\t\t\t\t\tAddress: "<<teacher[j].addrs<<endl;

  getline(t5,teacher[j].cel_no);
  cout<<"\n\t\t\t\t\tPhone Number: "<<teacher[j].cel_no<<endl;

  getline(t5,teacher[j].blod_grp);
  cout<<"\n\t\t\t\t\tBlood Group: "<<teacher[j].blod_grp<<endl;
 }//if

}//for loop
t5.close();
if(notFound == 0){

 cout<<"\n\t\t\tNo Record Found"<<endl;
}
cout<<"Press any key two times to proceed";
getch();//To hold data on screen
getch();//To hold data on screen
}//case 4

continue;//Control pass to inner loop-2

case '6'://Jump to main
{
break;//inner switch
}//case 6

}//inner switch

break;//inner while
}//inner loop

continue;//control pass to 1st loop
}//outer case 1


break;//outer loop

case '3':
{
    exit(0);
}



}
}
}


int login(){
   string pass ="";
   char ch;
   cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\tSCHOOL MANAGEMENT SYSTEM \n\n";
   cout<<"\t\t\t\t\t------------------------------";
   cout<<"\n\t\t\t\t\t\t     LOGIN \n";
   cout<<"\t\t\t\t\t------------------------------\n\n";
   cout << "\t\t\t\t\tEnter Password: ";
   ch = _getch();
   while(ch != 13){//character 13 is enter
      pass.push_back(ch);
      cout << '*';
      ch = _getch();
   }
      if(pass=="1234"){
      cout << "\n\n\n\t\t\t\t\t\tAccess Granted! \n";
      system("PAUSE");
      system ("CLS");
   }else{
      cout << "\n\n\t\t\t\t\t\t\t\tAccess Aborted...\n\t\t\t\t\t\t\t\tPlease Try Again\n\n";
      system("PAUSE");
      system("CLS");
      login();
   }
}


