import java.util.*;
public class angelnumber
{
    
    public static void main(String args[])
    {
        Scanner ob=new Scanner(System.in);
        int n;//accepted number
        int d;//dummy variable
        int flag=0;//flag variable for checking equality of digits
        char c1;//gives current character
        char c2;//gives succeeding character
        int i=0;//loop counter
        System.out.print("Enter a number:");
        n=ob.nextInt();
        String s=n+"";
        int l=s.length();
        while(i<l-1)
        {
            c1=s.charAt(i);
            c2=s.charAt(i+1);
            if(c1!=c2)
            {
                flag=1;
                break;
            }
            i++;
        }
        if(flag==1)
        System.out.println(n+" is not an Angel Number");
        else
        System.out.println(n+" is an Angel Number");
        

        
    }
}
