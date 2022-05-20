#pragma once
class GuestUser
{
private:
	int userID;
	char userFname[20];
	char userLname[20];
	char userEmail[30];

public:
	GuestUser();
	GuestUser(int puserid, const char puserfname[], const char puserlname[], const char puseremail[]);
	void registerUser();
	virtual void displayDetails();
	~GuestUser();
};
