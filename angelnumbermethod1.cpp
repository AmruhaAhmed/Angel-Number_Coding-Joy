#include<iostream>
                    #include<cstring>
                    using namespace std;
                    int main()
                    {
                        int n;//accepted number
                        int d;//dummy variable
                        int flag=0;//flag variable for checking equality of digits
                        char c1;//gives current character
                        char c2;//gives succeeding character
                        int i=0;//loop counter
                        cout<<"Enter a number:";
                        cin>>n;
                        string s=to_string(n);//converting number to string 
                        int l=s.length();//length of the string
                        cout<<l;
                        while(i<l-1)
                        {
                            c1=s.at(i);
                            c2=s.at(i+1);
                            
                            if(c1!=c2)
                            {
                                flag=1;
                                break;
                            }
                            i++;
                        }
                        if(flag==1)
                        cout<<endl<<n<<" is not an Angel Number";
                        else
                        cout<<endl<<n<<" is an Angel Number";
                        
                    }