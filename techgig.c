

#include <iostream>
using namespace std;
int main()
{
	char str[10000];
	int i,dot=0;
	for(i=1;i<str[i];i++){
	    if(isdigit(str[i]=='.')){
	        dot++;
	    }
	}
	if(dot==1){
	    cout<<"This input is of type Float"<<endl;
	}else if(dot==0){
	    cout<<"This input is of type Integer"<<endl;
	}else if(isalpha(str[0])){
	    cout<<"This input is of type string"<<endl;
	}else{
	    cout<<"This is something else"<<endl;
	}
	return 0;
}
