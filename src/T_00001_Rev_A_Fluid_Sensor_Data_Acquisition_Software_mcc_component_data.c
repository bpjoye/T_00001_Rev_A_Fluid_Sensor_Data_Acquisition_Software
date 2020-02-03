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

#include "mclmcr.h"

#ifdef __cplusplus
extern "C" {
#endif
const unsigned char __MCC_T_00001_Rev_A_Fluid_Sensor_Data_Acquisition_Software_session_key[] = {
    '0', '3', '7', '7', '7', 'C', 'A', '9', '6', '5', 'E', 'D', '7', '0', '9',
    '7', '2', 'A', 'B', '5', '3', 'E', '6', 'A', 'B', 'B', '3', '3', '2', 'D',
    '5', '3', 'E', 'D', '7', '6', '8', '6', '9', '0', 'D', 'D', '9', 'A', '7',
    'E', 'C', '5', 'C', 'D', 'E', 'F', 'A', '4', 'C', '1', '5', 'B', 'E', 'B',
    'F', 'D', 'A', '8', 'A', '3', 'B', '2', '3', 'B', '2', 'A', '2', 'C', '6',
    '3', '1', 'B', 'B', '9', '1', 'E', '9', '8', 'B', 'E', '8', '8', '6', 'B',
    'B', '9', 'B', '9', '5', 'E', 'F', 'F', '3', '1', '7', '2', '9', '9', '2',
    'A', '4', '5', '4', '3', '4', '5', 'B', '7', 'F', '0', '8', '0', '8', '2',
    '7', 'D', '9', '5', 'E', 'C', '3', '5', '9', '3', 'B', 'E', '7', '5', '1',
    '4', 'C', '8', '3', '2', '1', 'B', '7', 'F', 'B', '8', '9', 'E', 'E', '8',
    '6', '5', 'A', '3', '9', '7', '6', '4', 'B', '7', 'D', '3', '9', 'E', 'B',
    '2', 'D', 'E', '4', 'A', 'F', 'E', '8', '2', 'C', '6', '1', '2', 'D', '6',
    '1', '1', 'C', '8', 'D', 'B', '3', 'F', 'E', '7', 'F', 'F', '5', '4', '9',
    '3', 'B', '7', '9', 'A', '9', '7', '6', '8', '8', '5', '1', '1', 'D', 'D',
    '5', 'D', 'C', '2', 'F', '6', '9', '6', '5', '3', 'A', '6', '4', 'F', '4',
    '5', '0', '4', 'C', '1', '1', '3', '3', 'C', '2', '9', 'C', '0', '5', 'E',
    'F', 'C', 'B', '8', '8', '4', 'C', 'F', '0', '5', 'F', 'B', '7', '1', 'B',
    'F', '\0'};

const unsigned char __MCC_T_00001_Rev_A_Fluid_Sensor_Data_Acquisition_Software_public_key[] = {
    '3', '0', '8', '1', '9', 'D', '3', '0', '0', 'D', '0', '6', '0', '9', '2',
    'A', '8', '6', '4', '8', '8', '6', 'F', '7', '0', 'D', '0', '1', '0', '1',
    '0', '1', '0', '5', '0', '0', '0', '3', '8', '1', '8', 'B', '0', '0', '3',
    '0', '8', '1', '8', '7', '0', '2', '8', '1', '8', '1', '0', '0', 'C', '4',
    '9', 'C', 'A', 'C', '3', '4', 'E', 'D', '1', '3', 'A', '5', '2', '0', '6',
    '5', '8', 'F', '6', 'F', '8', 'E', '0', '1', '3', '8', 'C', '4', '3', '1',
    '5', 'B', '4', '3', '1', '5', '2', '7', '7', 'E', 'D', '3', 'F', '7', 'D',
    'A', 'E', '5', '3', '0', '9', '9', 'D', 'B', '0', '8', 'E', 'E', '5', '8',
    '9', 'F', '8', '0', '4', 'D', '4', 'B', '9', '8', '1', '3', '2', '6', 'A',
    '5', '2', 'C', 'C', 'E', '4', '3', '8', '2', 'E', '9', 'F', '2', 'B', '4',
    'D', '0', '8', '5', 'E', 'B', '9', '5', '0', 'C', '7', 'A', 'B', '1', '2',
    'E', 'D', 'E', '2', 'D', '4', '1', '2', '9', '7', '8', '2', '0', 'E', '6',
    '3', '7', '7', 'A', '5', 'F', 'E', 'B', '5', '6', '8', '9', 'D', '4', 'E',
    '6', '0', '3', '2', 'F', '6', '0', 'C', '4', '3', '0', '7', '4', 'A', '0',
    '4', 'C', '2', '6', 'A', 'B', '7', '2', 'F', '5', '4', 'B', '5', '1', 'B',
    'B', '4', '6', '0', '5', '7', '8', '7', '8', '5', 'B', '1', '9', '9', '0',
    '1', '4', '3', '1', '4', 'A', '6', '5', 'F', '0', '9', '0', 'B', '6', '1',
    'F', 'C', '2', '0', '1', '6', '9', '4', '5', '3', 'B', '5', '8', 'F', 'C',
    '8', 'B', 'A', '4', '3', 'E', '6', '7', '7', '6', 'E', 'B', '7', 'E', 'C',
    'D', '3', '1', '7', '8', 'B', '5', '6', 'A', 'B', '0', 'F', 'A', '0', '6',
    'D', 'D', '6', '4', '9', '6', '7', 'C', 'B', '1', '4', '9', 'E', '5', '0',
    '2', '0', '1', '1', '1', '\0'};

static const char * MCC_T_00001_Rev_A_Fluid_Sensor_Data_Acquisition_Software_matlabpath_data[] = 
  { "T_00001_Rev_A_Fluid_Sensor_Data_Acquisition_Software/",
    "toolbox/compiler/deploy/", "Users/Watertech/Documents/MATLAB/",
    "$TOOLBOXMATLABDIR/general/", "$TOOLBOXMATLABDIR/ops/",
    "$TOOLBOXMATLABDIR/lang/", "$TOOLBOXMATLABDIR/elmat/",
    "$TOOLBOXMATLABDIR/elfun/", "$TOOLBOXMATLABDIR/specfun/",
    "$TOOLBOXMATLABDIR/matfun/", "$TOOLBOXMATLABDIR/datafun/",
    "$TOOLBOXMATLABDIR/polyfun/", "$TOOLBOXMATLABDIR/funfun/",
    "$TOOLBOXMATLABDIR/sparfun/", "$TOOLBOXMATLABDIR/scribe/",
    "$TOOLBOXMATLABDIR/graph2d/", "$TOOLBOXMATLABDIR/graph3d/",
    "$TOOLBOXMATLABDIR/specgraph/", "$TOOLBOXMATLABDIR/graphics/",
    "$TOOLBOXMATLABDIR/uitools/", "$TOOLBOXMATLABDIR/strfun/",
    "$TOOLBOXMATLABDIR/imagesci/", "$TOOLBOXMATLABDIR/iofun/",
    "$TOOLBOXMATLABDIR/audiovideo/", "$TOOLBOXMATLABDIR/timefun/",
    "$TOOLBOXMATLABDIR/datatypes/", "$TOOLBOXMATLABDIR/verctrl/",
    "$TOOLBOXMATLABDIR/codetools/", "$TOOLBOXMATLABDIR/helptools/",
    "$TOOLBOXMATLABDIR/winfun/", "$TOOLBOXMATLABDIR/demos/",
    "$TOOLBOXMATLABDIR/timeseries/", "$TOOLBOXMATLABDIR/hds/",
    "$TOOLBOXMATLABDIR/guide/", "$TOOLBOXMATLABDIR/plottools/",
    "toolbox/local/", "toolbox/shared/controllib/", "toolbox/control/control/",
    "toolbox/control/ctrlguis/", "toolbox/control/ctrlobsolete/",
    "toolbox/control/ctrlutil/", "toolbox/shared/optimlib/",
    "toolbox/ident/ident/", "toolbox/ident/nlident/",
    "toolbox/ident/idobsolete/", "toolbox/ident/idutils/",
    "toolbox/shared/spcuilib/", "toolbox/instrument/instrument/",
    "toolbox/signal/signal/", "toolbox/signal/sigtools/" };

static const char * MCC_T_00001_Rev_A_Fluid_Sensor_Data_Acquisition_Software_classpath_data[] = 
  { "java/jar/toolbox/control.jar", "java/jar/toolbox/instrument.jar",
    "java/jar/toolbox/testmeas.jar" };

static const char * MCC_T_00001_Rev_A_Fluid_Sensor_Data_Acquisition_Software_libpath_data[] = 
  { "bin/win32/" };

static const char * MCC_T_00001_Rev_A_Fluid_Sensor_Data_Acquisition_Software_app_opts_data[] = 
  { "" };

static const char * MCC_T_00001_Rev_A_Fluid_Sensor_Data_Acquisition_Software_run_opts_data[] = 
  { "" };

static const char * MCC_T_00001_Rev_A_Fluid_Sensor_Data_Acquisition_Software_warning_state_data[] = 
  { "off:MATLAB:dispatcher:nameConflict" };


mclComponentData __MCC_T_00001_Rev_A_Fluid_Sensor_Data_Acquisition_Software_component_data = { 

  /* Public key data */
  __MCC_T_00001_Rev_A_Fluid_Sensor_Data_Acquisition_Software_public_key,

  /* Component name */
  "T_00001_Rev_A_Fluid_Sensor_Data_Acquisition_Software",

  /* Component Root */
  "",

  /* Application key data */
  __MCC_T_00001_Rev_A_Fluid_Sensor_Data_Acquisition_Software_session_key,

  /* Component's MATLAB Path */
  MCC_T_00001_Rev_A_Fluid_Sensor_Data_Acquisition_Software_matlabpath_data,

  /* Number of directories in the MATLAB Path */
  50,

  /* Component's Java class path */
  MCC_T_00001_Rev_A_Fluid_Sensor_Data_Acquisition_Software_classpath_data,
  /* Number of directories in the Java class path */
  3,

  /* Component's load library path (for extra shared libraries) */
  MCC_T_00001_Rev_A_Fluid_Sensor_Data_Acquisition_Software_libpath_data,
  /* Number of directories in the load library path */
  1,

  /* MCR instance-specific runtime options */
  MCC_T_00001_Rev_A_Fluid_Sensor_Data_Acquisition_Software_app_opts_data,
  /* Number of MCR instance-specific runtime options */
  0,

  /* MCR global runtime options */
  MCC_T_00001_Rev_A_Fluid_Sensor_Data_Acquisition_Software_run_opts_data,
  /* Number of MCR global runtime options */
  0,
  
  /* Component preferences directory */
  "T_00001_Rev_A_Fluid_Sensor_Data_Acquisition_Software_9C1331B45100C1A35103EDFEF49F4319",

  /* MCR warning status data */
  MCC_T_00001_Rev_A_Fluid_Sensor_Data_Acquisition_Software_warning_state_data,
  /* Number of MCR warning status modifiers */
  1,

  /* Path to component - evaluated at runtime */
  NULL

};

#ifdef __cplusplus
}
#endif


