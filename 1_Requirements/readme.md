# EMPLOYEE MANAGEMENT SYSTEM-(EMS)
## Introduction:-
Employee Record System is an application which allows the user to create,modify display all the details of the Employee working in the company.It is a best way to organize data of all the employees. 

## Objectives:-
1) Organized way to store the Employee data
2) Well designed data management system
3) Making easy modification system

## Defining System:-

## Explanation:-
Employee details such as name ,age and salary can be added an also there is an option of deleting or modification of the record which would help in quick changes.Also we can see all the details of the employee in the company.
# SWOT Analysis:
![Untitled Workspace](https://user-images.githubusercontent.com/80695458/115008636-fa9a5c00-9ec8-11eb-8919-28d41b94a903.png)


4W's and 1'H
Who:
      Employee Management System is used by the industries to store the data of the employees. This system is used for any kind of industry
       whether it be small scale or large scale.
What:
      It is helpful for the company organisation in order to save the complete data of each employee.
When:
      The Employee Management System is now used in every industry to have all the info of the employee stored into file/database. This way            all the list of employees working in a particular industry can be stored in one place
Where:
      Face the issues in saving the data of Employee in companies, Industries etc.
How:
     This issue can be solved by creating a database of employees and saving the information in a file.
Detail requirements
High Level Requirements:
ID	Description	Category	Status
HR01	cilent shall be able to add Employee record	Techincal	TBD-S1
HR02	cilent shall be able to display Employee record	Techincal	TBD-S1
HR03	cilent shall be able to update a Employee record	Techincal	TBD-S1
HR04	cilent shall be able to delete a Employee record	Techincal	TBD-S1
HR05	cilent shall be able to save records in a file	Techincal	TBD-S1
HR06	cilent shall be able to read data from a file	Techincal	TBD-S1
HR07	Data should not be lost in case of faliure	Scenario	FUTURE
HR08	Data should be stored when closing the system	Scenario	TBD-S1
Low level Requirements:
ID	Description	HLR ID	Status (Implemented/Future)
LR01	New record is added and Employee id should be unique	HR01	TBD-S1
LR02	Finding the Employee details can be either by searching by name or the best way of searching is by Employee id	HR02	TBD-S1
LR03	If user searches for an invalid ID ""ERROR RECORD NOT FOUND" message should be displayed	HR02	TBD-S1
LR04	User need to search by the Employee id for the details to be updated, if no record is available then "ERROR RECORD NOT FOUND" Message should be displayed	HR02	TBD-S1
LR06	User need to search by id for the Employee record to be deleted, if no such record is available then "ERROR RECORD NOT FOUND" Message should be displayed	HR04	TBD-S1
LR05	User shall be able to save the files, if file already exists then it should append to file and should not overwrite it and if file does not exists then it should create a new file	HR06	TBD-S1
LR06	If opening the login page fails system shloud prompt the message "Invalid login"	HR07	TBD-S1
LR07	After adding each record it asks whether you need to add an another record or Not and Display message as "Y/N" if want to add/modify/delete another record can click Y/N	HR01,HR02,HR03,HR04	TBD-S1
