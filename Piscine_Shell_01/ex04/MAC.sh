#!/bin/sh
ifconfig -a lladdr | grep ether | awk '{ print $2}'
