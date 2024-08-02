#include <iostream>
#include <string>
#include "QuestManager.h"

using namespace std;

quest_manager::quest_manager() = default;

void quest_manager::add_quest(const string& quest_name) {
	if (quest_name.empty()) {
		throw invalid_argument("Quest name cannot be empty.");
	}
	quests_.emplace_back(quest_name);
	cout << "Quest added: " << quest_name << endl;
}

void quest_manager::complete_quest(const string& quest_name) {
	if (quest_name.empty()) {
		throw invalid_argument("Quest name cannot be empty.");
	}
	completed_quests_.emplace_back(quest_name);
	cout << "Quest completed: " << quest_name << endl;
}

void quest_manager::print_quests() const {

	cout << "Quests:" << endl;
	for (const auto& quest : quests_)
	{
		cout << quest << endl;
	}
}
void quest_manager::completed_quests() const {
	for (const auto& completed_quest : completed_quests_)
	{
		cout << "Quest completed: " << completed_quest << endl;
	}
}
void quest_manager::abandon_quest(const string& quest_name) {
	if (quest_name.empty()) {
		throw std::invalid_argument("Quest name cannot be empty.");
	}
	abandoned_quests_.emplace_back(quest_name);
	cout << "Quest abandoned: " << quest_name << endl;
}
void quest_manager::fail_quest(const string& quest_name) {
	if (quest_name.empty()) {
		throw std::invalid_argument("Quest name cannot be empty.");
	}
	failed_quests_.emplace_back(quest_name);
	cout << "Quest failed: " << quest_name << endl;
}
void quest_manager::show_abandoned_quests() const {
	if (abandoned_quests_.empty()) {
		cout << "No abandoned quests" << endl;
	}
	for (const auto& abandoned_quest : abandoned_quests_)
	{
		cout << "Quest abandoned: " << abandoned_quest << endl;
	}
}
void quest_manager::show_failed_quests() const {
	if (failed_quests_.empty()) {
		cout << "No failed quests" << endl;
	}
	for (const auto& failed_quest : failed_quests_)
	{
		cout << "Quest failed: " << failed_quest << endl;
	}
}