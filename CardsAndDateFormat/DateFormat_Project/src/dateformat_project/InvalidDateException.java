package dateformat_project;

public class InvalidDateException extends Exception{
    public InvalidDateException() {
        super("Invalid date");
    }
     public InvalidDateException(String message){
        super(message);
    }
}
