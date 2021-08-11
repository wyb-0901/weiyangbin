#include <iostream>
using namespace std;
int main(){
	void message();
	message.send(&222);
	cout<<message.send<<endl;
	return 0;
}
