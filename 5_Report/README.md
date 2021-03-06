
# Requirements

## Jewellery Billing System

## Introduction

This ,mini-project, is a console application using the C programming language. This project compiled in VSC code with the GCC compiler. In this console application, you can do Jewellery Bill Generator task like Generating the invoice,Show all invoices,Search invoice by name,Exit.





## Research

[Research Gate](https://www.researchgate.net/publication/345776202_Implementation_of_Improved_Billing_System)



## Features

When talking about the Jewllery Billing system there are a lot of things that are to be taken into consideration. Here are a few features that would make your JBS.


Now the Common Features of an JBS Include:

- Generate Invoice
- Show all Invoices
- Search the Invoice

## Defining Our System

A system is something formed of parts, each of which interacts with the other parts to achieve some common purpose.In the case of a billing system,it is a process by which a business bills and invoices customers.


## SWOT Analysis

### Strengths

- This project involves generating invoice and saving the records
- Reduction of manual work
- Easy to use

### Weaknesses

- Program can breakdown and give false results
- Online systems require good connection
- Open-source systems stores data on computer hardware.This increases the risk of data loss

### Opportunities

- Helps Jewellery Owners to save the invoices of the customers
- Mobile Apllications can be developed


### Threats

- User authentication
- Since these information are accessible by everyone we need to apply another level of security mode to apply for user access


## 4W's and 1'H

### Who:

The project can be used almost by all the particular organization people.At the end,user satisfaction is the goal of the project.

### What:

Generating the invoice,Showing the invoice,searching the invoice can be done by this system which is useful for the owners.

### When:

The project can be used when the bill needs to be generate,search,showcase.

### Where:

The Jewellery Billing system is nowadays essential for shops.They can use this software as the purpose of generating bill invoice and saving the invoice

### How:

System design is a solution for how to approach to the creation of a new system. It translates system requirements into ways by which they can be made operational. It is a translational from a user oriented document to a document oriented programmers. For that, it provides the understanding and procedural details necessary for the implementation. The system thus made should be reliable, durable and above all should have least possible maintenance costs.

## Detail Requirements

### High Level Requirements:

| ID | Discription     | Status               |
| :-------- | :------- | :------------------------- |
| HR_01 | Operating System (Windows 10/Linux) | Implemented |
|HR_02 | C language| Implemented|
|HR_03| Intel I5 Processor| Implemented|
|HR_04|RAM(4GB)| Implemented|
|HR_05|Hard Disk(512GB)| Implemented|

### Low Level Requirements:
| ID | Discription     | Status               |
| :-------- | :------- | :------------------------- |
| LR_01 | Functions to print customer details | Implemented |
| LR_02 | Functions to print price | Implemented |
| LR_03 | Functions to print Total amount | Implemented |


# Architecture
- Behavioural diagram
- Structural  diagram

![2](https://user-images.githubusercontent.com/102032303/161304974-31158609-67ec-4156-a4a9-431a428ee51b.png)
![Behaviour](https://user-images.githubusercontent.com/102032303/161304986-1f0e7ce1-d7f1-4e34-9dfe-2ebb51ef6186.png)



# Test plan and output:


## High level test plan and corresponding output:



| TEST ID | Discription     | Exp I/P    | Exp O/P| Actual Out| Type of test|
| :-------- | :------- | :------------------------- | :---------| :-----------| :----------|
| H_01 | Entering the customer details | "Ram" |Saved|Saved|Requirement|
|H_02 | Entering the details number of items purchased|2|Saved|Saved|Requirement|
|H_03| Entering the details  of items purchased| Necklace,1,9000,Ring,1,5000|Saved|Saved|Requirement|

## Low level test plan and corresponding output:

| TEST ID | Discription     | Exp I/P    | Exp O/P| Actual Out| Type of test|
| :-------- | :------- | :------------------------- | :---------| :-----------| :----------|
| L_01 | Generate Invoice | 1|display after details taken|display after details taken|Requirement|
|L_02 | Show All Invoices| 2|show the invoices|show the invoices|Requirement|
|L_03| Search the invoice| 3|search by name|search by name|Requirement|

