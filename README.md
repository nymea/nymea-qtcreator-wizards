# nymea plugin wizard
--------------------------------------------

This wizard for the Qt Creator allows you to create a new nymea plugin project. This wizard will create the plugin structure containing the configurations specified in the wizard. The project contains also the *debian* folder for building packages using `crossbuilder`.

In order to use the this wizard in your Qt Creator you have to create following symlink as user which starts the Qt Creator:

    $ mkdir -p ~/.config/QtProject/qtcreator/templates/wizards/
    $ ln -s $(pwd)/nymea-plugin-wizard/ ~/.config/QtProject/qtcreator/templates/wizards/


