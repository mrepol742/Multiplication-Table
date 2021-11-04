using System;
namespace Multiplication {
    class Program {
        static void Main(string[] args) {
            for (int i1 = 0; i1 < 10; i1++) {
                for (int i = 0; i < 10; i++) {
                  Console.WriteLine(i1 + " * " + i + " = " + (i1 * i) + " isEven: " + (i1 * i % 2 == 0));
                }
            }
        }
    }
}