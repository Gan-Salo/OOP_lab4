#include "FeedPigCommand.h"

void FeedPigCommand::execute() {
    feedingSystem->spreadFood();
    cout << "кормление свиней " << std::endl;
}