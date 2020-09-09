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
# Tune Settings for Cortex-A65
#
TUNEVALID[cortexa65] = "Enable Cortex-A65 specific processor optimizations"
TUNE_CCARGS .= "${@bb.utils.contains('TUNE_FEATURES', 'cortexa65', ' -mcpu=cortex-a65', '', d)}"

# Little Endian base configs
AVAILTUNES                                         += "cortexa65"
ARMPKGARCH_tune-cortexa65                           = "cortexa65"
TUNE_FEATURES_tune-cortexa65                        = "aarch64 cortexa65 crypto"
PACKAGE_EXTRA_ARCHS_tune-cortexa65                  = "${PACKAGE_EXTRA_ARCHS_tune-armv8-2a-crypto} cortexa65"

#
# Tune Settings for Cortex-A65AE
#
TUNEVALID[cortexa65ae] = "Enable Cortex-A65AE specific processor optimizations"
TUNE_CCARGS .= "${@bb.utils.contains('TUNE_FEATURES', 'cortexa65ae', ' -mcpu=cortex-a65ae', '', d)}"

# Little Endian base configs
AVAILTUNES                                         += "cortexa65ae"
ARMPKGARCH_tune-cortexa65ae                         = "cortexa65ae"
TUNE_FEATURES_tune-cortexa65ae                      = "aarch64 cortexa65ae crypto"
PACKAGE_EXTRA_ARCHS_tune-cortexa65ae                = "${PACKAGE_EXTRA_ARCHS_tune-armv8-2a-crypto} cortexa65ae"

#
# Tune Settings for Cortex-A75
#
TUNEVALID[cortexa75] = "Enable Cortex-A75 specific processor optimizations"
TUNE_CCARGS .= "${@bb.utils.contains('TUNE_FEATURES', 'cortexa75', ' -mcpu=cortex-a75', '', d)}"

# Little Endian base configs
AVAILTUNES                                         += "cortexa75"
ARMPKGARCH_tune-cortexa75                           = "cortexa75"
TUNE_FEATURES_tune-cortexa75                        = "aarch64 cortexa75 crypto"
PACKAGE_EXTRA_ARCHS_tune-cortexa75                  = "${PACKAGE_EXTRA_ARCHS_tune-armv8-2a-crypto} cortexa75"

#
# Tune Settings for Cortex-A76
#
TUNEVALID[cortexa76] = "Enable Cortex-A76 specific processor optimizations"
TUNE_CCARGS .= "${@bb.utils.contains('TUNE_FEATURES', 'cortexa76', ' -mcpu=cortex-a76', '', d)}"

# Little Endian base configs
AVAILTUNES                                         += "cortexa76"
ARMPKGARCH_tune-cortexa76                           = "cortexa76"
TUNE_FEATURES_tune-cortexa76                        = "aarch64 cortexa76 crypto"
PACKAGE_EXTRA_ARCHS_tune-cortexa76                  = "${PACKAGE_EXTRA_ARCHS_tune-armv8-2a-crypto} cortexa76"

#
# Tune Settings for Cortex-A76AE
#
TUNEVALID[cortexa76ae] = "Enable Cortex-A76AE specific processor optimizations"
TUNE_CCARGS .= "${@bb.utils.contains('TUNE_FEATURES', 'cortexa76ae', ' -mcpu=cortex-a76ae', '', d)}"

# Little Endian base configs
AVAILTUNES                                         += "cortexa76ae"
ARMPKGARCH_tune-cortexa76ae                         = "cortexa76ae"
TUNE_FEATURES_tune-cortexa76ae                      = "aarch64 cortexa76ae crypto"
PACKAGE_EXTRA_ARCHS_tune-cortexa76ae                = "${PACKAGE_EXTRA_ARCHS_tune-armv8-2a-crypto} cortexa76ae"

#
# Tune Settings for Cortex-A77
#
TUNEVALID[cortexa77] = "Enable Cortex-A77 specific processor optimizations"
TUNE_CCARGS .= "${@bb.utils.contains('TUNE_FEATURES', 'cortexa77', ' -mcpu=cortex-a77', '', d)}"

# Little Endian base configs
AVAILTUNES                                         += "cortexa77"
ARMPKGARCH_tune-cortexa77                           = "cortexa77"
TUNE_FEATURES_tune-cortexa77                        = "aarch64 cortexa77 crypto"
PACKAGE_EXTRA_ARCHS_tune-cortexa77                  = "${PACKAGE_EXTRA_ARCHS_tune-armv8-2a-crypto} cortexa77"

#
# Tune Settings for Neoverse-E1
#
TUNEVALID[neoversee1] = "Enable Neoverse-E1 specific processor optimizations"
TUNE_CCARGS .= "${@bb.utils.contains('TUNE_FEATURES', 'neoversee1', ' -mcpu=neoverse-e1', '', d)}"

