/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
    static ArrayList<Integer> li;
    static int counter;
    public static int  pass(int s,int t, int[] qb)
    {
        if(s==0 && t==0)
        {
            counter++;
            return 1;
        }
        else if(s==0 && t!=0)
        {
            return 0;
        }
        else if(qb[s]>0)
        {
            //System.out.println("***"+qb[s]+"***");
            return qb[s];
        }
        
        if(counter==0) li.add(3); 
        int p = pass(s-1, t-3,qb);
        if(counter < 1)  li.remove(li.size() - 1);
        
        if(counter==0) li.add(-1); 
        int n = pass(s-1, t+1,qb);
        if(counter < 1) li.remove(li.size() - 1);
        
        if(counter==0)  li.add(0);  
        int z = pass(s-1, t+0,qb);
        if(counter < 1)  li.remove(li.size() - 1);
        
        int total = p+n+z;
        qb[s] = total;
        return total;
    }

	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc= new Scanner(System.in);
		int n= sc.nextInt();
		for(int i=0;i<n;i++)
		{
		    int s,t;
		    s = sc.nextInt();
		    t = sc.nextInt();
		    li = new ArrayList();
		    counter =0;
		    int res  = pass(s,t,new int[s+1]);
		    if(res>0)
		    {
		        System.out.println("Yes");
		        //int occurrences = Collections.frequency(animals, "bat");
		        System.out.print(Collections.frequency(li, 3)+" ");
		        System.out.print(Collections.frequency(li, -1)+" ");
		        System.out.print(Collections.frequency(li, 0));
		        System.out.println();
		        
		    }
		    else if(res==0)
		    {
		        System.out.println("No");
		        //System.out.println(li.size());
		    }
		    
		}
	}
}
