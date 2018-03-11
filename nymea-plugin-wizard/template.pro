include(plugins.pri)

TARGET = $$qtLibraryTarget(guh_deviceplugin%{ProjectName})

message(============================================)
message("Qt version: $$[QT_VERSION]")
message("Building $$deviceplugin$${TARGET}.so")

SOURCES += \\
    deviceplugin%{ProjectName}.cpp

HEADERS += \\
    deviceplugin%{ProjectName}.h

