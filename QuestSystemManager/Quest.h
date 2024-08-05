#pragma once
#include <string>
#include <iostream>

class quest {
public:
    enum class status {
        ACTIVE,
        COMPLETED,
        FAILED,
        ABANDONED
    };

    quest(std::string quest_name);

    void complete();
    void fail();
    void abandon();

    [[nodiscard]] std::string to_string() const;
    [[nodiscard]] status get_status() const { return status; }

    friend std::ostream& operator<<(std::ostream& os, const quest& quest);

private:
    std::string name;
    status status;
};