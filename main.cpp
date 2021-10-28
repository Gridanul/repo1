#include<iostream>
#include <math.h>
using namespace std;

class NrCompl 
{
	private:
		float re, im;
	public:
		NrCompl(float, float);

		friend float abs(NrCompl&);
};

float abs(NrCompl &nrc) 
{
	return sqrt(nrc.re*nrc.re+nrc.im*nrc.im);
}

NrCompl::NrCompl(float re1, float im1)
{
	re=re1;
	im=im1;	
}

int main() 
{
	NrCompl A(10.2, 7.3);
	cout<<"Norma este: "<<abs(A);
	return 123;
}
