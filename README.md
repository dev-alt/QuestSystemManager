# Quest System

Quest System is a C++ project that implements a simple quest management system for games or applications. It allows users to create, complete, abandon, and track quests.

## Features

- Add new quests
- Complete quests
- Abandon quests
- Fail quests
- View all quests
- View completed quests
- View abandoned quests
- View failed quests

## Project Structure

The project consists of the following files:

- `Quest.h` and `Quest.cpp`: Define the `quest` class
- `QuestManager.h` and `QuestManager.cpp`: Implement the `quest_manager` class
- `QuestSystem.h`: Header file that includes all necessary headers
- `QuestSystemManager.cpp`: Contains the `main()` function and demonstrates usage of the Quest System

## How to Use

1. Clone the repository to your local machine.
2. Compile the project using a C++ compiler that supports C++17 or later.
3. Run the compiled executable.

The program will prompt you to:
- Enter quest names (enter '1' to finish adding quests)
- Complete quests (enter '1' to finish completing quests)
- Abandon quests (enter '1' to finish abandoning quests)

After these operations, it will display all quests, completed quests, abandoned quests, and failed quests.

## Example Usage

```cpp
quest_manager manager;

manager.add_quest("Defeat the Dragon");
manager.add_quest("Collect 10 Herbs");

manager.complete_quest("Collect 10 Herbs");
manager.abandon_quest("Defeat the Dragon");

manager.print_quests();
manager.completed_quests();
manager.show_abandoned_quests();
manager.show_failed_quests();
```

## Contributing

Contributions to improve the Quest System are welcome. Please feel free to submit a Pull Request.

## License

[Specify your license here, e.g., MIT, GPL, etc.]

## Contact

[Your Name or Username]
[Your Email or GitHub profile]
