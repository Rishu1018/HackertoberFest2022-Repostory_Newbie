import java.util.*;
import java.util.Scanner;
class prog
{       int n;
    public prog()
    {
        n=0;
    }
    public void input()
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the number");
        n=sc.nextInt();
    }
    public int prime(int k)
    {   int c=0;
        for(int i=1;i<=k;i++)
        {
            if(k%i==0)
            {
                c++;
            }
        }
        if(c==2)
        return 1;
        else
        return 0;
    }
    public int sumprime(int p)
    {   int s=0;
        while(p>0)
        {
            int d=p%10;
            s=s+d;
            p/=10;
        }
        return s;
    }
    public void calc()
    {   int f; int sum=0;
        int l=sumprime(n);
        for(int i=2;i<=n;i++)
        {
            if(n%i==0)
            {
                f=prime(i);
                if(f==1)
                {
                    sum=sum+sumprime(i);
                }

            }
            
        }
        if(sum==l)
        {
        System.out.println("YES IT IS SMITH NUMBER");

        }
        else
        System.out.println("IT IS NOT SMITH NUMBER");
     }
    public static void main(String args[])
    {
        prog ob=new prog();
        ob.input();
        ob.calc();
    }
}
    
         
     
