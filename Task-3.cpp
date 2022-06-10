#include<iostream>

using namespace std;

int main () {

  float marks;
  float result;

  cout<< "Enter the marks of a student:";
  cin>>marks;

  result= ((marks/200)*100);
  cout<< "The percentage of marks is:"<<result;


  return 0;
}
