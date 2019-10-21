import java.io.FileWriter;
import java.util.Date;

class Java
{
    public static void main(String args[])
    {
        try{
            Date before = new Date();

            FileWriter f = new FileWriter("output.txt");

            for (int x = 1; x < 100001; x++) {  
                System.out.println(x);
                f.write(Integer.toString(x)+"\n");
            }

            f.close();

            Date after = new Date();
            double t = after.getTime() - before.getTime();
            System.out.println(t/1000);
        }
        catch (Exception e)
        {
        }
    }
}