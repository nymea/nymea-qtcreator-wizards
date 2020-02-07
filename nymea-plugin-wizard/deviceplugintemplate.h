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

#ifndef %{GUARD}
#define %{GUARD}

#include "devices/deviceplugin.h"

class %{Class}: public DevicePlugin
{
    Q_OBJECT

    Q_PLUGIN_METADATA(IID "io.nymea.DevicePlugin" FILE "deviceplugin%{ProjectName}.json")
    Q_INTERFACES(DevicePlugin)


public:
    explicit %{Class}();

    void init() override;

    void setupDevice(DeviceSetupInfo *info) override;

    void executeAction(DeviceActionInfo *info) override;

    void deviceRemoved(Device *device) override;

private:

};

#endif // %{GUARD}
