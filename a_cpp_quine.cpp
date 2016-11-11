#include <fstream>
#include <iostream>
#include <string>
using namespace std;
string l[] = {
"#include <fstream>",
"#include <iostream>",
"#include <string>",
"using namespace std;",
"string l[] = {",
"};",
"string header = ",
"string filename = ",
"int quote = 34;",
"int comma = 44;",
"int semicolon = 59;",
"int main() {",
"  ofstream myfile;",
"  int i;",
"  cout<<header<<endl;",
"  myfile.open(filename);",
"  for (i=0;i<5;i++) myfile<<l[i]<<endl;",
"  for (i=0;i<25;i++) myfile<<(char) quote<<l[i]<<(char) quote<<(char) comma<<endl;",
"  myfile<<(char) quote<<l[25]<<(char) quote<<endl;",
"  myfile<<l[5]<<endl;",
"  myfile<<l[6]<<(char) quote<<header<<(char) quote<< (char) semicolon<<endl;",
"  myfile<<l[7]<<(char) quote<<filename<<(char) quote<< (char) semicolon<<endl;",
"  for (i=8; i<26; i++) myfile<<l[i]<<endl;",
"  myfile.close();",
"  return 0;",
"}"
};
string header = "Warning ~ This is a self-replicating program!";
string filename = "another_cpp_quine.cpp";
int quote = 34;
int comma = 44;
int semicolon = 59;
int main() {
  ofstream myfile;
  int i;
  cout<<header<<endl;
  myfile.open(filename);
  for (i=0;i<5;i++) myfile<<l[i]<<endl;
  for (i=0;i<25;i++) myfile<<(char) quote<<l[i]<<(char) quote<<(char) comma<<endl;
  myfile<<(char) quote<<l[25]<<(char) quote<<endl;
  myfile<<l[5]<<endl;
  myfile<<l[6]<<(char) quote<<header<<(char) quote<< (char) semicolon<<endl;
  myfile<<l[7]<<(char) quote<<filename<<(char) quote<< (char) semicolon<<endl;
  for (i=8; i<26; i++) myfile<<l[i]<<endl;
  myfile.close();
  return 0;
}
