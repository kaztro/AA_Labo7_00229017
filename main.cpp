#include <iostream>

using namespace std;

int main() {
    int n;
    int p[10] = {1, 5, 8, 9, 10, 17, 17, 20, 24, 30};
    
    cout << "Gimme n" << endl;
    
    cin >> n;
    
    int sol[n];
    
    sol[0] = 0;
    
    for(int i = 1; i < n; i++) {
        int q = -1;
        for(int j = 0; j <= i; j++) {
            q = max(q, p[j] + sol[i - j - 1]);
        } 
        sol[i] = q;
    }
    
    cout << sol[n - 1];

    return 0;
}
