 #include<iostream> #include<conio.h> using namespace std; void fun1(int n); void fun2(int m); void fun3(int j,int k); void test1(int n); void test2(int n); void test3(int n); void test4(int n); int main() { int n; cout<<"Enter a num(1-100,00,000): "; cin>>n; cout<<"\n You have entered : "; if(n<=100) test1(n); else if(n>100&&n<1000) test2(n); else if(n>=1000&&n<=100000) test3(n); else if(n>100000&&n<=10000000) test4(n); return 0; } void test1(int n) { int m,j,k; if(n>=0&&n<=10) fun1(n); else if(n>10&&n<20) { m=n%10; fun2(m); } else if(n>=20&&n<=100) { j=n/10; k=n%10; fun3(j,k); } } void test2(int n) { int b,c; c=n/100; fun1(c); cout<<"hundred "; b=n%100; test1(b); } void test3(int n) { int a,b,c; if(n==1000) { cout<<" Thousand "; exit(0); } else if(n==100000) { cout<<"Lakh"; exit(0); } else{ a=n/1000; test1(a); cout<<"Thousand "; c=n%1000; if(c<=99) test1(c); else test2(c); } } void test4(int n) { int a,b; if(n==10000000) { cout<<" one crore"; exit(0); } a=n/100000; test1(a); cout<<"Lakhs "; b=n%100000; if(b==0)exit(0); else if(b<=99)test1(b); else if(b>99&&b<=999)test2(b); else test3(b); } void fun1(int n) { switch(n) { case 0:cout<<"zero";break; case 1:cout<<"one";break; case 2:cout<<"two";break; case 3:cout<<"three";break; case 4:cout<<"four";break; case 5:cout<<"five";break; case 6:cout<<"six";break; case 7:cout<<"seven";break; case 8:cout<<"eight";break; case 9:cout<<"nine";break; case 10:cout<<"ten";break; default:cout<<""; } } void fun2(int m) { switch(m) { case 1:cout<<"eleven";break; case 2:cout<<"twelve";break; case 3:cout<<"thirteen";break; case 4:cout<<"fourteen";break; case 5:cout<<"fifteen";break; case 6:cout<<"sixteen";break; case 7:cout<"seventeen";break; case 8:cout<<"eighteen";break; case 9:cout<<"nineteen";break; default:cout<<""; } } void fun3(int j,int k) { switch(j) { case 2:cout<<"twenty ";break; case 3:cout<<"thirty ";break; case 4:cout<<"fourty ";break; case 5:cout<<"fifty ";break; case 6:cout<<"sixty ";break; case 7:cout<<"seventy ";break; case 8:cout<<"eighty ";break; case 9:cout<<"ninty ";break; case 10:cout<<"hundred";break; default:cout<<""; } fun1(k); } 