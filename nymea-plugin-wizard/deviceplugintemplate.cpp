/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                                                                         *
 *  Copyright (C) 2018 %{DeveloperName} <%{DeveloperMail}>
 *                                                                         *
 *  This file is part of guh.                                              *
 *                                                                         *
 *  Guh is free software: you can redistribute it and/or modify            *
 *  it under the terms of the GNU General Public License as published by   *
 *  the Free Software Foundation, version 2 of the License.                *
 *                                                                         *
 *  Guh is distributed in the hope that it will be useful,                 *
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of         *
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the           *
 *  GNU General Public License for more details.                           *
 *                                                                         *
 *  You should have received a copy of the GNU General Public License      *
 *  along with guh. If not, see <http://www.gnu.org/licenses/>.            *
 *                                                                         *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "plugininfo.h"
#include "deviceplugin%{ProjectName}.h"

%{Class}::%{Class}()
{

}

void %{Class}::init()
{
    // Initialize/create objects
}

void %{Class}::startMonitoringAutoDevices()
{
    // Start seaching for devices which can be discovered and added automatically
}

void %{Class}::postSetupDevice(Device *device)
{
    qCDebug(dc%{ObjectName}()) << "Post setup device" << device->name() << device->params();

    // This method will be called once the setup for device is finished
}

void %{Class}::deviceRemoved(Device *device)
{
    qCDebug(dc%{ObjectName}()) << "Remove device" << device->name() << device->params();

    // Clean up all data related to this device
}

DeviceManager::DeviceSetupStatus %{Class}::setupDevice(Device *device)
{
    qCDebug(dc%{ObjectName}()) << "Setup device" << device->name() << device->params();

    return DeviceManager::DeviceSetupStatusSuccess;
}

DeviceManager::DeviceError %{Class}::executeAction(Device *device, const Action &action)
{
    qCDebug(dc%{ObjectName}()) << "Executing action for device" << device->name() << action.actionTypeId().toString() << action.params();

    return DeviceManager::DeviceErrorNoError;
}
