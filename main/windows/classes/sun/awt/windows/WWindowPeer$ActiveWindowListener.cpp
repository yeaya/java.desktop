#include <sun/awt/windows/WWindowPeer$ActiveWindowListener.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/List.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/windows/WWindowPeer.h>
#include <jcpp.h>

#undef ACTIVE_WINDOWS_KEY

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Window = ::java::awt::Window;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $List = ::java::util::List;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $AppContext = ::sun::awt::AppContext;
using $SunToolkit = ::sun::awt::SunToolkit;
using $WWindowPeer = ::sun::awt::windows::WWindowPeer;

namespace sun {
	namespace awt {
		namespace windows {

$MethodInfo _WWindowPeer$ActiveWindowListener_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(WWindowPeer$ActiveWindowListener::*)()>(&WWindowPeer$ActiveWindowListener::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WWindowPeer$ActiveWindowListener_InnerClassesInfo_[] = {
	{"sun.awt.windows.WWindowPeer$ActiveWindowListener", "sun.awt.windows.WWindowPeer", "ActiveWindowListener", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _WWindowPeer$ActiveWindowListener_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.windows.WWindowPeer$ActiveWindowListener",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	nullptr,
	_WWindowPeer$ActiveWindowListener_MethodInfo_,
	nullptr,
	nullptr,
	_WWindowPeer$ActiveWindowListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.windows.WWindowPeer"
};

$Object* allocate$WWindowPeer$ActiveWindowListener($Class* clazz) {
	return $of($alloc(WWindowPeer$ActiveWindowListener));
}

void WWindowPeer$ActiveWindowListener::init$() {
}

void WWindowPeer$ActiveWindowListener::propertyChange($PropertyChangeEvent* e) {
	$var($Window, w, $cast($Window, $nc(e)->getNewValue()));
	if (w == nullptr) {
		return;
	}
	$var($AppContext, appContext, $SunToolkit::targetToAppContext(w));
	$synchronized(appContext) {
		$var($WWindowPeer, wp, $cast($WWindowPeer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(w)));
		$init($WWindowPeer);
		$var($List, l, $cast($List, $nc(appContext)->get($WWindowPeer::ACTIVE_WINDOWS_KEY)));
		if (l != nullptr) {
			l->remove($of(wp));
			l->add(wp);
		}
	}
}

WWindowPeer$ActiveWindowListener::WWindowPeer$ActiveWindowListener() {
}

$Class* WWindowPeer$ActiveWindowListener::load$($String* name, bool initialize) {
	$loadClass(WWindowPeer$ActiveWindowListener, name, initialize, &_WWindowPeer$ActiveWindowListener_ClassInfo_, allocate$WWindowPeer$ActiveWindowListener);
	return class$;
}

$Class* WWindowPeer$ActiveWindowListener::class$ = nullptr;

		} // windows
	} // awt
} // sun