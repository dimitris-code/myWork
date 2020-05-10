package dateformat_project;

import java.text.ParseException;

public class DateFormat_Project {

    public static void main(String[] args) throws ParseException{
        DateFormat df1 = new DateFormat();
        df1.displayDateFormat("01/10/2011", true);
        df1.checkSubsequentOrSameDate("12/05/2018", "11/01/2020", false);
        df1.displayDateOtherWay("02/03/2020", true);
    }
    
}
