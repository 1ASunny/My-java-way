#include<iostream>
using namespace std;
class String 
{
public:
  String(const char *str=NULL){
  	my=str;
  cout<<"gouzao "<<my<<endl;
  };  
  String(const String &r){cout<<"kaobei gouzao "<<my<<endl;
  };  
  ~String(){cout<<"xigou "<<my<<endl;}
private:
  char *my;  
};
int main() 
{
  String s1,s2("hello");
  String s3(s2);
  return 0;
}
