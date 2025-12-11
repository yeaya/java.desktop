#include <com/apple/eawt/_AppMenuBarHandler.h>

#include <com/apple/laf/AquaMenuBarUI.h>
#include <com/apple/laf/ScreenMenuBar.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Frame.h>
#include <java/awt/MenuBar.h>
#include <java/awt/MenuComponent.h>
#include <java/awt/peer/MenuComponentPeer.h>
#include <java/io/Serializable.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLayeredPane.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/MenuBarUI.h>
#include <javax/swing/plaf/basic/BasicMenuBarUI.h>
#include <sun/awt/AWTAccessor$MenuComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/lwawt/macosx/CFRetainedResource$CFNativeAction.h>
#include <sun/lwawt/macosx/CFRetainedResource.h>
#include <sun/lwawt/macosx/CMenuBar.h>
#include <jcpp.h>

#undef ICONIFIED
#undef MENU_ABOUT
#undef MENU_PREFS

using $FrameArray = $Array<::java::awt::Frame>;
using $AquaMenuBarUI = ::com::apple::laf::AquaMenuBarUI;
using $ScreenMenuBar = ::com::apple::laf::ScreenMenuBar;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Frame = ::java::awt::Frame;
using $MenuBar = ::java::awt::MenuBar;
using $MenuComponent = ::java::awt::MenuComponent;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JComponent = ::javax::swing::JComponent;
using $JLayeredPane = ::javax::swing::JLayeredPane;
using $JMenuBar = ::javax::swing::JMenuBar;
using $MenuBarUI = ::javax::swing::plaf::MenuBarUI;
using $BasicMenuBarUI = ::javax::swing::plaf::basic::BasicMenuBarUI;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$MenuComponentAccessor = ::sun::awt::AWTAccessor$MenuComponentAccessor;
using $CFRetainedResource$CFNativeAction = ::sun::lwawt::macosx::CFRetainedResource$CFNativeAction;
using $CMenuBar = ::sun::lwawt::macosx::CMenuBar;

