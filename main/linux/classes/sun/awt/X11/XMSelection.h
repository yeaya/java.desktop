#ifndef _sun_awt_X11_XMSelection_h_
#define _sun_awt_X11_XMSelection_h_
//$ class sun.awt.X11.XMSelection
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("XA_MANAGER")
#undef XA_MANAGER

namespace java {
	namespace util {
		class Collection;
		class HashMap;
		class Vector;
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class XAtom;
			class XDestroyWindowEvent;
			class XEvent;
			class XMSelectionListener;
			class XPropertyEvent;
		}
	}
}
namespace sun {
	namespace util {
		namespace logging {
			class PlatformLogger;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XMSelection : public ::java::lang::Object {
	$class(XMSelection, 0, ::java::lang::Object)
public:
	XMSelection();
	void init$($String* selname);
	void init$($String* selname, int64_t extraMask);
	virtual void addSelectionListener(::sun::awt::X11::XMSelectionListener* listener);
	virtual void dispatchOwnerChangedEvent(::sun::awt::X11::XEvent* ev, int32_t screen, int64_t owner, int64_t data, int64_t timestamp);
	virtual void dispatchOwnerDeath(::sun::awt::X11::XDestroyWindowEvent* de, int32_t screen);
	virtual void dispatchSelectionChanged(::sun::awt::X11::XPropertyEvent* ev, int32_t screen);
	virtual void dispatchSelectionEvent(::sun::awt::X11::XEvent* xev, int32_t screen);
	virtual ::sun::awt::X11::XAtom* getAtom(int32_t screen);
	static ::sun::awt::X11::XMSelection* getInstance(int64_t selection);
	virtual ::java::util::Collection* getListeners();
	virtual $String* getName();
	virtual int32_t getNumberOfScreens();
	virtual int64_t getOwner(int32_t screen);
	static void initScreen(int64_t display, int32_t screen);
	static bool processClientMessage(::sun::awt::X11::XEvent* xev, int32_t screen);
	static bool processRootEvent(::sun::awt::X11::XEvent* xev, int32_t screen);
	virtual void removeSelectionListener(::sun::awt::X11::XMSelectionListener* listener);
	virtual void resetOwner(int64_t owner, int32_t screen);
	virtual void select(int64_t extra_mask);
	virtual void selectPerScreen(int32_t screen, int64_t extra_mask);
	virtual void setAtom(::sun::awt::X11::XAtom* a, int32_t screen);
	virtual void setOwner(int64_t owner, int32_t screen);
	static ::sun::util::logging::PlatformLogger* log;
	$String* selectionName = nullptr;
	::java::util::Vector* listeners = nullptr;
	$Array<::sun::awt::X11::XAtom>* atoms = nullptr;
	$longs* owners = nullptr;
	int64_t eventMask = 0;
	static int32_t numScreens;
	static ::sun::awt::X11::XAtom* XA_MANAGER;
	static ::java::util::HashMap* selectionMap;
};

		} // X11
	} // awt
} // sun

#pragma pop_macro("XA_MANAGER")

#endif // _sun_awt_X11_XMSelection_h_