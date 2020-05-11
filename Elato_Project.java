package elato_project;

import java.util.List; 
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;
import java.util.Comparator;
import java.io.IOException;
import java.util.stream.Collectors; 

public class Elato_Project {

    public static void main(String[] args) throws IOException, InterruptedException{
        new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor();  // CLEAR SCREEN
        
        List<String> list = new ArrayList<String>();
    
        list.add("o");
        list.add("elato");
        list.add("o");
        list.add("elato");
        list.add("m'areseis");
        list.add("pos");
        list.add("m'areseis");
        list.add("o");
        list.add("elato");
        list.add("o");
        list.add("elato");
        list.add("m'areseis");
        list.add("pos");
        list.add("m'areseis");

        // DISPLAY LIST AS A STRING
        StringBuilder b = new StringBuilder();
        String s = list.stream().map(Object::toString).collect(Collectors.joining(" "));
        System.out.println(s);

        // (1)
        System.out.println("\n\n\t----- EXERCISE 1 - Word count -----\n");

        Map<String, Integer> counts = new HashMap<String, Integer>();

        for(String str : list){
            if(counts.containsKey(str)){
                counts.put(str, counts.get(str) + 1);
            }
            else{
                counts.put(str, 1);
            }
        }
        for(Map.Entry<String, Integer> entry : counts.entrySet()){
            System.out.println("\t" + entry.getKey() + " = " + entry.getValue());
        }
        
        // (2)
        System.out.println("\n\n\t----- EXERCISE 2 - Word characters length by descending order -----\n");

        List<String> newList = list.stream().distinct().collect(Collectors.toList()); 
        //System.out.println("ArrayList with duplicates removed: " + newList);  //debug
        String[] newList2 = new String[newList.size()];
        newList.toArray(newList2);
        
        int size = newList.size();
        //System.out.println("size of array list (not dublicated): " + size);  //debug

        newList.sort(Comparator.comparing(String::length).reversed());
        //System.out.println("List sorted by elements length: " + newList);  //debug
                
        for(String str : newList){    
            System.out.println("\t" + str + ": " + str.length());
        }

        // (3)
        System.out.println("\n\n\t----- EXERCISE 3 - Index of third longest string -----\n");
        
        System.out.println(findPosOfThirdLongest(newList2));

        System.out.println("\n\n\nEnd of program!");
    }

    public static int findPosOfThirdLongest(String[] arr){   
        String temp;
        int x = 0;
        for(int i = 0; i < arr.length; i++){
            x = i;
            for(int j = i + 1; j < arr.length; j++){
                if(arr[i].length() < arr[j].length()){
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
            System.out.println("\t" + arr[i]);
        }
        System.out.print("\n\t" + "Index of third longest string \'" + arr[2] + "\' is: " );
        
        return x - 1;  //element at index 2
    }
}
    

