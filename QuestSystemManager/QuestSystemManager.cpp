#include "QuestManager.h"

int main() {
    QuestManager questManager;
    questManager.AddQuest("Kill 10 rats");
    questManager.AddQuest("Collect 5 flowers");
    questManager.AddQuest("Deliver a letter to the king");
    questManager.AddQuest("Find the lost sword");
    questManager.AddQuest("Find the lost sword2");

    questManager.CompleteQuest("Kill 10 rats");
    questManager.CompleteQuest("Collect 5 flowers");
    questManager.CompleteQuest("Deliver a letter to the king");
    questManager.FailQuest("Find the lost sword");
    questManager.FailQuest("Find the lost sword2");

    questManager.PrintQuests();


    cout << "Completed quests:" << endl;
    questManager.CompletedQuests();
    questManager.ShowAbandonedQuests();
    questManager.ShowFailedQuests();
    return 0;
}