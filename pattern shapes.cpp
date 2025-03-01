#include<iostream>
using namespace std;
int main()
{
	//<---======EASY PATTERN SHAPES=================---------->
/*	for(int row=1;row<=5;row++)
	{
		for(int col=1;col<=row;col++)
		{
			cout<<row<<" ";
		}
		cout<<endl;
	}
*/
/*	for(int row=1;row<=5;row++)
	{
		for(int col=1;col<=5;col++)
		{
			cout<<col<<" ";
		}
		cout<<endl;
	}*/
/*	for(int row=1;row<=5;row++)
	{
		for(int col=5;col>=1;col--)
		{
			cout<<col<<" ";
		}
		cout<<endl;
	}*/
	/*for(int row=1;row<=5;row++)
	{
		for(int col=1;col<=5;col++)
		{
			cout<<col*col<<" ";
		}
		cout<<endl;
	}*/
/*	for(int row=1;row<=5;row++)
	{
		char name='a'+(row-1);
		for(int col=1;col<5;col++)
		{
			cout<<name<<" ";
		}
		cout<<endl;
	}*/
	
	
/*	for(int row=1;row<=5;row++)
	{
		
	for(int col=1;col<5;col++)
	{
	char name='a'+(col-1);
	  cout<<name<<" ";
	}
		cout<<endl;
	}
	//ANOTHER METHOD
   for(int row=1;row<=5;row++)
	{
		
	for(char col='a';col<='e';col++)
	{
	  cout<<col<<" ";
	}
		cout<<endl;
	}*/
	 /*int count=1;
	for(int row=1;row<=5;row++)
	{	
	for(int col=1;col<=5;col++)
	{
	cout<<count<<" ";
	  count++;
	}
		cout<<endl;
	}
	//ANOTHER METHOD
	for(int row=1;row<=5;row++)
	{	
	for(int col=1;col<=5;col++)
	{
	cout<<(row-1)*5+col<<" ";
	}
		cout<<endl;
	}*/
	
	/*for(int row=1;row<=5;row++)
	{
		
		for(char col='F';col<='M';col++)
		{
			cout<<col<<" ";
		}
		cout<<endl;
	}*/
	/*for(int row=1;row<=5;row++)
	{
		
		for(int col=1;col<=row;col++)
		{
			cout<<"*"<<" ";
		}
		cout<<endl;
	}*/
	/*for(int row=1;row<=5;row++)
	{
		
		for(int col=1;col<=row;col++)
		{
			cout<<col<<" ";
		}
		cout<<endl;
	}*/
	/*for(int row=1;row<=5;row++)
	{
		
		for(int col=1;col<=row;col++)
		{
			cout<<row<<" ";
		}
		cout<<endl;
	}*/
	/*for(int row=1;row<=5;row++)
	{
		
		for(int col=row;col>=1;col--)
		{
			cout<<col<<" ";
		}
		cout<<endl;
	}*/
	/*for(int row=1;row<=5;row++)
	{
	  char name='a'+row-1; 	
	  for(int col=1;col<=row;col++)
		{
			cout<<name<<" ";
		}
		cout<<endl;
	}*/
	/*for(int row=1;row<=5;row++)
	{
		
		for(int col=1;col<=row;col++)
		{
			char name='a'+col-1;
			cout<<name<<" ";
		}
		cout<<endl;
	}*/
/*	for(int row=1;row<=5;row++)
	{
		
		for(int col=1;col<=5-(row-1);col++)
		{
			cout<<"*"<<" ";
		}
		cout<<endl;
	}*/
	/*	for(int row=1;row<=5;row++)
	{
		
		for(int col=1;col<=5-(row-1);col++)
		{
			cout<<col<<" ";
		}
		cout<<endl;
	}*/
	//we can use 5-(row-1) OR 5-row+1
/*	for(int row=1;row<=5;row++)
	{
		for(int col=5;col>=5-row+1;col--)
		{
			cout<<col<< " ";
		}
		cout<<endl;
	}*/
/*	for(int row=1;row<=5;row++)
	{
		for(int col=1;col<=5-row+1;col++)
		{
			char name='A'+col-1;
			cout<<name<< " ";
		}
		cout<<endl;
	}*/
	//<-----------========HARD PATTERN SHAPES=================--------->
   /* for (int row =1;row<=5;row++)
    {
    	for(int space=1;space <=5-row;space++)
    	{
    		cout<<"   ";
    	}
    	for(int col=1;col<=row;col++)
    	{
    		cout<<" * ";
		}
		cout<<endl;
	}
}*/
	/*for (int row =1;row<=5;row++)
    {
    	for(int space=1;space <=5-row;space++)
    	{
    		cout<<"   ";
    	}
    	for(int col=1;col<=row;col++)
    	{
    		cout<<row<<"  ";
		}
		cout<<endl;
	}*/
	/*for (int row =1;row<=5;row++)
    {
    	for(int space=1;space <=5-row;space++)
    	{
    		cout<<"   ";
    	}
    	for(int col=1;col<=row;col++)
    	{
    		cout<<col<<"  ";
		}
		cout<<endl;
	}*/
/*	for (int row =1;row<=5;row++)
    {
    	for(int space=1;space <=5-row;space++)
    	{
    		cout<<"   ";
    	}
    	for(char col=1;col<=row;col++)
    	{
    		char name='A'+col-1;
    		cout<<name<<"  ";
		}
		cout<<endl;
	}
	//OR
    for (int row =1;row<=5;row++)
    {
    	for(int space=1;space <=5-row;space++)
    	{
    		cout<<"   ";
    	}
    	for(char col='A';col<='A'+row -1;col++)
    	{
    		cout<<col<<"  ";
		}
		cout<<endl;
	}*/
	/*for (int row =1;row<=5;row++)
    {
    
    	for(int space=1;space <=5-row;space++)
    	{
    		cout<<"   ";
    	}
    	for(int col=row;col>=1;col--)
    	{	
    		cout<<col<<"  ";
		}
		cout<<endl;
	}*/
/*	for (int row =5;row>=1;row--)
    {
    
    	for(int space=1;space <=5-row;space++)
    	{
    		cout<<"   ";
    	}
    	for(int col=row;col>=1;col--)
    	{	
    		cout<<col<<"  ";
		}
		cout<<endl;
	}*/
	//---------pyramid pattern---------------
	/*for (int row =1;row<=5;row++)
    {
    
    for(int space=1;space <=5-row;space++)
    {
    	cout<<"   ";
    }
    for(int col=1;col<=2*row-1;col++)
    	{	
    		cout<<"*"<<"  ";
		}
		cout<<endl;
	}*/
	for (int row =1;row<=5;row++)
    {
    //printing space
    for(int space=1;space <=5-row;space++)
    	{
    		cout<<"   ";
    	}
    	//1 to row
    	for(int col=1;col<=row;col++)
    	{	
    		cout<<col<<"  ";
		}
		//row-1 to 1
		for(int col=row-1;col>=1;col--)
    	{	
    		cout<<col<<"  ";
		}
		cout<<endl;
	}
/*	for (int row =5;row>=1;row--)
    {
    
    for(int space=1;space <=5-row;space++)
    {
    	cout<<"   ";
    }
    for(int col=1;col<=2*row-1;col++)
    	{	
    		cout<<"*"<<"  ";
		}
		cout<<endl;
	}*/
/*	int n;
	cout<<"Enter the size."<<endl;
	cin>>n;
	for (int row =n;row>=1;row--)
    {  // printing *
      for(int col=1;col<=row;col++)
    	{	
    		cout<<"*"<<"  ";
		}	
    //printing __
    for(int space=1;space<=2*n-2*row;space++)
    {
    	cout<<"   ";
    }
    // printing *
    for(int col=1;col<=row;col++)
    	{	
    		cout<<"*"<<"  ";
		}
		cout<<endl;
	}
	
	
	
	for (int row =1;row<=n;row++)
    {  // printing *
      for(int col=1;col<=row;col++)
    	{	
    		cout<<"*"<<"  ";
		}	
    //printing __
    for(int space=1;space<=2*n-2*row;space++)
    {
    	cout<<"   ";
    }
    // printing *
    for(int col=1;col<=row;col++)
    	{	
    		cout<<"*"<<"  ";
		}
		cout<<endl;
	}*/
	//<------------BUTTERFLY PATTERN----------------------->
	/*int n;
	cout<<"Enter the size."<<endl;
	cin>>n;
	for (int row =1;row<=n;row++)
    {  // printing *
      for(int col=1;col<=row;col++)
    	{	
    		cout<<"*"<<"  ";
		}	
    //printing __
    for(int space=1;space<=2*n-2*row;space++)
    {
    	cout<<"   ";
    }
    // printing *
    for(int col=1;col<=row;col++)
    	{	
    		cout<<"*"<<"  ";
		}
		cout<<endl;
	}
	
	
	
	for (int row =n-1;row>=1;row--)
    {  // printing *
      for(int col=1;col<=row;col++)
    	{	
    		cout<<"*"<<"  ";
		}	
    //printing __
    for(int space=1;space<=2*n-2*row;space++)
    {
    	cout<<"   ";
    }
    // printing 
    for(int col=1;col<=row;col++)
    	{	
    		cout<<"*"<<"  ";
		}
		cout<<endl;
	}*/
	//<------------DIAMOND PATTERN----------------------->
  /*  int n;
	cout<<"Enter the size."<<endl;
	cin>>n;
	for (int row =1;row<=n;row++)
    { 
   
       //printing __
       for(int space=1;space<=n-row;space++)
       {
    	cout<<"   ";
       }
       // printing *
       for(int col=1;col<=row;col++)
    	{	
    		cout<<"*"<<"  ";
		}
		cout<<endl;
	}*/
}


