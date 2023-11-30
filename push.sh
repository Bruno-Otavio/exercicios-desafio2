#!/usr/bin/bash

for message in $@
do
	git add .
	git commit -m "$message"
	git push
done
