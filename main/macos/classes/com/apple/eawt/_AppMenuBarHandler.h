#ifndef _com_apple_eawt__AppMenuBarHandler_h_
#define _com_apple_eawt__AppMenuBarHandler_h_
//$ class com.apple.eawt._AppMenuBarHandler
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("MENU_ABOUT")
#undef MENU_ABOUT
#pragma push_macro("MENU_PREFS")
#undef MENU_PREFS

namespace com {
	namespace apple {
		namespace laf {
			class ScreenMenuBar;
		}
	}
}
namespace java {
	namespace awt {
		class Frame;
	}
}
namespace javax {
	namespace swing {
		class JMenuBar;
	}
}

namespace com {
	namespace apple {
		namespace eawt {

class _AppMenuBarHandler : public ::java::lang::Object {
	$class(_AppMenuBarHandler, 0, ::java::lang::Object)
public:
	_AppMenuBarHandler();
	void init$();
	static ::com::apple::eawt::_AppMenuBarHandler* getInstance();
	static void initMenuStates(bool aboutMenuItemVisible, bool aboutMenuItemEnabled, bool prefsMenuItemVisible, bool prefsMenuItemEnabled);
	static void installDefaultMenuBar(::javax::swing::JMenuBar* menuBar);
	virtual bool isAboutMenuItemEnabled();
	virtual bool isAboutMenuItemVisible();
	static bool isFrameMinimized(::java::awt::Frame* frame);
	static bool isMenuBarActivationNeeded();
	virtual bool isPreferencesMenuItemEnabled();
	virtual bool isPreferencesMenuItemVisible();
	static void nativeActivateDefaultMenuBar(int64_t menuBarPeer);
	static void nativeSetDefaultMenuBar(int64_t menuBarPeer);
	static void nativeSetMenuState(int32_t menu, bool visible, bool enabled);
	virtual void setAboutMenuItemEnabled(bool enable);
	virtual void setAboutMenuItemVisible(bool present);
	virtual void setDefaultMenuBar(::javax::swing::JMenuBar* menuBar);
	virtual void setPreferencesMenuItemEnabled(bool enable);
	virtual void setPreferencesMenuItemVisible(bool present);
	static const int32_t MENU_ABOUT = 1;
	static const int32_t MENU_PREFS = 2;
	static ::com::apple::eawt::_AppMenuBarHandler* instance;
	static ::com::apple::laf::ScreenMenuBar* defaultMenuBar;
	bool aboutMenuItemVisible = false;
	bool aboutMenuItemEnabled = false;
	bool prefsMenuItemVisible = false;
	bool prefsMenuItemEnabled = false;
	bool prefsMenuItemExplicitlySet = false;
};

		} // eawt
	} // apple
} // com

#pragma pop_macro("MENU_ABOUT")
#pragma pop_macro("MENU_PREFS")

#endif // _com_apple_eawt__AppMenuBarHandler_h_