/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                                                                         *
 *  Copyright (C) 2020 %{DeveloperName} <%{DeveloperMail}>                 *
 *                                                                         *
 *  This library is free software; you can redistribute it and/or          *
 *  modify it under the terms of the GNU Lesser General Public             *
 *  License as published by the Free Software Foundation;                  *
 *  version 3 of the License.                                              *
 *                                                                         *
 *  This library is distributed in the hope that it will be useful,        *
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of         *
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU      *
 *  Lesser General Public License for more details.                        *
 *                                                                         *
 *  You should have received a copy of the GNU Lesser General Public       *
 *  License along with this library; If not, see                           *
 *  <http://www.gnu.org/licenses/>.                                        *
 *                                                                         *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "plugininfo.h"
#include "deviceplugin%{ProjectName}.h"

%{Class}::%{Class}()
{

}

void %{Class}::init()
{
    // Initialisation can be done here.
    qCDebug(dc%{ObjectName}()) << "Plugin initialized.";
}

void %{Class}::setupDevice(DeviceSetupInfo *info)
{
    // A device is being set up. Use info->device() to get details of the device, do
    // the required setup (e.g. connect to the device) and call info->finish() when done.

    qCDebug(dc%{ObjectName}()) << "Setup device" << info->device();

    info->finish(Device::DeviceErrorNoError);
}

void %{Class}::executeAction(DeviceActionInfo *info)
{
    // An action is being executed. Use info->action() to get details about the action,
    // do the required operations (e.g. send a command to the network) and call info->finish() when done.

    qCDebug(dc%{ObjectName}()) << "Executing action for device" << info->device() << info->action().actionTypeId().toString() << info->action().params();

    info->finish(Device::DeviceErrorNoError);
}

void %{Class}::deviceRemoved(Device *device)
{
    // A device is being removed from the system. Do the required cleanup
    // (e.g. disconnect from the device) here.

    qCDebug(dc%{ObjectName}()) << "Remove device" << device;
}

