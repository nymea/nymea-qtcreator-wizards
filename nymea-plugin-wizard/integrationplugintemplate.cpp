// SPDX-License-Identifier: GPL-3.0-or-later

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
*
* Copyright (C) 2013 - 2024, nymea GmbH
* Copyright (C) 2024 - 2025, chargebyte austria GmbH
*  Copyright (C) 2025, %{DeveloperName} <%{DeveloperMail}>                 *
*
* This file is part of nymea-plugins.
*
* nymea-plugins is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* nymea-plugins is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
* General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with nymea-plugins. If not, see <https://www.gnu.org/licenses/>.
*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "integrationplugin%{ProjectName}.h"
#include "plugininfo.h"

%{Class}::%{Class}()
{

}

void %{Class}::init()
{
    // Initialisation can be done here.
    qCDebug(dc%{ObjectName}()) << "Plugin initialized.";
}

void %{Class}::setupThing(ThingSetupInfo *info)
{
    // A thing is being set up. Use info->thing() to get details of the thing, do
    // the required setup (e.g. connect to the device) and call info->finish() when done.

    qCDebug(dc%{ObjectName}()) << "Setup thing" << info->thing();

    info->finish(Thing::ThingErrorNoError);
}

void %{Class}::executeAction(ThingActionInfo *info)
{
    // An action is being executed. Use info->action() to get details about the action,
    // do the required operations (e.g. send a command to the network) and call info->finish() when done.

    qCDebug(dc%{ObjectName}()) << "Executing action for thing" << info->thing() << info->action().actionTypeId().toString() << info->action().params();

    info->finish(Thing::ThingErrorNoError);
}

void %{Class}::thingRemoved(Thing *thing)
{
    // A thing is being removed from the system. Do the required cleanup
    // (e.g. disconnect from the device) here.

    qCDebug(dc%{ObjectName}()) << "Remove thing" << thing;
}

