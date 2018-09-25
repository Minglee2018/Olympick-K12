using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TamGiac
{
    class Program
    {
        static void Main(string[] args)
        {
            string a = Console.ReadLine();
            Console.WriteLine("Ki tu nhap la:{0}", a[0]);
            Console.ReadKey();
        }
    }

    class TamGiac
    {

    }
    class Diem
    {
        private int x;
        private int y;

        //public Diem(int x, int y)
        //{
        //   this.X = x;
        //   this.Y = y;
        //}
        public void InPut()
        {
            Console.Write("x=");
            x = int.Parse(Console.ReadLine());
            Console.Write("y=");
            y = int.Parse(Console.ReadLine());
        }
        public void OutPut()
        {
            Console.WriteLine("( {0} ; {1} )", x, y);
        }

        //public int X
        //{
        //    get {
        //       Console.Write("get x");
        //       return this.x;
        //  }
        //   set { x = value; }
        // }
        //public int Y { get => y;
        //    set => y = value; }
    }
}