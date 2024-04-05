#include <iostream>
#include <vector>

using namespace std;

class Hierarchy {
public:
  string name;
  int power;
  vector<Hierarchy*> subordinates;

  Hierarchy(string name, int power) {
    this->name = name;
    this->power = power;
  }

  void addSubordinate(Hierarchy* subordinate) {
    subordinates.push_back(subordinate);
  }
  void communicate(Hierarchy* person) {
    cout << this->name << " conveys to " << person->name << endl;
  }
};

int main() {
  Hierarchy* LEAD = new Hierarchy("LEAD", 100);
  Hierarchy* CORE= new Hierarchy("CORE", 90);
  Hierarchy* JOINT_CORE = new Hierarchy("JOINT_CORE", 70);
  Hierarchy* TEAMMEM_1 = new Hierarchy("TEAMMEM_1", 60);
  Hierarchy* TEAMMEM_2 = new Hierarchy("TEAMMEM_2", 60);
  Hierarchy* TEAMMEM_3 = new Hierarchy("TEAMMEM_3", 60);
  Hierarchy* TEAMMEM_4 = new Hierarchy("TEAMMEM_4", 60);

  LEAD->addSubordinate(CORE);
  CORE->addSubordinate(JOINT_CORE);
  JOINT_CORE->addSubordinate(TEAMMEM_1);
  JOINT_CORE->addSubordinate(TEAMMEM_2);
  JOINT_CORE->addSubordinate(TEAMMEM_3);
  JOINT_CORE->addSubordinate(TEAMMEM_4);

  // COMMUNICATION CODE
  LEAD->communicate(CORE);
  CORE->communicate(JOINT_CORE);
  JOINT_CORE->communicate(TEAMMEM_1);
  JOINT_CORE->communicate(TEAMMEM_2);
  JOINT_CORE->communicate(TEAMMEM_3);
  JOINT_CORE->communicate(TEAMMEM_4);
  return 0;
}
