import java.util.*;
import java.lang.*;
import java.io.*;
import java.util.Scanner;
class Codechef
{
    public static void main (String[] args) throws java.lang.Exception
    {
        int[] size=new int[5];
        Scanner s= new Scanner(System.in);
        for(int i=0;i<5;i++){
            size[i]=s.nextInt();
        }
        int[] check=new int[1000000];
        for(int k=0;k<5;k++){
            for(int j=0;j<size[k];j++){
                int in=s.nextInt();
                check[in]++;
            }
        }
        int process=0;
        for(int i=0;i<check.length;i++){
            if(check[i]>2){
                process++;
            }
        }
        System.out.println(process);
    }
}