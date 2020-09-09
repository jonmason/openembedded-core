#
# Tune Settings for Cortex-A32 (32bit only)
#
TUNEVALID[cortexa32] = "Enable Cortex-A32 specific processor optimizations"
TUNE_CCARGS .= "${@bb.utils.contains('TUNE_FEATURES', 'cortexa32', ' -mcpu=cortex-a32', '', d)}"

# Little Endian base configs
AVAILTUNES                                += "cortexa32 cortexa32-crypto"
ARMPKGARCH_tune-cortexa32                  = "cortexa32"
ARMPKGARCH_tune-cortexa32-crypto           = "cortexa32"
TUNE_FEATURES_tune-cortexa32               = "armv8a cortexa32 crc"
TUNE_FEATURES_tune-cortexa32-crypto        = "${TUNE_FEATURES_tune-cortexa32} crypto"
PACKAGE_EXTRA_ARCHS_tune-cortexa32         = "${PACKAGE_EXTRA_ARCHS_tune-armv8a-crc} cortexa32"
PACKAGE_EXTRA_ARCHS_tune-cortexa32-crypto  = "${PACKAGE_EXTRA_ARCHS_tune-armv8a-crc-crypto} cortexa32 cortexa32-crypto"
BASE_LIB_tune-cortexa32                    = "lib"
BASE_LIB_tune-cortexa32-crypto             = "lib"

#
# Tune Settings for Cortex-A35
#
TUNEVALID[cortexa35] = "Enable Cortex-A35 specific processor optimizations"
TUNE_CCARGS .= "${@bb.utils.contains('TUNE_FEATURES', 'cortexa35', ' -mcpu=cortex-a35', '', d)}"

# Little Endian base configs
AVAILTUNES                                += "cortexa35 cortexa35-crypto"
ARMPKGARCH_tune-cortexa35                  = "cortexa35"
ARMPKGARCH_tune-cortexa35-crypto           = "cortexa35"
TUNE_FEATURES_tune-cortexa35               = "aarch64 cortexa35 crc"
TUNE_FEATURES_tune-cortexa35-crypto        = "${TUNE_FEATURES_tune-cortexa35} crypto"
PACKAGE_EXTRA_ARCHS_tune-cortexa35         = "${PACKAGE_EXTRA_ARCHS_tune-armv8a-crc} cortexa35"
PACKAGE_EXTRA_ARCHS_tune-cortexa35-crypto  = "${PACKAGE_EXTRA_ARCHS_tune-armv8a-crc-crypto} cortexa35 cortexa35-crypto"

#
# Tune Settings for Cortex-A53
#
TUNEVALID[cortexa53] = "Enable Cortex-A53 specific processor optimizations"
TUNE_CCARGS .= "${@bb.utils.contains('TUNE_FEATURES', 'cortexa53', ' -mcpu=cortex-a53', '', d)}"

# Little Endian base configs
AVAILTUNES                                += "cortexa53 cortexa53-crypto"
ARMPKGARCH_tune-cortexa53                  = "cortexa53"
ARMPKGARCH_tune-cortexa53-crypto           = "cortexa53-crypto"
TUNE_FEATURES_tune-cortexa53               = "aarch64 cortexa53 crc"
TUNE_FEATURES_tune-cortexa53-crypto        = "${TUNE_FEATURES_tune-cortexa53} crypto"
PACKAGE_EXTRA_ARCHS_tune-cortexa53         = "${PACKAGE_EXTRA_ARCHS_tune-armv8a-crc} cortexa53"
PACKAGE_EXTRA_ARCHS_tune-cortexa53-crypto  = "${PACKAGE_EXTRA_ARCHS_tune-armv8a-crc-crypto} cortexa53 cortexa53-crypto"

#
# Tune Settings for Cortex-A57
#
TUNEVALID[cortexa57] = "Enable Cortex-A57 specific processor optimizations"
TUNE_CCARGS .= "${@bb.utils.contains('TUNE_FEATURES', 'cortexa57', ' -mcpu=cortex-a57', '', d)}"

# Little Endian base configs
AVAILTUNES                                += "cortexa57 cortexa57-crypto"
ARMPKGARCH_tune-cortexa57                  = "cortexa57"
ARMPKGARCH_tune-cortexa57-crypto           = "cortexa57-crypto"
TUNE_FEATURES_tune-cortexa57               = "aarch64 cortexa57 crc"
TUNE_FEATURES_tune-cortexa57-crypto        = "${TUNE_FEATURES_tune-cortexa57} crypto"
PACKAGE_EXTRA_ARCHS_tune-cortexa57         = "${PACKAGE_EXTRA_ARCHS_tune-armv8a-crc} cortexa57"
PACKAGE_EXTRA_ARCHS_tune-cortexa57-crypto  = "${PACKAGE_EXTRA_ARCHS_tune-armv8a-crc-crypto} cortexa57 cortexa57-crypto"

