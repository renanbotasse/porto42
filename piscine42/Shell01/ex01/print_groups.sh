#!/bin/sh
groups $FT_USER | cut -d ':' -f 2 | cut -c2- | tr ' ' ',' | tr -d '\n'
