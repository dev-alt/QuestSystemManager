#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Quest.h"


class quest_manager {

	private:
		std::vector<quest> quests_;
		std::vector<quest> completed_quests_;
	    std::vector<quest> abandoned_quests_;
	    std::vector<quest> failed_quests_;

	public:
	    void add_quest(const std::string& quest_name);
	    quest_manager();
	    void complete_quest(const std::string& quest_name);
	    void print_quests() const;
	    void completed_quests() const;
	    void abandon_quest(const std::string& quest_name);
	    void fail_quest(const std::string& quest_name);
	    void show_abandoned_quests() const;
	    void show_failed_quests() const;
};
