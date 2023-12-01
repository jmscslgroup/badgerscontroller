#!/bin/bash

echo "=========================="
echo "Removing App badgerscontroller"


LIBPANDA_USER=$(cat /etc/libpanda.d/libpanda_usr)

# Disable the installed services:
echo " - Disabling startup scripts..."
systemctl disable badgerscontroller


# Here is where we remove scripts, services, etc.
echo " - Removing scripts..."
cd
if [ "x"`systemctl list-units | grep -c badgerscontroller.service` = "x1" ]; then
    echo "Uninstalling badgerscontroller.service"

    source /home/$LIBPANDA_USER/catkin_ws/devel/setup.bash
    rosrun robot_upstart uninstall badgerscontroller
fi

systemctl daemon-reload # if needed
