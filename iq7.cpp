#include <iostream>
using namespace std;
int main(){
	int age;
	cout<<"tell me your age"<<endl;
	cin>>age;
	if((age<18) &&(age>0)){
		cout<<"you can not come to the party "<<endl;
		}
		else if(age==18){
						cout<<"you cannot come to the party as you are kid  "<<endl;
			}
			else{
				cout<<"you can come "<<endl;
			}
	return 0;
}