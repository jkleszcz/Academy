#include <QString>
#include <QtTest>

class ListTestsTest : public QObject
{
    Q_OBJECT

public:
    ListTestsTest();

private Q_SLOTS:
    void testCase1();
};

ListTestsTest::ListTestsTest()
{
}

void ListTestsTest::testCase1()
{
    QVERIFY2(true, "Failure");
}

QTEST_APPLESS_MAIN(ListTestsTest)

#include "tst_listteststest.moc"
