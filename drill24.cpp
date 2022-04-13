#include <iostream>
#include "include/Matrix.h"

using Numeric_lib::Matrix;

//4.feladat egyik része
void sqrt_4{
	int val;
	std::cin>>val;
	if(val<0)
	 std::cout<<"no square root\n";
	else
		std::cout<<sqrt(val)<<"\n";
	
}
int main()
try{
//1. feladat:
std::cout<<"Az objektumok mérete:\n"
		 cout<<"char:" << sizeof(char)<< "\n";
		 cout<<"short:" << sizeof(short)<< "\n";
		 cout<<"int:" << sizeof(int)<< "\n";
		 cout<<"long:" << sizeof(long)<< "\n";
		 cout<<"float:" << sizeof(float)<< "\n";
		 cout<<"double:" << sizeof(double)<< "\n";
		 cout<<"int*:" << sizeof(int*)<< "\n";
		 cout<<"double*:" << sizeof(double*)<< "\n";
		 
//2.feladat:
Matrix<int> a(10);
Matrix<int> b(100);
Matix<double> c(10);
Matrix<int,2> d(10,10);
Matrix<int,3> e(10,10,10);

std::cout<<"Mátrix sizeof\n";
		 cout<<"Matrix<int>(10)"<<sizeof(a)<<"\n";
		 cout<<"Matrix<int>(100)"<<sizeof(b)<<"\n";
		 cout<<"Matrix<double>(10)"<<sizeof(c)<<"\n";
		 cout<<"Matrix<int,2>(10,10)"<<sizeof(d)<<"\n";
		 cout<<"Matrix<int,3>(10,10,10)"<<sizeof(e)<<"\n";

//3.feladat
std::cout<<"Mátrix elemei\n";
				 <<"Matrix<int>(10)"<<a.size<<"\n";
				 <<"Matrix<int>(100)"<<b.size<<"\n";
				 <<"Matrix<double>(10)"c.size<<"\n";
				 <<"Matrix<int,2>(10,10)"<<d.size<<"\n";
				 <<"Matrix<int,3>(10,10,10)"<<e.size<<"\n";
				 
//4.feladat
std::cout<<"Kérek 5 értéket\n";
for(i=0;i<5;++i)
	sqrt_out();

//5.feladat
std::cout<<"10 érték\n";
const int ent=10;

Matrix<double> md(ent);
for(int=0; i<ent.size(), ++i)
	std::cin>>md[i];
	
std::cout<<md<<"\n";

//6.feladat:
std::cout<<"Dimension\n";
int m,n;
std::cin>>m>>n;
std::cout<<"\n";

Matrix<double,2> mult_table(m,n);

for (int i=0; i<m; ++i) {
	for(int j=0;j<n;++j)
		
}



return 0;
}catch(Matrix_error& e) {
	std::cerr<< e.what() <<"\n";
	return 1;
}
