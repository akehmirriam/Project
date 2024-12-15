#include <stdio.h>
#include <stdlib.h>

#define MAX 50
#define SUBJECT 5

struct student{
    int id;
    char name[50];
    int age;
    int grades[SUBJECT];
    float averageGrades;

}student;


// function to add a student
void add_student(){
	struct student add;
	float algorithm;
	float maths;
	float web_programming;
	float digital_literacy;
	float architecture;
	printf("Enter Student ID: ");
	scanf("%d",&add.id);
	printf("Enter Name: ");
	scanf("%s",&add.name);
	printf("Enter Age: ");
	scanf("%d",&add.age);
	printf("Enter grades for 5 subjects\n");
	printf("Average in Algorithm\n");
	scanf("%f",&algorithm);
	printf("Average in Maths\n");
	scanf("%f",&maths);
	printf("Average in Web_Programming\n");
	scanf("%f",&web_programming);
	printf("Average in Digital_Literacy\n");
	scanf("%f",&digital_literacy);
	printf("Average in Architecture\n");
	scanf("%f",&architecture);
	printf("student added sucessfully\n");

// check if the student already existed
	 int i=0;
	 int count;
	for(i=0;i<count;i++){
		count++;
		scanf("%d","student[i]");
		if ("student[i] id=new id"){
			printf("student already existed\n");
		} else{
			scanf("%d",&add.id);
			printf("enter student name \n");
			scanf("%s",&add.name);
			printf("enter student age\n");
			scanf("%d",&add.age);
			printf("enter student grades\n");
			scanf("%f",&add.grades);
			printf("student is stored");
		}
	}
	// add the student to the array and increase the total count
	int arr[40];
	 int total ;
	count=0;
	int size;
	for(i=0;i<count;i++){
		count++;{
	int*ptr=(int*)malloc(size);
	total=count+1;
	printf("enter the student to be added\n");
	printf("student added successfully\n");
}
}
}
// function to display all records
void displayrecords(){
	struct student;
	char name[60];
	int id;
	int age;
	float AverageGrade;
	float Algorithm;
	float Maths;
	float Web_programming;
	float Digital_literacy;
	float Architecture;
	int numRecord;
	printf("enter the number of student record\n");
	scanf("%d",&numRecord);
	printf("enter student details\n");
	printf("enter name");
	scanf("%s",&name);
	printf("enter id");
	scanf("%d",&id);
	printf("enter age");
	scanf("%d",&age);
	printf("enter grades for student record");
	printf("average in algorithm");
	scanf("%f",&Algorithm);
	printf("average in maths");
	scanf("%f",&Maths);
	printf("average in web_programming");
	scanf("%f",&Web_programming);
	printf("average in digital_literacy");
	scanf("%f",&Digital_literacy);
	printf("average in architecture");
	scanf("%f",&Architecture);
	if(numRecord==0){
		printf("no records found");
	}else{
		printf("student record\n");
		printf("_______________________\n");
		printf("%s:name,%d:id,%d:age,%f:algorithm,%f:maths,%f:web_programming,%f:digital_literacy,%f:architecture\n");
		printf("________________________\n");
		for(int i=0; i<numRecord; i++);
		printf("%s:record[i].name,%d:record[i].id,%d:record[i].age,%f:record[i].algorithm,%f:record[i].maths,%f:record[i].web_programming,%f:record[i].digital_literacy,%:record[i].architecture\n");
		printf("____________________________n");
	}

}

