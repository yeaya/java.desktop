#include <sun/awt/windows/WMenuItemPeer.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Font.h>
#include <java/awt/MenuContainer.h>
#include <java/awt/MenuItem.h>
#include <java/awt/MenuShortcut.h>
#include <java/lang/Error.h>
#include <java/lang/InternalError.h>
#include <java/lang/Runnable.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/windows/WMenuBarPeer.h>
#include <sun/awt/windows/WMenuItemPeer$1.h>
#include <sun/awt/windows/WMenuItemPeer$2.h>
#include <sun/awt/windows/WMenuPeer.h>
#include <sun/awt/windows/WObjectPeer.h>
#include <sun/awt/windows/WToolkit.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

using $AWTEvent = ::java::awt::AWTEvent;
using $Font = ::java::awt::Font;
using $MenuItem = ::java::awt::MenuItem;
using $MenuShortcut = ::java::awt::MenuShortcut;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $WMenuBarPeer = ::sun::awt::windows::WMenuBarPeer;
using $WMenuItemPeer$1 = ::sun::awt::windows::WMenuItemPeer$1;
using $WMenuItemPeer$2 = ::sun::awt::windows::WMenuItemPeer$2;
using $WMenuPeer = ::sun::awt::windows::WMenuPeer;
using $WObjectPeer = ::sun::awt::windows::WObjectPeer;
using $WToolkit = ::sun::awt::windows::WToolkit;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;

