#include<bits/stdc++.h>

using namespace std;

int main() {
    set<string> s;
    char temp;
    string str;
    int count = 0;
    while ((temp = getchar()) != EOF) {
        if (!isalpha(temp)) continue;
        while (isalpha(temp)) {
            temp = tolower(temp);
            str += temp;
            temp = getchar();
        }
        s.insert(str);
        str = "";
    }
    while (!s.empty()) {
        cout << *s.begin() << endl;
        s.erase(s.begin());
    }
    return 0;
}
//
// Created by Invalid_index on 24-10-30.
//
