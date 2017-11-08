#include <efi.h>

#define EFI_SMC_SERVICE
#define EFI_FS_SERVICE

EFI_SYSTEM_TABLE* _serviceTable;

typedef enum {
    SMC_RESET_TYPE_ANY = 0,
    SMC_RESET_TYPE_APP = 1,
    SMC_RESET_TYPE_UPDATE = 2,
    SMC_RESET_TYPE_BASE = 3
} SMC_RESET_TYPE;



EFIAPI efi_main(EFI_HANDLE image, EFI_SYSTEM_TABLE* services) {

    _serviceTable = services;


    return EFI_SUCCESS;
}


char* identify_smc_for_board() {
    SmcServiceTable* smc_services = _serviceTable
}

char* identify_efi_for_model() {

}

void smc_reset(SMC_RESET_TYPE type) {

}