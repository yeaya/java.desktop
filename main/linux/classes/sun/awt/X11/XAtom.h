#ifndef _sun_awt_X11_XAtom_h_
#define _sun_awt_X11_XAtom_h_
//$ class sun.awt.X11.XAtom
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("XA_ARC")
#undef XA_ARC
#pragma push_macro("XA_ATOM")
#undef XA_ATOM
#pragma push_macro("XA_BITMAP")
#undef XA_BITMAP
#pragma push_macro("XA_CAP_HEIGHT")
#undef XA_CAP_HEIGHT
#pragma push_macro("XA_CARDINAL")
#undef XA_CARDINAL
#pragma push_macro("XA_COLORMAP")
#undef XA_COLORMAP
#pragma push_macro("XA_COPYRIGHT")
#undef XA_COPYRIGHT
#pragma push_macro("XA_CURSOR")
#undef XA_CURSOR
#pragma push_macro("XA_CUT_BUFFER0")
#undef XA_CUT_BUFFER0
#pragma push_macro("XA_CUT_BUFFER1")
#undef XA_CUT_BUFFER1
#pragma push_macro("XA_CUT_BUFFER2")
#undef XA_CUT_BUFFER2
#pragma push_macro("XA_CUT_BUFFER3")
#undef XA_CUT_BUFFER3
#pragma push_macro("XA_CUT_BUFFER4")
#undef XA_CUT_BUFFER4
#pragma push_macro("XA_CUT_BUFFER5")
#undef XA_CUT_BUFFER5
#pragma push_macro("XA_CUT_BUFFER6")
#undef XA_CUT_BUFFER6
#pragma push_macro("XA_CUT_BUFFER7")
#undef XA_CUT_BUFFER7
#pragma push_macro("XA_DRAWABLE")
#undef XA_DRAWABLE
#pragma push_macro("XA_END_SPACE")
#undef XA_END_SPACE
#pragma push_macro("XA_FAMILY_NAME")
#undef XA_FAMILY_NAME
#pragma push_macro("XA_FONT")
#undef XA_FONT
#pragma push_macro("XA_FONT_NAME")
#undef XA_FONT_NAME
#pragma push_macro("XA_FULL_NAME")
#undef XA_FULL_NAME
#pragma push_macro("XA_INTEGER")
#undef XA_INTEGER
#pragma push_macro("XA_ITALIC_ANGLE")
#undef XA_ITALIC_ANGLE
#pragma push_macro("XA_LAST_PREDEFINED")
#undef XA_LAST_PREDEFINED
#pragma push_macro("XA_MAX_SPACE")
#undef XA_MAX_SPACE
#pragma push_macro("XA_MIN_SPACE")
#undef XA_MIN_SPACE
#pragma push_macro("XA_NORM_SPACE")
#undef XA_NORM_SPACE
#pragma push_macro("XA_NOTICE")
#undef XA_NOTICE
#pragma push_macro("XA_PIXMAP")
#undef XA_PIXMAP
#pragma push_macro("XA_POINT")
#undef XA_POINT
#pragma push_macro("XA_POINT_SIZE")
#undef XA_POINT_SIZE
#pragma push_macro("XA_PRIMARY")
#undef XA_PRIMARY
#pragma push_macro("XA_QUAD_WIDTH")
#undef XA_QUAD_WIDTH
#pragma push_macro("XA_RECTANGLE")
#undef XA_RECTANGLE
#pragma push_macro("XA_RESOLUTION")
#undef XA_RESOLUTION
#pragma push_macro("XA_RESOURCE_MANAGER")
#undef XA_RESOURCE_MANAGER
#pragma push_macro("XA_RGB_BEST_MAP")
#undef XA_RGB_BEST_MAP
#pragma push_macro("XA_RGB_BLUE_MAP")
#undef XA_RGB_BLUE_MAP
#pragma push_macro("XA_RGB_COLOR_MAP")
#undef XA_RGB_COLOR_MAP
#pragma push_macro("XA_RGB_DEFAULT_MAP")
#undef XA_RGB_DEFAULT_MAP
#pragma push_macro("XA_RGB_GRAY_MAP")
#undef XA_RGB_GRAY_MAP
#pragma push_macro("XA_RGB_GREEN_MAP")
#undef XA_RGB_GREEN_MAP
#pragma push_macro("XA_RGB_RED_MAP")
#undef XA_RGB_RED_MAP
#pragma push_macro("XA_SECONDARY")
#undef XA_SECONDARY
#pragma push_macro("XA_STRIKEOUT_ASCENT")
#undef XA_STRIKEOUT_ASCENT
#pragma push_macro("XA_STRIKEOUT_DESCENT")
#undef XA_STRIKEOUT_DESCENT
#pragma push_macro("XA_STRING")
#undef XA_STRING
#pragma push_macro("XA_SUBSCRIPT_X")
#undef XA_SUBSCRIPT_X
#pragma push_macro("XA_SUBSCRIPT_Y")
#undef XA_SUBSCRIPT_Y
#pragma push_macro("XA_SUPERSCRIPT_X")
#undef XA_SUPERSCRIPT_X
#pragma push_macro("XA_SUPERSCRIPT_Y")
#undef XA_SUPERSCRIPT_Y
#pragma push_macro("XA_UNDERLINE_POSITION")
#undef XA_UNDERLINE_POSITION
#pragma push_macro("XA_UNDERLINE_THICKNESS")
#undef XA_UNDERLINE_THICKNESS
#pragma push_macro("XA_VISUALID")
#undef XA_VISUALID
#pragma push_macro("XA_WEIGHT")
#undef XA_WEIGHT
#pragma push_macro("XA_WINDOW")
#undef XA_WINDOW
#pragma push_macro("XA_WM_CLASS")
#undef XA_WM_CLASS
#pragma push_macro("XA_WM_CLIENT_MACHINE")
#undef XA_WM_CLIENT_MACHINE
#pragma push_macro("XA_WM_COMMAND")
#undef XA_WM_COMMAND
#pragma push_macro("XA_WM_HINTS")
#undef XA_WM_HINTS
#pragma push_macro("XA_WM_ICON_NAME")
#undef XA_WM_ICON_NAME
#pragma push_macro("XA_WM_ICON_SIZE")
#undef XA_WM_ICON_SIZE
#pragma push_macro("XA_WM_NAME")
#undef XA_WM_NAME
#pragma push_macro("XA_WM_NORMAL_HINTS")
#undef XA_WM_NORMAL_HINTS
#pragma push_macro("XA_WM_SIZE_HINTS")
#undef XA_WM_SIZE_HINTS
#pragma push_macro("XA_WM_TRANSIENT_FOR")
#undef XA_WM_TRANSIENT_FOR
#pragma push_macro("XA_WM_ZOOM_HINTS")
#undef XA_WM_ZOOM_HINTS
#pragma push_macro("XA_X_HEIGHT")
#undef XA_X_HEIGHT

