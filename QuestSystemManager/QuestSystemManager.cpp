#include "QuestSystem.h"
#include "QuestSystemUI.h"

int main() {
    quest_manager qm;
    QuestSystemUI ui(qm);
    ui.run();
    return 0;
}