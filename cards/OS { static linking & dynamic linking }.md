---
tags:
---
# static linking
1. 所有的檔案都 load 到 main memory (including large routines)
# dynamic linking
1. lazy linking : routine is not loaded into main memory until it is called
2. routines (large , infrequently used error-handling routines) are never called
3. better memory memory-space utilization
4. 所有 files are kept on disk in a `relocatable` load format 
5. 