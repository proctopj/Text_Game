/****
*Author: Patrick Proctor 
*Date: December 16, 2013
*Sources: All code is original.
*
*This class defines the game's Character.
*/
#include <string>
using std::string;

class Character{
public:
  Character(string given, int i, bool s){name = given; age = i; sex = s;};

  string name;
  unsigned short int age, strength, dexterity, wisdom, intelligence, vitality, luck, armor, inventorySize;
  bool sex; //false is male, true is female
};
