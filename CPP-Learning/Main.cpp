﻿#include <cstdlib>
#include <iostream>

#include "Chapters/9th/NinthChapter.h"

int main()
{
    const auto chapter = new NinthChapter();
    chapter->RunThirdTask();

    free(chapter);
    return 0;
}
