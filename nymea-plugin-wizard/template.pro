TRANSLATIONS =  translations/en_US.ts \
                translations/de_DE.ts

# Note: include after the TRANSLATIONS definition
include(plugins.pri)

TARGET = $$qtLibraryTarget(guh_deviceplugin%{ProjectName})

message(============================================)
message("Qt version: $$[QT_VERSION]")
message("Building $$deviceplugin$${TARGET}.so")


SOURCES += \
    deviceplugin%{ProjectName}.cpp \

HEADERS += \
    deviceplugin%{ProjectName}.h \

