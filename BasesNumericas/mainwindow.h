#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <pilha.h>
#include <conversaobase.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    int getNumero() const;
    void setNumero(int newNumero);

    int getBase() const;
    void setBase(int newBase);

    int getTamanho() const;
    void setTamanho(int newTamanho);

private slots:
    void on_pushButtonCalcular_clicked();

private:
    Ui::MainWindow *ui;
    int numero;
    int base;
};
#endif // MAINWINDOW_H
