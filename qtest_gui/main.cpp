#include "tst_start_gui.h"
#include "tst_ccc.h"
#include "tst_button.h"
#include "commoditywidget.h"


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    app.setAttribute(Qt::AA_Use96Dpi, true);


    start_gui tg;
    //QTEST_SET_MAIN_SOURCE_PATH
    QTest::qExec(&tg, argc, argv);

    tst_ccc tc;
    QTest::qExec(&tc, argc, argv);

    MyTest mt;
    QTest::qExec(&mt, argc, argv);


    // return 0;
//    commoditywidget w;
//    w.show();
//    return app.exec();

}


//#include "tst_start_gui.moc"
