class StreamObject{
public:
  const char*filename;
  int size;
  StreamObject(const char * filename,char* objAsChar,int size);
  void closeStream();
  char *encrypt(char *objAsChar,int size);
  char *decrypt();
  char *readStream(char* varname);
private:
  static char* fileNames[10000];
};
