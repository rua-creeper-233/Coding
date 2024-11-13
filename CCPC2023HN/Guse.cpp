#include<bits/stdc++.h>

using namespace std;

int main() {
    char a;

    while ((a = getchar()) != EOF) {
        cout<< "'" << a << "',";
        if (a == '!') {
            break;
        }
    }
    return 0;
}
//
// Created by Invalid_index on 24-11-6.
//
