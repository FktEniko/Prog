#include <iostring>
#include <vector>
#include <iostream>

class Less_than {
double v;
public:
	Less_than(double vv) :(v{vv} { }
	bool operator ()(const double val) {return val <v;}
};
template<typename C> void print(const C& c, char sep ='\n')


//1.
int main () {
try{
const std::string iname {"valami.txt"};
std::fstream ifs {iname};
if(ifs!) throw std::runtime_error("nem találom a megadott fájlt"+iname);

std::vector <double> vd;
for (double d; ifs>> d;)
vd.push_back(d);


//2.
print(vd);


//3. 
std::vector<int> vi (vd.size());
std::copy(vd.begin(), vd.end(), vi.begin(), vi.end());



//4. 
for(int i=0; i<vd.size(); i++) 
	std::cout<<vd[i]<<'\t'<<vi[i] << '\n';


//5.
double double_sum=std::accumulate( vd.begin(), vd.end(), 0.0);
std:: cout<<"Double sum:"<< double_sum <<'\n';

//6.
double diff_sum=std::inner_product(vd.begin(), vd.end(), vi.begin(), 0.0, std::plus<double>(), std::minus<double>());




}catch(exception& e){
	cerr<"Exception."<< e.what() <<'\n';
	retrun 1;
}catch(..)
	cerr<"Something went wrong.\n";
	return 2;
}
}
