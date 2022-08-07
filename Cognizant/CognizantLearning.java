import java.util.Arrays;
import java.util.List;

public class CognizantLearning{

    private int id;
    private String name;
    private int[] marks;
    private float average;
    private char grade;


    public int getId() {
        return this.id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public String getName() {
        return this.name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int[] getMarks() {
        return this.marks;
    }

    public void setMarks(int[] marks) {
        this.marks = marks;
    }

    public float getAverage() {
        return this.average;
    }

    public void setAverage(float average) {
        this.average = average;
    }

    public char getGrade() {
        return this.grade;
    }

    public void setGrade(char grade) {
        this.grade = grade;
    }

    
    public CognizantLearning(int id, String name, int[] marks) {
        this.id = id;
        this.name = name;
        this.marks = marks;
    }

    public void calculateAvg(){
        int sum = 0;
        for(int i=0; i<marks.length; i++){
            sum+=marks[i];
        }
        float avg = (float)(sum)/marks.length;
        this.setAverage(avg);
    }
    
    public void findGrade(){

    }



    public static void main(String[] args) {
        



    }


}

