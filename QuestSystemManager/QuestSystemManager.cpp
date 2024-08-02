#include "QuestManager.h"

using namespace std;
int main() {
    quest_manager quest_manager;


    string quest_name;
    string complete_quest;
    string abandon_quest;

    do {
        cout << "\nEnter a quest name 1 to exit: ";
        cin >> quest_name;
        if (quest_name != "1")
            quest_manager.add_quest(quest_name);
    } while (quest_name != "1");

    do {
        cout << "\nEnter a quest name to complete: ";
        cin >> complete_quest;
        if (complete_quest != "1")
            quest_manager.complete_quest(complete_quest);
    } while (complete_quest != "1");

    do {
        cout << "Enter a quest name to abandon: ";
        cin >> abandon_quest;
        if (abandon_quest != "1")
            quest_manager.abandon_quest(abandon_quest);
    } while (abandon_quest != "1");


    quest_manager.print_quests();


    cout << "Showing Completed quests:" << endl;
    quest_manager.completed_quests();
    quest_manager.show_abandoned_quests();
    quest_manager.show_failed_quests();
    return 0;
}