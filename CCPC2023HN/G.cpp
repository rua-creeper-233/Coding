#include<bits/stdc++.h>

using namespace std;
int t;

int big_num_index[11] = {1, 9, 17, 25, 33, 41, 49, 57, 65, 73};
int small_num_index[11] = {1, 7, 13, 19, 25, 31, 37, 43, 49, 55};
int charc_index[3] = {1, 9, 32};

vector<string> Big_num = {".................................................................................",
                          ".................................................................................",
                          ".0000000.......1.2222222.3333333.4.....4.5555555.6666666.7777777.8888888.9999999.",
                          ".0.....0.......1.......2.......3.4.....4.5.......6.............7.8.....8.9.....9.",
                          ".0.....0.......1.......2.......3.4.....4.5.......6.............7.8.....8.9.....9.",
                          ".0.....0.......1.2222222.3333333.4444444.5555555.6666666.......7.8888888.9999999.",
                          ".0.....0.......1.2.............3.......4.......5.6.....6.......7.8.....8.......9.",
                          ".0.....0.......1.2.............3.......4.......5.6.....6.......7.8.....8.......9.",
                          ".0000000.......1.2222222.3333333.......4.5555555.6666666.......7.8888888.9999999.",
                          "................................................................................."};
vector<string> Small_num = {".............................................................",
                            ".00000.....1.22222.33333.4...4.55555.66666.77777.88888.99999.",
                            ".0...0.....1.....2.....3.4...4.5.....6.........7.8...8.9...9.",
                            ".0...0.....1.22222.33333.44444.55555.66666.....7.88888.99999.",
                            ".0...0.....1.2.........3.....4.....5.6...6.....7.8...8.....9.",
                            ".00000.....1.22222.33333.....4.55555.66666.....7.88888.99999.",
                            ".............................................................",
                            ".............................................................",
                            ".............................................................",
                            "............................................................."};

vector<string> charc = {".................................",
                        ".................................",
                        ".........IIIIIII.N.....N.FFFFFFF.",
                        "............I....NN....N.F.......",
                        ".=======....I....N.N...N.F.......",
                        "............I....N..N..N.FFFFFFF.",
                        ".=======....I....N...N.N.F.......",
                        "............I....N....NN.F.......",
                        ".........IIIIIII.N.....N.F.......",
                        "................................."};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--) {
        int a, b;
        scanf("%d^{%d}", &a, &b);
        string sa = to_string(a);
        string sb = to_string(b);
        long long ans=0;
    }
    return 0;
}
//
// Created by Invalid_index on 24-11-6.
//
