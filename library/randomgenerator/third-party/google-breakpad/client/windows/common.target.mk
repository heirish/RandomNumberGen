# This file is generated by gyp; do not edit.

TOOLSET := target
TARGET := common
### Rules for final target.
LDFLAGS_Debug := \
	-pthread \
	-Wl,-z,noexecstack \
	-rdynamic

LDFLAGS_Release := \
	-pthread \
	-Wl,-z,noexecstack \
	-Wl,--gc-sections

LIBS :=

$(obj).target/client/windows/libcommon.a: GYP_LDFLAGS := $(LDFLAGS_$(BUILDTYPE))
$(obj).target/client/windows/libcommon.a: LIBS := $(LIBS)
$(obj).target/client/windows/libcommon.a: TOOLSET := $(TOOLSET)
$(obj).target/client/windows/libcommon.a:  FORCE_DO_CMD
	$(call do_cmd,alink_thin)

all_deps += $(obj).target/client/windows/libcommon.a
# Add target alias
.PHONY: common
common: $(obj).target/client/windows/libcommon.a

# Add target alias to "all" target.
.PHONY: all
all: common
