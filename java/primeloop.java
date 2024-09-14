import java.util.Scanner;
public class primeloop 
{
    static int ctrlNUM, counter;
    public static void main(String[] args)
    {
        Scanner scnr = new Scanner(System.in);
        ctrlNUM = scnr.nextInt();
        for(int i = 2; i<= ctrlNUM; i++)
        {
            for (int j = 2; j<= i; j++)
            {
                if(i%j==0)
                {
                   counter++;
                }
                
            }
            if (counter <= 2)
                {
                    System.out.println(i);
                }
                counter = 0;
        }
        scnr.close();
    }
    
}