namespace com {
	namespace apple {
		namespace eawt {

class _AppMenuBarHandler$$Lambda$nativeSetDefaultMenuBar : public $CFRetainedResource$CFNativeAction {
	$class(_AppMenuBarHandler$$Lambda$nativeSetDefaultMenuBar, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$() {
	}
	virtual void run(int64_t menuBarPeer) override {
		_AppMenuBarHandler::nativeSetDefaultMenuBar(menuBarPeer);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<_AppMenuBarHandler$$Lambda$nativeSetDefaultMenuBar>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo _AppMenuBarHandler$$Lambda$nativeSetDefaultMenuBar::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(_AppMenuBarHandler$$Lambda$nativeSetDefaultMenuBar::*)()>(&_AppMenuBarHandler$$Lambda$nativeSetDefaultMenuBar::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo _AppMenuBarHandler$$Lambda$nativeSetDefaultMenuBar::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.apple.eawt._AppMenuBarHandler$$Lambda$nativeSetDefaultMenuBar",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	nullptr,
	methodInfos
};
$Class* _AppMenuBarHandler$$Lambda$nativeSetDefaultMenuBar::load$($String* name, bool initialize) {
	$loadClass(_AppMenuBarHandler$$Lambda$nativeSetDefaultMenuBar, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* _AppMenuBarHandler$$Lambda$nativeSetDefaultMenuBar::class$ = nullptr;

class _AppMenuBarHandler$$Lambda$nativeActivateDefaultMenuBar$1 : public $CFRetainedResource$CFNativeAction {
	$class(_AppMenuBarHandler$$Lambda$nativeActivateDefaultMenuBar$1, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$() {
	}
	virtual void run(int64_t menuBarPeer) override {
		_AppMenuBarHandler::nativeActivateDefaultMenuBar(menuBarPeer);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<_AppMenuBarHandler$$Lambda$nativeActivateDefaultMenuBar$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo _AppMenuBarHandler$$Lambda$nativeActivateDefaultMenuBar$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(_AppMenuBarHandler$$Lambda$nativeActivateDefaultMenuBar$1::*)()>(&_AppMenuBarHandler$$Lambda$nativeActivateDefaultMenuBar$1::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo _AppMenuBarHandler$$Lambda$nativeActivateDefaultMenuBar$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.apple.eawt._AppMenuBarHandler$$Lambda$nativeActivateDefaultMenuBar$1",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	nullptr,
	methodInfos
};
$Class* _AppMenuBarHandler$$Lambda$nativeActivateDefaultMenuBar$1::load$($String* name, bool initialize) {
	$loadClass(_AppMenuBarHandler$$Lambda$nativeActivateDefaultMenuBar$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* _AppMenuBarHandler$$Lambda$nativeActivateDefaultMenuBar$1::class$ = nullptr;

$FieldInfo __AppMenuBarHandler_FieldInfo_[] = {
	{"MENU_ABOUT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(_AppMenuBarHandler, MENU_ABOUT)},
	{"MENU_PREFS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(_AppMenuBarHandler, MENU_PREFS)},
	{"instance", "Lcom/apple/eawt/_AppMenuBarHandler;", nullptr, $STATIC | $FINAL, $staticField(_AppMenuBarHandler, instance)},
	{"defaultMenuBar", "Lcom/apple/laf/ScreenMenuBar;", nullptr, $PRIVATE | $STATIC, $staticField(_AppMenuBarHandler, defaultMenuBar)},
	{"aboutMenuItemVisible", "Z", nullptr, 0, $field(_AppMenuBarHandler, aboutMenuItemVisible)},
	{"aboutMenuItemEnabled", "Z", nullptr, 0, $field(_AppMenuBarHandler, aboutMenuItemEnabled)},
	{"prefsMenuItemVisible", "Z", nullptr, 0, $field(_AppMenuBarHandler, prefsMenuItemVisible)},
	{"prefsMenuItemEnabled", "Z", nullptr, 0, $field(_AppMenuBarHandler, prefsMenuItemEnabled)},
	{"prefsMenuItemExplicitlySet", "Z", nullptr, 0, $field(_AppMenuBarHandler, prefsMenuItemExplicitlySet)},
	{}
};

$MethodInfo __AppMenuBarHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(_AppMenuBarHandler::*)()>(&_AppMenuBarHandler::init$))},
	{"getInstance", "()Lcom/apple/eawt/_AppMenuBarHandler;", nullptr, $STATIC, $method(static_cast<_AppMenuBarHandler*(*)()>(&_AppMenuBarHandler::getInstance))},
	{"initMenuStates", "(ZZZZ)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(bool,bool,bool,bool)>(&_AppMenuBarHandler::initMenuStates))},
	{"installDefaultMenuBar", "(Ljavax/swing/JMenuBar;)V", nullptr, $STATIC, $method(static_cast<void(*)($JMenuBar*)>(&_AppMenuBarHandler::installDefaultMenuBar))},
	{"isAboutMenuItemEnabled", "()Z", nullptr, 0},
	{"isAboutMenuItemVisible", "()Z", nullptr, 0},
	{"isFrameMinimized", "(Ljava/awt/Frame;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($Frame*)>(&_AppMenuBarHandler::isFrameMinimized))},
	{"isMenuBarActivationNeeded", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&_AppMenuBarHandler::isMenuBarActivationNeeded))},
	{"isPreferencesMenuItemEnabled", "()Z", nullptr, 0},
	{"isPreferencesMenuItemVisible", "()Z", nullptr, 0},
	{"nativeActivateDefaultMenuBar", "(J)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&_AppMenuBarHandler::nativeActivateDefaultMenuBar))},
	{"nativeSetDefaultMenuBar", "(J)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&_AppMenuBarHandler::nativeSetDefaultMenuBar))},
	{"nativeSetMenuState", "(IZZ)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int32_t,bool,bool)>(&_AppMenuBarHandler::nativeSetMenuState))},
	{"setAboutMenuItemEnabled", "(Z)V", nullptr, 0},
	{"setAboutMenuItemVisible", "(Z)V", nullptr, 0},
	{"setDefaultMenuBar", "(Ljavax/swing/JMenuBar;)V", nullptr, 0},
	{"setPreferencesMenuItemEnabled", "(Z)V", nullptr, 0},
	{"setPreferencesMenuItemVisible", "(Z)V", nullptr, 0},
	{}
};

#define _METHOD_INDEX_nativeActivateDefaultMenuBar 10
#define _METHOD_INDEX_nativeSetDefaultMenuBar 11
#define _METHOD_INDEX_nativeSetMenuState 12

$ClassInfo __AppMenuBarHandler_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.eawt._AppMenuBarHandler",
	"java.lang.Object",
	nullptr,
	__AppMenuBarHandler_FieldInfo_,
	__AppMenuBarHandler_MethodInfo_
};

$Object* allocate$_AppMenuBarHandler($Class* clazz) {
	return $of($alloc(_AppMenuBarHandler));
}

_AppMenuBarHandler* _AppMenuBarHandler::instance = nullptr;
$ScreenMenuBar* _AppMenuBarHandler::defaultMenuBar = nullptr;

void _AppMenuBarHandler::nativeSetMenuState(int32_t menu, bool visible, bool enabled) {
	$init(_AppMenuBarHandler);
	$prepareNativeStatic(_AppMenuBarHandler, nativeSetMenuState, void, int32_t menu, bool visible, bool enabled);
	$invokeNativeStatic(menu, visible, enabled);
	$finishNativeStatic();
}

void _AppMenuBarHandler::nativeSetDefaultMenuBar(int64_t menuBarPeer) {
	$init(_AppMenuBarHandler);
	$prepareNativeStatic(_AppMenuBarHandler, nativeSetDefaultMenuBar, void, int64_t menuBarPeer);
	$invokeNativeStatic(menuBarPeer);
	$finishNativeStatic();
}

void _AppMenuBarHandler::nativeActivateDefaultMenuBar(int64_t menuBarPeer) {
	$init(_AppMenuBarHandler);
	$prepareNativeStatic(_AppMenuBarHandler, nativeActivateDefaultMenuBar, void, int64_t menuBarPeer);
	$invokeNativeStatic(menuBarPeer);
	$finishNativeStatic();
}

_AppMenuBarHandler* _AppMenuBarHandler::getInstance() {
	$init(_AppMenuBarHandler);
	return _AppMenuBarHandler::instance;
}

void _AppMenuBarHandler::initMenuStates(bool aboutMenuItemVisible, bool aboutMenuItemEnabled, bool prefsMenuItemVisible, bool prefsMenuItemEnabled) {
	$init(_AppMenuBarHandler);
	$synchronized(_AppMenuBarHandler::instance) {
		$nc(_AppMenuBarHandler::instance)->aboutMenuItemVisible = aboutMenuItemVisible;
		$nc(_AppMenuBarHandler::instance)->aboutMenuItemEnabled = aboutMenuItemEnabled;
		$nc(_AppMenuBarHandler::instance)->prefsMenuItemVisible = prefsMenuItemVisible;
		$nc(_AppMenuBarHandler::instance)->prefsMenuItemEnabled = prefsMenuItemEnabled;
	}
}

void _AppMenuBarHandler::init$() {
}

void _AppMenuBarHandler::setDefaultMenuBar($JMenuBar* menuBar) {
	installDefaultMenuBar(menuBar);
}

bool _AppMenuBarHandler::isMenuBarActivationNeeded() {
	$init(_AppMenuBarHandler);
	$useLocalCurrentObjectStackCache();
	$var($FrameArray, frames, $Frame::getFrames());
	{
		$var($FrameArray, arr$, frames);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Frame, frame, arr$->get(i$));
			{
				bool var$0 = $nc(frame)->isVisible();
				if (var$0 && !isFrameMinimized(frame)) {
					return false;
				}
			}
		}
	}
	return true;
}

bool _AppMenuBarHandler::isFrameMinimized($Frame* frame) {
	$init(_AppMenuBarHandler);
	return ((int32_t)($nc(frame)->getExtendedState() & (uint32_t)$Frame::ICONIFIED)) != 0;
}

void _AppMenuBarHandler::installDefaultMenuBar($JMenuBar* menuBar) {
	$init(_AppMenuBarHandler);
	$useLocalCurrentObjectStackCache();
	if (menuBar == nullptr) {
		if (_AppMenuBarHandler::defaultMenuBar != nullptr) {
			$nc(_AppMenuBarHandler::defaultMenuBar)->removeNotify();
			$assignStatic(_AppMenuBarHandler::defaultMenuBar, nullptr);
		}
		nativeSetDefaultMenuBar(0);
		return;
	}
	$var($Container, parent, $nc(menuBar)->getParent());
	if ($instanceOf($JLayeredPane, parent)) {
		$nc(($cast($JLayeredPane, parent)))->remove(static_cast<$Component*>(menuBar));
	}
	$var($MenuBarUI, ui, $cast($MenuBarUI, menuBar->getUI()));
	if (!($instanceOf($AquaMenuBarUI, ui))) {
		$assign(ui, $new($AquaMenuBarUI));
		menuBar->setUI(ui);
	}
	$var($AquaMenuBarUI, aquaUI, $cast($AquaMenuBarUI, ui));
	$var($ScreenMenuBar, screenMenuBar, $nc(aquaUI)->getScreenMenuBar());
	if (screenMenuBar == nullptr) {
		$throwNew($IllegalStateException, "Application.setDefaultMenuBar() only works if apple.laf.useScreenMenuBar=true"_s);
	}
	if (screenMenuBar != _AppMenuBarHandler::defaultMenuBar) {
		if (_AppMenuBarHandler::defaultMenuBar != nullptr) {
			$nc(_AppMenuBarHandler::defaultMenuBar)->removeNotify();
		}
		$assignStatic(_AppMenuBarHandler::defaultMenuBar, screenMenuBar);
		$nc(screenMenuBar)->addNotify();
	}
	$var($Object, peer, $nc($($AWTAccessor::getMenuComponentAccessor()))->getPeer(screenMenuBar));
	if (!($instanceOf($CMenuBar, peer))) {
		$throwNew($IllegalStateException, "Unable to determine native menu bar from provided JMenuBar"_s);
	}
	$nc(($cast($CMenuBar, peer)))->execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(_AppMenuBarHandler$$Lambda$nativeSetDefaultMenuBar)));
	if (isMenuBarActivationNeeded()) {
		$nc(($cast($CMenuBar, peer)))->execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(_AppMenuBarHandler$$Lambda$nativeActivateDefaultMenuBar$1)));
	}
}

void _AppMenuBarHandler::setAboutMenuItemVisible(bool present) {
	$synchronized(this) {
		if (this->aboutMenuItemVisible == present) {
			return;
		}
		this->aboutMenuItemVisible = present;
	}
	nativeSetMenuState(_AppMenuBarHandler::MENU_ABOUT, this->aboutMenuItemVisible, this->aboutMenuItemEnabled);
}

void _AppMenuBarHandler::setPreferencesMenuItemVisible(bool present) {
	$synchronized(this) {
		this->prefsMenuItemExplicitlySet = true;
		if (this->prefsMenuItemVisible == present) {
			return;
		}
		this->prefsMenuItemVisible = present;
	}
	nativeSetMenuState(_AppMenuBarHandler::MENU_PREFS, this->prefsMenuItemVisible, this->prefsMenuItemEnabled);
}

void _AppMenuBarHandler::setAboutMenuItemEnabled(bool enable) {
	$synchronized(this) {
		if (this->aboutMenuItemEnabled == enable) {
			return;
		}
		this->aboutMenuItemEnabled = enable;
	}
	nativeSetMenuState(_AppMenuBarHandler::MENU_ABOUT, this->aboutMenuItemVisible, this->aboutMenuItemEnabled);
}

void _AppMenuBarHandler::setPreferencesMenuItemEnabled(bool enable) {
	$synchronized(this) {
		this->prefsMenuItemExplicitlySet = true;
		if (this->prefsMenuItemEnabled == enable) {
			return;
		}
		this->prefsMenuItemEnabled = enable;
	}
	nativeSetMenuState(_AppMenuBarHandler::MENU_PREFS, this->prefsMenuItemVisible, this->prefsMenuItemEnabled);
}

bool _AppMenuBarHandler::isAboutMenuItemVisible() {
	return this->aboutMenuItemVisible;
}

bool _AppMenuBarHandler::isPreferencesMenuItemVisible() {
	return this->prefsMenuItemVisible;
}

bool _AppMenuBarHandler::isAboutMenuItemEnabled() {
	return this->aboutMenuItemEnabled;
}

bool _AppMenuBarHandler::isPreferencesMenuItemEnabled() {
	return this->prefsMenuItemEnabled;
}

void clinit$_AppMenuBarHandler($Class* class$) {
	$assignStatic(_AppMenuBarHandler::instance, $new(_AppMenuBarHandler));
}

_AppMenuBarHandler::_AppMenuBarHandler() {
}

$Class* _AppMenuBarHandler::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(_AppMenuBarHandler$$Lambda$nativeSetDefaultMenuBar::classInfo$.name)) {
			return _AppMenuBarHandler$$Lambda$nativeSetDefaultMenuBar::load$(name, initialize);
		}
		if (name->equals(_AppMenuBarHandler$$Lambda$nativeActivateDefaultMenuBar$1::classInfo$.name)) {
			return _AppMenuBarHandler$$Lambda$nativeActivateDefaultMenuBar$1::load$(name, initialize);
		}
	}
	$loadClass(_AppMenuBarHandler, name, initialize, &__AppMenuBarHandler_ClassInfo_, clinit$_AppMenuBarHandler, allocate$_AppMenuBarHandler);
	return class$;
}

$Class* _AppMenuBarHandler::class$ = nullptr;

		} // eawt
	} // apple
} // com