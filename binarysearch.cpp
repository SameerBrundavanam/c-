#include <iostream>
using namespace std;


int b_search(vector<int>v,int n,int key){
	
	int start=0;
	
	int end=n-1;
	
	int mid=start+(end-start)/2;
	
	while(start<=end){
		
	if(v[mid]==key) return mid;
	
	if(v[mid]>key) end=mid-1;
	
	if(v[mid]<key) start=mid+1;
	
	mid=(start+end)/2;
	
	}
	
	return -1;
}

int main(){
	
	//Your code here.
	
	vector<int>v(10);
	
	cout<<v.size()<<endl;
	
	int key_value; 
	
	for (int i = 0; i < v.size(); ++i)	cin>>v[i];
		
	int ans= b_search(v,10,30);

	cout<<"The index of te given key value is:"<<ans<<endl;
	
}

