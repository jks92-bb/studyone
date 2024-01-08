package com.javalex.ex;

public class student {
	private String name;	// 이름
	private int age; 		// 나이
	private String gender;	// 성별
	
	public student() {
		
	}
	
	public student(String n, int a, String g) {
		this.name = n;
		this.age = a;
		this.gender = g;
	}
	//get set 함수쌍

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public int getAge() {
		return age;
	}

	public void setAge(int age) {
		this.age = age;
	}

	public String getGender() {
		return gender;
	}

	public void setGender(String gender) {
		this.gender = gender;
	}
	

}
