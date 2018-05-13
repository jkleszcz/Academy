#include <QtTest>
#include"../../lab5/list.h"
// add necessary includes here

class listTests : public QObject
{
    Q_OBJECT

public:
    listTests();
    ~listTests();

private slots:
    void test_case1();

};

listTests::listTests()
{

}

listTests::~listTests()
{

}

void listTests::test_case1()
{

}

QTEST_APPLESS_MAIN(listTests)

#include "tst_listtests.moc"
