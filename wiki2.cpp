#include <bits/stdc++.h>

typedef long long int ll;
typedef unsigned int ui;
typedef unsigned long long int ul;

using namespace std;

void DFS(int, vector<int>[], vector<bool>);

int main()
{

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin); 
freopen("output.txt", "w", stdout);
#endif 

ios_base::sync_with_stdio(false);
cin.tie(NULL);

ui test;
cin >> test; 
    while (test--){
    int arr[5], InWin = 0, EngWin = 0;
    for(int i=0; i < 5; i++){
    cin >> arr[i]; 
    if(arr[i] == 1) InWin++;
    else if(arr[i]==2) EngWin++; 
}

if(InWin > EngWin) cout << "INDIA\n"; 

else if (InWin< EngWin) cout << "ENGLAND\n"; 

else cout << "DRAW\n";

}
return 0;

}
