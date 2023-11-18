//Sum of 1 and last
#include <iostream>
using namespace std;

int main() {
	int t,n;
	scanf("%d",&t);
	for (int i=0;i<t;i++){
	    int ans=0,frnt=0;
	    scanf("%d",&n);
	    ans += n%10;
	    while(n>0){
	        frnt=n%10;
	        n /= 10;
	    }
	    ans+=frnt;
	    printf("%d \n",ans);
	} 
	return 0;
}
