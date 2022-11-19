#ifndef PHYSICIAN_H
#define PHYSICIAN_H
#include<iostream>
#include<cstring>

usign namespace std;


class Physician: public User
{
	private:
		char phName[];
		char phSpecial[];
	public:
		physician(string uName, string contact, string eAddress, string uID, string Ugende, int Uage, string user_name,cstringdocname,	Payment* payment[SIZE2]); 
		void setphSpecial(string phSpecial); 
		void DoctorDetails(string docName, string phSpecial); 
		void viewDoctorDetails(); 
		void confirmAppointment(); 
		void validatePayment();
		~physician();
};

#endif
