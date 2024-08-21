#!/bin/sh
ifconfig | grep ether | cut -b 8-24 | sed /autoselect/d
