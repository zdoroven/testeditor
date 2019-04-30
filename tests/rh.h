#ifndef RH_H
#define RH_H
#include "main.h"


TEST(rh, test1) {

    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output6.txt", "wb") : outputFile = fopen("C:/work/testing/testeditor/tests/output/output6.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);

    text txt = create_text();
    char inFile[MAXLINE];
    TRAVIS ? strncpy(inFile, "tests/input/input6.txt", MAXLINE) : strncpy(inFile, "C:/work/testing/testeditor/tests/input/input6.txt", MAXLINE);
    load(txt, inFile);

    rh(txt);
    show(txt);

    returnStream(outputFile, oldstdOut);
    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected6.txt", "r") : expectedData = fopen("C:/work/testing/testeditor/tests/expected/expected6.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output6.txt", "r") : outputData = fopen("C:/work/testing/testeditor/tests/output/output6.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}

TEST(rh, test2) {

    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output1.txt", "wb") : outputFile = fopen("C:/work/testing/testeditor/tests/output/output1.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);

    text txt = create_text();
    char inFile[MAXLINE];
    TRAVIS ? strncpy(inFile, "tests/input/input1.txt", MAXLINE) : strncpy(inFile, "C:/work/testing/testeditor/tests/input/input1.txt", MAXLINE);
    load(txt, inFile);

    rh(txt);
    show(txt);

    returnStream(outputFile, oldstdOut);
    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected1.txt", "r") : expectedData = fopen("C:/work/testing/testeditor/tests/expected/expected1.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output1.txt", "r") : outputData = fopen("C:/work/testing/testeditor/tests/output/output1.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}
#endif // RH_H
