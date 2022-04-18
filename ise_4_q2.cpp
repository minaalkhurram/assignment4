#include<iostream>
#include<fstream>
#include<ctime>
#include<string.h>
#include <cstring>
#include<string>
#include<iomanip>
using namespace std;

int start[2];
int end[2];

int verticaldown(char **arr,char **arr1,int row,int size,int len)
{
	int count = 0,k=0,visit=0;

	for (int i = 0; i < size&&visit!=-1; i++)
	{

		for ( int j = 0, k=0; j<size&&visit!=-1; j++)
		{
			if (arr1[row][k]== arr[j][i])
			{
			    start[0]=j+2;
			    end[0]=j+2;
			    end[1]=i;
			    if(count==0)
			    start[1]=i;
			    
				if(arr1[row][k+1]!=arr[j-1][i]&&k==0)
				{
				    count=0;
				    k=0;
				}
			    
				k++;
				count++;
			
		
			}
			
			if(count==len)
		     visit=-1;
		 
		  
		}
	}
	
	
	if (count == len)
	{
	    cout<<"\n WORD FOUND !! "<<endl;
	      
	        cout<<"{"<<start[1]<<","<<start[0]<<"}";
	        cout<<" "<<"{"<<end[1]<<","<<end[0]<<"}";
	        
        
		return -1;

	}
}

int horizontalright(char **arr,char **arr1,int row,int size,int len)
{
	
int count = 0,k=0,visit=0;

	for (int i = 0; i < size&&visit!=-1; i++)
	{

		for ( int j = 0, k=0; j < size&&visit!=-1; j++)
		{
			if (arr1[row][k]== arr[i][j])
			{
			    if(count==0)
			    start[1]=j;
			    start[0]=i;
			    end[0]=i;
			    end[1]=j;
			    
			    
				if(arr1[row][k+1]!=arr[i][j+1]&&k==0)
				{
				    count=0;
				    k=0;
				}
			    
				k++;
				count++;
			
		
			}
			
			if(count==len)
		     visit=-1;
		 
		  
		}
	}
	
	if (count == len)
	{
	    cout<<"\n WORD FOUND !! "<<endl;
	    
	        cout<<"{"<<start[0]<<","<<start[1]<<"}";
	          cout<<" "<<"{"<<end[0]<<","<<end[1]<<"}";
        
		return -1;

	}


}
int horizontalleft(char **arr,char **arr1,int row,int size,int len)
{
	
int count = 0,k=0,visit=0;

	for (int i = size-1; i > 0&&visit!=-1; i--)
	{

		for ( int j = size-1, k=0; j>0&&visit!=-1; j--)
		{
			if (arr1[row][k]== arr[i][j])
			{
			    start[0]=j+1;
			    end[0]=j+1;
			    end[1]=i-1;
			    if(count==0)
			    start[1]=i-1;
			    
				if(arr1[row][k+1]!=arr[i][j-1]&&k==0)
				{
				    count=0;
				    k=0;
				}
			    
				k++;
				count++;
			
		
			}
			
			if(count==len)
		     visit=-1;
		 
		  
		}
	}

	
	if (count == len)
	{
	    cout<<"\n WORD FOUND !! "<<endl;
	      cout<<" "<<"{"<<end[0]<<","<<end[1]<<"}";
	        cout<<"{"<<start[0]<<","<<start[1]<<"}";
	        
        
		return -1;

	}


}
int verticalup(char **arr,char **arr1,int row,int size,int len)
{
	
int count = 0,k=0,visit=0;

	for (int i = size-1; i > 0&&visit!=-1; i--)
	{

		for ( int j = size-1, k=0; j>0&&visit!=-1; j--)
		{
			if (arr1[row][k]== arr[j][i])
			{
			    start[0]=j+2;
			    end[0]=j+2;
			    end[1]=i;
			    if(count==0)
			    start[1]=i;
			    
				if(arr1[row][k+1]!=arr[j-1][i]&&k==0)
				{
				    count=0;
				    k=0;
				}
			    
				k++;
				count++;
			
		
			}
			
			if(count==len)
		     visit=-1;
		 
		  
		}
	}

	
	if (count == len)
	{
	    cout<<"\n WORD FOUND !! "<<endl;
	      	        cout<<" "<<"{"<<end[1]<<","<<end[0]<<"}";
	        cout<<"{"<<start[1]<<","<<start[0]<<"}";

	        
        
		return -1;

	}


}

