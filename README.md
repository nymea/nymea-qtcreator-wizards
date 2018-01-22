# Qt Creator project wizards for nymea
--------------------------------------------

This repository contains project wizards for the Qt Creator in order to develop for nymea. 

## Installation

Since the Qt Creator can be installed using different methods (from the repository using `apt install qtcreator` or downloaded 
form [Qt](https://www.qt.io/download-qt-installer}) ) the best way to provide these wizards is to create a link to the local user settings of 
your Qt Creator. 

This enables the wizards for all your Qt Creator installations started with your user. 

If the settings folder does not exist, create it:

    $ mkdir -p ~/.config/QtProject/qtcreator/templates/wizards/

### Install from source

Now you can create a link to the wizard you need:

    $ git clone https://github.com/guh/nymea-qtcreator-wizards.git
    $ cd nymea-qtcreator-wizards
    $ ln -s $(pwd)/nymea-plugin-wizard/ ~/.config/QtProject/qtcreator/templates/wizards/

### Install from debian package

If you have installed the *Qt Creator project wizards for nymea* from the debian repository, the wizards will be installed in following location:

    $ ls -l /usr/share/qtcreator/templates/wizards/
    $ ln -s /usr/share/qtcreator/templates/wizards/nymea-plugin-wizard/ ~/.config/QtProject/qtcreator/templates/wizards/
