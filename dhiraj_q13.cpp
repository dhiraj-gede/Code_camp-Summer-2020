int main() {
    int N, a, count=0;
    cin >> N;
    for ( int i = 1; count <= N-1; i++) {
        if ( i == 1 )
            continue;
        a = 1;

        for (int j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                a = 0;
                break;
            }
        }
        if (a == 1) {
            cout << i << " ";
            count++;
        }

    }
    return 0;
}
