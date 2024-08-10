#pragma once
#include "QuestSystem.h"

class QuestSystemUI {
private:
    quest_manager& qm;

    void displayMenu() const;
    void addQuest();
    void completeQuest();
    void abandonQuest();
    void failQuest();
    void showQuests() const;
    void showCompletedQuests() const;
    void showAbandonedQuests() const;
    void showFailedQuests() const;

public:
    explicit QuestSystemUI(quest_manager& questManager);
    void run();
};

// QuestSystemUI.cpp
#include "QuestSystemUI.h"
#include <iostream>
#include <limits>

QuestSystemUI::QuestSystemUI(quest_manager& questManager) : qm(questManager) {}

void QuestSystemUI::displayMenu() const {
    std::cout << "\n===== Quest System Menu =====\n";
    std::cout << "1. Add Quest\n";
    std::cout << "2. Complete Quest\n";
    std::cout << "3. Abandon Quest\n";
    std::cout << "4. Fail Quest\n";
    std::cout << "5. Show All Quests\n";
    std::cout << "6. Show Completed Quests\n";
    std::cout << "7. Show Abandoned Quests\n";
    std::cout << "8. Show Failed Quests\n";
    std::cout << "0. Exit\n";
    std::cout << "Enter your choice: ";
}

void QuestSystemUI::addQuest() {
    std::string questName;
    std::cout << "Enter quest name: ";
    std::cin.ignore();
    std::getline(std::cin, questName);
    qm.add_quest(questName);
}

void QuestSystemUI::completeQuest() {
    std::string questName;
    std::cout << "Enter quest name to complete: ";
    std::cin.ignore();
    std::getline(std::cin, questName);
    qm.complete_quest(questName);
}

void QuestSystemUI::abandonQuest() {
    std::string questName;
    std::cout << "Enter quest name to abandon: ";
    std::cin.ignore();
    std::getline(std::cin, questName);
    qm.abandon_quest(questName);
}

void QuestSystemUI::failQuest() {
    std::string questName;
    std::cout << "Enter quest name to fail: ";
    std::cin.ignore();
    std::getline(std::cin, questName);
    qm.fail_quest(questName);
}

void QuestSystemUI::showQuests() const {
    qm.print_quests();
}

void QuestSystemUI::showCompletedQuests() const {
    qm.completed_quests();
}

void QuestSystemUI::showAbandonedQuests() const {
    qm.show_abandoned_quests();
}

void QuestSystemUI::showFailedQuests() const {
    qm.show_failed_quests();
}

void QuestSystemUI::run() {
    int choice;
    do {
        displayMenu();
        std::cin >> choice;

        switch (choice) {
        case 1: addQuest(); break;
        case 2: completeQuest(); break;
        case 3: abandonQuest(); break;
        case 4: failQuest(); break;
        case 5: showQuests(); break;
        case 6: showCompletedQuests(); break;
        case 7: showAbandonedQuests(); break;
        case 8: showFailedQuests(); break;
        case 0: std::cout << "Exiting...\n"; break;
        default: std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 0);
}