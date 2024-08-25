import java.util.Scanner;
public class testrun
{
    int counter = 0, arr[];
    public int checkSeries()
    {   int max=0, maxNum = arr[0];
        for(int i=0; i<arr.length; i++)
        {
            for(int j=0; j<arr.length; j++)
            {
                if(arr[j]==(++arr[i]))
                {
                    counter++;
                    arr[i]=arr[j];j=0;
                }
            }
            if (counter>max)
            {
                counter = max;
                maxNum = arr[i];
            }
        }
        return maxNum;
    }
    public void inputArr()
    {
        Scanner scnr = new Scanner(System.in);
        System.out.println("Enter length of Array");
        arr = new int[scnr.nextInt()];
        System.out.println("Enter all numbers");
        for(int i=0;i<arr.length;i++)
        {
            arr[i] = scnr.nextInt();
        }
        scnr.close();
    }
    public void display(int num)
    {
        System.out.println("Longest series is of "+ counter+" consecutive numbers");
        System.out.print("Series: ");
        for(;num<(num+counter);num++)
        {
            System.out.print(num+" ");
        }
    } 
    public static void main(String[] args)
    {
        testrun obj = new testrun();
        obj.inputArr(); obj.display(obj.checkSeries());
    }
}