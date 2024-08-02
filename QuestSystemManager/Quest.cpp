#include "Quest.h"

quest::quest(std::string quest_name)
    : name(std::move(quest_name)), completed(false), failed(false), abandoned(false) {}
