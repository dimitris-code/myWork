package hexadecimalcolorrepresantion_project;

import java.text.ParseException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map.Entry;
import java.util.Set;
import java.util.TreeMap;
import java.util.Scanner;
import java.util.Map;
import java.util.Iterator;

public class KeysAndValues {
       public void maps(){
        HashMap<String, String> hMap = new HashMap<>();
                
        hMap.put("Black", "000000");
        hMap.put("Navy", "000080");
        hMap.put("Green", "008000");
        hMap.put("Teal", "008080");
        hMap.put("Silver", "c0c0c0");
        hMap.put("Blue", "0000ff");
        hMap.put("Lime", "00ff00");
        hMap.put("Aqua", "00ffff");
        hMap.put("Maroon", "800000");
        hMap.put("Purple", "800080");
        hMap.put("Olive", "808000");
        hMap.put("Gray", "808080");
        hMap.put("Red", "ff0000");
        hMap.put("Fuchsia", "ff00ff");
        hMap.put("Yellow", "ffff00");
        hMap.put("White", "ffffff");

        System.out.println("\n");
        for(Map.Entry<String, String> entry : hMap.entrySet()) {
            System.out.println("Color: " + entry.getKey() + "\tHexadecimal value: " + entry.getValue());
        }

        Set<Entry<String, String>> entries = hMap.entrySet();

        // Sort the HashMap by values
        // there is no direct way to sort HashMap by values but you
        // can do this by writing your own comparator, which takes Map
        Comparator<Entry<String, String>> valueComparator = new Comparator<Entry<String,String>>() {
            
            @Override
            public int compare(Entry<String, String> e1, Entry<String, String> e2) {
                String v1 = e1.getValue();
                String v2 = e2.getValue();
                return v1.compareTo(v2);
            }
        };

        // Sort method needs a List, so first convert Set to List
        List<Entry<String, String>> listOfEntries = new ArrayList<Entry<String, String>>(entries);

        // sorting HashMap by values using comparator
        Collections.sort(listOfEntries, valueComparator);

        LinkedHashMap<String, String> sortedByValue = new LinkedHashMap<String, String>(listOfEntries.size());
        
        // copying entries from List to Map
        for(Entry<String, String> entry : listOfEntries){
            sortedByValue.put(entry.getKey(), entry.getValue());
        }
        
        
        //debug notes
        // System.out.println("HashMap after sorting entries by values ");
        // Set<Entry<String, String>> entrySetSortedByValue = sortedByValue.entrySet();
        
        // for(Entry<String, String> mapping : entrySetSortedByValue){
        //     System.out.println(mapping.getKey() + " ==> " + mapping.getValue());
        // }
    
        //convert sortedMap to decimal
        // Set<Entry<String, String>> convertSortedMapToDecimal = sortedByValue.entrySet();
        
        // for(Entry<String, String> mapping1 : convertSortedMapToDecimal){
        //     System.out.println(getDecimal(mapping1.getValue()));
        // }
       }
}
