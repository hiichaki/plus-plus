#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream f("2.txt");
	string s,k;
	getline(f,s,'\0');
	
	cout<<"key:";
	cin>>k;
	
	int n=s.length()/k.length(),
		m=k.length();
		
	if((float(s.length())/k.length()) > s.length()/k.length())
		n++;	
	
	char a[n][m];
	
	for(int i=0,z=0;i<n;++i){
		for(int j=0;j<m;++j,++z){
			if(z>s.length())
				a[i][j]=' ';
			else
				a[i][j]=s[z];
			
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	for(int i=0;i<k.length()-1;i++)
    	for(int j=0;j<k.length()-i-1;j++)
        	if(k[j]>k[j+1]){
	            swap(k[j],k[j+1]);
				for(int i=0;i<n;++i)
					swap(a[i][j],a[i][j+1]);	
			}
	
}
