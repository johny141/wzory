#include <iostream>
#include <math.h>
#include <cmath>


using namespace std;

int main()
{
float x, a, b, c;


	cout<<"podaj liczbe"<<endl;
	cin>>x;



	a=pow(x, 0.125);

	b=(2*(sqrt(pow(x, 2) +1))* abs(x)) / (sin (x*(pow(x,2))));

	c=((pow(pow(x,2)+abs(x),0.25))/(pow(x,-1.6)*pow(tan(x),2))) * M_E * exp(x);

	cout<<a<<endl<<b<<endl<<c<<endl;

    return 0;

}
