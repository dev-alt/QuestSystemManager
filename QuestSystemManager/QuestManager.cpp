
#include <iostream>
#include <string>
#include "QuestManager.h"


using namespace std;
QuestManager::QuestManager() {
	// Constructor implementation
}

void QuestManager::AddQuest(const string& questName) {
	if (questName.empty()) {
		throw invalid_argument("Quest name cannot be empty.");
	}
	quests.push_back(questName);
	cout << "Quest added: " << questName << endl;
}

void QuestManager::CompleteQuest(const string& questName) {
	if (questName.empty()) {
		throw invalid_argument("Quest name cannot be empty.");
	}
	completedQuests.push_back(questName);
	cout << "Quest completed: " << questName << endl;
}

void QuestManager::PrintQuests() const {

	cout << "Quests:" << endl;
	for (int i = 0; i < quests.size(); i++) {
		cout << quests[i] << endl;
	}
}
void QuestManager::CompletedQuests() const {
	for (int i = 0; i < completedQuests.size(); i++) {
		cout << "Quest completed: " << completedQuests[i] << endl;
	}
}
void QuestManager::AbandonQuest(const string& questName) {
	if (questName.empty()) {
		throw std::invalid_argument("Quest name cannot be empty.");
	}
	abandonedQuests.push_back(questName);
	cout << "Quest abandoned: " << questName << endl;
}
void QuestManager::FailQuest(const string& questName) {
	if (questName.empty()) {
		throw std::invalid_argument("Quest name cannot be empty.");
	}
	failedQuests.push_back(questName);
	cout << "Quest failed: " << questName << endl;
}
void QuestManager::ShowAbandonedQuests() const {
	if (abandonedQuests.size() == 0) {
		cout << "No abandoned quests" << endl;
	}
	for (int i = 0; i < abandonedQuests.size(); i++) {
		cout << "Quest abandoned: " << abandonedQuests[i] << endl;
	}
}
void QuestManager::ShowFailedQuests() const {
	if (failedQuests.size() == 0) {
		cout << "No failed quests" << endl;
	}
	for (int i = 0; i < failedQuests.size(); i++) {
		cout << "Quest failed: " << failedQuests[i] << endl;
	}
}