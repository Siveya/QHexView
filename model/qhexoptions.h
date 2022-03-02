#pragma once

#include <QHash>
#include <QColor>
#include <QChar>

#define QHEXVIEW_ADDRESSLABEL    "OFFSET"
#define QHEXVIEW_ASCIILABEL      "ASCII"
#define QHEXVIEW_UNPRINTABLECHAR '.'
#define QHEXVIEW_LINELENGTH      0x10

struct QHexColor
{
    QColor foreground;
    QColor background;
};

struct QHexOptions
{
    // Appearance
    QChar unprintablechar{QHEXVIEW_UNPRINTABLECHAR};
    QString addresslabel{QHEXVIEW_ADDRESSLABEL};
    QString asciilabel{QHEXVIEW_ASCIILABEL};
    unsigned int linelength{QHEXVIEW_LINELENGTH};
    unsigned int grouplength{1};
    unsigned int scrollsteps{1};
    bool header{true};

    // Colors
    QHash<quint8, QHexColor> bytecolors;
    QColor headercolor;
    QColor commentcolor;
};