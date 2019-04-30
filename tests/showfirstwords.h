#ifndef SHOWFIRSTWORDS_H
#define SHOWFIRSTWORDS_H

#include "main.h"

TEST(showFirstWords, test1) {

    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output2.txt", "wb") : outputFile = fopen("C:/work/testing/testeditor/tests/output/output2.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }

    int oldstdOut = changeStream(outputFile);

    text txt = create_text();
    char inFile[MAXLINE];
    TRAVIS ? strncpy(inFile, "tests/input/input2.txt", MAXLINE) : strncpy(inFile, "C:/work/testing/testeditor/tests/input/input2.txt", MAXLINE);
    load(txt, inFile);

    showfirstwords(txt);

    returnStream(outputFile, oldstdOut);

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected2.txt", "r") : expectedData = fopen("C:/work/testing/testeditor/tests/expected/expected2.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output2.txt", "r") : outputData = fopen("C:/work/testing/testeditor/tests/output/output2.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
     } else {
        FAIL();
    }
}

TEST(showFirstWords, test2) {

    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output3.txt", "wb") : outputFile = fopen("C:/work/testing/testeditor/tests/output/output3.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }

    int oldstdOut = changeStream(outputFile);

    text txt = create_text();
    char inFile[MAXLINE];
    TRAVIS ? strncpy(inFile, "tests/input/input3.txt", MAXLINE) : strncpy(inFile, "C:/work/testing/testeditor/tests/input/input3.txt", MAXLINE);
    load(txt, inFile);

    showfirstwords(txt);

    returnStream(outputFile, oldstdOut);

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected3.txt", "r") : expectedData = fopen("C:/work/testing/testeditor/tests/expected/expected3.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output3.txt", "r") : outputData = fopen("C:/work/testing/testeditor/tests/output/output3.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
     } else {
        FAIL();
    }
}

TEST(showFirstWords, test3) {

    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output4.txt", "wb") : outputFile = fopen("C:/work/testing/testeditor/tests/output/output4.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }

    int oldstdOut = changeStream(outputFile);

    text txt = create_text();
    char inFile[MAXLINE];
    TRAVIS ? strncpy(inFile, "tests/input/input4.txt", MAXLINE) : strncpy(inFile, "C:/work/testing/testeditor/tests/input/input4.txt", MAXLINE);
    load(txt, inFile);

    showfirstwords(txt);

    returnStream(outputFile, oldstdOut);

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected4.txt", "r") : expectedData = fopen("C:/work/testing/testeditor/tests/expected/expected4.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output4.txt", "r") : outputData = fopen("C:/work/testing/testeditor/tests/output/output4.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
     } else {
        FAIL();
    }
}

TEST(showFirstWords, test4) {

    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output5.txt", "wb") : outputFile = fopen("C:/work/testing/testeditor/tests/output/output5.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }

    int oldstdOut = changeStream(outputFile);

    text txt = create_text();
    char inFile[MAXLINE];
    TRAVIS ? strncpy(inFile, "tests/input/input5.txt", MAXLINE) : strncpy(inFile, "C:/work/testing/testeditor/tests/input/input5.txt", MAXLINE);
    load(txt, inFile);

    showfirstwords(txt);

    returnStream(outputFile, oldstdOut);

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected5.txt", "r") : expectedData = fopen("C:/work/testing/testeditor/tests/expected/expected5.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output5.txt", "r") : outputData = fopen("C:/work/testing/testeditor/tests/output/output5.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
     } else {
        FAIL();
    }
}
#endif // SHOWFIRSTWORDS_H
