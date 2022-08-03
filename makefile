# ----------------------------
# Makefile Options
# ----------------------------

NAME = CEPRTNEO
ICON = icon.png
DESCRIPTION = "Ports 83+ TI-BASIC Prgms to CE"
COMPRESSED = NO
ARCHIVED = NO

CFLAGS = -Wall -Wextra -Oz
CXXFLAGS = -Wall -Wextra -Oz

# ----------------------------

include $(shell cedev-config --makefile)
