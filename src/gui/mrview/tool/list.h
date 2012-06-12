# ifndef TOOL

// place #include files in here:
#include "gui/mrview/tool/view.h"
//#include "gui/mrview/tool/roi_analysis.h"
//#include "gui/mrview/tool/overlay.h"

#else

/* Provide a corresponding line for each mode here:
The first argument is the name of the corresponding Mode class. 
The second argument is the name of the mode as displayed in the menu. 
The third argument is the text to be shown in the menu tooltip. */

TOOL(View, View options, Adjust view settings)
//TOOL(ROI, ROI analysis, Draw & analyse regions of interest)
//TOOL(Overlay, Overlay, Overlay other images over the current image)

#endif



