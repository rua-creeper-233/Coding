#include<bits/stdc++.h>

using namespace std;

int main() {
    set<string> s;
    char temp;
    string str;
    while ((temp = getchar()) != EOF) {
        if (!isalpha(temp)) continue;
        while (isalpha(temp) || temp == '-') {
            temp = tolower(temp);
            str += temp;
            if(temp=='-'){
                temp = getchar();
                if(temp=='\n'){
                    str.pop_back();
                }else{
                    temp= tolower(temp);
                    str+=temp;
                }
            }
            temp = getchar();
        }
        s.insert(str);
        str = "";
    }
    for (auto it: s) {
        cout << it << endl;
    }
    return 0;
}
//
// Created by Invalid_index on 24-10-30.
//
