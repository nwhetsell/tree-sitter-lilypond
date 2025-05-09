TS ?= tree-sitter

all install uninstall clean:
	$(MAKE) -C lilypond $@
	$(MAKE) -C lilypond-scheme $@

test:
	$(TS) test
	$(TS) parse examples/* --quiet --time

.PHONY: all install uninstall clean test update
