using System;
using System.IO;

namespace CSharp
{
    class CSharp 
    {
        static void Main() 
        {
            DateTime before, after;
            before = DateTime.Now;

            using (StreamWriter f = new StreamWriter("output.txt"))
            {
                for (int x = 1; x < 100001; x++)
                {
                    Console.WriteLine("{0}",x);
                    f.WriteLine(x);
                }
            }

            after = DateTime.Now;
            TimeSpan elapsed = after.Subtract(before);

            Console.WriteLine("{0}", elapsed.TotalSeconds.ToString("0.000000"));
        }
    }
}