#include<iostream>
#include <string>
#include <vector>
using namespace std;
// template<class InputIterator> string (InputIterator begin, InputIterator end);


int main(){
    string x;
    vector<char> v;
    double n1, n2;
    while(cin >> x) {
        for (char ch: x){
            // if (ch == '\ufeff'){
            //     // continue;
            // }
            if((ch == ' ')||(ch == ',')){
                if (!v.empty()){
                    n2 = n1;
                    // cout << string(v.begin(), v.end()) << endl;
                    n1 = stod(string(v.begin(), v.end()));
                    // cout << n1 << endl;
                }
                v = {};
            }
            if((ch == '1')||(ch == '2')||(ch == '3')||(ch == '4')||(ch == '5')||(ch == '6')||(ch == '7')||(ch == '8')||(ch == '9')||(ch == '0')||(ch == '.')||(ch == '-')){
                v.push_back(ch);
            }
        
            // cout << ch << endl;
            // cout
        }
        if (!v.empty()){
            n2 = n1;
            // cout << string(v.begin(), v.end()) << endl;
            n1 = stod(string(v.begin(), v.end()));
            // cout << n1 << endl;
        }
        v = {};

        // 0 if d[1]<d[0] else 1
        if(n1 < n2){
            cout << 1 << endl;
        }
        else{
            cout << 0 << endl;
        }



        // 0 if d[1]<d[0] else 1
    }
    
    return 0;
}