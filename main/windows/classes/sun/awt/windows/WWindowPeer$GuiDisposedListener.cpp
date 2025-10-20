#include <sun/awt/windows/WWindowPeer$GuiDisposedListener.h>

#include <java/awt/KeyboardFocusManager.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/windows/WWindowPeer.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef ACTIVE_WINDOWS_KEY
#undef FINE
#undef GUI_DISPOSED

using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $AppContext = ::sun::awt::AppContext;
using $WWindowPeer = ::sun::awt::windows::WWindowPeer;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace windows {

$MethodInfo _WWindowPeer$GuiDisposedListener_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(WWindowPeer$GuiDisposedListener::*)()>(&WWindowPeer$GuiDisposedListener::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WWindowPeer$GuiDisposedListener_InnerClassesInfo_[] = {
	{"sun.awt.windows.WWindowPeer$GuiDisposedListener", "sun.awt.windows.WWindowPeer", "GuiDisposedListener", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _WWindowPeer$GuiDisposedListener_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.windows.WWindowPeer$GuiDisposedListener",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	nullptr,
	_WWindowPeer$GuiDisposedListener_MethodInfo_,
	nullptr,
	nullptr,
	_WWindowPeer$GuiDisposedListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.windows.WWindowPeer"
};

$Object* allocate$WWindowPeer$GuiDisposedListener($Class* clazz) {
	return $of($alloc(WWindowPeer$GuiDisposedListener));
}

void WWindowPeer$GuiDisposedListener::init$() {
}

void WWindowPeer$GuiDisposedListener::propertyChange($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	bool isDisposed = $nc(($cast($Boolean, $($nc(e)->getNewValue()))))->booleanValue();
	if (isDisposed != true) {
		$init($WWindowPeer);
		$init($PlatformLogger$Level);
		if ($nc($WWindowPeer::log)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc($WWindowPeer::log)->fine(" Assertion (newValue != true) failed for AppContext.GUI_DISPOSED "_s);
		}
	}
	$var($AppContext, appContext, $AppContext::getAppContext());
	$synchronized(appContext) {
		$init($WWindowPeer);
		$nc(appContext)->remove($WWindowPeer::ACTIVE_WINDOWS_KEY);
		appContext->removePropertyChangeListener($AppContext::GUI_DISPOSED, this);
		$var($KeyboardFocusManager, kfm, $KeyboardFocusManager::getCurrentKeyboardFocusManager());
		$nc(kfm)->removePropertyChangeListener("activeWindow"_s, $WWindowPeer::activeWindowListener);
	}
}

WWindowPeer$GuiDisposedListener::WWindowPeer$GuiDisposedListener() {
}

$Class* WWindowPeer$GuiDisposedListener::load$($String* name, bool initialize) {
	$loadClass(WWindowPeer$GuiDisposedListener, name, initialize, &_WWindowPeer$GuiDisposedListener_ClassInfo_, allocate$WWindowPeer$GuiDisposedListener);
	return class$;
}

$Class* WWindowPeer$GuiDisposedListener::class$ = nullptr;

		} // windows
	} // awt
} // sun