#
# Tune Settings for Cortex-A72
#
TUNEVALID[cortexa72] = "Enable Cortex-A72 specific processor optimizations"
TUNE_CCARGS .= "${@bb.utils.contains('TUNE_FEATURES', 'cortexa72', ' -mcpu=cortex-a72', '', d)}"

# Little Endian base configs
AVAILTUNES                                += "cortexa72"
ARMPKGARCH_tune-cortexa72                  = "cortexa72"
TUNE_FEATURES_tune-cortexa72               = "aarch64 cortexa72 crc crypto"
PACKAGE_EXTRA_ARCHS_tune-cortexa72         = "${PACKAGE_EXTRA_ARCHS_tune-armv8a-crc-crypto} cortexa72"

#
# Tune Settings for ThunderX
#
TUNEVALID[thunderx] = "Enable instructions for Cavium ThunderX"
TUNE_CCARGS .= "${@bb.utils.contains('TUNE_FEATURES', 'thunderx', ' -mcpu=thunderx', '',d)}"

AVAILTUNES                                += "thunderx thunderx_be"
ARMPKGARCH_tune-thunderx                  ?= "thunderx"
ARMPKGARCH_tune-thunderx_be               ?= "thunderx_be"
TUNE_FEATURES_tune-thunderx                = "${TUNE_FEATURES_tune-aarch64} thunderx"
TUNE_FEATURES_tune-thunderx_be             = "${TUNE_FEATURES_tune-thunderx} bigendian"
PACKAGE_EXTRA_ARCHS_tune-thunderx          = "${PACKAGE_EXTRA_ARCHS_tune-armv8a-crc-crypto} thunderx"
PACKAGE_EXTRA_ARCHS_tune-thunderx_be       = "aarch64_be thunderx_be"

#
# Tune Settings for big.LITTLE Cortex-A57 - Cortex-A53
#
TUNEVALID[cortexa57-cortexa53] = "Enable big.LITTLE Cortex-A57.Cortex-A53 specific processor optimizations"
TUNE_CCARGS .= "${@bb.utils.contains("TUNE_FEATURES", "cortexa57-cortexa53", " -mcpu=cortex-a57.cortex-a53", "", d)}"
MACHINEOVERRIDES =. "${@bb.utils.contains("TUNE_FEATURES", "cortexa57-cortexa53", "cortexa57-cortexa53:", "" ,d)}"

# Little Endian base configs
AVAILTUNES                                += "cortexa57-cortexa53"
ARMPKGARCH_tune-cortexa57-cortexa53        = "cortexa57-cortexa53"
TUNE_FEATURES_tune-cortexa57-cortexa53     = "aarch64 crc cortexa57-cortexa53"
PACKAGE_EXTRA_ARCHS_tune-cortexa57-cortexa53 = "${PACKAGE_EXTRA_ARCHS_tune-armv8a-crc} cortexa57-cortexa53"

#
# Tune Settings for big.LITTLE Cortex-A72 - Cortex-A53
#
TUNEVALID[cortexa72-cortexa53] = "Enable big.LITTLE Cortex-A72.Cortex-A53 specific processor optimizations"
TUNE_CCARGS .= "${@bb.utils.contains("TUNE_FEATURES", "cortexa72-cortexa53", " -mcpu=cortex-a72.cortex-a53", "", d)}"
MACHINEOVERRIDES =. "${@bb.utils.contains("TUNE_FEATURES", "cortexa72-cortexa53", "cortexa72-cortexa53:", "" ,d)}"

# cortexa72.cortexa53 implies crc support
AVAILTUNES                                += "cortexa72-cortexa53 cortexa72-cortexa53-crypto"
ARMPKGARCH_tune-cortexa72-cortexa53        = "cortexa72-cortexa53"
ARMPKGARCH_tune-cortexa72-cortexa53-crypto = "cortexa72-cortexa53-crypto"
TUNE_FEATURES_tune-cortexa72-cortexa53     = "aarch64 crc cortexa72-cortexa53"
TUNE_FEATURES_tune-cortexa72-cortexa53-crypto = "${TUNE_FEATURES_tune-cortexa72-cortexa53} crypto"
PACKAGE_EXTRA_ARCHS_tune-cortexa72-cortexa53  = "${PACKAGE_EXTRA_ARCHS_tune-armv8a-crc} cortexa72-cortexa53"
PACKAGE_EXTRA_ARCHS_tune-cortexa72-cortexa53-crypto = "${PACKAGE_EXTRA_ARCHS_tune-armv8a-crc-crypto} cortexa72-cortexa53 cortexa72-cortexa53-crypto"

