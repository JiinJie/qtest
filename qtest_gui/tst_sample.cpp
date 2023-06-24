////您可以使用以下语法在QFETCH中传递多个不同类型的参数：

//QTest::newRow("test1") << 1 << "hello" << QVariantList() << QList<int>();
////这里是一个完整的例子：

//void MyTest::test_data()
//{
//    QTest::addColumn<int>("input1");
//    QTest::addColumn<QString>("input2");
//    QTest::addColumn<QVariantList>("input3");
//    QTest::addColumn<QList<int>>("input4");

//    QTest::newRow("test1") << 1 << "hello" << QVariantList() << QList<int>();
//}

//void MyTest::test()
//{
//    QFETCH(int, input1);
//    QFETCH(QString, input2);
//    QFETCH(QVariantList, input3);
//    QFETCH(QList<int>, input4);

//    QCOMPARE(convert(input1), input2);
//    QCOMPARE(convert(input3), input4);
//}
