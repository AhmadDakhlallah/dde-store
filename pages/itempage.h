#ifndef ITEMPAGE_H
#define ITEMPAGE_H

#include <QWidget>
#include <DSuggestButton>
#include <DWarningButton>
#include <DProgressBar>

DWIDGET_USE_NAMESPACE

class ItemPage : public QWidget
{
    Q_OBJECT

public:
    ItemPage(QString app);
    void setInstallButton(QString packageId, QString type, QString param = nullptr);
private:
    DWarningButton *removeBtn;
    DSuggestButton *installBtn;
    DProgressBar *progressBar;
};

#endif // ITEMPAGE_H