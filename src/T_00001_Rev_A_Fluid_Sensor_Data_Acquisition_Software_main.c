/*
 * MATLAB Compiler: 4.7 (R2007b)
 * Date: Fri Jun 16 11:06:40 2017
 * Arguments: "-B" "macro_default" "-o"
 * "T_00001_Rev_A_Fluid_Sensor_Data_Acquisition_Software" "-W"
 * "WinMain:T_00001_Rev_A_Fluid_Sensor_Data_Acquisition_Software" "-d"
 * "C:\Users\Watertech\Desktop\T_00001_Rev_A_Fluid_Sensor_Data_Acquisition_Softw
 * are\src" "-T" "link:exe" "-v"
 * "C:\Users\Watertech\Documents\MATLAB\factorySensorsGUI.m" "-a"
 * "C:\Users\Watertech\Documents\MATLAB\gatherData.m" "-a"
 * "C:\Users\Watertech\Documents\MATLAB\gatherData.asv" 
 */

#include <stdio.h>
#include "mclmcr.h"
#ifdef __cplusplus
extern "C" {
#endif

extern mclComponentData __MCC_T_00001_Rev_A_Fluid_Sensor_Data_Acquisition_Software_component_data;

#ifdef __cplusplus
}
#endif

static HMCRINSTANCE _mcr_inst = NULL;


#ifdef __cplusplus
extern "C" {
#endif

static int mclDefaultPrintHandler(const char *s)
{
  return mclWrite(1 /* stdout */, s, sizeof(char)*strlen(s));
}

#ifdef __cplusplus
} /* End extern "C" block */
#endif

#ifdef __cplusplus
extern "C" {
#endif

static int mclDefaultErrorHandler(const char *s)
{
  int written = 0;
  size_t len = 0;
  len = strlen(s);
  written = mclWrite(2 /* stderr */, s, sizeof(char)*len);
  if (len > 0 && s[ len-1 ] != '\n')
    written += mclWrite(2 /* stderr */, "\n", sizeof(char));
  return written;
}

#ifdef __cplusplus
} /* End extern "C" block */
#endif

/* This symbol is defined in shared libraries. Define it here
 * (to nothing) in case this isn't a shared library. 
 */
#ifndef LIB_T_00001_Rev_A_Fluid_Sensor_Data_Acquisition_Software_C_API 
#define LIB_T_00001_Rev_A_Fluid_Sensor_Data_Acquisition_Software_C_API /* No special import/export declaration */
#endif

LIB_T_00001_Rev_A_Fluid_Sensor_Data_Acquisition_Software_C_API 
bool MW_CALL_CONV T_00001_Rev_A_Fluid_Sensor_Data_Acquisition_SoftwareInitializeWithHandlers(
    mclOutputHandlerFcn error_handler,
    mclOutputHandlerFcn print_handler
)
{
  if (_mcr_inst != NULL)
    return true;
  if (!mclmcrInitialize())
    return false;
  if (!mclInitializeComponentInstance(&_mcr_inst,
                                      &__MCC_T_00001_Rev_A_Fluid_Sensor_Data_Acquisition_Software_component_data,
                                      true, NoObjectType, ExeTarget,
                                      error_handler, print_handler))
    return false;
  return true;
}

LIB_T_00001_Rev_A_Fluid_Sensor_Data_Acquisition_Software_C_API 
bool MW_CALL_CONV T_00001_Rev_A_Fluid_Sensor_Data_Acquisition_SoftwareInitialize(void)
{
  return T_00001_Rev_A_Fluid_Sensor_Data_Acquisition_SoftwareInitializeWithHandlers(mclDefaultErrorHandler, mclDefaultPrintHandler);
}

LIB_T_00001_Rev_A_Fluid_Sensor_Data_Acquisition_Software_C_API 
void MW_CALL_CONV T_00001_Rev_A_Fluid_Sensor_Data_Acquisition_SoftwareTerminate(void)
{
  if (_mcr_inst != NULL)
    mclTerminateInstance(&_mcr_inst);
}

int run_main(int argc, const char **argv)
{
  int _retval;
  /* Generate and populate the path_to_component. */
  char path_to_component[(PATH_MAX*2)+1];
  separatePathName(argv[0], path_to_component, (PATH_MAX*2)+1);
  __MCC_T_00001_Rev_A_Fluid_Sensor_Data_Acquisition_Software_component_data.path_to_component = path_to_component; 
  if (!T_00001_Rev_A_Fluid_Sensor_Data_Acquisition_SoftwareInitialize()) {
    return -1;
  }
  _retval = mclMain(_mcr_inst, argc, argv, "factorySensorsGUI", 1);
  if (_retval == 0 /* no error */) mclWaitForFiguresToDie(NULL);
  T_00001_Rev_A_Fluid_Sensor_Data_Acquisition_SoftwareTerminate();
#if defined( _MSC_VER)
  PostQuitMessage(0);
#endif
  mclTerminateApplication();
  return _retval;
}

#if defined( _MSC_VER)

#define argc __argc
#define argv __argv

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPTSTR lpCmdLine, int nCmdShow)
#else
int main(int argc, const char **argv)

#endif
{
  if (!mclInitializeApplication(
    __MCC_T_00001_Rev_A_Fluid_Sensor_Data_Acquisition_Software_component_data.runtime_options,
    __MCC_T_00001_Rev_A_Fluid_Sensor_Data_Acquisition_Software_component_data.runtime_option_count))
    return 0;
  
  return mclRunMain(run_main, argc, argv);
}
