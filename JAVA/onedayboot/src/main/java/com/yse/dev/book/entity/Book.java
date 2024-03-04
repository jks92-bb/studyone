package com.yse.dev.book.entity;

import java.time.LocalDateTime;

import org.hibernate.annotations.CreationTimestamp;

import jakarta.persistence.Column;
import jakarta.persistence.Entity;
import jakarta.persistence.GeneratedValue;
import jakarta.persistence.GenerationType;
import jakarta.persistence.Id;

import lombok.Builder;
import lombok.Data;

@Entity
@Data
@Builder
public class Book {  
	  @Id  
	  @GeneratedValue(strategy = GenerationType.IDENTITY)  
	  private Integer bookId;  

	  @Column(length = 200)  
	  private String title;  

	  private Integer price;  

	  @CreationTimestamp  
	  private LocalDateTime insertDateTime;  
	}  