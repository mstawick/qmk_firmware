#!/bin/bash

mv ~/Downloads/mstawick\ \(1\).json ~/Downloads/mstawick.json
qmk json2c ~/Downloads/mstawick.json > keyboards/kinesis/keymaps/mstawick/generated.c
qmk compile -kb kinesis/kint41 -km mstawick
qmk flash -kb kinesis/kint41 -km mstawick
