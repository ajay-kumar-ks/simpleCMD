#include<iostream>
#include<stdio.h>
#include<string.h> 

using namespace std;
 main()
   {
    int res,i,n=0,max,min,r=0,t=0,array[100],c,pos,vlu;
   	char h[10],calk,op,k[10];
   	float num1,num2,upli,num3;
   	cout<<"-- HELLOW USER --\n";
   	cout<<"whats is your name ->";
   	cin>>k;
   	
   	do
   	{
   	cout<<k; cout<<" enter your command \n cmd ->";
   	cin>>h;
   	
   	string str1="calk";
   	string str2="mtabl";
   	string str3="help";
   	string str4="odev";
   	string str5="maxmin";
   	string str6="arry";
  
     if(h==str3)
       {
       	cout<<" \n user command list \n \n";
       	cout<<"calk  -- for simple calculator \n";
       	cout<<"mtabl  --for multiplication table \n";
       	cout<<"odev  --for find the number odd or even \n";
       	cout<<"maxmin  --for find maximum and minimum from numbers \n";
	   }
   	 else if(h==str1)
   	    {
		   
   	   cout<<"enter the operator :";
   	    cin>>op;
   	    if(op=='+'||op=='-'||op=='*'||op=='/')
   	    {
   	   
   	    cout<<"enter two operants :";
   	    cin>>num1>>num2;
   	       switch(op) {

    case '+':
      cout << num1 << " + " << num2 << " = " << num1 + num2;
      break;

    case '-':
      cout << num1 << " - " << num2 << " = " << num1 - num2;
      break;

    case '*':
      cout << num1 << " * " << num2 << " = " << num1 * num2;
      break;

    case '/':
      cout << num1 << " / " << num2 << " = " << num1 / num2;
      break;
 
      
      break;
  }
}else cout<<"your operator not in our list \n";
	}
	else if(h==str2)
   	       {
   	       	cout<<"enter the upper limit :";
   	       	cin>>upli;
   	       	cout<<"enter the number to be multiply :";
   	       	cin>>num3;
   	       	for(i=0;i<upli;i++)
   	       	   {
   	       	   	res=i*num3;
   	       	   	cout<<i<<"X"<<num3<<"="<<res<<"\n";
					 }
			  }
		else if(h==str4)
		       {
		       	cout << "Enter an integer: ";
  cin >> n;

  if ( n % 2 == 0)
  
  
    cout << n << " is even.";
  else
    cout << n << " is odd.";
					 }	
	else if(h==str5)
	       {
	       	    int arr[10], n, i, max, min;

    cout << "Enter the size of the array : ";

    cin >> n;

    cout << "Enter the elements of the array : ";

    for (i = 0; i < n; i++)

        cin >> arr[i];

    max = arr[0];

    for (i = 0; i < n; i++)

    {

        if (max < arr[i])

            max = arr[i];

    }

    min = arr[0];

    for (i = 0; i < n; i++)

    {

        if (min > arr[i])

            min = arr[i];

    }

    cout << "Largest element : " << max<<"\n";

    cout << "Smallest element : " << min;
							}				 
					 
		   else if(h==str6)
		          {
		           cout<<"Enter number of elements in array\n";
   cin>>n;
   cout<<"Enter elements\n";
   for (c = 0; c < n; c++)
   {
   cin>>array[c];
    }
   cout<<"Enter the location where you wish to insert an element\n";
   cin>>pos;
   cout<<"Enter the value to insert\n";
   cin>>vlu;
   for (c = n - 1; c >= pos - 1; c--)
   {
  array[c+1] = array[c];
    }
	array[pos-1] = vlu;
    cout<<"Resultant array is\n";
   for (c = 0; c <= n; c++)
   {
      cout<<array[c]; 
         }
					
					 
				  }
   	
   	
   	 }while(1);	  
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	return(0);
   }
