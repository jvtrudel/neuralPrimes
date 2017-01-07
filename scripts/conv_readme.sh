#! /bin/bash
rm -f readme.md
pandoc -o readme.html _readme.md
mv readme.html readme.md
