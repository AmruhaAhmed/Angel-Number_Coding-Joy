import java.util.*;
public class angelnumber
{
    
    public static void main(String args[])
    {
        Scanner ob=new Scanner(System.in);
        
        int n;//accepted number
        int[] a = new int[20];//array to store digits of the number
        int i=0;//counter to store digit in the array
        int j;//loop counter for checking
        int d;//dummy variable
        int flag=0;//flag to check if the consecutive digits of the array are equal to each other or not
        System.out.print("Enter a number:");
        n=ob.nextInt();
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
        System.out.println(d+" is not an Angel Number");
        else
        System.out.println(d+" is an Angel Number");
    }
}
