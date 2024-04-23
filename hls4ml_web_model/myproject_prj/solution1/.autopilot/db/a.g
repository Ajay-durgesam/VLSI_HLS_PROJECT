#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/nitish/Documents/HAR-CNN-Keras-master/hls4ml_web_model/myproject_prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}
