 #include<iostream> #include<string.h> #include<conio.h> #include<ctype.h> using namespace std; int main() { char str[100]; int i; int valid = 1; cout<<"\n Enter any identifier :"; cin.getline(str,100); cout<<"\n Entered Identifier :"<<str; if(isalpha(str[0])||str[0]=='_') valid = 1; else valid = 0; if(valid==1) { for(i=1;i<strlen(str);i++) { if(!(isalpha(str[i]) || isdigit(str[i])|| str[i]=='_')) {valid = 0; break;} } } if(valid == 0 ) cout<<"\n Invalid identifier"; else cout<<"\n Valid Identifier"; return 0; } 