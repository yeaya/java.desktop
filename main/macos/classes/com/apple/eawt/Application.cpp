#include <com/apple/eawt/Application.h>

#include <com/apple/eawt/_AppDockIconHandler.h>
#include <com/apple/eawt/_AppEventHandler$_AboutDispatcher.h>
#include <com/apple/eawt/_AppEventHandler$_AppEventDispatcher.h>
#include <com/apple/eawt/_AppEventHandler$_OpenFileDispatcher.h>
#include <com/apple/eawt/_AppEventHandler$_OpenURIDispatcher.h>
#include <com/apple/eawt/_AppEventHandler$_PreferencesDispatcher.h>
#include <com/apple/eawt/_AppEventHandler$_PrintFileDispatcher.h>
#include <com/apple/eawt/_AppEventHandler$_QueuingAppEventDispatcher.h>
#include <com/apple/eawt/_AppEventHandler$_QuitDispatcher.h>
#include <com/apple/eawt/_AppEventHandler.h>
#include <com/apple/eawt/_AppMenuBarHandler.h>
#include <com/apple/eawt/_AppMiscHandlers.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Image.h>
#include <java/awt/PopupMenu.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/awt/desktop/AboutHandler.h>
#include <java/awt/desktop/OpenFilesHandler.h>
#include <java/awt/desktop/OpenURIHandler.h>
#include <java/awt/desktop/PreferencesHandler.h>
#include <java/awt/desktop/PrintFilesHandler.h>
#include <java/awt/desktop/QuitHandler.h>
#include <java/awt/desktop/QuitStrategy.h>
#include <java/awt/desktop/SystemEventListener.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/beans/Beans.h>
#include <java/lang/RuntimePermission.h>
#include <java/lang/SecurityManager.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <javax/swing/JMenuBar.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/lwawt/LWWindowPeer.h>
#include <sun/lwawt/PlatformWindow.h>
#include <sun/lwawt/macosx/CPlatformWindow.h>
#include <jcpp.h>

using $_AppDockIconHandler = ::com::apple::eawt::_AppDockIconHandler;
using $_AppEventHandler = ::com::apple::eawt::_AppEventHandler;
using $_AppEventHandler$_AboutDispatcher = ::com::apple::eawt::_AppEventHandler$_AboutDispatcher;
using $_AppEventHandler$_OpenFileDispatcher = ::com::apple::eawt::_AppEventHandler$_OpenFileDispatcher;
using $_AppEventHandler$_OpenURIDispatcher = ::com::apple::eawt::_AppEventHandler$_OpenURIDispatcher;
using $_AppEventHandler$_PreferencesDispatcher = ::com::apple::eawt::_AppEventHandler$_PreferencesDispatcher;
using $_AppEventHandler$_PrintFileDispatcher = ::com::apple::eawt::_AppEventHandler$_PrintFileDispatcher;
using $_AppEventHandler$_QuitDispatcher = ::com::apple::eawt::_AppEventHandler$_QuitDispatcher;
using $_AppMenuBarHandler = ::com::apple::eawt::_AppMenuBarHandler;
using $_AppMiscHandlers = ::com::apple::eawt::_AppMiscHandlers;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Image = ::java::awt::Image;
using $PopupMenu = ::java::awt::PopupMenu;
using $Toolkit = ::java::awt::Toolkit;
using $Window = ::java::awt::Window;
using $AboutHandler = ::java::awt::desktop::AboutHandler;
using $OpenFilesHandler = ::java::awt::desktop::OpenFilesHandler;
using $OpenURIHandler = ::java::awt::desktop::OpenURIHandler;
using $PreferencesHandler = ::java::awt::desktop::PreferencesHandler;
using $PrintFilesHandler = ::java::awt::desktop::PrintFilesHandler;
using $QuitHandler = ::java::awt::desktop::QuitHandler;
using $QuitStrategy = ::java::awt::desktop::QuitStrategy;
using $SystemEventListener = ::java::awt::desktop::SystemEventListener;
using $Beans = ::java::beans::Beans;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimePermission = ::java::lang::RuntimePermission;
using $SecurityManager = ::java::lang::SecurityManager;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $JMenuBar = ::javax::swing::JMenuBar;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $LWWindowPeer = ::sun::lwawt::LWWindowPeer;
using $CPlatformWindow = ::sun::lwawt::macosx::CPlatformWindow;

