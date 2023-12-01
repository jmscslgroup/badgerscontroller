#!/bin/bash

echo "=========================="
echo "Starting App badgerscontroller for {APP_PRETTY_NAME}"


systemctl start badgerscontroller
systemctl start rosnodeChecker
