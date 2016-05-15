#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_Start_clicked();

    void on_GameQbutton_pressed();

    void on_GameQbutton_released();

    void on_GamePbutton_pressed();

    void on_GamePbutton_released();



    void on_exit_clicked();

private:
    Ui::MainWindow *ui;
    int i,score,x,y,bonus,scoretmp,count,timetmp,nicecount,notbadcount,nancount,allcount;
    float rate;
    void keyPressEvent(QKeyEvent *event);
    void keyReleaseEvent(QKeyEvent *event);
    void timerEvent(QTimerEvent*);
};
#endif // MAINWINDOW_H
