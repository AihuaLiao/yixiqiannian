#include<iostream>
#include<fstream>
using namespace std;
int main() {

#if defined(OFSTREAM)
	ofstream outstr("../out.txt");
	outstr << "�������" << endl;	
#endif

	return 0;
}
