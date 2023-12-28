inline read() {
    int x = 0, f = 1;
    char ch = getchar();
    while (ch < '0' || ch > '9') {
        if (ch == '-') {
            f = -1;
            ch = getchar();
        }
    }
    while (ch <= '9' && ch >= '0') {
        x = x * 10 + (ch - '0');
        ch = getchar();
    }
    return x * f;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
//
// Created by Invalid_index on 2023/5/7.
//
