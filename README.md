# project-help-old-people
Name of Project: Developing an algorithm to identify old people living alone when require help
The final proposed code is written in C language & uses a series of logic based tests/ algorithms to test the seriousness of the situation and if it detects anything is fishy it alerts the primary contact/the emergency services in case primary contact is unable to respond on time. This project can add a group of values like security , health , care and assurance in the life of it’s elderly users. This programming project will not only serve it’s elder users facing health problems only but can also be used in a variety of other areas for eg. in ensuring the security and well being of children living alone. The programme initially takes input the general information of the primary contact(the person who is going to be contacted initially in case of an emergency) and stores it in a struct data type. 
It has 4 data types as:
   char first_name[100];     //first name
   char last_name[100];      //last name
   char relation_type[100];  //relationship with the user i.e son if
                                     the contact is son of the user
   double contact_number;    //mobile number will have upto 10
                               integer digits i.e used double data
                               type instead of int data type
                               
The proposed programme uses the orientation/rotation sensors present in the existing android devices, 
it makes it extremely cost efficient and convenient to use. The proposed programme takes input the initial orientation of the android device of the user. 
The device is either handheld e.g smartphones or wearable like a smart watch. 
Then it compares the initial orientation of the device during 96 consecutive times with the then orientation of the device and then it makes a decision based on the predefined steps. 
If it detects something is unusual it flashes a message to the user that the programme is sending an SOS message to the primary contact. 
If the user finds that there is no need to send SOS then it can abort the SOS message by giving an input ‘N’ to the devices. 
If the device finds no input/another input it initiates the SOS. It waits for the response of primary contact and if it finds no response then goes ahead with contacting the emergency services itself.

Final design solution uses the almost the same algorithmic tests planned before
However the final code had been made a lot more efficient when compared to the
initially planned code. Instead of 4 proposed tests, it uses only test based upon the
orientation of the phone. This makes it a lot cost efficient and user friendly/ eases the 
User convenience. 

Logic Diagram: https://drive.google.com/file/d/1dXKT3laDIknr6dT16e8q_z17En0DOKAV/view?usp=sharing

video presentation: https://drive.google.com/file/d/1S43uEYKF6f3z4DMbtZJoLv_t3tgwJAWJ/view?usp=sharing

6.	What problems did you  encounter while working on the design idea and the project? How did you solve those problems? Are there any issues which remain unresolved? Write in detail.
	The problems i faced while doing this project are as following:
Lack of android device integration in the algorithm, It is very part of the code to use android based device for the user inputs. However, the C language is not compatible with android devices. It is solved by manual input of all the data which was supposed to be done by the android device.
Training of the user/ here the one who will perform the test. It is solved by giving detailed text instructions in the code. Comments and the printed instructions are essential component of how codes work and what to enter.

7.	What are the learnings from the project? Write about new ideas, principles, techniques
etc. which you learnt while working on the project

The important lessons learnt through this project are:

The importance of life and need to ramp up our efforts to save precious lives including those of our elders.
Complex understanding of C programming.
Real life execution of the concepts & skills (coding) learnt in a controlled environment
The necessity of cost effectiveness and ease of using
Hosting of codes in an online development environment

8.	Have you tested the prototype? Is it working well? Does it satisfy all the design criteria?
Elaborate.

Yes, I have tested the prototype and it meets the proposed criterias. It is able to make
decisions based upon predefined algorithms and is able to fasttrack the response of
emergency services/relatives in case of an emergency with an elder. Hence, it can prove
quite crucial in saving thousands of precious lives.

follow me on twitter: https://twitter.com/amritanshu1937 , Linkedin: https://www.linkedin.com/in/amritanshu-raj-42311a168/
