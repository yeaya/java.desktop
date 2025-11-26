#ifndef _sun_awt_X11_MWMConstants_h_
#define _sun_awt_X11_MWMConstants_h_
//$ class sun.awt.X11.MWMConstants
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("MWM_DECOR_ALL")
#undef MWM_DECOR_ALL
#pragma push_macro("MWM_DECOR_BORDER")
#undef MWM_DECOR_BORDER
#pragma push_macro("MWM_DECOR_MAXIMIZE")
#undef MWM_DECOR_MAXIMIZE
#pragma push_macro("MWM_DECOR_MENU")
#undef MWM_DECOR_MENU
#pragma push_macro("MWM_DECOR_MINIMIZE")
#undef MWM_DECOR_MINIMIZE
#pragma push_macro("MWM_DECOR_RESIZEH")
#undef MWM_DECOR_RESIZEH
#pragma push_macro("MWM_DECOR_TITLE")
#undef MWM_DECOR_TITLE
#pragma push_macro("MWM_FUNC_ALL")
#undef MWM_FUNC_ALL
#pragma push_macro("MWM_FUNC_CLOSE")
#undef MWM_FUNC_CLOSE
#pragma push_macro("MWM_FUNC_MAXIMIZE")
#undef MWM_FUNC_MAXIMIZE
#pragma push_macro("MWM_FUNC_MINIMIZE")
#undef MWM_FUNC_MINIMIZE
#pragma push_macro("MWM_FUNC_MOVE")
#undef MWM_FUNC_MOVE
#pragma push_macro("MWM_FUNC_RESIZE")
#undef MWM_FUNC_RESIZE
#pragma push_macro("MWM_HINTS_ATOM_NAME")
#undef MWM_HINTS_ATOM_NAME
#pragma push_macro("MWM_HINTS_DECORATIONS")
#undef MWM_HINTS_DECORATIONS
#pragma push_macro("MWM_HINTS_FUNCTIONS")
#undef MWM_HINTS_FUNCTIONS
#pragma push_macro("MWM_HINTS_INPUT_MODE")
#undef MWM_HINTS_INPUT_MODE
#pragma push_macro("MWM_HINTS_STATUS")
#undef MWM_HINTS_STATUS
#pragma push_macro("MWM_INPUT_FULL_APPLICATION_MODAL")
#undef MWM_INPUT_FULL_APPLICATION_MODAL
#pragma push_macro("MWM_INPUT_MODELESS")
#undef MWM_INPUT_MODELESS
#pragma push_macro("MWM_INPUT_PRIMARY_APPLICATION_MODAL")
#undef MWM_INPUT_PRIMARY_APPLICATION_MODAL
#pragma push_macro("MWM_INPUT_SYSTEM_MODAL")
#undef MWM_INPUT_SYSTEM_MODAL
#pragma push_macro("PROP_MOTIF_WM_INFO_ELEMENTS")
#undef PROP_MOTIF_WM_INFO_ELEMENTS
#pragma push_macro("PROP_MWM_HINTS_ELEMENTS")
#undef PROP_MWM_HINTS_ELEMENTS
#pragma push_macro("PROP_MWM_INFO_ELEMENTS")
#undef PROP_MWM_INFO_ELEMENTS

namespace sun {
	namespace awt {
		namespace X11 {

class MWMConstants : public ::java::lang::Object {
	$class(MWMConstants, 0, ::java::lang::Object)
public:
	MWMConstants();
	void init$();
	static const int32_t MWM_HINTS_FUNCTIONS = (1 << 0);
	static const int32_t MWM_HINTS_DECORATIONS = (1 << 1);
	static const int32_t MWM_HINTS_INPUT_MODE = (1 << 2);
	static const int32_t MWM_HINTS_STATUS = (1 << 3);
	static const int32_t MWM_FUNC_ALL = (1 << 0);
	static const int32_t MWM_FUNC_RESIZE = (1 << 1);
	static const int32_t MWM_FUNC_MOVE = (1 << 2);
	static const int32_t MWM_FUNC_MINIMIZE = (1 << 3);
	static const int32_t MWM_FUNC_MAXIMIZE = (1 << 4);
	static const int32_t MWM_FUNC_CLOSE = (1 << 5);
	static const int32_t MWM_DECOR_ALL = (1 << 0);
	static const int32_t MWM_DECOR_BORDER = (1 << 1);
	static const int32_t MWM_DECOR_RESIZEH = (1 << 2);
	static const int32_t MWM_DECOR_TITLE = (1 << 3);
	static const int32_t MWM_DECOR_MENU = (1 << 4);
	static const int32_t MWM_DECOR_MINIMIZE = (1 << 5);
	static const int32_t MWM_DECOR_MAXIMIZE = (1 << 6);
	static const int32_t MWM_INPUT_MODELESS = 0;
	static const int32_t MWM_INPUT_PRIMARY_APPLICATION_MODAL = 1;
	static const int32_t MWM_INPUT_SYSTEM_MODAL = 2;
	static const int32_t MWM_INPUT_FULL_APPLICATION_MODAL = 3;
	static const int32_t PROP_MWM_HINTS_ELEMENTS = 5;
	static const int32_t PROP_MOTIF_WM_INFO_ELEMENTS = 2;
	static const int32_t PROP_MWM_INFO_ELEMENTS = PROP_MOTIF_WM_INFO_ELEMENTS;
	static $String* MWM_HINTS_ATOM_NAME;
};

		} // X11
	} // awt
} // sun

#pragma pop_macro("MWM_DECOR_ALL")
#pragma pop_macro("MWM_DECOR_BORDER")
#pragma pop_macro("MWM_DECOR_MAXIMIZE")
#pragma pop_macro("MWM_DECOR_MENU")
#pragma pop_macro("MWM_DECOR_MINIMIZE")
#pragma pop_macro("MWM_DECOR_RESIZEH")
#pragma pop_macro("MWM_DECOR_TITLE")
#pragma pop_macro("MWM_FUNC_ALL")
#pragma pop_macro("MWM_FUNC_CLOSE")
#pragma pop_macro("MWM_FUNC_MAXIMIZE")
#pragma pop_macro("MWM_FUNC_MINIMIZE")
#pragma pop_macro("MWM_FUNC_MOVE")
#pragma pop_macro("MWM_FUNC_RESIZE")
#pragma pop_macro("MWM_HINTS_ATOM_NAME")
#pragma pop_macro("MWM_HINTS_DECORATIONS")
#pragma pop_macro("MWM_HINTS_FUNCTIONS")
#pragma pop_macro("MWM_HINTS_INPUT_MODE")
#pragma pop_macro("MWM_HINTS_STATUS")
#pragma pop_macro("MWM_INPUT_FULL_APPLICATION_MODAL")
#pragma pop_macro("MWM_INPUT_MODELESS")
#pragma pop_macro("MWM_INPUT_PRIMARY_APPLICATION_MODAL")
#pragma pop_macro("MWM_INPUT_SYSTEM_MODAL")
#pragma pop_macro("PROP_MOTIF_WM_INFO_ELEMENTS")
#pragma pop_macro("PROP_MWM_HINTS_ELEMENTS")
#pragma pop_macro("PROP_MWM_INFO_ELEMENTS")

#endif // _sun_awt_X11_MWMConstants_h_