//function to search for a student
void search(){
	struct student search;
	int id;
	char name[40];
	int i,choice;
	printf("search for a student by name in number 2 // by id in number 1\n");
	printf("enter your choice\n");
	scanf("%d",& choice);
	for(i=0;i<choice;i++);
	choice ++;
	if (choice==1){
	printf("enter student id\n");
	scanf("%d",&id);
	printf("student found");
	}   //
	if(choice==2){
		printf("enter student name\n");
		scanf("%s",&name);
	} else{
		if(choice!=1)//
		if(choice!=2){
			printf("student doesnot exist");
		}
	}
}  // function to sort records
void bublesort(){
	struct student;
	int id;
	char name[40];
	int grades;
int i;
	printf("enter student records\n");
	for(i=0;i<5;i++){
		printf("enter id");
		scanf("%d",&id);
		printf("enter name");
		scanf("%s",&name);
		printf("enter grades");
		scanf("%f",&grades);
	}
	printf("enter the sorting criteria\n");
	printf("1. student id\n");
	printf("2. student name\n");
	printf("3. student grades\n");
	int choice;
printf("enter your choice");
scanf("%d",&choice);
if(choice ==1){
	printf("sort by id");
	int arr[5];
	int j;
	int temp;
	if(arr[j]>arr[j+1]){
		temp=arr[j+1];
		arr[j]=arr[j+1];
		arr[j+1]=temp;
	}else{
	if(choice==2){
printf("sort by name");
	if(arr[j]>arr[j+1]){
		temp=arr[j+1];
		arr[j]=arr[j+1];
		arr[j+1]=temp;
	}else{
	if(choice==3){
		printf("sort by grades");
	}
	if(arr[j]>arr[j+1]){
		temp=arr[j+1];
		arr[j]=arr[j+1];
		arr[j+1]==temp;
	}
}
printf("sorted student records\n");
for(i=0;i<5;i++){
	i++;
	printf("the id is:%d student id, the name is:%s student name, the grades is:%f student marks");
}
}
}
}
}
// function to calculate average grades for students
void averagegrades(){
int subjects;
printf("enter grades for 5 subjects\n");
scanf("%d",subjects);
int sum=0;
sum+=subjects;
float average=sum/5;
printf("average grade is %f",average);
}
//function to identify top performer
void topperformer(){
	char name[60];
int subjects;
float grades;
float average;
int numsubject;
float averagGrades;
int numstudents;
int highest;
int top_performer;
printf("enter the number of students\n");
scanf("%d",numstudents);
for(int i=0; i<numstudents; i++){
	printf("enter name for student\n");
	scanf("%s",&name);
	printf("enter the grades\n");
	int sum=0;
	sum+=grades;
	average=sum/numsubject;
	if(average>highest
	){
		printf("highest grade=average");
		printf("top performer, name");
	}
	printf("average grade:%f",highest);
}

}
// function to update or delete a record
void updateordeleterecord(){
	char name[60];
	int age;
int id;
int numRecords;
float algorithm;
float maths;
float web_programming;
float digital_literacy;
float architecture;
int choice;
printf("Enter id to updated or deleted\n");
scanf("%d",&id);
printf("enter option 1 to update\n//option 2 to delete\n");
printf("enter choice");
if(choice==1){
	printf("updating record.....\n");
	printf("Enter Name");
	scanf("%s",&name);
	printf("Enter ID");
	scanf("%d",&id);
	printf("Enter Age");
	scanf("%d",&age);
	printf("Enter grades for 5 subjects\n");
	printf("Average in Algorithm\n");
	scanf("%f",&algorithm);
	printf("Average in maths\n");
	scanf("%f",&maths);
	printf("Average in We_programming\n");
	scanf("%f",&web_programming);
	printf("Average in Digital_literacy");
	scanf("%f",&digital_literacy);
	printf("Average in Architecture\n");
	scanf("%f",&architecture);
	printf("student updated successfully\n");
}
	if(choice==2){
		printf("delete student by id\n");
		for(int i=0; i<numRecords; i++){
			if(numRecords=id){
				for(int j=0; j<i-1; j++){
					i--;
					numRecords=numRecords;
					i--;
					printf("record deleted successfully\n");

				}
			}
		}
	}

}

int main(){
	int option;
	do{
		printf("\n--STUDENT MANAGEMENT SYSTEM--\n");
		printf("__________________________________\n");
		printf("1. Add New Student\n");
		printf("2. Display All Records\n");
		printf("3. Search For A Student\n");
		printf("4. Sort Records\n");
		printf("5. Computer Average Grades\n");
		printf("6. Identify Top Peformer\n");
		printf("7. Filter Student By Grade\n");
		printf("8. Update Or Delete A Record\n");
		printf("9. Analyse Grades\n");
		printf("10. Exit\n");
		printf("Enter Your Choice: ");
		scanf("%d",&option);
		if(option == 1){
			add_student();
		}
		if(option ==2){
		printf("display records");
		}
		if(option==3){
		printf("search for a student");
		}
		if(option==4){
		printf("sort records");
		}
		if (option==5){
		printf("computer average grade");
		}
		if(option==6){
		printf("identify top peformer");
		}
		if(option==7){
		printf("filter student by grade");
		}
		if(option==8){
		printf("update or delete a record");
		}
		if(option==9){
		printf("analyse grade");
		}
		if(option==10){
			printf("exit");
		}while(option!=10){
				printf("exiting.......");
		}
	}	while(option!=10);{
	printf("invalid input");
		return 0;

	}
}


