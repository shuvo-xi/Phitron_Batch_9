#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    
    int a[n];
    for(int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }
    
    // ascending অর্ডারে সর্ট করার জন্য (ছোট থেকে বড়)
    // sort(a, a + n);  
    
    // descending অর্ডারে সর্ট করার জন্য (বড় থেকে ছোট)
    sort(a, a + n, greater<int>()); 
    
    for(int i = 0; i < n; i++) 
    {
        cout << a[i] << " ";
    }
    
    return 0;
}