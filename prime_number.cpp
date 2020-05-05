#include<iostream>
#include<algorithm>
using namespace std;

class cryptography
{ 
	public:
    void prime();
	double prime_=1;
 };
     
    
void cryptography::prime()
    {
    	
    	for(int i=1;i<6917;i++){
    		prime_=prime_*(i+1);
    		}
    		
    	prime_=prime_-1;
   }

int main()
{
    cryptography x;
    x.prime();
    cout<<x.prime_;
	return 0;
	
}
