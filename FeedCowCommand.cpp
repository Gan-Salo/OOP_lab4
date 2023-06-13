#include "FeedCowCommand.h"

void FeedCowCommand::execute() {
    feedingSystem->spreadFood();
    cout << "кормление коров " << std::endl;
}