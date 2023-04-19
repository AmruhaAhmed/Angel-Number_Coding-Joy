#include<iostream>
                        using namespace std;
                        int main()
                        {
                            int n;//accepted number
                            int a[20];//array to store digits of the number
                            int i=0;//counter to store digit in the array
                            int j;//loop counter for checking
                            int d;//dummy variable
                            int flag=0;//flag to check if the consecutive digits of the array are equal to each other or not
                            cout<<"Enter a number:";
                            cin>>n;
                            d=n;
                            while(n!=0)
                            {
                                a[i++]=n%10;
                                n=n/10;
                            }
                            
                            for(j=0;j<i-1;j++)
                            {
                               
                                if(a[j]==a[j+1])
                                continue;
                                else
                                {
                                    flag=1;
                                    break;
                                }
                            }
                            if(flag==1)
                            cout<<d<<" is not an Angel Number";
                            else
                            cout<<d<<"  is an Angel Number";
                        }


