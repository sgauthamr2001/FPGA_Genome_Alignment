#!/usr/bin/env python3
#
# This is free and unencumbered software released into the public domain.
#
# Anyone is free to copy, modify, publish, use, compile, sell, or
# distribute this software, either in source code form or as a compiled
# binary, for any purpose, commercial or non-commercial, and by any
# means.

# Convert a JPG file to hex for Verilog - first word in file is length
# Limit memory to 1M = 256*1024*4
from sys import argv

binfile = argv[1]
# nwords = int(argv[2])
nwords = 256 * 1024

with open(binfile, "rb") as f:
    bindata = bytearray(f.read())

filesize = len(bindata)
assert len(bindata) < 4*nwords
while (len(bindata) % 4 != 0):
    bindata.append(0)

print("%08x" % filesize)
for i in range(nwords-1):
    if i < len(bindata) // 4:
        w = bindata[4*i : 4*i+4]
        print("%02x%02x%02x%02x" % (w[3], w[2], w[1], w[0]))
    else:
        print("%08x" % 0)

