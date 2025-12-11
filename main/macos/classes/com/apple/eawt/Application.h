#ifndef _com_apple_eawt_Application_h_
#define _com_apple_eawt_Application_h_
//$ class com.apple.eawt.Application
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace apple {
		namespace eawt {
			class _AppDockIconHandler;
			class _AppEventHandler;
			class _AppMenuBarHandler;
		}
	}
}
namespace java {
	namespace awt {
		class Image;
		class PopupMenu;
		class Window;
	}
}
namespace java {
	namespace awt {
		namespace desktop {
			class AboutHandler;
			class OpenFilesHandler;
			class OpenURIHandler;
			class PreferencesHandler;
			class PrintFilesHandler;
			class QuitHandler;
			class QuitStrategy;
			class SystemEventListener;
		}
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

class Application : public ::java::lang::Object {
	$class(Application, 0, ::java::lang::Object)
public:
	Application();
	void init$();
	virtual void addAppEventListener(::java::awt::desktop::SystemEventListener* listener);
	static void checkSecurity();
	virtual void disableSuddenTermination();
	virtual void enableSuddenTermination();
	static ::com::apple::eawt::Application* getApplication();
	virtual ::java::awt::Image* getDockIconImage();
	virtual ::java::awt::PopupMenu* getDockMenu();
	static void nativeInitializeApplicationDelegate();
	virtual void openHelpViewer();
	virtual void removeAppEventListener(::java::awt::desktop::SystemEventListener* listener);
	virtual void requestForeground(bool allWindows);
	virtual void requestToggleFullScreen(::java::awt::Window* window);
	virtual void requestUserAttention(bool critical);
	virtual void setAboutHandler(::java::awt::desktop::AboutHandler* aboutHandler);
	virtual void setDefaultMenuBar(::javax::swing::JMenuBar* menuBar);
	virtual void setDockIconBadge($String* badge);
	virtual void setDockIconImage(::java::awt::Image* image);
	virtual void setDockIconProgress(int32_t value);
	virtual void setDockMenu(::java::awt::PopupMenu* menu);
	virtual void setOpenFileHandler(::java::awt::desktop::OpenFilesHandler* openFileHandler);
	virtual void setOpenURIHandler(::java::awt::desktop::OpenURIHandler* openURIHandler);
	virtual void setPreferencesHandler(::java::awt::desktop::PreferencesHandler* preferencesHandler);
	virtual void setPrintFileHandler(::java::awt::desktop::PrintFilesHandler* printFileHandler);
	virtual void setQuitHandler(::java::awt::desktop::QuitHandler* quitHandler);
	virtual void setQuitStrategy(::java::awt::desktop::QuitStrategy* strategy);
	static ::com::apple::eawt::Application* sApplication;
	::com::apple::eawt::_AppEventHandler* eventHandler = nullptr;
	::com::apple::eawt::_AppMenuBarHandler* menuBarHandler = nullptr;
	::com::apple::eawt::_AppDockIconHandler* iconHandler = nullptr;
};

		} // eawt
	} // apple
} // com

#endif // _com_apple_eawt_Application_h_