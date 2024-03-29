#pragma once
#include<string>

class card {

public:
	card(int level = 1, int soul = 1, int trigger = 0, std::string color = "blue", std::string type = "character"); //Normal constructor with specific traits
	card(std::string type); //Ctor with type only

	card(const card& p1); //Copy Constructor

	int getLevel(void) { return mLevel; };
	int getSoul(void) { return mSoul; };
	int getTrigger(void) { return mTrigger; };
	std::string getColor(void) { return mColor; };
	std::string getType(void) { return mType; };
	

private:
	int mLevel;
	int mSoul;
	int mTrigger;
	std::string mColor;
	std::string mType;

	


};