int diagnol1(char **arr,char **arr1,int row,int size,int len)
{
	
int count = 0,k=0,visit=0;

for(int i=0;i<size;i++)
{
    

		for ( int j = 0, k=0,t=i; j < size&&visit!=-1; j++,t++)
		{
			if (arr1[row][k]== arr[t][j])
			{
			    start[0]=t;
			    end[0]=j;
			    end[1]=j+1;
			    if(count==0)
			    start[1]=j+1;
			    
				if(arr1[row][k+1]!=arr[t+1][j+1]&&k==0)
				{
				    count=0;
				    k=0;
				}
			    
				k++;
				count++;
			
		
			}
			
			if(count==len)
		     visit=-1;
		 
		  
		}
	}
	
	if (count == len)
	{
	    cout<<"\n WORD FOUND !! "<<endl;
	    
	        cout<<"{"<<start[0]<<","<<start[1]<<"}";
	          cout<<" "<<"{"<<end[0]<<","<<end[1]<<"}";
        
		return -1;

	}
	else
	return 0;
}
int diagnol2(char **arr,char **arr1,int row,int size,int len)
{
	
int count = 0,k=0,visit=0;

for(int i=size;i>0;i--)
{
    

		for ( int j = size, k=0,t=i; j >size&&visit!=-1; j--,t--)
		{
			if (arr1[row][k]== arr[t][j])
			{
			    start[0]=t;
			    end[0]=j;
			    end[1]=j+1;
			    if(count==0)
			    start[1]=j+1;
			    
				if(arr1[row][k+1]!=arr[t-1][j-1]&&k==0)
				{
				    count=0;
				    k=0;
				}
			    
				k++;
				count++;
			
		
			}
			
			if(count==len)
		     visit=-1;
		 
		  
		}
	}
	

	
	if (count == len)
	{
	    cout<<"\n WORD FOUND !! "<<endl;
	    
	        cout<<"{"<<start[0]<<","<<start[1]<<"}";
	          cout<<" "<<"{"<<end[0]<<","<<end[1]<<"}";
        
		return -1;

	}
}

void found()
{
    cout<<"NOT FOUND ";
}
int main() {


	string line2;

	ifstream fin;
	fin.open("output2.txt");
	int size = 11;
	int n= 0;
	char** arr = new char* [size];
	int count = 0;
	if (fin.is_open())
	{

		while (getline(fin, line2))
		{
			arr[count] = new char[size];
		

			for (int i = 0; i < size; i++)
			{

				arr[count][i] = line2[i];
			}


			count++;

		}
	}
	cout << " Your word search puzzle : " << endl << endl;


	for (int i = 0; i < size; i++)
	{
		cout << setw(10);
		for (int j = 0; j < size; j++)
		{

			cout << arr[i][j] << " ";
		} 
		cout << endl;
	}
	cout << endl;

	cout << " How many words do you want to search ? ";
	cin >> n;

	    
    
	char** arr1= new char*[n];
	
	for (int i = 0; i < n; i++)
	{
	    arr1[i]=new char[n];
		cout << " Enter word to be search : " << endl;
		cin >>arr1[i];

	}

int check=0;
  	int len=0;
for(int i=0;i<n;i++)
{
    check=0;
 len=0;
	for(len=0;arr1[i][len]!='\0';len++)
{
}
if(check!=-1)
check=verticalup(arr,arr1,i,size,len);
if(check!=-1)
check=verticaldown(arr,arr1,i,size,len);
if(check!=-1)
 check=horizontalright(arr,arr1,i,size,len);
 if(check!=-1)
check=horizontalleft(arr,arr1,i,size,len);

 if(check!=-1)
        found();
        if(check!=-1)
        check=diagnol2(arr,arr1,i,size,len); 
        if(check!=-1)
check=diagnol1(arr,arr1,i,size,len);  
  
    


    
    
}



	for (int i = 0; i < n; i++)
	{
		delete[]arr1[i];
	}

	delete[]arr1;




	for (int i = 0; i < size; i++)
	{
		delete[]arr[i];
	}

	delete[]arr;


	
	return 0;

}
