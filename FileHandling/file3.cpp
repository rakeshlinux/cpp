#include<fstream> #include<iostream> using namespace std; int main() { char str[1000]; ifstream fin; fin.open("abc.txt"); fin.getline(str,1000); cout<<"\n Data from file : "; cout<<str; fin.close(); return 0; } 