#include "bigint.h"
#include <sstream>
#include <map>
using namespace std;
bigint min(bigint a,bigint b){
	if(a<b)return a;
	else return b;
}
bigint dlog(bigint a,bigint b,bigint c){
	bigint i=1,k=0;
	while(true){
		if(i*i>=c){
			k=i;
			break;
		}
		i=i+1;
	}
	map<bigint,bigint>m;
	map<bigint,bigint>::iterator it;
	for(bigint i=1;i<=k;i=i+1){
		m[exp(a,i,c)]=i;
	}
	bigint r=0;
	bigint ai=inverse(a,c);
	bigint ans=c;
	while(r*k<=c){
		bigint t=mult(b,exp(ai,r*k,c),c);
		it=m.find(t);
		if(it!=m.end()){
			bigint s=it->second;
			ans=s+r*k;
			break;
		}
		r=r+1;
	}
	if(ans==c){return -1;}
	return ans;
}