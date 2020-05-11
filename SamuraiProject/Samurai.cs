using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SamuraiProject
{
    class Samurai
    {
        //characteristics
        private string name;
        private string weaponType;
        private string type;
        private bool hasHorse;
        private bool hasArmor;
        private bool doubleWeapon;
        private double life;
        private double hitPower;
        

        //constructors
        public Samurai(string name) { this.name = name; }


        //getters & setters

        public string GetName()
        {
            return name;
        }

        public void SetName(string value)
        {
            name = value;
        }


        public string getWeaponType()
        {
            return weaponType;
        }

        public void setWeaponType(string value)
        {
            if (value.Equals("Katana"))
            {
                weaponType = value;
            }
            else if (value.Equals("Yumi"))
            {
                weaponType = value;
            }
            else if (value.Equals("Naginata"))
            {
                weaponType = value;
            }
            else if (value.Equals("Wakizashi"))
            {
                weaponType = value;
            }
        }

        public bool getDoubleWeapon()
        {
            return doubleWeapon;
        }

        public void setDoubleWeapon(bool value)
        {
            doubleWeapon = value;
        }

        public bool getHasHorse()
        {
            return hasHorse;
        }
        public void setHasHorse(bool value)
        {
            hasHorse = value;
        }

        public bool getHasArmor()
        {
            return hasArmor;
        }

        public void setHasArmor(bool value)
        {
            hasArmor = value;
        }

        public string getType()
        {
            return type;
        }

        public void setType(string value)
        {
            if (value.Equals("Military"))
            {
                type = value;
            }
            else if (value.Equals("Ronin"))
            {
                type = value;
            }
        }

        public double getHitPower()
        {
            return hitPower;
        }

        public void setHitPower(double value)
        {
            hitPower = value;
        }

        public double getLife()
        {
            return life;
        }

        public void setLife(double value)
        {
            life = value;
        }
        
  
        public double getWeaponPower()
        {
            double result = 0;
            if (weaponType.Equals("Katana"))
            {
                result = 10;
                if (doubleWeapon.Equals(true))
                {
                    result *= 1.8;
                }
            }
            else if (weaponType.Equals("Yumi"))
            {
                result = 15;
                if (doubleWeapon.Equals(true))
                {
                    result *= 1.8;
                }
            }
            else if (weaponType.Equals("Naginata"))
            {
                result = 20;
                if (doubleWeapon.Equals(true))
                {
                    result *= 1.8;
                }
            }
            else if (weaponType.Equals("Wakizashi"))
            {
                result = 5;
                if (doubleWeapon.Equals(true))
                {
                    result *= 1.8;
                }
            }

            return result;
        }

        public double defend(double enemyAttack)
        {
            double result = 0;

            if ((hasArmor.Equals(true)) && (hasHorse.Equals(true)))
            {
                result = enemyAttack - (10 + 5);
            }
            else if (hasArmor.Equals(true))
            {
                result = enemyAttack - 10;
            }
            else if (hasHorse.Equals(true))
            {
                result = enemyAttack - 5;
            }
            return result;
        }


        public double attack()
        {
            double result = 0;

            if (type.Equals("Military"))
            {
                result = hitPower + 10;
                Console.WriteLine(name + " shouts Sensei!!!");
            }
            else if (type.Equals("Ronin"))
            {
                result = hitPower + 5 + (hitPower / 4);
                Console.WriteLine(name + " shouts haaa!!!");
            }
            return result;
        }

        public void checkState()
        {
            if (life <= 0)
            {
                
                Console.WriteLine(name + " died!");
            }
            else
            {
                Console.WriteLine(name + " has: " + life + " life. ");
            }
        }

        public void print()
        {
            Console.WriteLine("Samurai Stats\n");
            Console.WriteLine("Type: " + type + "\n" + "Name: " + name + "\n" + "Weapon type: " + weaponType + "\n" + "Has double weapon: " + doubleWeapon + "\n" + "Has horse: " + hasHorse + "\n" + "Has armor: " + hasArmor + "\n" + "Hitpower: " + hitPower + "\n" + "Life: " + life);
        }

    }
}

