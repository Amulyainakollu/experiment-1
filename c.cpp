#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int largest(int a){
    int l=INT_MIN,num;
    while(a>0){
        num=a%10;
        l=max(num,l);
        a=a/10;
    }
    return l;
}
int smallest(int a){
    int l=INT_MAX,num;
    while(a>0){
        num=a%10;
        l=min(num,l);
        a=a/10;
    }
    return l;
}

int main() {
    int a,b,c;
    cin>>a>>b>>c;
    int p=largest(a)+largest(b)+largest(c);
    int s=smallest(a)+smallest(b)+smallest(c);
    cout<<s-p;
    return 0;
}

java

import java.lang.*;
import java.util.*;
import java.io.*;
public class Test {
   public static int smallest(int num){
        int reminder, small=num%10;
    while (num > 0)
    {
        reminder = num % 10;
        if (small> reminder) 
        {
            small = reminder;
        }
        num = num / 10;
    }
    return small;
    }
    public static int largest(int num){
         int reminder, large= 0;
    while (num > 0)
    {
        reminder = num % 10;
        if (large< reminder) 
        {
            large= reminder;
        }
        num = num / 10;
    }
    return large;
    }
    public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    System.out.println("enter input1:\n");
    int a=sc.nextInt();
     System.out.println("enter input2:\n");
    int b=sc.nextInt();
     System.out.println("enter input3:\n");
    int c=sc.nextInt();
    int largesum = largest(a)+largest(b)+largest(c);
    int smallsum = smallest(a)+smallest(b)+smallest(c);
    int result = smallsum-largesum;
    System.out.println("key is :"+result);
}
}