#include <iostream>
int main() {
  int n,c=1;
  std::cin >> n;
  int ary[n][n];
  for(int k=-(n-1);k<n;k++)
    for(int i=(k+abs(k))/2;i<n+(k-abs(k))/2;i++)
      ary[(n+k)%2*i+(n+k+1)%2*(n+k-i-1)][(n+k)%2*(n+k-i-1)+(n+k+1)%2*i]=c++;
  for(int i=0;i<n*n;i++)
    std::cout<<ary[i/n][i%n]<<"\t"<<(i%n==n-1 ? "\n" : "");
}
