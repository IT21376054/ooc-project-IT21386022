#include"GuestUser.h"
#pragma once
class registeredUser : public GuestUser
{
	private:
		char username[10];
		char password[10];
	public:
		registeredUser();
		registeredUser(const char pusername[], const char ppassword[], int puserid, const char puserfname[], const char puserlname[], const char puseremail[]);
		void displayDetails();
		void login();
		~registeredUser();
};