namespace com {
	namespace apple {
		namespace eawt {

$CompoundAttribute _Application_MethodAnnotations_init$0[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _Application_FieldInfo_[] = {
	{"sApplication", "Lcom/apple/eawt/Application;", nullptr, $STATIC, $staticField(Application, sApplication)},
	{"eventHandler", "Lcom/apple/eawt/_AppEventHandler;", nullptr, $FINAL, $field(Application, eventHandler)},
	{"menuBarHandler", "Lcom/apple/eawt/_AppMenuBarHandler;", nullptr, $FINAL, $field(Application, menuBarHandler)},
	{"iconHandler", "Lcom/apple/eawt/_AppDockIconHandler;", nullptr, $FINAL, $field(Application, iconHandler)},
	{}
};

$MethodInfo _Application_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC | $DEPRECATED, $method(static_cast<void(Application::*)()>(&Application::init$)), nullptr, nullptr, _Application_MethodAnnotations_init$0},
	{"addAppEventListener", "(Ljava/awt/desktop/SystemEventListener;)V", nullptr, $PUBLIC},
	{"checkSecurity", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&Application::checkSecurity))},
	{"disableSuddenTermination", "()V", nullptr, $PUBLIC},
	{"enableSuddenTermination", "()V", nullptr, $PUBLIC},
	{"getApplication", "()Lcom/apple/eawt/Application;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Application*(*)()>(&Application::getApplication))},
	{"getDockIconImage", "()Ljava/awt/Image;", nullptr, $PUBLIC},
	{"getDockMenu", "()Ljava/awt/PopupMenu;", nullptr, $PUBLIC},
	{"nativeInitializeApplicationDelegate", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&Application::nativeInitializeApplicationDelegate))},
	{"openHelpViewer", "()V", nullptr, $PUBLIC},
	{"removeAppEventListener", "(Ljava/awt/desktop/SystemEventListener;)V", nullptr, $PUBLIC},
	{"requestForeground", "(Z)V", nullptr, $PUBLIC},
	{"requestToggleFullScreen", "(Ljava/awt/Window;)V", nullptr, $PUBLIC},
	{"requestUserAttention", "(Z)V", nullptr, $PUBLIC},
	{"setAboutHandler", "(Ljava/awt/desktop/AboutHandler;)V", nullptr, $PUBLIC},
	{"setDefaultMenuBar", "(Ljavax/swing/JMenuBar;)V", nullptr, $PUBLIC},
	{"setDockIconBadge", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setDockIconImage", "(Ljava/awt/Image;)V", nullptr, $PUBLIC},
	{"setDockIconProgress", "(I)V", nullptr, $PUBLIC},
	{"setDockMenu", "(Ljava/awt/PopupMenu;)V", nullptr, $PUBLIC},
	{"setOpenFileHandler", "(Ljava/awt/desktop/OpenFilesHandler;)V", nullptr, $PUBLIC},
	{"setOpenURIHandler", "(Ljava/awt/desktop/OpenURIHandler;)V", nullptr, $PUBLIC},
	{"setPreferencesHandler", "(Ljava/awt/desktop/PreferencesHandler;)V", nullptr, $PUBLIC},
	{"setPrintFileHandler", "(Ljava/awt/desktop/PrintFilesHandler;)V", nullptr, $PUBLIC},
	{"setQuitHandler", "(Ljava/awt/desktop/QuitHandler;)V", nullptr, $PUBLIC},
	{"setQuitStrategy", "(Ljava/awt/desktop/QuitStrategy;)V", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_nativeInitializeApplicationDelegate 8

$ClassInfo _Application_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.eawt.Application",
	"java.lang.Object",
	nullptr,
	_Application_FieldInfo_,
	_Application_MethodInfo_
};

$Object* allocate$Application($Class* clazz) {
	return $of($alloc(Application));
}

Application* Application::sApplication = nullptr;

void Application::nativeInitializeApplicationDelegate() {
	$init(Application);
	$prepareNativeStatic(Application, nativeInitializeApplicationDelegate, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void Application::checkSecurity() {
	$init(Application);
	$useLocalCurrentObjectStackCache();
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security == nullptr) {
		return;
	}
	$nc(security)->checkPermission($$new($RuntimePermission, "canProcessApplicationEvents"_s));
}

Application* Application::getApplication() {
	$init(Application);
	checkSecurity();
	return Application::sApplication;
}

void Application::init$() {
	$set(this, eventHandler, $_AppEventHandler::getInstance());
	$set(this, menuBarHandler, $_AppMenuBarHandler::getInstance());
	$set(this, iconHandler, $new($_AppDockIconHandler));
	checkSecurity();
}

void Application::addAppEventListener($SystemEventListener* listener) {
	$nc(this->eventHandler)->addListener(listener);
}

void Application::removeAppEventListener($SystemEventListener* listener) {
	$nc(this->eventHandler)->removeListener(listener);
}

void Application::setAboutHandler($AboutHandler* aboutHandler) {
	$nc($nc(this->eventHandler)->aboutDispatcher)->setHandler(aboutHandler);
}

void Application::setPreferencesHandler($PreferencesHandler* preferencesHandler) {
	$nc($nc(this->eventHandler)->preferencesDispatcher)->setHandler(preferencesHandler);
}

void Application::setOpenFileHandler($OpenFilesHandler* openFileHandler) {
	$nc($nc(this->eventHandler)->openFilesDispatcher)->setHandler(openFileHandler);
}

void Application::setPrintFileHandler($PrintFilesHandler* printFileHandler) {
	$nc($nc(this->eventHandler)->printFilesDispatcher)->setHandler(printFileHandler);
}

void Application::setOpenURIHandler($OpenURIHandler* openURIHandler) {
	$nc($nc(this->eventHandler)->openURIDispatcher)->setHandler(openURIHandler);
}

void Application::setQuitHandler($QuitHandler* quitHandler) {
	$nc($nc(this->eventHandler)->quitDispatcher)->setHandler(quitHandler);
}

void Application::setQuitStrategy($QuitStrategy* strategy) {
	$nc(this->eventHandler)->setDefaultQuitStrategy(strategy);
}

void Application::enableSuddenTermination() {
	$_AppMiscHandlers::enableSuddenTermination();
}

void Application::disableSuddenTermination() {
	$_AppMiscHandlers::disableSuddenTermination();
}

void Application::requestForeground(bool allWindows) {
	$_AppMiscHandlers::requestActivation(allWindows);
}

void Application::requestUserAttention(bool critical) {
	$_AppMiscHandlers::requestUserAttention(critical);
}

void Application::openHelpViewer() {
	$_AppMiscHandlers::openHelpViewer();
}

void Application::setDockMenu($PopupMenu* menu) {
	$nc(this->iconHandler)->setDockMenu(menu);
}

$PopupMenu* Application::getDockMenu() {
	return $nc(this->iconHandler)->getDockMenu();
}

void Application::setDockIconImage($Image* image) {
	$nc(this->iconHandler)->setDockIconImage(image);
}

$Image* Application::getDockIconImage() {
	return $nc(this->iconHandler)->getDockIconImage();
}

void Application::setDockIconBadge($String* badge) {
	$nc(this->iconHandler)->setDockIconBadge(badge);
}

void Application::setDockIconProgress(int32_t value) {
	$nc(this->iconHandler)->setDockIconProgress(value);
}

void Application::setDefaultMenuBar($JMenuBar* menuBar) {
	$nc(this->menuBarHandler)->setDefaultMenuBar(menuBar);
}

void Application::requestToggleFullScreen($Window* window) {
	$useLocalCurrentObjectStackCache();
	$var($Object, peer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(window));
	if (!($instanceOf($LWWindowPeer, peer))) {
		return;
	}
	$var($Object, platformWindow, $nc(($cast($LWWindowPeer, peer)))->getPlatformWindow());
	if (!($instanceOf($CPlatformWindow, platformWindow))) {
		return;
	}
	$nc(($cast($CPlatformWindow, platformWindow)))->toggleFullScreen();
}

void clinit$Application($Class* class$) {
	$assignStatic(Application::sApplication, nullptr);
	{
		Application::checkSecurity();
		$Toolkit::getDefaultToolkit();
		if (!$Beans::isDesignTime()) {
			Application::nativeInitializeApplicationDelegate();
		}
		$assignStatic(Application::sApplication, $new(Application));
	}
}

Application::Application() {
}

$Class* Application::load$($String* name, bool initialize) {
	$loadClass(Application, name, initialize, &_Application_ClassInfo_, clinit$Application, allocate$Application);
	return class$;
}

$Class* Application::class$ = nullptr;

		} // eawt
	} // apple
} // com