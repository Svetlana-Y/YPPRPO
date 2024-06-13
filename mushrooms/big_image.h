#ifndef BIG_IMAGE_H
#define BIG_IMAGE_H

#include <QWidget>

namespace Ui {
class Big_Image;
}

class Big_Image : public QWidget
{
    Q_OBJECT

public:
    explicit Big_Image(QWidget *parent = nullptr);
    ~Big_Image();
    void setPath(const QString &Path);

private:
    Ui::Big_Image *ui;
};

#endif // BIG_IMAGE_H
