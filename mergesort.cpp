/*
Nama 	: TIVANI SHAKILLA ERVI
NPM		: 140810170014
Kelas	: B
QUIZ 1 : MERGE SORT + Menghitung RUNTIME
*/

#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;
 
int a[50];  
void merge(int,int,int);  

void merge_sort(int low,int high)  {  
 int mid;  
 if(low<high)  {  
  mid=(low+high)/2;  
  merge_sort(low,mid);  
  merge_sort(mid+1,high);  
  merge(low,mid,high);  
 }  
}  

void merge(int low,int mid,int high)  {  
 int h,i,j,b[50],k;  
 h=low;  
 i=low;  
 j=mid+1;  
	 while((h<=mid)&&(j<=high))   {  
  		if(a[h]<=a[j])   {  
   			b[i]=a[h]; h++;  
  		}  
  			else    {  
   				b[i]=a[j]; j++;  
  			} 
  		i++;  
 	}		  
 	if(h>mid)  {  
  		for(k=j;k<=high;k++)  {  
   			b[i]=a[k]; i++;  
  		}  
 	}	  
 		else  {  
  			for(k=h;k<=mid;k++)  
  		{		  
   		b[i]=a[k]; i++;  
  		}	  
 		}	  
 	for(k=low;k<=high;k++)  
  		a[k]=b[k];  
}	  

int main()  {  
 int num,i;   
 cout<<"\t\t\tMERGE SORT PROGRAM"<<endl;  
 cout<<endl;  
 cout<<endl<<endl;  
 cout<<"Masukkan Banyak Bilangan: ";cin>>num;  
   cout<<endl;  
 cout<<"Sekarang masukkan "<< num <<" Bilangan yang ingin Diurutkan :"<<endl;  
 for(i=1;i<=num;i++)  {  
  cout<<"Bilangan ke-"<<i<<" ";cin>>a[i] ;  
 }  
 merge_sort(1,num);  
 cout<<endl;  
 cout<<"Hasil akhir pengurutan :"<<endl;  
 cout<<endl;  
 for(i=1;i<=num;i++)  
  cout<<a[i]<<" ";  
 cout<<endl<<endl<<endl<<endl;  

	float x,y;
	clock_t time_req;

	// Using pow function
	time_req = clock();
	for(int i=0; i<100000; i++)
	{
		y = log(pow(i,5));
	}
	time_req = clock() - time_req;
	cout << "Using pow function, it took " << (float)time_req/CLOCKS_PER_SEC << " seconds" << endl;
	
	// Without pow function
	time_req = clock();
	for(int i=0; i<100000; i++)
	{
		y = log(i*i*i*i*i);
	}
	time_req = clock()- time_req;
	cout << "Without using pow function, it took " << (float)time_req/CLOCKS_PER_SEC << " seconds" << endl;

	return 0;
} 

