//This program is a simulation of a Samurai fight


using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SamuraiProject
{
    class Program
    {
        public static void Main(string[] args)
        {
            //1
            Samurai sam1 = new Samurai("Akechi Mitsuhide");
            sam1.setType("Military");
            sam1.setHasHorse(false);
            sam1.setHasArmor(true);
            sam1.setWeaponType("Katana");
            sam1.setDoubleWeapon(true);
            sam1.setLife(100);
            sam1.setHitPower(20);
            //sam1.print(); //for debug


            //2
            Samurai sam2 = new Samurai("Date Masamune");
            sam2.setType("Military");
            sam2.setLife(40);
            sam2.setHitPower(10);
            sam2.setHasHorse(true);
            //sam2.setHasArmor(false);  //this line can be skipped because bool values are set to 'false' by default.
            sam2.setWeaponType("Yumi");
            //sam2.print();

            
            
            //3
            Samurai sam3 = new Samurai("Hattori Hanzo");
            sam3.setType("Military");
            sam3.setWeaponType("Naginata");
            sam3.setLife(100);
            sam3.setHitPower(20);
            sam3.setHasArmor(true);
            

            
            //4
            Samurai sam4 = new Samurai("Oda Nobunaga");
            sam4.setType("Ronin");
            sam4.setHasHorse(true);
            sam4.setHasArmor(true);
            sam4.setWeaponType("Wakizashi");
            sam4.setDoubleWeapon(true);
            sam4.setLife(100);
            sam4.setHitPower(20);
            //sam4.print();


            //5
            Samurai sam5 = new Samurai("Takeda Nobunaga"); // '0' is the initial hitpower
            sam5.setType("Ronin");
            sam5.setHasHorse(true);
            sam5.setWeaponType("Katana");
            sam5.setHasArmor(true);
            sam5.setLife(100);
            sam5.setHitPower(20);
            //sam5.print();


            //----------BATTLE---------------


            //6
            sam1.checkState();
            Console.WriteLine(sam1.GetName() + " hit power: " + sam1.getHitPower());
            sam1.setLife(sam1.getLife() - sam1.defend(sam5.attack() + sam5.getWeaponPower()));
            sam1.checkState();
            Console.WriteLine();
            
            sam2.checkState();
            Console.WriteLine(sam2.GetName() + " hit power: " + sam2.getHitPower());
            sam2.setLife(sam2.getLife() - sam2.defend(sam5.attack() + sam5.getWeaponPower()));
            sam2.checkState();
            Console.WriteLine();

            //7
            sam3.checkState();
            Console.WriteLine(sam3.GetName() + " hit power: " + sam3.getHitPower());
            sam3.setLife(sam3.getLife() - sam3.defend(sam4.attack() + sam4.getWeaponPower()));
            sam3.checkState();
            Console.WriteLine();

            //8
            sam4.checkState();
            Console.WriteLine(sam4.GetName() + " hit power: " + sam4.getHitPower());
            sam4.setLife(sam4.getLife() - sam4.defend(sam3.attack() + sam3.getWeaponPower()));
            sam4.checkState();
            Console.WriteLine();

            //9
            sam5.checkState();
            Console.WriteLine(sam5.GetName() + " hit power: " + sam5.getHitPower());
            sam5.setLife(sam5.getLife() - sam5.defend(sam2.attack() + sam2.getWeaponPower()));
            sam5.checkState();
            Console.WriteLine();

            //10
            sam5.checkState();
            Console.WriteLine(sam5.GetName() + " hit power: " + sam5.getHitPower());
            sam5.setLife(sam5.getLife() - sam5.defend(sam1.attack() + sam1.getWeaponPower()));
            sam5.checkState();
            Console.WriteLine();

            //11
            sam3.checkState();
            Console.WriteLine(sam3.GetName() + " hit power: " + sam3.getHitPower());
            sam3.setLife(sam3.getLife() - sam3.defend(sam5.attack() + sam5.getWeaponPower()) * 2);
            sam3.checkState();
            Console.WriteLine();

            //12
            sam1.checkState();
            Console.WriteLine(sam1.GetName() + " hit power: " + sam1.getHitPower());
            sam1.setLife(sam1.getLife() - sam1.defend(sam4.attack() + sam4.getWeaponPower()));
            sam1.checkState();
            Console.WriteLine();

            
            Console.ReadKey();
        }
    }
}

//This program is dedicated to Miyamoto Musashi (the greatest Samurai ever)