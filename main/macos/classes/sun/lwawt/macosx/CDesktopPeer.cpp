#include <sun/lwawt/macosx/CDesktopPeer.h>

#include <com/apple/eawt/Application.h>
#include <com/apple/eio/FileManager.h>
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
#include <java/io/FileNotFoundException.h>
#include <java/io/IOException.h>
#include <java/net/URI.h>
#include <javax/swing/JMenuBar.h>
#include <jcpp.h>

using $Application = ::com::apple::eawt::Application;
using $FileManager = ::com::apple::eio::FileManager;
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
using $FileNotFoundException = ::java::io::FileNotFoundException;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;
using $JMenuBar = ::javax::swing::JMenuBar;

namespace sun {
	namespace lwawt {
		namespace macosx {

$MethodInfo _CDesktopPeer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CDesktopPeer::*)()>(&CDesktopPeer::init$))},
	{"_lsOpenFile", "(Ljava/lang/String;Z)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)($String*,bool)>(&CDesktopPeer::_lsOpenFile))},
	{"_lsOpenURI", "(Ljava/lang/String;)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)($String*)>(&CDesktopPeer::_lsOpenURI))},
	{"addAppEventListener", "(Ljava/awt/desktop/SystemEventListener;)V", nullptr, $PUBLIC},
	{"browse", "(Ljava/net/URI;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"browseFileDirectory", "(Ljava/io/File;)Z", nullptr, $PUBLIC},
	{"disableSuddenTermination", "()V", nullptr, $PUBLIC},
	{"edit", "(Ljava/io/File;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"enableSuddenTermination", "()V", nullptr, $PUBLIC},
	{"isSupported", "(Ljava/awt/Desktop$Action;)Z", nullptr, $PUBLIC},
	{"lsOpen", "(Ljava/net/URI;)V", nullptr, $PRIVATE, $method(static_cast<void(CDesktopPeer::*)($URI*)>(&CDesktopPeer::lsOpen)), "java.io.IOException"},
	{"lsOpenFile", "(Ljava/io/File;Z)V", nullptr, $PRIVATE, $method(static_cast<void(CDesktopPeer::*)($File*,bool)>(&CDesktopPeer::lsOpenFile)), "java.io.IOException"},
	{"mail", "(Ljava/net/URI;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"moveToTrash", "(Ljava/io/File;)Z", nullptr, $PUBLIC},
	{"open", "(Ljava/io/File;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"openHelpViewer", "()V", nullptr, $PUBLIC},
	{"print", "(Ljava/io/File;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
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

#define _METHOD_INDEX__lsOpenFile 1
#define _METHOD_INDEX__lsOpenURI 2

$ClassInfo _CDesktopPeer_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.lwawt.macosx.CDesktopPeer",
	"java.lang.Object",
	"java.awt.peer.DesktopPeer",
	nullptr,
	_CDesktopPeer_MethodInfo_
};

$Object* allocate$CDesktopPeer($Class* clazz) {
	return $of($alloc(CDesktopPeer));
}

void CDesktopPeer::init$() {
}

bool CDesktopPeer::isSupported($Desktop$Action* action) {
	return true;
}

void CDesktopPeer::open($File* file) {
	this->lsOpenFile(file, false);
}

void CDesktopPeer::edit($File* file) {
	this->lsOpenFile(file, false);
}

void CDesktopPeer::print($File* file) {
	this->lsOpenFile(file, true);
}

void CDesktopPeer::mail($URI* uri) {
	this->lsOpen(uri);
}

void CDesktopPeer::browse($URI* uri) {
	this->lsOpen(uri);
}

void CDesktopPeer::addAppEventListener($SystemEventListener* listener) {
	$nc($($Application::getApplication()))->addAppEventListener(listener);
}

void CDesktopPeer::removeAppEventListener($SystemEventListener* listener) {
	$nc($($Application::getApplication()))->removeAppEventListener(listener);
}

void CDesktopPeer::setAboutHandler($AboutHandler* aboutHandler) {
	$nc($($Application::getApplication()))->setAboutHandler(aboutHandler);
}

void CDesktopPeer::setPreferencesHandler($PreferencesHandler* preferencesHandler) {
	$nc($($Application::getApplication()))->setPreferencesHandler(preferencesHandler);
}

void CDesktopPeer::setOpenFileHandler($OpenFilesHandler* openFileHandler) {
	$nc($($Application::getApplication()))->setOpenFileHandler(openFileHandler);
}

void CDesktopPeer::setPrintFileHandler($PrintFilesHandler* printFileHandler) {
	$nc($($Application::getApplication()))->setPrintFileHandler(printFileHandler);
}

void CDesktopPeer::setOpenURIHandler($OpenURIHandler* openURIHandler) {
	$nc($($Application::getApplication()))->setOpenURIHandler(openURIHandler);
}

void CDesktopPeer::setQuitHandler($QuitHandler* quitHandler) {
	$nc($($Application::getApplication()))->setQuitHandler(quitHandler);
}

void CDesktopPeer::setQuitStrategy($QuitStrategy* strategy) {
	$nc($($Application::getApplication()))->setQuitStrategy(strategy);
}

void CDesktopPeer::enableSuddenTermination() {
	$nc($($Application::getApplication()))->enableSuddenTermination();
}

void CDesktopPeer::disableSuddenTermination() {
	$nc($($Application::getApplication()))->disableSuddenTermination();
}

void CDesktopPeer::requestForeground(bool allWindows) {
	$nc($($Application::getApplication()))->requestForeground(allWindows);
}

void CDesktopPeer::openHelpViewer() {
	$nc($($Application::getApplication()))->openHelpViewer();
}

void CDesktopPeer::setDefaultMenuBar($JMenuBar* menuBar) {
	$nc($($Application::getApplication()))->setDefaultMenuBar(menuBar);
}

bool CDesktopPeer::browseFileDirectory($File* file) {
	try {
		return $FileManager::revealInFinder(file);
	} catch ($FileNotFoundException& ex) {
		return false;
	}
	$shouldNotReachHere();
}

bool CDesktopPeer::moveToTrash($File* file) {
	try {
		return $FileManager::moveToTrash(file);
	} catch ($FileNotFoundException& ex) {
		return false;
	}
	$shouldNotReachHere();
}

void CDesktopPeer::lsOpen($URI* uri) {
	$useLocalCurrentObjectStackCache();
	int32_t status = _lsOpenURI($($nc(uri)->toString()));
	if (status != 0) {
		$throwNew($IOException, $$str({"Failed to mail or browse "_s, uri, ". Error code: "_s, $$str(status)}));
	}
}

void CDesktopPeer::lsOpenFile($File* file, bool print) {
	$useLocalCurrentObjectStackCache();
	int32_t status = _lsOpenFile($($nc(file)->getCanonicalPath()), print);
	if (status != 0) {
		$throwNew($IOException, $$str({"Failed to open, edit or print "_s, file, ". Error code: "_s, $$str(status)}));
	}
}

int32_t CDesktopPeer::_lsOpenURI($String* uri) {
	$init(CDesktopPeer);
	int32_t $ret = 0;
	$prepareNativeStatic(CDesktopPeer, _lsOpenURI, int32_t, $String* uri);
	$ret = $invokeNativeStatic(uri);
	$finishNativeStatic();
	return $ret;
}

int32_t CDesktopPeer::_lsOpenFile($String* path, bool print) {
	$init(CDesktopPeer);
	int32_t $ret = 0;
	$prepareNativeStatic(CDesktopPeer, _lsOpenFile, int32_t, $String* path, bool print);
	$ret = $invokeNativeStatic(path, print);
	$finishNativeStatic();
	return $ret;
}

CDesktopPeer::CDesktopPeer() {
}

$Class* CDesktopPeer::load$($String* name, bool initialize) {
	$loadClass(CDesktopPeer, name, initialize, &_CDesktopPeer_ClassInfo_, allocate$CDesktopPeer);
	return class$;
}

$Class* CDesktopPeer::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun