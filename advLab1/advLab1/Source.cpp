#include<iostream>
using namespace std;

class Achivement
{
private:
	string title;
	string description;
	int score;
public:


	void SetTitle(const string& GameTitle)
	{
		title = GameTitle;
	}
	string GetTitle()
	{
		return title;
	}
	void SetDescription(const string& FullDescription)
	{
		description = FullDescription;
	}
	string GetDescription()
	{
		return description;
	}
	int SetScore( int& AchivementScore)
	{
		score = AchivementScore;
	}
	int GetScore()
	{
		return score;
	}
};


class Game
{
private:
	string name;
	string publisher;
	string developer;
	int achivementCount;
	Achivement* GameAchivement;
public:
	void SetAchivement(Achivement* GameAchivement, int achivementCount)
	{
		this->GameAchivement = GameAchivement;
		this->achivementCount = achivementCount;
	}
	void SetName(const string& GameName)
	{
		name = GameName;
	}
	string GetName()
	{
		return name;
	}
	void Setpublisher(const string& publisherName)
	{
		publisher = publisherName;
	}
	string Getpublisher()
	{
		return publisher;
	}
	void Setdeveloper(const string& developerName)
	{
		developer = developerName;
	}
	string Getdeveloper()
	{
		return developer;
	}
};


class Platform {
private:
	string name;
	string Manufacturer;
	int gameCount;
	Game* games;
public:

	void SetGame(Game* gamess,int gamesTracked)
	{
		games = gamess;
		gameCount = gamesTracked;
	}
	void SetName(const string& PlatName)
	{
		name = PlatName;
	}
	string GetName()
	{
		return name;
	}
	void SetManufacturer(const string& ManufacturerName)
	{
		Manufacturer = ManufacturerName;
	}
	string GetManufacturer()
	{
		return Manufacturer;
	}
};




int main() 
{
	int GamesTracked;
	cout << "Welcome to achievement tracker " << endl;
	do {
		cout << "Please enter the amount of games you would like to track  (Minimum 5)" << endl;
		cin >> GamesTracked;
		if(GamesTracked<5)
		{
			cout << "input too low" << endl;
		}
	} while (GamesTracked < 5);
	Game* games = new Game[GamesTracked];
	games->SetAchivement(GameAchivement, GamesTracked);
	return 0;
}