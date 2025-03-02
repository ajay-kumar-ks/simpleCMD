#include<iostream>
#include<stdio.h>
#include<string.h> 
#include <direct.h>  
#include <sys/stat.h> 
#include <sstream>

using namespace std;

    bool isValidPath(const std::string& path) {
      struct stat info;
      return (stat(path.c_str(), &info) == 0);  // Returns true if path exists
    }
 main()
   {
      int res,i,n=0,max,min,r=0,t=0,array[100],c,pos,vlu;
      char calk,k[10];
      std::string h;
      float upli,num3;
      cout<<"-- HELLOW USER --\n";
      cout<<"whats is your name -> ";
      cin>>k;
      cout<<"Hi "<<k; cout<<" enter your command \n";
      do	
      {
        cout<<" cmd -> ";
        std::getline(std::cin, h);
        std::istringstream ss(h);  
        std::string command;

        ss >> command;;
        
        string str1="calk";
        string str2="mtabl";
        string str3="help";
        string str4="odev";
        string str5="maxmin";
        string str6="arry";
        string str7="mkdir";
    
        if(h==str3){
          cout<<" \n user command list \n \n";
          cout<<"calk  -- for simple calculator -- calk <number1> <operator> <number2> \n";
          cout<<"mtabl  --for multiplication table -- mtabl <upper limit> <number>\n";
          cout<<"odev  --for find the number odd or even -- odev <number> \n";
          cout<<"maxmin  --for find maximum and minimum from numbers \n"; 
          cout<<"mkdir  --for create a directory -- mkdir <path> <directroy> <name>\n ";
        } else if (command == str1) {
          char op;
          float num1, num2;
      
          if (ss >> num1 >> op >> num2) {
              switch (op) {
                  case '+':
                      cout << num1 << " + " << num2 << " = " << num1 + num2 << "\n";
                      break;
                  case '-':
                      cout << num1 << " - " << num2 << " = " << num1 - num2 << "\n";
                      break;
                  case '*':
                      cout << num1 << " * " << num2 << " = " << num1 * num2 << "\n";
                      break;
                  case '/':
                      if (num2 != 0) {
                          cout << num1 << " / " << num2 << " = " << num1 / num2 << "\n";
                      } else {
                          cout << "Error: Division by zero is not allowed.\n";
                      }
                      break;
                  default:
                      cout << "Your operator is not in our list.\n";
              }
          } else {
              cout << "Invalid input format. Use: calk <number1> <operator> <number2>\n";
          }
        }else if(command==str2){
                int upli,num1;
                if (ss >> upli >> num1) {
                    for(i=1;i<=upli;i++){
                        res=i*num1;
                        cout<<i<<"X"<<num1<<"="<<res<<"\n";
                    }
                }else{
                    cout << "Invalid input format. Use: mtabl <upper limit> <number>\n";
                }
        }else if(command==str4){
                int num1;
                if (ss >> num1) {
                    if ( num1 % 2 == 0)
                    cout << num1 << " is even.\n";
                    else
                    cout << num1 << " is odd.\n";
                } else {
                    cout << "Invalid input format. Use: odev <number>\n";
                }
        }else if(h==str5){
                int arr[10], n, i, max, min;
                cout << "Find the largest and smallest elemnt ";
                cout << "Enter how many elements u have : ";
                cin >> n;
                cout << "Enter the elements one by one : ";
                for (i = 0; i < n; i++)
                    cin >> arr[i];
                    max = arr[0];

                for (i = 0; i < n; i++){
                    if (max < arr[i])
                        max = arr[i];
                }

                min = arr[0];

                for (i = 0; i < n; i++){
                    if (min > arr[i])
                        min = arr[i];
                }
                cout << "Largest element : " << max<<"\n";

                cout << "Smallest element : " << min <<"\n";
        }else if(h==str6){
                cout<<"Enter number of elements in array\n";
                cin>>n;
                cout<<"Enter elements\n";
                for (c = 0; c < n; c++){
                  cin>>array[c];
                }
                cout<<"Enter the location where you wish to insert an element\n";
                cin>>pos;
                cout<<"Enter the value to insert\n";
                cin>>vlu;
                for (c = n - 1; c >= pos - 1; c--){
                    array[c+1] = array[c];
                }
                array[pos-1] = vlu;
                cout<<"Resultant array is\n";
                for (c = 0; c <= n; c++){
                    cout<<array[c]; 
                }
            
        } else if (command == str7) { 
          std::string command, firstInput,secondInput,thirdInput;

          ss >> command >> firstInput >> secondInput >> thirdInput;
            std::string fullPath;
            if (!firstInput.empty() && !secondInput.empty()) {
                fullPath = firstInput + "\\" + secondInput;
            } else if (!firstInput.empty()) {
                fullPath = firstInput;
            } else {
                std::cout << "Invalid input. Usage: mkdir <base_path> <new_folder_name>\n";
                continue;
            }
        
            if (isValidPath(fullPath)) {
                std::cout << "\nDirectory already exists at: " << fullPath << "\n";
            } else {
                if (_mkdir(fullPath.c_str()) == 0) {
                    std::cout << "\nDirectory created successfully at: " << fullPath << "\n";
                } else {
                    std::cout << "\nFailed to create folder. Check permissions or path validity.\n";
                }
            }
        }
            
      }while(1);	  
      
      return(0);
   }
