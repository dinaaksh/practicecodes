#include <bits/stdc++.h>
using namespace std;

float shortestJobFirst(vector<int> jobs){
    sort(jobs.begin(),jobs.end());
    int n=jobs.size();
    float wait=0;
    float total=0;
    for(int i=0;i<n;i++){
        wait+=total;
        total+=jobs[i];
    }
    return wait/n;
}

int main() {
    vector<int> jobs = {4, 3, 7, 1, 2};
    
    cout << "Array Representing Job Durations: ";
    for(int i = 0; i < jobs.size(); i++){
        cout << jobs[i] << " ";
    }
    cout << endl;
    
    float ans = shortestJobFirst(jobs);
    cout << "Average waiting time: "<< ans;
    cout << endl;

    return 0;
}
