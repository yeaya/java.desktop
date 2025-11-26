#ifndef _sun_awt_X11_XlibWrapper_h_
#define _sun_awt_X11_XlibWrapper_h_
//$ class sun.awt.X11.XlibWrapper
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("MAXSIZE")
#undef MAXSIZE
#pragma push_macro("MINSIZE")
#undef MINSIZE

namespace jdk {
	namespace internal {
		namespace misc {
			class Unsafe;
		}
	}
}
namespace sun {
	namespace java2d {
		namespace pipe {
			class Region;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XlibWrapper : public ::java::lang::Object {
	$class(XlibWrapper, 0, ::java::lang::Object)
public:
	XlibWrapper();
	void init$();
	static int32_t CallErrorHandler(int64_t handler, int64_t display, int64_t event_ptr);
	static int64_t DefaultScreen(int64_t display);
	static int64_t DisplayHeight(int64_t display, int64_t screen);
	static int64_t DisplayHeightMM(int64_t display, int64_t screen);
	static int64_t DisplayWidth(int64_t display, int64_t screen);
	static int64_t DisplayWidthMM(int64_t display, int64_t screen);
	static int32_t DoesBackingStore(int64_t screen);
	static void ExitSecondaryLoop();
	static $String* GetProperty(int64_t display, int64_t window, int64_t atom);
	static int64_t InternAtom(int64_t display, $String* string, int32_t only_if_exists);
	static bool IsKanaKeyboard(int64_t display);
	static bool IsKeypadKey(int64_t keysym);
	static bool IsSunKeyboard(int64_t display);
	static bool IsXsunKPBehavior(int64_t display);
	static void PrintXErrorEvent(int64_t display, int64_t event_ptr);
	static int64_t RootWindow(int64_t display, int64_t screen_number);
	static int32_t ScreenCount(int64_t display);
	static int64_t ScreenOfDisplay(int64_t display, int64_t screen_number);
	static $String* ServerVendor(int64_t display);
	static void SetBitmapShape(int64_t display, int64_t window, int32_t width, int32_t height, $ints* bitmap);
	static void SetProperty(int64_t display, int64_t window, int64_t atom, $String* str);
	static void SetRectangularShape(int64_t display, int64_t window, int32_t lox, int32_t loy, int32_t hix, int32_t hiy, ::sun::java2d::pipe::Region* region);
	static int64_t SetToolkitErrorHandler();
	static void SetZOrder(int64_t display, int64_t window, int64_t above);
	static int32_t VendorRelease(int64_t display);
	static bool XAllocColor(int64_t display, int64_t colormap, int64_t screen_in_out);
	static int64_t XAllocSizeHints();
	static int64_t XAllocWMHints();
	static void XBell(int64_t display, int32_t percent);
	static void XChangeActivePointerGrab(int64_t display, int32_t mask, int64_t cursor, int64_t time);
	static void XChangeProperty(int64_t display, int64_t window, int64_t atom, int64_t type, int32_t format, int32_t mode, int64_t data, int32_t nelements);
	static void XChangePropertyImpl(int64_t display, int64_t window, int64_t atom, int64_t type, int32_t format, int32_t mode, int64_t data, int32_t nelements);
	static void XChangePropertyS(int64_t display, int64_t window, int64_t atom, int64_t type, int32_t format, int32_t mode, $String* value);
	static void XChangeWindowAttributes(int64_t display, int64_t window, int64_t valuemask, int64_t attributes);
	static void XClearWindow(int64_t display, int64_t window);
	static void XCloseDisplay(int64_t display);
	static void XConfigureWindow(int64_t display, int64_t window, int64_t value_mask, int64_t values);
	static void XConvertCase(int64_t keysym, int64_t keysym_lowercase, int64_t keysym_uppercase);
	static void XConvertSelection(int64_t display, int64_t selection, int64_t target, int64_t property, int64_t requestor, int64_t time);
	static int64_t XCreateBitmapFromData(int64_t display, int64_t drawable, int64_t data, int32_t width, int32_t height);
	static int32_t XCreateFontCursor(int64_t display, int32_t shape);
	static int64_t XCreateGC(int64_t display, int64_t drawable, int64_t valuemask, int64_t values);
	static int64_t XCreateImage(int64_t display, int64_t visual_ptr, int32_t depth, int32_t format, int32_t offset, int64_t data, int32_t width, int32_t height, int32_t bitmap_pad, int32_t bytes_per_line);
	static int64_t XCreatePixmap(int64_t display, int64_t drawable, int32_t width, int32_t height, int32_t depth);
	static int64_t XCreatePixmapCursor(int64_t display, int64_t source, int64_t mask, int64_t fore, int64_t back, int32_t x, int32_t y);
	static int64_t XCreateWindow(int64_t display, int64_t parent, int32_t x, int32_t y, int32_t width, int32_t height, int32_t border_width, int32_t depth, int64_t wclass, int64_t visual, int64_t valuemask, int64_t attributes);
	static void XDeleteProperty(int64_t display, int64_t window, int64_t atom);
	static void XDestroyImage(int64_t image);
	static void XDestroyWindow(int64_t display, int64_t window);
	static int64_t XDisplayString(int64_t display);
	static int32_t XEventsQueued(int64_t display, int32_t mode);
	static bool XFilterEvent(int64_t ptr, int64_t window);
	static void XFlush(int64_t display);
	static void XFree(int64_t ptr);
	static void XFreeCursor(int64_t display, int64_t cursor);
	static void XFreeGC(int64_t display, int64_t gc);
	static void XFreeModifiermap(int64_t keymap);
	static void XFreePixmap(int64_t display, int64_t pixmap);
	static $String* XGetAtomName(int64_t display, int64_t atom);
	static $String* XGetDefault(int64_t display, $String* program, $String* option);
	static int32_t XGetGeometry(int64_t display, int64_t drawable, int64_t root_return, int64_t x_return, int64_t y_return, int64_t width_return, int64_t height_return, int64_t border_width_return, int64_t depth_return);
	static int32_t XGetIconSizes(int64_t display, int64_t window, int64_t ret_sizes, int64_t ret_count);
	static int64_t XGetInputFocus(int64_t display);
	static int64_t XGetModifierMapping(int64_t display);
	static int32_t XGetPointerMapping(int64_t display, int64_t map, int32_t buttonNumber);
	static int64_t XGetSelectionOwner(int64_t display, int64_t selection);
	static int64_t XGetVisualInfo(int64_t display, int64_t vinfo_mask, int64_t vinfo_template, int64_t nitems_return);
	static void XGetWMHints(int64_t display, int64_t window, int64_t wmhints);
	static int32_t XGetWMNormalHints(int64_t display, int64_t window, int64_t hints, int64_t supplied_return);
	static int32_t XGetWindowAttributes(int64_t display, int64_t window, int64_t attr_ptr);
	static int32_t XGetWindowProperty(int64_t display, int64_t window, int64_t atom, int64_t long_offset, int64_t long_length, int64_t delete$, int64_t req_type, int64_t actualy_type, int64_t actualy_format, int64_t nitems_ptr, int64_t bytes_after, int64_t data_ptr);
	static int32_t XGrabKeyboard(int64_t display, int64_t grab_window, int32_t owner_events, int32_t pointer_mode, int32_t keyboard_mode, int64_t time);
	static int32_t XGrabPointer(int64_t display, int64_t grab_window, int32_t owner_events, int32_t event_mask, int32_t pointer_mode, int32_t keyboard_mode, int64_t confine_to, int64_t cursor, int64_t time);
	static void XGrabServer(int64_t display);
	static int32_t XIconifyWindow(int64_t display, int64_t window, int64_t screenNumber);
	static int32_t XInternAtoms(int64_t display, $StringArray* names, bool only_if_exists, int64_t atoms);
	static int64_t XKeycodeToKeysym(int64_t display, int32_t keycode, int32_t index);
	static int32_t XKeysymToKeycode(int64_t display, int64_t keysym);
	static void XLowerWindow(int64_t display, int64_t window);
	static void XMapRaised(int64_t display, int64_t window);
	static void XMapWindow(int64_t display, int64_t window);
	static void XMaskEvent(int64_t display, int64_t event_mask, int64_t event_return);
	static int64_t XMaxRequestSize(int64_t display);
	static void XMoveResizeWindow(int64_t display, int64_t window, int32_t x, int32_t y, int32_t width, int32_t height);
	static void XMoveWindow(int64_t display, int64_t window, int32_t x, int32_t y);
	static void XNextEvent(int64_t display, int64_t ptr);
	static bool XNextSecondaryLoopEvent(int64_t display, int64_t ptr);
	static int64_t XOpenDisplay(int64_t display);
	static void XPeekEvent(int64_t display, int64_t ptr);
	static void XPutBackEvent(int64_t display, int64_t event);
	static void XPutImage(int64_t display, int64_t drawable, int64_t gc, int64_t image, int32_t src_x, int32_t src_y, int32_t dest_x, int32_t dest_y, int32_t width, int32_t height);
	static bool XQueryBestCursor(int64_t display, int64_t drawable, int32_t width, int32_t height, int64_t width_return, int64_t height_return);
	static bool XQueryExtension(int64_t display, $String* name, int64_t mop_return, int64_t feve_return, int64_t err_return);
	static void XQueryKeymap(int64_t display, int64_t vector);
	static bool XQueryPointer(int64_t display, int64_t window, int64_t root_return, int64_t child_return, int64_t root_x_return, int64_t root_y_return, int64_t win_x_return, int64_t win_y_return, int64_t mask_return);
	static int32_t XQueryTree(int64_t display, int64_t window, int64_t root_return, int64_t parent_return, int64_t children_return, int64_t nchildren_return);
	static void XRaiseWindow(int64_t display, int64_t window);
	static void XRefreshKeyboardMapping(int64_t event);
	static void XReparentWindow(int64_t display, int64_t window, int64_t parent, int32_t x, int32_t y);
	static void XResizeWindow(int64_t display, int64_t window, int32_t width, int32_t height);
	static void XRestackWindows(int64_t display, int64_t windows, int32_t length);
	static int64_t XScreenNumberOfScreen(int64_t screen);
	static void XSelectInput(int64_t display, int64_t window, int64_t event_mask);
	static int32_t XSendEvent(int64_t display, int64_t window, bool propagate, int64_t event_mask, int64_t event);
	static void XSetCloseDownMode(int64_t display, int32_t close_mode);
	static void XSetErrorHandler(int64_t handler);
	static void XSetInputFocus(int64_t display, int64_t window);
	static void XSetInputFocus2(int64_t display, int64_t window, int64_t time);
	static $String* XSetLocaleModifiers($String* modifier_list);
	static void XSetMinMaxHints(int64_t display, int64_t window, int32_t x, int32_t y, int32_t width, int32_t height, int64_t flags);
	static void XSetSelectionOwner(int64_t display, int64_t selection, int64_t owner, int64_t time);
	static void XSetTransientFor(int64_t display, int64_t window, int64_t transient_for_window);
	static void XSetWMHints(int64_t display, int64_t window, int64_t wmhints);
	static void XSetWMNormalHints(int64_t display, int64_t window, int64_t hints);
	static void XSetWindowBackground(int64_t display, int64_t window, int64_t background_pixel);
	static void XSetWindowBackgroundPixmap(int64_t display, int64_t window, int64_t pixmap);
	static bool XShapeQueryExtension(int64_t display, int64_t event_base_return, int64_t error_base_return);
	static bool XSupportsLocale();
	static void XSync(int64_t display, int32_t discard);
	static int32_t XSynchronize(int64_t display, bool onoff);
	static $StringArray* XTextPropertyToStringList($bytes* bytes, int64_t encoding_atom);
	static int32_t XTranslateCoordinates(int64_t display, int64_t src_w, int64_t dest_w, int64_t src_x, int64_t src_y, int64_t dest_x_return, int64_t dest_y_return, int64_t child_return);
	static void XUngrabKeyboard(int64_t display, int64_t time);
	static void XUngrabPointer(int64_t display, int64_t time);
	static void XUngrabServer(int64_t display);
	static void XUnmapWindow(int64_t display, int64_t window);
	static void XWindowEvent(int64_t display, int64_t window, int64_t event_mask, int64_t event_return);
	static int64_t XdbeAllocateBackBufferName(int64_t display, int64_t window, int32_t swap_action);
	static int32_t XdbeBeginIdiom(int64_t display);
	static int32_t XdbeDeallocateBackBufferName(int64_t display, int64_t buffer);
	static int32_t XdbeEndIdiom(int64_t display);
	static int32_t XdbeQueryExtension(int64_t display, int64_t major_version_return, int64_t minor_version_return);
	static int32_t XdbeSwapBuffers(int64_t display, int64_t swap_info, int32_t num_windows);
	static void XkbFreeKeyboard(int64_t xkb, int64_t which, bool free_all);
	static int32_t XkbGetEffectiveGroup(int64_t display);
	static int64_t XkbGetMap(int64_t display, int64_t which, int64_t device_spec);
	static int64_t XkbGetUpdatedMap(int64_t display, int64_t which, int64_t xkb);
	static int64_t XkbKeycodeToKeysym(int64_t display, int32_t keycode, int32_t group, int32_t level);
	static bool XkbLibraryVersion(int64_t lib_major_in_out, int64_t lib_minor_in_out);
	static bool XkbQueryExtension(int64_t display, int64_t opcode_rtrn, int64_t event_rtrn, int64_t error_rtrn, int64_t major_in_out, int64_t minor_in_out);
	static void XkbSelectEventDetails(int64_t display, int64_t device, int64_t event_type, int64_t bits_to_change, int64_t values_for_bits);
	static void XkbSelectEvents(int64_t display, int64_t device, int64_t bits_to_change, int64_t values_for_bits);
	static void XkbSetDetectableAutoRepeat(int64_t display, bool detectable);
	static bool XkbTranslateKeyCode(int64_t xkb, int32_t keycode, int64_t mods, int64_t mods_rtrn, int64_t keysym_rtrn);
	static void copyIntArray(int64_t dest_ptr, Object$* array, int32_t size_bytes);
	static void copyLongArray(int64_t dest_ptr, Object$* array, int32_t size_bytes);
	static int64_t getAddress(Object$* o);
	static bool getBuildInternal();
	static int32_t getDataModel();
	static $String* getEventToString(int32_t type);
	static int64_t getScreenOfWindow(int64_t display, int64_t window);
	static $bytes* getStringBytes(int64_t str_ptr);
	static $String* hintsToString(int64_t flags);
	static void memcpy(int64_t dest_ptr, int64_t src_ptr, int64_t length);
	static ::jdk::internal::misc::Unsafe* unsafe;
	static const int32_t MAXSIZE = 32767;
	static const int32_t MINSIZE = 1;
	static $StringArray* eventToString;
	static int64_t lbuffer;
	static int64_t ibuffer;
	static int64_t larg1;
	static int64_t larg2;
	static int64_t larg3;
	static int64_t larg4;
	static int64_t larg5;
	static int64_t larg6;
	static int64_t larg7;
	static int64_t larg8;
	static int64_t iarg1;
	static int64_t iarg2;
	static int64_t iarg3;
	static int64_t iarg4;
	static int64_t iarg5;
	static int64_t iarg6;
	static int64_t iarg7;
	static int64_t iarg8;
	static int32_t dataModel;
	static bool isBuildInternal;
};

		} // X11
	} // awt
} // sun

#pragma pop_macro("MAXSIZE")
#pragma pop_macro("MINSIZE")

#endif // _sun_awt_X11_XlibWrapper_h_