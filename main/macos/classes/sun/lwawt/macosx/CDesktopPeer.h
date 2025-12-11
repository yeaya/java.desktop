#ifndef _sun_lwawt_macosx_CDesktopPeer_h_
#define _sun_lwawt_macosx_CDesktopPeer_h_
//$ class sun.lwawt.macosx.CDesktopPeer
//$ extends java.awt.peer.DesktopPeer

#include <java/awt/peer/DesktopPeer.h>

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

namespace sun {
	namespace lwawt {
		namespace macosx {

class CDesktopPeer : public ::java::awt::peer::DesktopPeer {
	$class(CDesktopPeer, $NO_CLASS_INIT, ::java::awt::peer::DesktopPeer)
public:
	CDesktopPeer();
	void init$();
	static int32_t _lsOpenFile($String* path, bool print);
	static int32_t _lsOpenURI($String* uri);
	virtual void addAppEventListener(::java::awt::desktop::SystemEventListener* listener) override;
	virtual void browse(::java::net::URI* uri) override;
	virtual bool browseFileDirectory(::java::io::File* file) override;
	virtual void disableSuddenTermination() override;
	virtual void edit(::java::io::File* file) override;
	virtual void enableSuddenTermination() override;
	virtual bool isSupported(::java::awt::Desktop$Action* action) override;
	void lsOpen(::java::net::URI* uri);
	void lsOpenFile(::java::io::File* file, bool print);
	virtual void mail(::java::net::URI* uri) override;
	virtual bool moveToTrash(::java::io::File* file) override;
	virtual void open(::java::io::File* file) override;
	virtual void openHelpViewer() override;
	virtual void print(::java::io::File* file) override;
	virtual void removeAppEventListener(::java::awt::desktop::SystemEventListener* listener) override;
	virtual void requestForeground(bool allWindows) override;
	virtual void setAboutHandler(::java::awt::desktop::AboutHandler* aboutHandler) override;
	virtual void setDefaultMenuBar(::javax::swing::JMenuBar* menuBar) override;
	virtual void setOpenFileHandler(::java::awt::desktop::OpenFilesHandler* openFileHandler) override;
	virtual void setOpenURIHandler(::java::awt::desktop::OpenURIHandler* openURIHandler) override;
	virtual void setPreferencesHandler(::java::awt::desktop::PreferencesHandler* preferencesHandler) override;
	virtual void setPrintFileHandler(::java::awt::desktop::PrintFilesHandler* printFileHandler) override;
	virtual void setQuitHandler(::java::awt::desktop::QuitHandler* quitHandler) override;
	virtual void setQuitStrategy(::java::awt::desktop::QuitStrategy* strategy) override;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CDesktopPeer_h_