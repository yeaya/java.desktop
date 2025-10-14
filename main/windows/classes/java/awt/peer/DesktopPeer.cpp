#include <java/awt/peer/DesktopPeer.h>

#include <java/awt/Desktop$Action.h>
#include <java/awt/desktop/AboutHandler.h>
#include <java/awt/desktop/OpenFilesHandler.h>
#include <java/awt/desktop/OpenURIHandler.h>
#include <java/awt/desktop/PreferencesHandler.h>
#include <java/awt/desktop/PrintFilesHandler.h>
#include <java/awt/desktop/QuitHandler.h>
#include <java/awt/desktop/QuitStrategy.h>
#include <java/awt/desktop/SystemEventListener.h>
#include <java/io/File.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URI.h>
#include <javax/swing/JMenuBar.h>
#include <jcpp.h>

using $Desktop$Action = ::java::awt::Desktop$Action;
using $AboutHandler = ::java::awt::desktop::AboutHandler;
using $OpenFilesHandler = ::java::awt::desktop::OpenFilesHandler;
using $OpenURIHandler = ::java::awt::desktop::OpenURIHandler;
using $PreferencesHandler = ::java::awt::desktop::PreferencesHandler;
using $PrintFilesHandler = ::java::awt::desktop::PrintFilesHandler;
using $QuitHandler = ::java::awt::desktop::QuitHandler;
using $QuitStrategy = ::java::awt::desktop::QuitStrategy;
using $SystemEventListener = ::java::awt::desktop::SystemEventListener;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;
using $JMenuBar = ::javax::swing::JMenuBar;

namespace java {
	namespace awt {
		namespace peer {

$MethodInfo _DesktopPeer_MethodInfo_[] = {
	{"addAppEventListener", "(Ljava/awt/desktop/SystemEventListener;)V", nullptr, $PUBLIC},
	{"browse", "(Ljava/net/URI;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"browseFileDirectory", "(Ljava/io/File;)Z", nullptr, $PUBLIC},
	{"disableSuddenTermination", "()V", nullptr, $PUBLIC},
	{"edit", "(Ljava/io/File;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"enableSuddenTermination", "()V", nullptr, $PUBLIC},
	{"isSupported", "(Ljava/awt/Desktop$Action;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"mail", "(Ljava/net/URI;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"moveToTrash", "(Ljava/io/File;)Z", nullptr, $PUBLIC},
	{"open", "(Ljava/io/File;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"openHelpViewer", "()V", nullptr, $PUBLIC},
	{"print", "(Ljava/io/File;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"removeAppEventListener", "(Ljava/awt/desktop/SystemEventListener;)V", nullptr, $PUBLIC},
	{"requestForeground", "(Z)V", nullptr, $PUBLIC},
	{"setAboutHandler", "(Ljava/awt/desktop/AboutHandler;)V", nullptr, $PUBLIC},
	{"setDefaultMenuBar", "(Ljavax/swing/JMenuBar;)V", nullptr, $PUBLIC},
	{"setOpenFileHandler", "(Ljava/awt/desktop/OpenFilesHandler;)V", nullptr, $PUBLIC},
	{"setOpenURIHandler", "(Ljava/awt/desktop/OpenURIHandler;)V", nullptr, $PUBLIC},
	{"setPreferencesHandler", "(Ljava/awt/desktop/PreferencesHandler;)V", nullptr, $PUBLIC},
	{"setPrintFileHandler", "(Ljava/awt/desktop/PrintFilesHandler;)V", nullptr, $PUBLIC},
	{"setQuitHandler", "(Ljava/awt/desktop/QuitHandler;)V", nullptr, $PUBLIC},
	{"setQuitStrategy", "(Ljava/awt/desktop/QuitStrategy;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DesktopPeer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.peer.DesktopPeer",
	nullptr,
	nullptr,
	nullptr,
	_DesktopPeer_MethodInfo_
};

$Object* allocate$DesktopPeer($Class* clazz) {
	return $of($alloc(DesktopPeer));
}

void DesktopPeer::addAppEventListener($SystemEventListener* listener) {
}

void DesktopPeer::removeAppEventListener($SystemEventListener* listener) {
}

void DesktopPeer::setAboutHandler($AboutHandler* aboutHandler) {
}

void DesktopPeer::setPreferencesHandler($PreferencesHandler* preferencesHandler) {
}

void DesktopPeer::setOpenFileHandler($OpenFilesHandler* openFileHandler) {
}

void DesktopPeer::setPrintFileHandler($PrintFilesHandler* printFileHandler) {
}

void DesktopPeer::setOpenURIHandler($OpenURIHandler* openURIHandler) {
}

void DesktopPeer::setQuitHandler($QuitHandler* quitHandler) {
}

void DesktopPeer::setQuitStrategy($QuitStrategy* strategy) {
}

void DesktopPeer::enableSuddenTermination() {
}

void DesktopPeer::disableSuddenTermination() {
}

void DesktopPeer::requestForeground(bool allWindows) {
}

void DesktopPeer::openHelpViewer() {
}

void DesktopPeer::setDefaultMenuBar($JMenuBar* menuBar) {
}

bool DesktopPeer::browseFileDirectory($File* file) {
	return false;
}

bool DesktopPeer::moveToTrash($File* file) {
	return false;
}

$Class* DesktopPeer::load$($String* name, bool initialize) {
	$loadClass(DesktopPeer, name, initialize, &_DesktopPeer_ClassInfo_, allocate$DesktopPeer);
	return class$;
}

$Class* DesktopPeer::class$ = nullptr;

		} // peer
	} // awt
} // java