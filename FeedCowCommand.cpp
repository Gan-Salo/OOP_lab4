#include "FeedCowCommand.h"

void FeedCowCommand::execute() {
    feedingSystem->spreadFood();
    cout << "��������� ����� " << std::endl;
}