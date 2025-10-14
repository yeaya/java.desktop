#ifndef _java_awt_Desktop_h_
#define _java_awt_Desktop_h_
//$ class java.awt.Desktop
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Desktop$Action;
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
namespace java {
	namespace awt {
		namespace peer {
			class DesktopPeer;
		}
	}
}
namespace java {
	namespace io {
		class File;
	}
}
namespace java {
	namespace net {
		class URI;
	}
}
namespace javax {
	namespace swing {
		class JMenuBar;
	}
}

namespace java {
	namespace awt {

class $export Desktop : public ::java::lang::Object {
	$class(Desktop, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Desktop();
	void init$();
	virtual void addAppEventListener(::java::awt::desktop::SystemEventListener* listener);
	virtual void browse(::java::net::URI* uri);
	virtual void browseFileDirectory(::java::io::File* file);
	void checkAWTPermission();
	void checkActionSupport(::java::awt::Desktop$Action* actionType);
	void checkEventsProcessingPermission();
	void checkExec();
	static void checkFileValidation(::java::io::File* file);
	void checkQuitPermission();
	void checkRead();
	virtual void disableSuddenTermination();
	virtual void edit(::java::io::File* file);
	virtual void enableSuddenTermination();
	static ::java::awt::Desktop* getDesktop();
	static bool isDesktopSupported();
	virtual bool isSupported(::java::awt::Desktop$Action* action);
	static $Object* lambda$moveToTrash$0(::java::io::File* finalFile);
	virtual void mail();
	virtual void mail(::java::net::URI* mailtoURI);
	virtual bool moveToTrash(::java::io::File* file);
	virtual void open(::java::io::File* file);
	virtual void openHelpViewer();
	virtual void print(::java::io::File* file);
	virtual void removeAppEventListener(::java::awt::desktop::SystemEventListener* listener);
	virtual void requestForeground(bool allWindows);
	virtual void setAboutHandler(::java::awt::desktop::AboutHandler* aboutHandler);
	virtual void setDefaultMenuBar(::javax::swing::JMenuBar* menuBar);
	virtual void setOpenFileHandler(::java::awt::desktop::OpenFilesHandler* openFileHandler);
	virtual void setOpenURIHandler(::java::awt::desktop::OpenURIHandler* openURIHandler);
	virtual void setPreferencesHandler(::java::awt::desktop::PreferencesHandler* preferencesHandler);
	virtual void setPrintFileHandler(::java::awt::desktop::PrintFilesHandler* printFileHandler);
	virtual void setQuitHandler(::java::awt::desktop::QuitHandler* quitHandler);
	virtual void setQuitStrategy(::java::awt::desktop::QuitStrategy* strategy);
	::java::awt::peer::DesktopPeer* peer = nullptr;
};

	} // awt
} // java

#endif // _java_awt_Desktop_h_