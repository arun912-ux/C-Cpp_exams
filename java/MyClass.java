

import java.util.*;

class RRT{

    int ticketNo;
    String raisedBy;
    String assignedTo;
    int priority;
    String project;

    public RRT(int tno, String rby, String ato, int pri, String pro){
        this.ticketNo = tno;
        this.raisedBy=rby;
        this.assignedTo = ato;
        this.priority = pri;
        this.project=pro;
    }


}


public class MyClass {

    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        int n = 4;
        List<RRT> rrtarr = new ArrayList<>();
        for(int i=0; i<n; i++){
            int tno = sc.nextInt();sc.nextLine();
            String rby = sc.nextLine();
            String ato = sc.nextLine();
            int pri = sc.nextInt(); sc.nextLine();
            String pro = sc.nextLine();
            RRT obj = new RRT(tno, rby, ato, pri, pro);
            rrtarr.add(obj);
        }

        String param = sc.nextLine();

        sc.close();
        RRT ret = getHighestPriorityTicket(rrtarr, param);
        if(ret != null){
            System.out.println(ret.ticketNo);
            System.out.println(ret.raisedBy);
            System.out.println(ret.assignedTo);
        }else{
            String st = "No such Ticket";
            System.out.println(st);
        }



    }

    public static RRT getHighestPriorityTicket(List<RRT> rrtarr, String param){

        RRT ret = null;
        int lp = 999;
        for(RRT e : rrtarr){
            if(e.project.equalsIgnoreCase(param) && e.priority <= lp){
                lp = e.priority;
                ret = e;
            }
        }

        return ret;

    }


}

