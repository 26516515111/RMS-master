#ifndef EDITORDELEGATE_H
#define EDITORDELEGATE_H

#include <QItemDelegate>

class EditorDelegate : public QItemDelegate
{
    Q_OBJECT

public:
    EditorDelegate(QObject *parent = nullptr);

    QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option,
                          const QModelIndex &index) const override;

    void setEditorData(QWidget *editor, const QModelIndex &index) const override;

    void setModelData(QWidget *editor, QAbstractItemModel *model,
                      const QModelIndex &index) const override;
};

#endif // EDITORDELEGATE_H
