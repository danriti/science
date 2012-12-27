#!/usr/bin/python

import sys
import time

for i in reversed(xrange(30)):
    sys.stdout.write('\r%2d' % i)
    sys.stdout.flush()
    time.sleep(1)
