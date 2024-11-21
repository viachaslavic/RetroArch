#ifndef QT_DEFINITIONS_H
#define QT_DEFINITIONS_H
#include <QtGlobal>
#include <QStackedLayout>
#if (QT_VERSION > QT_VERSION_CHECK(6, 0, 0))
void set_margin(QStackedLayout* optionsStack) {
   optionsStack->setContentsMargins(0, 0, 0, 0);
}
//Q_DECLARE_METATYPE(struct core_info_t*)
//using QVariantBuilder = QVariant::FromValue;
#else
void set_margin(QStackedLayout* optionsStack) {
   optionsStack->setMargin(0);
}
//using QVariantBuilder = QVariant;
#endif

#endif  /* QT_DEFINITIONS_H */
