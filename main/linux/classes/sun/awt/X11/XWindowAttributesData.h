#ifndef _sun_awt_X11_XWindowAttributesData_h_
#define _sun_awt_X11_XWindowAttributesData_h_
//$ class sun.awt.X11.XWindowAttributesData
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("AWT_DECOR_ALL")
#undef AWT_DECOR_ALL
#pragma push_macro("AWT_DECOR_BORDER")
#undef AWT_DECOR_BORDER
#pragma push_macro("AWT_DECOR_MAXIMIZE")
#undef AWT_DECOR_MAXIMIZE
#pragma push_macro("AWT_DECOR_MENU")
#undef AWT_DECOR_MENU
#pragma push_macro("AWT_DECOR_MINIMIZE")
#undef AWT_DECOR_MINIMIZE
#pragma push_macro("AWT_DECOR_NONE")
#undef AWT_DECOR_NONE
#pragma push_macro("AWT_DECOR_RESIZEH")
#undef AWT_DECOR_RESIZEH
#pragma push_macro("AWT_DECOR_TITLE")
#undef AWT_DECOR_TITLE
#pragma push_macro("AWT_FULLY_OBSCURED")
#undef AWT_FULLY_OBSCURED
#pragma push_macro("AWT_PARTIALLY_OBSCURED")
#undef AWT_PARTIALLY_OBSCURED
#pragma push_macro("AWT_UNKNOWN_OBSCURITY")
#undef AWT_UNKNOWN_OBSCURITY
#pragma push_macro("AWT_UNOBSCURED")
#undef AWT_UNOBSCURED
#pragma push_macro("ICONIC")
#undef ICONIC
#pragma push_macro("MAXIMIZED")
#undef MAXIMIZED
#pragma push_macro("NORMAL")
#undef NORMAL

namespace java {
	namespace util {
		class List;
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XWindowAttributesData : public ::java::lang::Object {
	$class(XWindowAttributesData, 0, ::java::lang::Object)
public:
	XWindowAttributesData();
	void init$();
	static int32_t NORMAL;
	static int32_t ICONIC;
	static int32_t MAXIMIZED;
	static int32_t AWT_DECOR_NONE;
	static int32_t AWT_DECOR_ALL;
	static int32_t AWT_DECOR_BORDER;
	static int32_t AWT_DECOR_RESIZEH;
	static int32_t AWT_DECOR_TITLE;
	static int32_t AWT_DECOR_MENU;
	static int32_t AWT_DECOR_MINIMIZE;
	static int32_t AWT_DECOR_MAXIMIZE;
	static int32_t AWT_UNOBSCURED;
	static int32_t AWT_PARTIALLY_OBSCURED;
	static int32_t AWT_FULLY_OBSCURED;
	static int32_t AWT_UNKNOWN_OBSCURITY;
	bool nativeDecor = false;
	bool initialFocus = false;
	bool isResizable = false;
	int32_t initialState = 0;
	bool initialResizability = false;
	int32_t visibilityState = 0;
	$String* title = nullptr;
	::java::util::List* icons = nullptr;
	bool iconsInherited = false;
	int32_t decorations = 0;
	int32_t functions = 0;
};

		} // X11
	} // awt
} // sun

#pragma pop_macro("AWT_DECOR_ALL")
#pragma pop_macro("AWT_DECOR_BORDER")
#pragma pop_macro("AWT_DECOR_MAXIMIZE")
#pragma pop_macro("AWT_DECOR_MENU")
#pragma pop_macro("AWT_DECOR_MINIMIZE")
#pragma pop_macro("AWT_DECOR_NONE")
#pragma pop_macro("AWT_DECOR_RESIZEH")
#pragma pop_macro("AWT_DECOR_TITLE")
#pragma pop_macro("AWT_FULLY_OBSCURED")
#pragma pop_macro("AWT_PARTIALLY_OBSCURED")
#pragma pop_macro("AWT_UNKNOWN_OBSCURITY")
#pragma pop_macro("AWT_UNOBSCURED")
#pragma pop_macro("ICONIC")
#pragma pop_macro("MAXIMIZED")
#pragma pop_macro("NORMAL")

#endif // _sun_awt_X11_XWindowAttributesData_h_