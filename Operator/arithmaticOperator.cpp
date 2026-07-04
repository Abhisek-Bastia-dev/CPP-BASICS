#include<iostream>
using namespace std;
int main(){
  cout<< 17 + 18 <<endl;
  cout<< 29 - 18 <<endl;
  cout<< 17 * 18 <<endl;
  cout<< 15.0 / 4 <<endl;//division needs atleast one  float type number if int is there then result will be in whole number. 
  cout<< 17 % 18 <<endl;//% isvalid for int type only.
  
  //increment decrement operator
  int x = 5;
  cout<< x++<<endl;
  cout<< x++<<endl;
  cout<< x--<<endl;
  cout<< x--<<endl;
  cout<< ++x<<endl;
  cout<< ++x<<endl;
  cout<< --x<<endl;
  cout<< --x<<endl;
}