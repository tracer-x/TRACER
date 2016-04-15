#!/bin/bash
# Automatically generated file.

while true; do
    case "$1" in
        "") break;;
        -v) verbose="1"; shift;;
        -h) shift; vmargs="$vmargs -Xmx$1m"; shift;;
        -j) shift; vmargs="$vmargs '$1'"; shift;;
        *) args="$args '$1'"; shift;;
    esac
done

cmd="\"@JAVA@\" -ea $vmargs -cp \"@TOP@/classes@SEP@@TOP@/jars/java-cup-11a-runtime.jar\" @MAIN@ $args"

if [ -n "$verbose" ]; then
  echo "$cmd"
fi

eval "$cmd"
