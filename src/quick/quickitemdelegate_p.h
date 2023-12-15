#ifndef QUICKITEMDELEGATE_P_H
#define QUICKITEMDELEGATE_P_H

#include <QtCore/QObject>
#include <QtGui/QWindow>

#include <QWKCore/private/windowitemdelegate_p.h>
#include <QWKQuick/qwkquickglobal.h>

namespace QWK {

    class QWK_QUICK_EXPORT QuickItemDelegate : public WindowItemDelegate {
    public:
        QuickItemDelegate();
        ~QuickItemDelegate() override;

    public:
        QWindow *window(const QObject *obj) const override;
        bool isEnabled(const QObject *obj) const override;
        bool isVisible(const QObject *obj) const override;
        QRect mapGeometryToScene(const QObject *obj) const override;

        QWindow *hostWindow(const QObject *host) const override;
        bool isHostSizeFixed(const QObject *host) const override;
        bool isWindowActive(const QObject *host) const override;
        Qt::WindowStates getWindowState(const QObject *host) const override;
        Qt::WindowFlags getWindowFlags(const QObject *host) const override;

        void setWindowState(QObject *host, const Qt::WindowStates &state) const override;
        void setCursorShape(QObject *host, const Qt::CursorShape shape) const override;
        void restoreCursorShape(QObject *host) const override;
        void setWindowFlags(QObject *host, const Qt::WindowFlags &flags) const override;
    };

}

#endif // QUICKITEMDELEGATE_P_H
