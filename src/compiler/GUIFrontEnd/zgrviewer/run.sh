#!/bin/sh

# Set the default value for ZGRV_HOME

SCRIPT=$(readlink -f "$0")
ZGRV_HOME=$(dirname "$SCRIPT")

java -jar "$ZGRV_HOME/target/zgrviewer-0.8.2.jar" "$@"
