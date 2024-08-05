#include "Quest.h"

quest::quest(std::string quest_name)
    : name(std::move(quest_name)), status(status::ACTIVE) {}

void quest::complete() {
    status = status::COMPLETED;
}

void quest::fail() {
    status = status::FAILED;
}

void quest::abandon() {
    status = status::ABANDONED;
}

std::string quest::to_string() const {
    std::string status_str;
    switch (status) {
    case status::ACTIVE:    status_str = "Active";    break;
    case status::COMPLETED: status_str = "Completed"; break;
    case status::FAILED:    status_str = "Failed";    break;
    case status::ABANDONED: status_str = "Abandoned"; break;
    }
    return "Quest: " + name + " (Status: " + status_str + ")";
}

std::ostream& operator<<(std::ostream& os, const quest& quest) {
    os << quest.to_string();
    return os;
}