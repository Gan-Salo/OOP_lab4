#include "FeedPigCommand.h"

void FeedPigCommand::execute() {
    feedingSystem->spreadFood();
    cout << "��������� ������ " << std::endl;
}