#
# Tune Settings for big.LITTLE Cortex-A73 - Cortex-A53
#
TUNEVALID[cortexa73-cortexa53] = "Enable big.LITTLE Cortex-A73.Cortex-A53 specific processor optimizations"
MACHINEOVERRIDES =. "${@bb.utils.contains("TUNE_FEATURES", "cortexa73-cortexa53", "cortexa73-cortexa53:", "" ,d)}"
TUNE_CCARGS .= "${@bb.utils.contains("TUNE_FEATURES", "cortexa73-cortexa53", " -mcpu=cortex-a73.cortex-a53", "", d)}"

# cortexa73.cortexa53 implies crc support
AVAILTUNES                                += "cortexa73-cortexa53 cortexa73-cortexa53-crypto"
ARMPKGARCH_tune-cortexa73-cortexa53        = "cortexa73-cortexa53"
ARMPKGARCH_tune-cortexa73-cortexa53-crypto = "cortexa73-cortexa53-crypto"
TUNE_FEATURES_tune-cortexa73-cortexa53     = "aarch64 crc cortexa73-cortexa53"
TUNE_FEATURES_tune-cortexa73-cortexa53-crypto = "${TUNE_FEATURES_tune-cortexa73-cortexa53} crypto"
PACKAGE_EXTRA_ARCHS_tune-cortexa73-cortexa53  = "${PACKAGE_EXTRA_ARCHS_tune-armv8a-crc} cortexa73-cortexa53"
PACKAGE_EXTRA_ARCHS_tune-cortexa73-cortexa53-crypto  = "${PACKAGE_EXTRA_ARCHS_tune-armv8a-crc-crypto} cortexa73-cortexa53 cortexa73-cortexa53-crypto"

#
# Defaults for ARMv8-a
#
DEFAULTTUNE                               ?= "armv8a-crc"

TUNEVALID[armv8a] = "Enable instructions for ARMv8-a"
TUNE_CCARGS .= "${@bb.utils.contains('TUNE_FEATURES', 'armv8a', ' -march=armv8-a', '', d)}"
TUNEVALID[crc] = "Enable instructions for ARMv8-a Cyclic Redundancy Check (CRC)"
TUNE_CCARGS .= "${@bb.utils.contains('TUNE_FEATURES', 'crc', '+crc', '', d)}"
TUNEVALID[crypto] = "Enable instructions for ARMv8-a cryptographic"
TUNE_CCARGS .= "${@bb.utils.contains('TUNE_FEATURES', 'crypto', '+crypto', '', d)}"
MACHINEOVERRIDES =. "${@bb.utils.contains('TUNE_FEATURES', 'armv8a', 'armv8a:', '' ,d)}"

TUNECONFLICTS[aarch64] = "armv4 armv5 armv6 armv7 armv7a"

require conf/machine/include/arm/arch-arm64.inc

# Little Endian base configs
AVAILTUNES                                += "armv8a armv8a-crc armv8a-crc-crypto armv8a-crypto"
ARMPKGARCH_tune-armv8a                    ?= "armv8a"
ARMPKGARCH_tune-armv8a-crc                ?= "armv8a"
ARMPKGARCH_tune-armv8a-crypto             ?= "armv8a"
ARMPKGARCH_tune-armv8a-crc-crypto         ?= "armv8a"
TUNE_FEATURES_tune-armv8a                  = "aarch64 armv8a"
TUNE_FEATURES_tune-armv8a-crc              = "${TUNE_FEATURES_tune-armv8a} crc"
TUNE_FEATURES_tune-armv8a-crypto           = "${TUNE_FEATURES_tune-armv8a} crypto"
TUNE_FEATURES_tune-armv8a-crc-crypto       = "${TUNE_FEATURES_tune-armv8a-crc} crypto"
PACKAGE_EXTRA_ARCHS_tune-armv8a            = "aarch64 armv8a"
PACKAGE_EXTRA_ARCHS_tune-armv8a-crc        = "${PACKAGE_EXTRA_ARCHS_tune-armv8a} armv8a-crc"
PACKAGE_EXTRA_ARCHS_tune-armv8a-crypto     = "${PACKAGE_EXTRA_ARCHS_tune-armv8a} armv8a-crypto"
PACKAGE_EXTRA_ARCHS_tune-armv8a-crc-crypto = "${PACKAGE_EXTRA_ARCHS_tune-armv8a-crc} armv8a-crypto armv8a-crc-crypto"
