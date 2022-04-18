#include<iostream>
#include<fstream>
#include<ctime>
#include<stdlib.h>
#include<string.h>
#include<string>
#include<cstring>

using namespace std;

void shuffle(char **arr,int size,int count)
{

   for(int i=0;i<count;i++)
   {
       if(i%2==0)
       swap(arr[i],arr[size-i-1]);
    } 
    
    for(int i=0;i<size;i++)
    {
      
            for(int j=0,k=size-1;j<size;j++,k--)
            {
                char temp=arr[i][j];
                arr[i][j]=arr[i][k];
                arr[i][k]=temp;
            }
        
    }

    
}



int main()
{

	string line2;
	string line="wordsearch";
	int count = 0;

	ifstream fin;
	fin.open("hangman2.txt");
	int size = 11;
	int s = 0;
	char** arr = new char*[size];
	    for(int i=0;i<size;i++)
    {
        arr[i]=new char[size];
       for(int j=0;j<size;j++)
       {
           
        	int random = (rand() % 25) + 97;
                     arr[i][j]=random;
    
   }
    }

	if (fin.is_open())
	{

		while (getline(fin, line2))
		{
			s=line2.length();
			
			if(count%2==0)
			{
			    
            
			for (int i = 0; i<size; i++)
			{
				if (i<s)
					arr[count][i] = line2[i];
			
			}
		
	}
	else
	{
	    	s=line2.length();
	    
	     int start=0;
  int end=s-1;  
  while (start < end)
    {
        char temp = line2[start];
        line2[start] = line2[end];
        line2[end] = temp;
        start++;
        end--;
}
	    	for (int i = 0; i<size; i++)
			{
				if (i<s)
					arr[count][i] = line2[i];
			
			}
    }
			count++;
			
	}
}


shuffle(arr,size,count);

  	for (int i = 0; i < size; i++)
	{
		cout << arr[i]<<endl;
	}  
for(int i=0;i<size;i++)
{
    delete[]arr[i];
}
delete arr;
	return 0;
}
