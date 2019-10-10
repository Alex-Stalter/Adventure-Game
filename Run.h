//
// Created by Alex Stalter on 9/12/19.
//

#ifndef ADVENTURE_GAME_RUN_H
#define ADVENTURE_GAME_RUN_H

#include <iostream>


class Run {
public:
    Run();
    ~Run();

    void introStory();

protected:
    std::string name;

};


#endif //ADVENTURE_GAME_RUN_H
