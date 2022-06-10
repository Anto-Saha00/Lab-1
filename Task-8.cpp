#include<iostream>

using namespace std;

int main () {

  int x,y;
  float sum,sub,mul,div;
  cout<< "Enter the value of x:";
  cin>>x;
  cout<< "Enter the value of y:";
  cin>>y;

  cout<< "\n";
  sum= x+y;
  sub= x-y;
  mul= x*y;
  div= x/y;

  cout<< "The Summation of the integer:"<<sum;
  cout<< "The Subtraction of the integer:"<<sub;
  cout<< "The Multiplication of the integer:"<<mul;
  cout<< "The Division of the integer:"<<div;


  return 0;
}
