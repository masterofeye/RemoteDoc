#ifndef TESTAPP_H
#define TESTAPP_H
#include <QtCore>
#include <QtTest/QtTest>

class TestClass : public QObject
{
	Q_OBJECT
private:
	/*Private properties*/
private slots:

	/*
     @brief Will be called before the first test function is executed.
	*/
	void initTestCase()
	{

	}

	/*!
	 @brief Will be called before each test function is executed.
	*/
	void init()
	{
		
	}

	/*!
	 @brief First Testfunction.
	*/
	void myFirstTest()
    {
		/*Checks if the statement is true or not.*/
		QVERIFY(1 == 1);

		/*Performance test of the function*/
        QBENCHMARK {
			//Myclass.TestFunction();
        }
    }

    void mySecondTest()
    {
    }

	/*!
	 @brief Will be called after every test function.
	*/
	void cleanup()
	{
	}

	/*!
	 @brief Will be called after the last test function was executed.
	*/
    void cleanupTestCase()
    { 
		qDebug("called after myFirstTest and mySecondTest"); 
	}
};

#endif // TESTAPP_H

