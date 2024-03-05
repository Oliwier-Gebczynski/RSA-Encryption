using System;
using System.IO;
using HillCipher = RSA_Encryption.HillCipher;

namespace RSA_Encryption
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            Console.WriteLine("RSA-Encryption");
            
            //reading file
			string text = File.ReadAllText("plik.txt");
			Console.WriteLine(text);
            
            //include class
            var HillCipher = new HillCipher();
            HillCipher.TitleConsole();
        }
    }
}