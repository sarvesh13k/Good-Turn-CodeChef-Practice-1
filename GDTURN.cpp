#include <iostream>
using namespace std;

int main() {
    int T,x,y;
    cin>>T;
    
    for(int i=0; i<T; i++){
        cin>> x >> y;
        if(x+y>6){
            cout << "YES"<<endl;
        }
        else if(x+y<6){
            cout <<"NO"<<endl;
        }
        else{
            cout<< "NO"<< endl;
        }
    }
	return 0;
}
