/*
 *--------------------------------------
 * Program Name: CEPORT NEO
 * Author: oxiti8
 * License: MIT
 * Description: Ports TI-BASIC programs made for the monochrome 83+/84+ to the CE
 *--------------------------------------
*/
#include <ti/screen.h>
#include <ti/getcsc.h>
#include <ti/vars.h>
#include <fileioc.h>

int main(void)
{
    char *PRGMname = "A"; 
    os_ClrHomeFull();
    
    /*Gets the target Program's name and stores it in PRGMname*/
    os_GetStringInput("PRGM name?", PRGMname, 10);
    
    uint8_t Target_Program = ti_OpenVar(PRGMname,"r+",TI_PRGM_TYPE);
    os_SetCursorPos(1,0);
    if (Target_Program == 0){
        os_PutStrLine("NOT A PRGM");
        while (!os_GetCSC());
        return 0;
    }
    os_PutStrLine("PRESS ENTER");
    while (os_GetCSC() != sk_Enter);

    ti_Close(Target_Program);
    return 0;
}
