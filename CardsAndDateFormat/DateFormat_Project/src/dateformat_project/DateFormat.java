package dateformat_project;

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Random;

public class DateFormat {
    //characteristics
    private int day;
    private int month;
    private int year;

    //constructors
    DateFormat(){}
    DateFormat(int day, int month, int year){
        this.day = day;
        this.month = month;
        this.year = year;
    }

    //setters & getters
    public void setDay(int day){
        this.day = day;
    }
    public int getDay(){
        return day;
    }

    public void setMonth(int month){
        this.month = month;
    }
    public int getMonth(){
        return month;
    }

    public void setYear(int year){
        this.year = year;
    }
    public int getYear(){
        return year;
    }

    //other methods
    public void displayDateFormat(String s, boolean b){
        String substr1;
        String substr2;
        String substr3;
        
        substr1 = s.substring(0, 2);
        day = Integer.parseInt(substr1);
        
        substr2 = s.substring(3, 5);
        month = Integer.parseInt(substr2);
        
        substr3 = s.substring(6, 10);
        year = Integer.parseInt(substr3);
        
        String regex1 = "^([0-2][0-9]||3[0-1])/(0[0-9]||1[0-2])/([0-9][0-9])?[0-9][0-9]$";
        String regex2 = "^(1[0-2]|0[1-9])/(3[01]|[12][0-9]|0[1-9])/[0-9]{4}$";
        
        if(b == true && s.matches(regex1)){
            System.out.print(substr1 + "/" + substr2 + "/" + substr3 + " ..in dd/mm/yyyy format.\n");
        }
        else if(b == false && s.matches(regex2)){
            System.out.print(substr2 + "/" + substr1 + "/" + substr3 + " ..in mm/dd/yyyy format.");
        }        
   

    }
    
    public void checkSubsequentOrSameDate(String s1, String s2, boolean b) throws ParseException{
        String regex1 = "^[0-3]?[0-9]/[0-3]?[0-9]/(?:[0-9]{2})?[0-9]{2}$";
        String regex2 = "^(1[0-2]|0[1-9])/(3[01]|[12][0-9]|0[1-9])/[0-9]{4}$";
      
        String substr1;
        String substr2;
        String substr3;
        
        //check s1
        substr1 = s1.substring(0, 2);
        day = Integer.parseInt(substr1);
        
        substr2 = s1.substring(3, 5);
        month = Integer.parseInt(substr2);
        
        substr3 = s1.substring(6, 10);
        year = Integer.parseInt(substr3);
        
        if(b == true && s1.matches(regex1)){
            System.out.println("Date1 in dd/mm/yyyy format: " + day + "/" + month + "/" + year);
        }
        else if(b == false && s1.matches(regex2)){
            System.out.println("Date1 in mm/dd/yyyy format: " + month + "/" + day + "/" + year);
        }
        
        // check s2
        substr1 = s2.substring(0, 2);
        day = Integer.parseInt(substr1);
        
        substr2 = s2.substring(3, 5);
        month = Integer.parseInt(substr2);
        
        substr3 = s2.substring(6, 10);
        year = Integer.parseInt(substr3);
        
        if(b == true && s2.matches(regex1)){
            System.out.println("Date2 in dd/mm/yyyy format: " + day + "/" + month + "/" + year);
        }
        else if(b == false && s2.matches(regex2)){
            System.out.println("Date2 in mm/dd/yyyy format: " + month + "/" + day + "/" + year);
        }
        
        // check if s1 and s2 match with regex1
        if(b == true && s1.matches(regex1) && s2.matches(regex1)){
            SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");
            
            Date date1 = sdf.parse(s1);
            Date date2 = sdf.parse(s2);

            if(date1.compareTo(date2) > 0){
                System.out.println("Date1: " + sdf.format(date1) + ", is after Date2");
            }
            else if(date1.compareTo(date2) < 0){
                System.out.println("Date2: " + sdf.format(date2) + ", is after Date1\n");
            }
            else if(date1.compareTo(date2) == 0){
                System.out.print("Date1 is equal to Date2. Common Date: ");
                //select a date to display randomly
                String[] s = {s1, s2};
                Random rand = new Random();
                System.out.println(s[rand.nextInt(s.length)]);
            }
        }
        
        // check if s1 and s2 match with regex2
        if(b == false && s1.matches(regex2) && s2.matches(regex2)){
            SimpleDateFormat sdf = new SimpleDateFormat("mm/dd/yyyy");
            
            Date date1 = sdf.parse(s1);
            Date date2 = sdf.parse(s2);
            
            if(date1.compareTo(date2) > 0){
                System.out.println("Date1: " + sdf.format(date1) + ", is after Date2\n");
            }
            else if(date1.compareTo(date2) < 0){
                System.out.println("Date2: " + sdf.format(date2) + ", is after Date1\n");
            }
            else if(date1.compareTo(date2) == 0){
                System.out.print("Date1 is equal to Date2. Common Date: ");
                //select a date to display randomly
                String[] s = {s1, s2};
                Random rand = new Random();
                System.out.println(s[rand.nextInt(s.length)]);
            }
        }
    }
    
    public void displayDateOtherWay(String s1, boolean b){
        String regex1 = "^[0-3]?[0-9]/[0-3]?[0-9]/(?:[0-9]{2})?[0-9]{2}$";
        String regex2 = "^(1[0-2]|0[1-9])/(3[01]|[12][0-9]|0[1-9])/[0-9]{4}$";
      
        String substr1;
        String substr2;
        String substr3;
        
        //check s1
        substr1 = s1.substring(0, 2);
        day = Integer.parseInt(substr1);
        
        substr2 = s1.substring(3, 5);
        month = Integer.parseInt(substr2);
        
        substr3 = s1.substring(6, 10);
        year = Integer.parseInt(substr3);
        
        if(b == true && s1.matches(regex1)){
            System.out.println("Date1 in mm/dd/yyyy format: " + month + "/" + day + "/" + year);
        }
        else if(b == false && s1.matches(regex2)){
            System.out.println("Date1 in dd/mm/yyyy format: " + day + "/" + month + "/" + year);
        }
    }
}
