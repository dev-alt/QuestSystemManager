#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Quest {
	string name;
	bool completed;
	bool failed;
	bool abandoned;
};

class QuestManager {
private:
    vector<string> quests;
    vector<string> completedQuests;
    vector<string> abandonedQuests;
    vector<string> failedQuests;
public:
    void AddQuest(const string& questName);
    QuestManager();
    void CompleteQuest(const string& questName);
    void PrintQuests() const;
    void CompletedQuests() const;
    void AbandonQuest(const string& questName);
    void FailQuest(const string& questName);
    void ShowAbandonedQuests() const;
    void ShowFailedQuests() const;
};
