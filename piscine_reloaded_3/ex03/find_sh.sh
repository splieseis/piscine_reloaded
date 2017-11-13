find . | grep \.sh | rev | cut -d "/" -f1 | sed 's/^hs\.//' | rev
