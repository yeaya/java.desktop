#include <com/apple/eawt/FullScreenUtilities.h>

#include <com/apple/eawt/FullScreenHandler.h>
#include <com/apple/eawt/FullScreenListener.h>
#include <java/awt/Window.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/RootPaneContainer.h>
#include <sun/lwawt/macosx/CPlatformWindow.h>
#include <jcpp.h>

#undef WINDOW_FULLSCREENABLE

using $FullScreenHandler = ::com::apple::eawt::FullScreenHandler;
using $FullScreenListener = ::com::apple::eawt::FullScreenListener;
using $Window = ::java::awt::Window;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $JRootPane = ::javax::swing::JRootPane;
using $RootPaneContainer = ::javax::swing::RootPaneContainer;
using $CPlatformWindow = ::sun::lwawt::macosx::CPlatformWindow;

namespace com {
	namespace apple {
		namespace eawt {

$MethodInfo _FullScreenUtilities_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(FullScreenUtilities::*)()>(&FullScreenUtilities::init$))},
	{"addFullScreenListenerTo", "(Ljava/awt/Window;Lcom/apple/eawt/FullScreenListener;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Window*,$FullScreenListener*)>(&FullScreenUtilities::addFullScreenListenerTo))},
	{"removeFullScreenListenerFrom", "(Ljava/awt/Window;Lcom/apple/eawt/FullScreenListener;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Window*,$FullScreenListener*)>(&FullScreenUtilities::removeFullScreenListenerFrom))},
	{"setWindowCanFullScreen", "(Ljava/awt/Window;Z)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Window*,bool)>(&FullScreenUtilities::setWindowCanFullScreen))},
	{}
};

$ClassInfo _FullScreenUtilities_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.apple.eawt.FullScreenUtilities",
	"java.lang.Object",
	nullptr,
	nullptr,
	_FullScreenUtilities_MethodInfo_
};

$Object* allocate$FullScreenUtilities($Class* clazz) {
	return $of($alloc(FullScreenUtilities));
}

void FullScreenUtilities::init$() {
}

void FullScreenUtilities::setWindowCanFullScreen($Window* window, bool canFullScreen) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf($RootPaneContainer, window))) {
		$throwNew($IllegalArgumentException, "Can\'t mark a non-RootPaneContainer as full screen-able"_s);
	}
	$var($RootPaneContainer, rpc, $cast($RootPaneContainer, window));
	$init($CPlatformWindow);
	$nc($($nc(rpc)->getRootPane()))->putClientProperty($CPlatformWindow::WINDOW_FULLSCREENABLE, $($Boolean::valueOf(canFullScreen)));
}

void FullScreenUtilities::addFullScreenListenerTo($Window* window, $FullScreenListener* listener) {
	if (!($instanceOf($RootPaneContainer, window))) {
		$throwNew($IllegalArgumentException, "Can\'t attach FullScreenListener to a non-RootPaneContainer"_s);
	}
	if (listener == nullptr) {
		$throwNew($NullPointerException);
	}
	$FullScreenHandler::addFullScreenListenerTo($cast($RootPaneContainer, window), listener);
}

void FullScreenUtilities::removeFullScreenListenerFrom($Window* window, $FullScreenListener* listener) {
	if (!($instanceOf($RootPaneContainer, window))) {
		$throwNew($IllegalArgumentException, "Can\'t remove FullScreenListener from non-RootPaneContainer"_s);
	}
	if (listener == nullptr) {
		$throwNew($NullPointerException);
	}
	$FullScreenHandler::removeFullScreenListenerFrom($cast($RootPaneContainer, window), listener);
}

FullScreenUtilities::FullScreenUtilities() {
}

$Class* FullScreenUtilities::load$($String* name, bool initialize) {
	$loadClass(FullScreenUtilities, name, initialize, &_FullScreenUtilities_ClassInfo_, allocate$FullScreenUtilities);
	return class$;
}

$Class* FullScreenUtilities::class$ = nullptr;

		} // eawt
	} // apple
} // com