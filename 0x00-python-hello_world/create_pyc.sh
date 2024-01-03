#!/bin/bash

if [ -z "$PYFILE" ]; then
    echo "Error: PYFILE environment variable not set."
    exit 1
fi

python3 -m py_compile $PYFILE
