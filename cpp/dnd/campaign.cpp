#include <iostream>

using namespace std; 

class Skills{
    string name; 
    //short int skillNum; 
    short int points; 
    public:

        void increase(int i){
            this->points = this->points + i; 
        }
        int getSkillPoints(){
            return this->points; 
        }
        string getSkillName(){
            return this->name; 
        }
        void setName(string skillname){
            this->name = skillname; 
        }

};

class characterSkills {
    
        Skills * skillArray = new Skills[18]; 
    public: 
        characterSkills(){
            skillArray[0].setName("Acrobatics"); 
            skillArray[1].setName("Animal Handling");
            skillArray[2].setName("Arcana");
            skillArray[3].setName("Athletics");
            skillArray[4].setName("Deception");
            skillArray[5].setName("History");
            skillArray[6].setName("Insight");
            skillArray[7].setName("Intimidation");
            skillArray[8].setName("Investigation");
            skillArray[9].setName("Medicine");
            skillArray[10].setName("Nature");
            skillArray[11].setName("Perception");
            skillArray[12].setName("Performance");
            skillArray[13].setName("Persuasion");
            skillArray[14].setName("Religion");
            skillArray[15].setName("Sleight of Hand");
            skillArray[16].setName("Stealth");
            skillArray[17].setName("Survival");
        }
        Skills getSkill(int i){
            return skillArray[i]; 
        }
        void increaseSkill(int i, int k){
            skillArray[i].increase(k); 
            cout << skillArray[i].getSkillName() << " has increased by "<< k << "!"<<endl; 
        }

};

class Race{
    private:
    string name; 

};

class CharClass{
    private:
        string nameClass; 
        int hitPointDice;
        characterSkills charSkills; 

};

class Player{
    private:
        string name; 
        CharClass theClass; 
        int level; 
        int experience; 
        string alignment; 
        int * stats = new int[6]; 
        

    public:

    Player(string n, CharClass cl, string aling){
        this->name = n; 
        this->theClass = cl; 
        this->level = 1; 
        this->experience = 0; 
        this->alignment = aling; 
        setStatistics(*this); 
    }

    //getters
        string getName(){
            return this->name; 
        }
        CharClass getClass(){
            return this->theClass; 
        }
        int getLevel(){
            return this->level; 
        }
        int getExperience(){
            return this->experience;
        }

    //setters
        void setLevel(int l){
            this->level = l; 
        }

    void setStatistics(Player pl){
        cout << "Insert "<< pl.getName() << "'s Strength: ";
        cin >> pl.stats[0]; 
        cout << "Insert "<< pl.getName() << "'s Dexterity: ";
        cin >> pl.stats[1];
        cout << "Insert "<< pl.getName() << "'s Constitution: ";
        cin >> pl.stats[2];
        cout << "Insert "<< pl.getName() << "'s Intelligence: ";
        cin >> pl.stats[3];
        cout << "Insert "<< pl.getName() << "'s Wisdom: ";
        cin >> pl.stats[4];
        cout << "Insert "<< pl.getName() << "'s Charisma: ";
        cin >> pl.stats[5];
    }
    void setStatistics(Player * pl, short int str, short int dex, short int con, short int intel, short int wis, short int cha){
        pl->stats[0] = str; 
        pl->stats[1] = dex;
        pl->stats[2] = con;
        pl->stats[3] = intel;
        pl->stats[4] = wis; 
        pl->stats[5] = cha; 
    }

};

class Campaign{
    private:
    int sizeparty; 
    //Player * players = new Player[sizeparty];
};
