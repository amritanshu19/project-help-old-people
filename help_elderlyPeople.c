#include <stdio.h>

//take input about general information about the primary contact and store it in a struct data type
typedef struct contact_details 
  {
    char first_name[100];     //first name
    char last_name[100];      //last name
    char relation_type[100];  //realtionship with the user i.e son if the contact is son of the user
    double contact_number; //mobile number will have upto 10 interger digits i.e used double data type instead of int data type
  } contact;

int main() 
{
  contact contact_1;
  //aske user to Enter the deatails
  printf("enter the deatils of the person whom you would like to be contacted in case of an emergency: \n enter the first name: \n");
  scanf("%s", contact_1.first_name);

  printf("enter the last name: \n");
  scanf("%s", contact_1.last_name);

  printf("enter the relation type: \n");
  scanf("%s", contact_1.relation_type);

  printf("enter the contact number: \n");
  scanf("%lf", &contact_1.contact_number);
  //can take input of 2nd contact based on the needs and availablity

  //operations begin here
  
  //take input of the orientation sensor in the andriod device of the user and store it in an array named orientation

  //size of orientation array depends of number of times the test is to be perfomred in a day
  //keeping the size of array as 96 i.e the test can be performed every 15 mins as (24 * 60)/15 = 96

  int orientation[96];

  //auto-input but here input is taken manually
  printf("Enter the orentation/rotation of the phone sensor intially: \n");
  //horizontal/ vertical only two possible inputs
  //use 0 for horizontal input and 1 for vertical

  printf("Enter the orentation of the phone sensor intially \n Note: Use 0 for horizontal input and 1 for vertical. \n");
  scanf( " %d", &orientation[0]);
  //now use a for loop to get the perform the checks
  for ( int i=1; i<96; i++)
  {
    printf("Enter the orientation of phone for %d th\t time.\n ", i);
    scanf(" %d", &orientation[i]);
    //use if or else statement to check the if the orientation is similar to intial one, if it's not then it indicates something is not right
     if(orientation[i]==orientation[0])
     {
       printf("The user is fine.\n");
     }
     else
     {
       printf("Flash a message on the user device that we are initiating a SOS message, if he fine the ask the user to stop the SOS message by entering NO.\n");
       //can't take yes as input he might be subconsious and unable to reply to the flash meassage

       char message_decision;
       printf("Enter: N if everything is fine \n");
       scanf (" %c", &message_decision);

       if (message_decision == 'N')
       {
         printf("Everything is fine\n");
       }
       //wait for 3 mins and then execute else statement
       else
       {
         printf("Contacting your %s Mr/Mrs. %s %s\n", contact_1.relation_type, contact_1.first_name, contact_1.last_name );
         printf( " call %.0lf \n", contact_1.contact_number);

         int response;
         //this is for the device to decide, however no deveice is conected rightnow
         printf("Enter wheater the response is recivied. for response enter 0 and for no response eneter 1\n");
         scanf("%d", &response);
          if (response==0)
          {
            printf("Information delivered\n");
          }

         //wait for the responsonse of primary contact and if primary don't responds then call emergency services
         else
         {
         printf("Call Elderly helpline: 112\n");
         //come out of the loop
         return 1;
         }
       }
     }

  }



  printf("Exit the code\n");
  return 0;
}
