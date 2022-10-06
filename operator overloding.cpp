/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>

using namespace std;

class complex

{

      int real,img;

public:

complex()

{

      real=0;img=0;

};

      complex operator+(complex c1)

      {
          complex temp;

          temp.real=real+c1.real;

          temp.img=img+c1.img;

          return temp;

      };

      complex operator*(complex c2)

      {

        complex temp;

        temp.real= (real*c2.real)-(img*c2.img);

        temp.img= (real*c2.img)+(img*c2.real);

        return temp;

      };
      
      friend ostream &operator<<(ostream &out, complex &c);

      friend istream &operator>>(istream &in, complex &c);

};

ostream &operator<<(ostream &out, complex &c)

{

    out<<c.real<<"+"<<c.img<<"i";

    return out;

}

istream &operator>>(istream &in, complex &c)

{

    in>>c.real>>c.img;

    return in;

}

int main()

{
	complex c1,c2,c3;
	cout<<"Enter the real and imaginary part of 1st complex no."<<endl;
	cin>>c1;
	cout<<"Enter the real and imaginary part of second complex no."<<endl;
	cin>>c2;
	cout<<"You have entered the following complex numbers"<<endl;
	cout<<c1<<endl;
	cout<<c2<<endl;
	c3=c1+c2;
	cout<<"Addition is"<<" "<<c3<<endl;
	c3=c1*c2;
	cout<<"Multiplication is"<<" "<<c3<<endl;
}


