# Introduction

With the current state of Apple EFI and SMC version mismatch and Loki malware, an external bootable utility
is required to flash a MacBook to a known good state.

## Methodology

* Create EFI bootable media with two partitions
    * ESP including utilities
    * FAT32 volume to write logging and data out to
* Download last known EFI and SMC from Apple *.pkg files and extract with `lsbom` etc
* A routine that flashes using the following series of steps
    * Reset SMC to base by calling `smcutil.efi -reset 1`
    * Flash SMC using `smcutil.efi`
    * Reset SMC to update by calling `smcutil.efi -reset 2`
    * Flash SMC using `smcutil.efi`
    * Reset SMC to application mode by calling `smcutil.efi -reset 3`
    * Flash EFI using `efiutil.efi` to the latest version for a given model

## Progress

The current versions of these files can be extracted from the scripts of a current version of macOS installer

The orchestration portion must be written (`main.c`)