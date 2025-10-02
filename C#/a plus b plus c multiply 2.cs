using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace zadanie
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Введите первое число: ");
            double q = Convert.ToDouble(Console.ReadLine());

            Console.WriteLine("Введите второе число: ");
            double w = Convert.ToDouble(Console.ReadLine());

            Console.WriteLine("Введите третье число: ");
            double e = Convert.ToDouble(Console.ReadLine());

            double r = (q + w + e) * 2;

            Console.WriteLine(q + " + " + w + " + " + e + " * 2");
            Console.WriteLine("Ответ: " + r);
        }
    }
}