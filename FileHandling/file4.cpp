#include<fstream> #include<iostream> using namespace std; int main() { char ch; ifstream fin; fin.open("abc.txt"); while(!fin.eof()) { fin.get(ch); cout<<ch; } fin.close(); return 0; } 