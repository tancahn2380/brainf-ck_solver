#include "bits/stdc++.h"
using namespace std;

string str;
char num[200];
int idx = 100;
int main(){
    cin >> str;
    for(int i = 0;i < (int)str.size();i++){
        if(str[i] == '>')idx++;
        else if(str[i] == '<')idx--;
        else if(str[i] == '+')num[idx]++;
        else if(str[i] == '-')num[idx]--;
        else if(str[i] == '.')cout << num[idx];
        else if(str[i] == '['){
            if(num[idx] == 0)while(str[i] != ']')i++;
        }
        else if(str[i] == ']'){
            if(num[idx] != 0)while(str[i] != '[')i--;
        }
    }
    cout << endl;
}