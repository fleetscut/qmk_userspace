cd ~/repos/bastardkb-qmk/

# QMK Version

Use bastardkb-qmk, branch bkb-master

# Compile

qmk compile -j0 -c -kb bastardkb/skeletyl/v2/elitec -km fleetscut

# Flash

qmk flash -km fleetscut -kb bastardkb/skeletyl/v2/elitec -bl dfu
