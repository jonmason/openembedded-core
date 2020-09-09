#
# Tune Settings for Cortex-A55
#
TUNEVALID[cortexa55] = "Enable Cortex-A55 specific processor optimizations"
TUNE_CCARGS .= "${@bb.utils.contains('TUNE_FEATURES', 'cortexa55', ' -mcpu=cortex-a55', '', d)}"

# Little Endian base configs
AVAILTUNES                                         += "cortexa55"
ARMPKGARCH_tune-cortexa55                           = "cortexa55"
TUNE_FEATURES_tune-cortexa55                        = "aarch64 cortexa55 crypto"
PACKAGE_EXTRA_ARCHS_tune-cortexa55                  = "${PACKAGE_EXTRA_ARCHS_tune-armv8-2a-crypto} cortexa55"

#
# Defaults for ARMv8-a
#
DEFAULTTUNE                                        ?= "armv8-2a"

TUNEVALID[armv8-2a] = "Enable instructions for ARMv8-a"
TUNE_CCARGS .= "${@bb.utils.contains('TUNE_FEATURES', 'armv8-2a', ' -march=armv8.2-a', '', d)}"
# TUNE crypto will be handled by arch-armv8a.inc below
MACHINEOVERRIDES =. "${@bb.utils.contains('TUNE_FEATURES', 'armv8-2a', 'armv8-2a:', '' ,d)}"

require conf/machine/include/arm/arch-armv8a.inc

# Little Endian base configs
AVAILTUNES                                         += "armv8-2a armv8-2a-crypto"
ARMPKGARCH_tune-armv8-2a                           ?= "armv8-2a"
ARMPKGARCH_tune-armv8-2a-crypto                    ?= "armv8-2a"
TUNE_FEATURES_tune-armv8-2a                         = "aarch64 armv8-2a"
TUNE_FEATURES_tune-armv8-2a-crypto                  = "${TUNE_FEATURES_tune-armv8-2a} crypto"
PACKAGE_EXTRA_ARCHS_tune-armv8-2a                   = "${PACKAGE_EXTRA_ARCHS_tune-armv8a} armv8-2a"
PACKAGE_EXTRA_ARCHS_tune-armv8-2a-crypto            = "${PACKAGE_EXTRA_ARCHS_tune-armv8-2a} armv8-2a-crypto"
