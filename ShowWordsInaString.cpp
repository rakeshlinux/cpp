 #include <string.h> #include<iostream> using namespace std; int main() { char str[80] = "This is rakesh from cbsetoday website"; const char s[2] = " "; char *token; token = strtok(str, s); while( token != NULL ) { cout<<strrev(token)<<" "; token = strtok(NULL, s); } return(0); } 