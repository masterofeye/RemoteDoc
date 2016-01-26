#include <QtTest/QtTest>
#include "testapp.h"


int main( int argc, char* argv[])
{
	QCoreApplication app(argc, argv);
	TestClass test1;
    QTest::qExec(&test1);
	system("pause");
}

//qmake -project "CONFIG += qtestlib"
//qmake
//nmake
