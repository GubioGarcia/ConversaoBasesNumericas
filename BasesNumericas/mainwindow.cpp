#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),
      numero(0), base(0)
{
    ui->setupUi(this);
    ui->textEditResultado->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonCalcular_clicked()
{
    try{
        this->numero = ui->lineEditEntradaNumero->text().toInt();
        if(numero==0) throw QString("Declare o número para conversão");
        if(ui->comboBox->currentIndex() == 0) this->base = 2;
        if(ui->comboBox->currentIndex() == 1) this->base = 8;
        if(ui->comboBox->currentIndex() == 2) this->base = 16;

        ggs::ConversaoBase conversao(numero, base);
        ui->textEditResultado->setText(conversao.calcularConversao());
        ui->lineEditEntradaNumero->clear();
    } catch (QString &erro){
        QMessageBox::information(this, "ERRO DO SISTEMA", erro);
    }
}

int MainWindow::getBase() const
{
    return base;
}

void MainWindow::setBase(int newBase)
{
    base = newBase;
}

int MainWindow::getNumero() const
{
    return numero;
}

void MainWindow::setNumero(int newNumero)
{
    numero = newNumero;
}
