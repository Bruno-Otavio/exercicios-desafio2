#!/usr/bin/bash
message=$@

git add .
git commit -m "$message"
git push
