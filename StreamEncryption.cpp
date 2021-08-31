#include "iostream"
using namespace std;
ostream& operator<< (ostream & out,const int integer){
  int intPlus1=integer+1;
  out<<(char)intPlus1;
  return out;
}
int main(){
cout<<9;
return 5;
}
