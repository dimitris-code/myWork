using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ElectronicRepairs
{
    class IdName
    {
        public string Id { get; set; }
        public string Name { get; set; }

        public IdName(string id, string name)
        {
            Id = id;
            Name = name;
        }
    }
}
