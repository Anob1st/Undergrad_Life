#include<stdio.h>
#define MAX 10


//Stores the employees home address information
struct Address{
    char district[3000];
    char division[3000];
};
//Stores the employees personal information
struct Employee{
    int id;
    char name[5000];
    struct Address address;
};

//Displays all employee records
void display(struct Employee e[],int n){ 
    int i;
    printf("----------------------------------------\n");
    printf("         OFFICE EMPLOYEE RECORDS\n");
    printf("-----------------------------------------\n");
    printf("ID     NAME      DISTRICT         DIVISION\n");
    printf(" ----------------------------------------\n");
    
    for(i=0;i<n;i++){
        printf("%-8d %-25s %-30s %-25s\n", e[i].id,e[i].name,
              e[i].address.district,e[i].address.division);
    }
    printf("--------------------------\n");
    printf("Total employees:%d\n",n);
}




int main(){
    //No fgets(),scanf input is required.
    struct Employee employees[MAX]={
        {1001,"Rahim",{"Sylhet","Sylhet"}},
        {1002,"Karim",{"Dhaka","Dhaka"}},
        {1003,"Nusrat",{"Chattogram","Chattogram"}},
        {1004,"Sadia",{"Mymensingh","Mymensingh"}},
        {1005,"Tanvir",{"Cumilla","Chattogram"}},
        {1006,"Mehedi",{"Rajshahi","Rajshahi"}},
        {1007,"Farhana",{"Barishal","Barishal"}},
        {1008,"Sakib",{"Rangpur","Rangpur"}},
        {1009,"Tanjim",{"Khulna","Khulna"}},
        {1010,"Mim",{"Sylhet","Sylhet"}}
    };
    
//Employee Number, array decalration
    int total=sizeof(employees)/sizeof(employees[0]); 

    //Display stored employee informations
    display(employees,total);

    return 0;
}
