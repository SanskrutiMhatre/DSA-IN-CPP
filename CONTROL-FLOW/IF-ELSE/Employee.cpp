#include <iostream>
using namespace std;
int main() {
  int age;
  char gender,m_status;

  cout << "ENTER YOUR AGE:";
  cin>>age;
  cout << "ENTER YOUR GENDER(M/F):";
  cin>>gender;
  cout << "ENTER YOUR MARITAL STATUS(YES/NO):";
  cin>>m_status;

  if(gender=='F'){
    cout<<"You have to work only in urban areas."<<endl;
  }
  else if (gender=='M' && age>20&& age<=40){
     cout<<"You may work in anywhere."<<endl;
  }
  else if (gender=='M' && age>40&& age<=60){
     cout<<"You have to work in urban areas only.."<<endl;
  }
  else {
    cout<<"ERROR-MAT KAAM KAR BHAI";
  }
  return 0;
}









//  Ask user to enter age, sex ( M or F ), marital status ( Y or N ) and then using following rules print their place of service.
// if employee is female, then she will work only in urban areas.
// if employee is a male and age is in between 20 to 40 then he may work in anywhere
// if employee is male and age is in between 40 t0 60 then he will work in urban areas only.
// And any other input of age should print "ERROR".