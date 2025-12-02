#!/bin/bash
file="${1}"
pandoc -o "${file}.pdf" "${file}.md" 