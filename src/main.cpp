#pragma once

#include <QtCore/qglobal.h>

#if defined(LINGMO_LINGMO_DISPLAY_LIBRARY)
#  define LINGMO_LINGMO_DISPLAY_EXPORT Q_DECL_EXPORT
#else
#  define LINGMO_LINGMO_DISPLAY_EXPORT Q_DECL_IMPORT
#endif
