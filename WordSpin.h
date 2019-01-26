//
// Created by jakob on 26.01.19.
//

#ifndef CPPPLAY_WORDSPIN_H
#define CPPPLAY_WORDSPIN_H

#include <string>

class WordSpin
{

public:

    /*
     * Write a function that takes in a string of one or more words,
     * and returns the same string,
     * but with all five or more letter words reversed.
     * */
    std::string spinWords(const std::string &str);

    std::string spinWordsReverse(const std::string &str);

};


#endif //CPPPLAY_WORDSPIN_H
