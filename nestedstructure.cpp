// program to print n natural numbers from 1 to n

#include<iostream>
using namespace std;
struct name
{ string fnm;
  string mnm;
  string lnm;
};
struct address
{ int hno;
  string colony;
  int pinc;
  string city;
};
struct student
{ int rno;
  int marks;
  name nm;
  address adr;
};
int main(){
struct student sonu;

sonu.rno=101;
sonu.marks=88;
sonu.nm.lnm="yadav";
sonu.adr.hno=25;
cout<<sonu.rno<<" "<<sonu.marks<<" "<<sonu.nm.lnm<<" ";
return 0;
    
}