# Little Endian base configs
AVAILTUNES                                         += "neoversee1"
ARMPKGARCH_tune-neoversee1                          = "neoversee1"
TUNE_FEATURES_tune-neoversee1                       = "aarch64 neoversee1 crypto"
PACKAGE_EXTRA_ARCHS_tune-neoversee1                 = "${PACKAGE_EXTRA_ARCHS_tune-armv8-2a-crypto} neoversee1"

#
# Tune Settings for Neoverse-N1
#
TUNEVALID[neoversen1] = "Enable Neoverse-N1 specific processor optimizations"
# Note: Neoverse was called Ares, and GCC will accept "ares" in place of "neoverse-n1"
TUNE_CCARGS .= "${@bb.utils.contains('TUNE_FEATURES', 'neoversen1', ' -mcpu=neoverse-n1', '', d)}"

# Little Endian base configs
AVAILTUNES                                         += "neoversen1"
ARMPKGARCH_tune-neoversen1                          = "neoversen1"
TUNE_FEATURES_tune-neoversen1                       = "aarch64 neoversen1 crypto"
PACKAGE_EXTRA_ARCHS_tune-neoversen1                 = "${PACKAGE_EXTRA_ARCHS_tune-armv8-2a-crypto} neoversen1"

#
# Tune Settings for big.LITTLE Cortex-A75 - Cortex-A55
#
TUNEVALID[cortexa75-cortexa55] = "Enable big.LITTLE Cortex-A75.Cortex-A55 specific processor optimizations"
MACHINEOVERRIDES =. "${@bb.utils.contains("TUNE_FEATURES", "cortexa75-cortexa55", "cortexa75-cortexa55:", "" ,d)}"
TUNE_CCARGS .= "${@bb.utils.contains("TUNE_FEATURES", "cortexa75-cortexa55", " -mcpu=cortex-a75.cortex-a55", "", d)}"

AVAILTUNES                                         += "cortexa75-cortexa55 cortexa75-cortexa55-crypto"
ARMPKGARCH_tune-cortexa75-cortexa55                 = "cortexa75-cortexa55"
ARMPKGARCH_tune-cortexa75-cortexa55-crypto          = "cortexa75-cortexa55-crypto"
TUNE_FEATURES_tune-cortexa75-cortexa55              = "aarch64 cortexa75-cortexa55"
TUNE_FEATURES_tune-cortexa75-cortexa55-crypto       = "${TUNE_FEATURES_tune-cortexa75-cortexa55} crypto"
PACKAGE_EXTRA_ARCHS_tune-cortexa75-cortexa55        = "${PACKAGE_EXTRA_ARCHS_tune-armv8-2a} cortexa75-cortexa55"
PACKAGE_EXTRA_ARCHS_tune-cortexa75-cortexa55-crypto = "${PACKAGE_EXTRA_ARCHS_tune-armv8-2a-crypto} cortexa75-cortexa55 cortexa75-cortexa55-crypto"

#
# Tune Settings for big.LITTLE Cortex-A76 - Cortex-A55
#
TUNEVALID[cortexa76-cortexa55] = "Enable big.LITTLE Cortex-A76.Cortex-A55 specific processor optimizations"
MACHINEOVERRIDES =. "${@bb.utils.contains("TUNE_FEATURES", "cortexa76-cortexa55", "cortexa76-cortexa55:", "" ,d)}"
TUNE_CCARGS .= "${@bb.utils.contains("TUNE_FEATURES", "cortexa76-cortexa55", " -mcpu=cortex-a76.cortex-a55", "", d)}"

AVAILTUNES                                         += "cortexa76-cortexa55 cortexa76-cortexa55-crypto"
ARMPKGARCH_tune-cortexa76-cortexa55                 = "cortexa76-cortexa55"
ARMPKGARCH_tune-cortexa76-cortexa55-crypto          = "cortexa76-cortexa55-crypto"
TUNE_FEATURES_tune-cortexa76-cortexa55              = "aarch64 cortexa76-cortexa55"
TUNE_FEATURES_tune-cortexa76-cortexa55-crypto       = "${TUNE_FEATURES_tune-cortexa76-cortexa55} crypto"
PACKAGE_EXTRA_ARCHS_tune-cortexa76-cortexa55        = "${PACKAGE_EXTRA_ARCHS_tune-armv8-2a} cortexa76-cortexa55"
PACKAGE_EXTRA_ARCHS_tune-cortexa76-cortexa55-crypto = "${PACKAGE_EXTRA_ARCHS_tune-armv8-2a-crypto} cortexa76-cortexa55 cortexa76-cortexa55-crypto"

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
