#include "StreamObject.h"
#include <fstream>
#include <iostream>
using namespace std;
  StreamObject::StreamObject(const char * filename,char* objAsChar,int size){
  StreamObject::filename=filename;
  StreamObject::size=size;
  ofstream out(filename,ios::out);
  out.write(objAsChar,size);
  out.close();
  }
char *StreamObject::readStream(char* varname){
fstream in(filename,ios::in);
char *obj= new char();
in.read(obj,size);
cout<<size<<endl;
in.close();
return obj;
}
