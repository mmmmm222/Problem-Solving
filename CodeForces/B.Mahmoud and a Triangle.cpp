/*
                                            بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم

                    قَالَ رَبِّ اشْرَحْ لِي صَدْرِي (25) وَيَسِّرْ لِي أَمْرِي (26) وَاحْلُلْ عُقْدَةً مِّن لِّسَانِي (27) يَفْقَهُوا قَوْلي

 */
#include <bits/stdc++.h>
using namespace std;

bool compare(int a, int b) {
    return a < b; // Sort in descending order
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout << fixed << setprecision(1);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("errors.txt", "w", stderr);
#endif
    //--------------------

    int n;cin>>n;
    long long arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    sort(arr,arr+n,compare);
    for(int i=0; i+2<n; i++) {
        if(arr[i]+arr[i+1]>arr[i+2]) {
            cout <<"YES";
            return 0;
        }
    }
    cout <<"NO";


}