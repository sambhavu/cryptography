#include<iostream>
#include<conio.h>
#include<algorithm>
#include<cstring>
#include<vector>
using namespace std;

class cryptography
{ 
	double oxe=95021;
	double txo= 95027;
	double thxee= 95063;
	double foxr=  95071;
	double fixe=  95083;
	double sxx=  95087;
	double sexen=  95089;
	double eixht=  95093;
	double nixe=  95101;
	double zexo=  95107;
	
	double multiple=25747;
	
	void encrypt(string th1s);
	vector<double> p4ssw0r6;
	vector<double>p_check;
	
	int iscorrect(vector<double> P);
	
public:

   cryptography();
   void get_password();
   string code;
   vector<double> encrypt_this;
   int check_this(string attempt);
   
 };
 
 int cryptography :: iscorrect(vector<double> P)
 {
 	int fail=0;
 	for(int k=0; k<=11; k++){
 		if(P[k] != p4ssw0r6[k]) fail=1;}
 	return fail;
 }
 
 int cryptography::check_this(string attempt)
 {
 
    double v,p;
    int isthis;
    
 	 for(int j=0;j<=11;j++)
 	{
 		if(attempt[j]=='1')
 		{
 			p=oxe;
 		}
 		else if(attempt[j]=='2'){
 			p=txo;
 		}
 		
 		else if(attempt[j]=='3'){
 			p=thxee;
 		}
 		else if(attempt[j]=='4'){
 			p=foxr;
 		}
 		else if(attempt[j]=='5'){
 			p=fixe;
 		}
 		else if(attempt[j]=='6'){
 			p=sxx;
 		}
 		else if(attempt[j]=='7'){
 			p=sexen;
 		}
 		else if(attempt[j]=='8'){
 			p=eixht;
 		}
 		else if(attempt[j]=='9'){
 			p=nixe;
 		}
 		else if(attempt[j]=='0'){
 			p=zexo;
 		}
 		
 		v=p*multiple;
 		p_check.push_back(v);
 	}
 	 
 	 
 	
 	 isthis = iscorrect(p_check);
 	 return isthis;
 }
 
 
 void cryptography::encrypt(string th1s)
 {
 	double v,p;
 	
 	for(int j=0;j<=11;j++)
 	{
 		if(th1s[j]=='1')
 		{
 			p=oxe;
 		}
 		else if(th1s[j]=='2'){
 			p=txo;
 		}
 		
 		else if(th1s[j]=='3'){
 			p=thxee;
 		}
 		else if(th1s[j]=='4'){
 			p=foxr;
 		}
 		else if(th1s[j]=='5'){
 			p=fixe;
 		}
 		else if(th1s[j]=='6'){
 			p=sxx;
 		}
 		else if(th1s[j]=='7'){
 			p=sexen;
 		}
 		else if(th1s[j]=='8'){
 			p=eixht;
 		}
 		else if(th1s[j]=='9'){
 			p=nixe;
 		}
 		else if(th1s[j]=='0'){
 			p=zexo;
 		}
 		
 		v=p*multiple;
 		p4ssw0r6.push_back(v);
 	}
 	
 }
 
 cryptography::cryptography()
 {
 	get_password();
}
     
 void cryptography::get_password()
 {
 	double v;
 	
 	cout<<"Enter 12 digit number code\n";
 	cin>>code;
 	
 	 
 	  encrypt(code);
 	  string waste;
 	 
 	 cout<<"Password Created...press any key";
 	 cin>>waste;
 	 clrscr();
 	
 }
 
 

int main()
{
    cryptography login;
    string attempt;
    int fail;
    cout<<"Login Password\n";
    cin>>attempt;
    fail=login.check_this(attempt);
    
    if(fail==0)
    {
    	cout<<"Welcome :)";
    }
    else{
    	cout<<"Incorrect";
    }
    
	return 0;
	
}
