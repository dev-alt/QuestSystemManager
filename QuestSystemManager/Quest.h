#pragma once
#include <string>
#include <iostream>

class quest {
public:
    std::string name;
    bool completed;
    bool failed;
    bool abandoned;

    explicit quest(std::string quest_name);

    [[nodiscard]] std::string to_string() const
    {
        return "Quest: " + name;
    }

    friend std::ostream& operator<<(std::ostream& os, const quest& quest) {
        os << quest.to_string();
        return os;
    }
};