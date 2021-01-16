package com.internsala.javaapp;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		//STEP 1
		System.out.println("Tax Calculator App");
		System.out.println("-----WELCOME-----");
		//STEP 2
		Scanner scanner = new Scanner(System.in);
		System.out.println("Enter total person count:");
		int n = scanner.nextInt();
		//STEP 3
		String[] name=new String[50];
		long[] income=new long[50];
		//STEP 4
		for(int i=1;i<=n;i++)
		{
			System.out.println("Enter name "+i);
			String name1 = scanner.next();
			System.out.println("Enter "+name1+"'s Annual income");
			long income1 = scanner.nextLong();
			name[i]=name1;
			income[i]=income1;
		}
		//STEP 8
		System.out.println("Name with liable taxes :");
		System.out.println("-------------------------------");
		for(int i=1;i<=n;i++){
			calculateTax(name[i],income[i]);
		}
		scanner.close();

		}
	}
	//STEP 5
	public static void calculateTax(String name ,long income){
	//STEP 6
		long tax;
		if(income>=300000){
			tax = (20/100)*income;
		}
		else if(income<=100000&&income<300000){
			tax=(10/100)*income;
		}
		else{
			System.out.println("NO Tax");
			tax =0;
		}
		//STEP 7
		System.out.println(name + " : \u20B9 " + tax);
		return;
	}