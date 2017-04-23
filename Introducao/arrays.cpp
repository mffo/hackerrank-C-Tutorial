#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d",&n);

    int vet[n];  

    
    for(int i = 1;i<=n;i++)
    {
        scanf("%d",&vet[i]);
    }

    for(int i = n;i>=1;i--)
    {
        printf("%d ",vet[i]);
    }
    
    
    return 0;
}