namespace sun {
	namespace awt {
		namespace windows {

$FieldInfo _WMenuItemPeer_FieldInfo_[] = {
	{"log", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WMenuItemPeer, log)},
	{"shortcutLabel", "Ljava/lang/String;", nullptr, 0, $field(WMenuItemPeer, shortcutLabel)},
	{"parent", "Lsun/awt/windows/WMenuPeer;", nullptr, $PROTECTED, $field(WMenuItemPeer, parent)},
	{"isCheckbox", "Z", nullptr, $PRIVATE | $FINAL, $field(WMenuItemPeer, isCheckbox)},
	{"defaultMenuFont", "Ljava/awt/Font;", nullptr, $PRIVATE | $STATIC, $staticField(WMenuItemPeer, defaultMenuFont)},
	{}
};

$MethodInfo _WMenuItemPeer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*dispose", "()V", nullptr, $PUBLIC | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(WMenuItemPeer::*)()>(&WMenuItemPeer::init$))},
	{"<init>", "(Ljava/awt/MenuItem;)V", nullptr, 0, $method(static_cast<void(WMenuItemPeer::*)($MenuItem*)>(&WMenuItemPeer::init$))},
	{"<init>", "(Ljava/awt/MenuItem;Z)V", nullptr, 0, $method(static_cast<void(WMenuItemPeer::*)($MenuItem*,bool)>(&WMenuItemPeer::init$))},
	{"_dispose", "()V", nullptr, $PRIVATE | $SYNCHRONIZED | $NATIVE, $method(static_cast<void(WMenuItemPeer::*)()>(&WMenuItemPeer::_dispose))},
	{"_setFont", "(Ljava/awt/Font;)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(WMenuItemPeer::*)($Font*)>(&WMenuItemPeer::_setFont))},
	{"_setLabel", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $NATIVE},
	{"checkMenuCreation", "()V", nullptr, 0},
	{"create", "(Lsun/awt/windows/WMenuPeer;)V", nullptr, $NATIVE},
	{"disposeImpl", "()V", nullptr, $PROTECTED},
	{"enable", "(Z)V", nullptr, $NATIVE},
	{"getDefaultFont", "()Ljava/awt/Font;", nullptr, $STATIC, $method(static_cast<$Font*(*)()>(&WMenuItemPeer::getDefaultFont))},
	{"handleAction", "(JI)V", nullptr, 0},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&WMenuItemPeer::initIDs))},
	{"postEvent", "(Ljava/awt/AWTEvent;)V", nullptr, 0},
	{"readShortcutLabel", "()V", nullptr, $PRIVATE, $method(static_cast<void(WMenuItemPeer::*)()>(&WMenuItemPeer::readShortcutLabel))},
	{"setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"setLabel", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX__dispose 8
#define _METHOD_INDEX__setFont 9
#define _METHOD_INDEX__setLabel 10
#define _METHOD_INDEX_create 12
#define _METHOD_INDEX_enable 14
#define _METHOD_INDEX_initIDs 17

$InnerClassInfo _WMenuItemPeer_InnerClassesInfo_[] = {
	{"sun.awt.windows.WMenuItemPeer$2", nullptr, nullptr, 0},
	{"sun.awt.windows.WMenuItemPeer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WMenuItemPeer_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.windows.WMenuItemPeer",
	"sun.awt.windows.WObjectPeer",
	"java.awt.peer.MenuItemPeer",
	_WMenuItemPeer_FieldInfo_,
	_WMenuItemPeer_MethodInfo_,
	nullptr,
	nullptr,
	_WMenuItemPeer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.windows.WMenuItemPeer$2,sun.awt.windows.WMenuItemPeer$1"
};

$Object* allocate$WMenuItemPeer($Class* clazz) {
	return $of($alloc(WMenuItemPeer));
}

void WMenuItemPeer::dispose() {
	this->$WObjectPeer::dispose();
}

int32_t WMenuItemPeer::hashCode() {
	 return this->$WObjectPeer::hashCode();
}

bool WMenuItemPeer::equals(Object$* arg0) {
	 return this->$WObjectPeer::equals(arg0);
}

$Object* WMenuItemPeer::clone() {
	 return this->$WObjectPeer::clone();
}

$String* WMenuItemPeer::toString() {
	 return this->$WObjectPeer::toString();
}

void WMenuItemPeer::finalize() {
	this->$WObjectPeer::finalize();
}

$PlatformLogger* WMenuItemPeer::log = nullptr;
$Font* WMenuItemPeer::defaultMenuFont = nullptr;

void WMenuItemPeer::_dispose() {
	$prepareNative(WMenuItemPeer, _dispose, void);
	$invokeNative();
	$finishNative();
}

void WMenuItemPeer::disposeImpl() {
	$WToolkit::targetDisposedPeer(this->target, this);
	_dispose();
}

void WMenuItemPeer::setEnabled(bool b) {
	enable(b);
}

void WMenuItemPeer::readShortcutLabel() {
	$useLocalCurrentObjectStackCache();
	$var($WMenuPeer, ancestor, this->parent);
	while (ancestor != nullptr && !($instanceOf($WMenuBarPeer, ancestor))) {
		$assign(ancestor, ancestor->parent);
	}
	if ($instanceOf($WMenuBarPeer, ancestor)) {
		$var($MenuShortcut, sc, $nc(($cast($MenuItem, this->target)))->getShortcut());
		$set(this, shortcutLabel, (sc != nullptr) ? $nc(sc)->toString() : ($String*)nullptr);
	} else {
		$set(this, shortcutLabel, nullptr);
	}
}

void WMenuItemPeer::setLabel($String* label) {
	readShortcutLabel();
	_setLabel(label);
}

void WMenuItemPeer::_setLabel($String* label) {
	$prepareNative(WMenuItemPeer, _setLabel, void, $String* label);
	$invokeNative(label);
	$finishNative();
}

void WMenuItemPeer::init$() {
	$WObjectPeer::init$();
	this->isCheckbox = false;
}

void WMenuItemPeer::init$($MenuItem* target) {
	WMenuItemPeer::init$(target, false);
}

void WMenuItemPeer::init$($MenuItem* target, bool isCheckbox) {
	$WObjectPeer::init$();
	$set(this, target, target);
	$set(this, parent, $cast($WMenuPeer, $WToolkit::targetToPeer($($nc(target)->getParent()))));
	this->isCheckbox = isCheckbox;
	$nc(this->parent)->addChildPeer(this);
	create(this->parent);
	checkMenuCreation();
	readShortcutLabel();
}

void WMenuItemPeer::checkMenuCreation() {
	if (this->pData == 0) {
		if (this->createError != nullptr) {
			$throw(this->createError);
		} else {
			$throwNew($InternalError, "couldn\'t create menu peer"_s);
		}
	}
}

void WMenuItemPeer::postEvent($AWTEvent* event) {
	$WToolkit::postEvent($($WToolkit::targetToAppContext(this->target)), event);
}

void WMenuItemPeer::create($WMenuPeer* parent) {
	$prepareNative(WMenuItemPeer, create, void, $WMenuPeer* parent);
	$invokeNative(parent);
	$finishNative();
}

void WMenuItemPeer::enable(bool e) {
	$prepareNative(WMenuItemPeer, enable, void, bool e);
	$invokeNative(e);
	$finishNative();
}

void WMenuItemPeer::handleAction(int64_t when, int32_t modifiers) {
	$WToolkit::executeOnEventHandlerThread(this->target, $$new($WMenuItemPeer$1, this, when, modifiers));
}

$Font* WMenuItemPeer::getDefaultFont() {
	$init(WMenuItemPeer);
	return WMenuItemPeer::defaultMenuFont;
}

void WMenuItemPeer::initIDs() {
	$init(WMenuItemPeer);
	$prepareNativeStatic(WMenuItemPeer, initIDs, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void WMenuItemPeer::_setFont($Font* f) {
	$prepareNative(WMenuItemPeer, _setFont, void, $Font* f);
	$invokeNative(f);
	$finishNative();
}

void WMenuItemPeer::setFont($Font* f) {
	_setFont(f);
}

void clinit$WMenuItemPeer($Class* class$) {
	$beforeCallerSensitive();
	$assignStatic(WMenuItemPeer::log, $PlatformLogger::getLogger("sun.awt.WMenuItemPeer"_s));
	{
		WMenuItemPeer::initIDs();
	}
	{
		$assignStatic(WMenuItemPeer::defaultMenuFont, $cast($Font, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($WMenuItemPeer$2)))));
	}
}

WMenuItemPeer::WMenuItemPeer() {
}

$Class* WMenuItemPeer::load$($String* name, bool initialize) {
	$loadClass(WMenuItemPeer, name, initialize, &_WMenuItemPeer_ClassInfo_, clinit$WMenuItemPeer, allocate$WMenuItemPeer);
	return class$;
}

$Class* WMenuItemPeer::class$ = nullptr;

		} // windows
	} // awt
} // sun