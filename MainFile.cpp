#include "StreamObject.h"
#include <iostream>
using namespace std;
class TestObject{
public:
  int size;
  TestObject(int size=9){
    this->size=size;
  };
  inline int printTest(){return(size);}
};
ostream& operator<<(ostream& out, TestObject testObject){
  out<<testObject.printTest();
  return out;
}
int main(){
TestObject *testObject=new TestObject(11);
const char *filename="stream1.bin";
StreamObject streamObject=StreamObject(filename,(char*)testObject,sizeof(testObject));
TestObject *newObject= new TestObject();
TestObject *holder= newObject;
newObject=(TestObject*) streamObject.readStream((char*)newObject);
cout<<newObject->printTest()<<endl;
cout<<*newObject<<endl;
return 0;
}