namespace java {
	namespace util {
		class HashMap;
	}
}
namespace jdk {
	namespace internal {
		namespace misc {
			class Unsafe;
		}
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class XAtomList;
			class XBaseWindow;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XAtom : public ::java::lang::Object {
	$class(XAtom, 0, ::java::lang::Object)
public:
	XAtom();
	void init$(int64_t display, $String* name);
	void init$($String* name, bool autoIntern);
	void init$(int64_t display, int64_t atom);
	void init$(int64_t display, $String* name, bool autoIntern);
	void init$();
	void DeleteProperty(int64_t window);
	void DeleteProperty(::sun::awt::X11::XBaseWindow* window);
	static $String* asString(int64_t atom);
	void checkWindow(int64_t window);
	virtual bool equals(Object$* o) override;
	static ::sun::awt::X11::XAtom* get(int64_t atom);
	static ::sun::awt::X11::XAtom* get($String* name);
	int64_t get32Property(int64_t window, int64_t property_type);
	int64_t getAtom();
	static int64_t getAtom(int64_t ptr);
	bool getAtomData(int64_t window, int64_t data_ptr, int32_t length);
	bool getAtomData(int64_t window, int64_t type, int64_t data_ptr, int32_t length);
	$Array<::sun::awt::X11::XAtom>* getAtomListProperty(int64_t window);
	$Array<::sun::awt::X11::XAtom>* getAtomListProperty(::sun::awt::X11::XBaseWindow* window);
	::sun::awt::X11::XAtomList* getAtomListPropertyList(int64_t window);
	::sun::awt::X11::XAtomList* getAtomListPropertyList(::sun::awt::X11::XBaseWindow* window);
	static int32_t getAtomSize();
	$bytes* getByteArrayProperty(int64_t window, int64_t property_type);
	int64_t getCard32Property(::sun::awt::X11::XBaseWindow* window);
	$String* getName();
	$String* getProperty(int64_t window);
	int64_t getWindowProperty(int64_t window);
	virtual int32_t hashCode() override;
	void intern(bool onlyIfExists);
	bool isInterned();
	static ::sun::awt::X11::XAtom* lookup(int64_t atom);
	static ::sun::awt::X11::XAtom* lookup($String* name);
	void putAtom(int64_t ptr);
	static void register$(::sun::awt::X11::XAtom* at);
	void register$();
	void setAtomData(int64_t window, int64_t data_ptr, int32_t length);
	void setAtomData(int64_t window, int64_t type, int64_t data_ptr, int32_t length);
	void setAtomData(int64_t window, int64_t property_type, $bytes* data);
	void setAtomData8(int64_t window, int64_t type, int64_t data_ptr, int32_t length);
	void setAtomListProperty(int64_t window, $Array<::sun::awt::X11::XAtom>* atoms);
	void setAtomListProperty(int64_t window, ::sun::awt::X11::XAtomList* atoms);
	void setAtomListProperty(::sun::awt::X11::XBaseWindow* window, $Array<::sun::awt::X11::XAtom>* atoms);
	void setAtomListProperty(::sun::awt::X11::XBaseWindow* window, ::sun::awt::X11::XAtomList* atoms);
	void setCard32Property(int64_t window, int64_t value);
	void setCard32Property(::sun::awt::X11::XBaseWindow* window, int64_t value);
	void setProperty(int64_t window, $String* str);
	void setProperty8(int64_t window, $String* str);
	void setPropertyUTF8(int64_t window, $String* str);
	void setValues(int64_t display, $String* name, int64_t atom);
	void setWindowProperty(int64_t window, int64_t window_value);
	void setWindowProperty(::sun::awt::X11::XBaseWindow* window, ::sun::awt::X11::XBaseWindow* window_value);
	static int64_t toData($Array<::sun::awt::X11::XAtom>* atoms);
	virtual $String* toString() override;
	static ::jdk::internal::misc::Unsafe* unsafe;
	static $Array<::sun::awt::X11::XAtom>* emptyList;
	static const int64_t XA_PRIMARY = 1;
	static const int64_t XA_SECONDARY = 2;
	static const int64_t XA_ARC = 3;
	static const int64_t XA_ATOM = 4;
	static const int64_t XA_BITMAP = 5;
	static const int64_t XA_CARDINAL = 6;
	static const int64_t XA_COLORMAP = 7;
	static const int64_t XA_CURSOR = 8;
	static const int64_t XA_CUT_BUFFER0 = 9;
	static const int64_t XA_CUT_BUFFER1 = 10;
	static const int64_t XA_CUT_BUFFER2 = 11;
	static const int64_t XA_CUT_BUFFER3 = 12;
	static const int64_t XA_CUT_BUFFER4 = 13;
	static const int64_t XA_CUT_BUFFER5 = 14;
	static const int64_t XA_CUT_BUFFER6 = 15;
	static const int64_t XA_CUT_BUFFER7 = 16;
	static const int64_t XA_DRAWABLE = 17;
	static const int64_t XA_FONT = 18;
	static const int64_t XA_INTEGER = 19;
	static const int64_t XA_PIXMAP = 20;
	static const int64_t XA_POINT = 21;
	static const int64_t XA_RECTANGLE = 22;
	static const int64_t XA_RESOURCE_MANAGER = 23;
	static const int64_t XA_RGB_COLOR_MAP = 24;
	static const int64_t XA_RGB_BEST_MAP = 25;
	static const int64_t XA_RGB_BLUE_MAP = 26;
	static const int64_t XA_RGB_DEFAULT_MAP = 27;
	static const int64_t XA_RGB_GRAY_MAP = 28;
	static const int64_t XA_RGB_GREEN_MAP = 29;
	static const int64_t XA_RGB_RED_MAP = 30;
	static const int64_t XA_STRING = 31;
	static const int64_t XA_VISUALID = 32;
	static const int64_t XA_WINDOW = 33;
	static const int64_t XA_WM_COMMAND = 34;
	static const int64_t XA_WM_HINTS = 35;
	static const int64_t XA_WM_CLIENT_MACHINE = 36;
	static const int64_t XA_WM_ICON_NAME = 37;
	static const int64_t XA_WM_ICON_SIZE = 38;
	static const int64_t XA_WM_NAME = 39;
	static const int64_t XA_WM_NORMAL_HINTS = 40;
	static const int64_t XA_WM_SIZE_HINTS = 41;
	static const int64_t XA_WM_ZOOM_HINTS = 42;
	static const int64_t XA_MIN_SPACE = 43;
	static const int64_t XA_NORM_SPACE = 44;
	static const int64_t XA_MAX_SPACE = 45;
	static const int64_t XA_END_SPACE = 46;
	static const int64_t XA_SUPERSCRIPT_X = 47;
	static const int64_t XA_SUPERSCRIPT_Y = 48;
	static const int64_t XA_SUBSCRIPT_X = 49;
	static const int64_t XA_SUBSCRIPT_Y = 50;
	static const int64_t XA_UNDERLINE_POSITION = 51;
	static const int64_t XA_UNDERLINE_THICKNESS = 52;
	static const int64_t XA_STRIKEOUT_ASCENT = 53;
	static const int64_t XA_STRIKEOUT_DESCENT = 54;
	static const int64_t XA_ITALIC_ANGLE = 55;
	static const int64_t XA_X_HEIGHT = 56;
	static const int64_t XA_QUAD_WIDTH = 57;
	static const int64_t XA_WEIGHT = 58;
	static const int64_t XA_POINT_SIZE = 59;
	static const int64_t XA_RESOLUTION = 60;
	static const int64_t XA_COPYRIGHT = 61;
	static const int64_t XA_NOTICE = 62;
	static const int64_t XA_FONT_NAME = 63;
	static const int64_t XA_FAMILY_NAME = 64;
	static const int64_t XA_FULL_NAME = 65;
	static const int64_t XA_CAP_HEIGHT = 66;
	static const int64_t XA_WM_CLASS = 67;
	static const int64_t XA_WM_TRANSIENT_FOR = 68;
	static const int64_t XA_LAST_PREDEFINED = 68;
	static ::java::util::HashMap* atomToAtom;
	static ::java::util::HashMap* nameToAtom;
	int64_t atom = 0;
	$String* name = nullptr;
	int64_t display = 0;
};

		} // X11
	} // awt
} // sun

