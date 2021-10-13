

import java.util.*;

class Triangle{
    int s1, s2,s3;

    Triangle(int sa1, int sa2, int sa3){
        s1=sa1;s2=sa2;s3=sa3;
    }
    
}

public class akkaMatrixTranspose{
    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);
{
        // int m = sc.nextInt();
        // int n = sc.nextInt();

        // int[][] matrix = new int[m][n];

        // for(int i=0; i<m; i++){
        //     for(int j=0; j<n; j++){
        //         matrix[i][j] = sc.nextInt();
        //     }
        // }


        // int[][] mat3 = Transpose(matrix);
        // for(int i=0; i<n; i++){
        //     for(int j=0; j<m; j++){
        //         System.out.print(mat3[i][j] + " ");
        //     }
        //     System.out.println();
        // }
        }
        Triangle tri[] = new Triangle[4];

        tri[0] = new Triangle(10, 6, 3);
        tri[1] = new Triangle(7, 8, 4);
        tri[2] = new Triangle(5, 12, 13);
        tri[3] = new Triangle(6, 11, 6);

        System.out.println(IdentifyingTriangle(tri));
        


        sc.close();
        
    }

    public static int[][] Transpose(int[][] matrix){

        int r = matrix.length;
        int c = matrix[0].length;
        int[][] mat2 = new int[c][r];

        for(int j=0; j<c; j++) { 
            for(int k=0; k<r; k++) {
                mat2[j][k] = matrix[k][j];
            }
        
        }

        return mat2;

    }

    static int IdentifyingTriangle(Triangle[] lst){

        int s=0,i=0,nt=0;

        for(int j=0; j<lst.length; j++){

            if(lst[j].s1+lst[j].s2 > lst[j].s3 && lst[j].s2+lst[j].s3 > lst[j].s1 && lst[j].s3+lst[j].s1 > lst[j].s2){
                if(lst[j].s1 == lst[j].s2 || lst[j].s2 == lst[j].s3 || lst[j].s3 == lst[j].s1){
                    i++;
                }else{
                    s++;
                }
            }else{
                nt++;
            }

        }

        System.out.println("i:" + i + "  s:" + s + "  nt:" + nt);

        return 3*s- (i+nt);
    }



}