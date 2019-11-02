/**
@file       DebugUtility.h

@brief      Debugging method declarations

@author     Mark L. Short

@date       October 1, 2014

*/



#ifndef __DEBUG_UTILITY_H__
#define __DEBUG_UTILITY_H__

#ifndef _INC_TCHAR
    #include "tchar.h"
#endif 

/**
  Function used for debugging and tracing diagnostics
  with output directed to the IDE output window

  @param [in] szMsg     format string

  @return the number of characters written
*/
int DebugTrace (const TCHAR* szMsg, ...);

/**
    Function retrieves the current executable directory

    @param [out] szModulePath   destination memory address used to 
                                write application's directory path
    @param [in]  cchLen         count of characters in available to be 
                                written in destination buffer

    @return destination address or NULL on error
*/
TCHAR* GetModulePath(TCHAR* szModulePath, size_t cchLen);



#ifdef _DEBUG

    #ifndef _FSTREAM_
        #include <fstream>
    #endif

    extern std::ofstream dbg;
#endif

#endif