#pragma pop_macro("XA_ARC")
#pragma pop_macro("XA_ATOM")
#pragma pop_macro("XA_BITMAP")
#pragma pop_macro("XA_CAP_HEIGHT")
#pragma pop_macro("XA_CARDINAL")
#pragma pop_macro("XA_COLORMAP")
#pragma pop_macro("XA_COPYRIGHT")
#pragma pop_macro("XA_CURSOR")
#pragma pop_macro("XA_CUT_BUFFER0")
#pragma pop_macro("XA_CUT_BUFFER1")
#pragma pop_macro("XA_CUT_BUFFER2")
#pragma pop_macro("XA_CUT_BUFFER3")
#pragma pop_macro("XA_CUT_BUFFER4")
#pragma pop_macro("XA_CUT_BUFFER5")
#pragma pop_macro("XA_CUT_BUFFER6")
#pragma pop_macro("XA_CUT_BUFFER7")
#pragma pop_macro("XA_DRAWABLE")
#pragma pop_macro("XA_END_SPACE")
#pragma pop_macro("XA_FAMILY_NAME")
#pragma pop_macro("XA_FONT")
#pragma pop_macro("XA_FONT_NAME")
#pragma pop_macro("XA_FULL_NAME")
#pragma pop_macro("XA_INTEGER")
#pragma pop_macro("XA_ITALIC_ANGLE")
#pragma pop_macro("XA_LAST_PREDEFINED")
#pragma pop_macro("XA_MAX_SPACE")
#pragma pop_macro("XA_MIN_SPACE")
#pragma pop_macro("XA_NORM_SPACE")
#pragma pop_macro("XA_NOTICE")
#pragma pop_macro("XA_PIXMAP")
#pragma pop_macro("XA_POINT")
#pragma pop_macro("XA_POINT_SIZE")
#pragma pop_macro("XA_PRIMARY")
#pragma pop_macro("XA_QUAD_WIDTH")
#pragma pop_macro("XA_RECTANGLE")
#pragma pop_macro("XA_RESOLUTION")
#pragma pop_macro("XA_RESOURCE_MANAGER")
#pragma pop_macro("XA_RGB_BEST_MAP")
#pragma pop_macro("XA_RGB_BLUE_MAP")
#pragma pop_macro("XA_RGB_COLOR_MAP")
#pragma pop_macro("XA_RGB_DEFAULT_MAP")
#pragma pop_macro("XA_RGB_GRAY_MAP")
#pragma pop_macro("XA_RGB_GREEN_MAP")
#pragma pop_macro("XA_RGB_RED_MAP")
#pragma pop_macro("XA_SECONDARY")
#pragma pop_macro("XA_STRIKEOUT_ASCENT")
#pragma pop_macro("XA_STRIKEOUT_DESCENT")
#pragma pop_macro("XA_STRING")
#pragma pop_macro("XA_SUBSCRIPT_X")
#pragma pop_macro("XA_SUBSCRIPT_Y")
#pragma pop_macro("XA_SUPERSCRIPT_X")
#pragma pop_macro("XA_SUPERSCRIPT_Y")
#pragma pop_macro("XA_UNDERLINE_POSITION")
#pragma pop_macro("XA_UNDERLINE_THICKNESS")
#pragma pop_macro("XA_VISUALID")
#pragma pop_macro("XA_WEIGHT")
#pragma pop_macro("XA_WINDOW")
#pragma pop_macro("XA_WM_CLASS")
#pragma pop_macro("XA_WM_CLIENT_MACHINE")
#pragma pop_macro("XA_WM_COMMAND")
#pragma pop_macro("XA_WM_HINTS")
#pragma pop_macro("XA_WM_ICON_NAME")
#pragma pop_macro("XA_WM_ICON_SIZE")
#pragma pop_macro("XA_WM_NAME")
#pragma pop_macro("XA_WM_NORMAL_HINTS")
#pragma pop_macro("XA_WM_SIZE_HINTS")
#pragma pop_macro("XA_WM_TRANSIENT_FOR")
#pragma pop_macro("XA_WM_ZOOM_HINTS")
#pragma pop_macro("XA_X_HEIGHT")

#endif // _sun_awt_X11_XAtom_h_