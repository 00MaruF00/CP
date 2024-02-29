#include<bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;
    while(test--){
        int counter = 0;
	for(int i = 0 ; i < 3 ; i++){
	    int a;
	    cin >> a;
	    if(a)counter++;
	}
	if(counter >= 2) std::cout <<  "Not now" << std::endl;
	else cout << "Water filling time\n";
    }
	return 0;
}
