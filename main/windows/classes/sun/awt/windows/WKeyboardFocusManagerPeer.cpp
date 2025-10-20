#include <sun/awt/windows/WKeyboardFocusManagerPeer.h>

#include <java/awt/Component.h>
#include <java/awt/Window.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/KeyboardFocusManagerPeerImpl.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Window = ::java::awt::Window;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $KeyboardFocusManagerPeerImpl = ::sun::awt::KeyboardFocusManagerPeerImpl;

namespace sun {
	namespace awt {
		namespace windows {

$FieldInfo _WKeyboardFocusManagerPeer_FieldInfo_[] = {
	{"inst", "Lsun/awt/windows/WKeyboardFocusManagerPeer;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WKeyboardFocusManagerPeer, inst)},
	{}
};

$MethodInfo _WKeyboardFocusManagerPeer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(WKeyboardFocusManagerPeer::*)()>(&WKeyboardFocusManagerPeer::init$))},
	{"deliverFocus", "(Ljava/awt/Component;Ljava/awt/Component;ZZJLjava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($Component*,$Component*,bool,bool,int64_t,$FocusEvent$Cause*)>(&WKeyboardFocusManagerPeer::deliverFocus))},
	{"getCurrentFocusOwner", "()Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getCurrentFocusedWindow", "()Ljava/awt/Window;", nullptr, $PUBLIC},
	{"getInstance", "()Lsun/awt/windows/WKeyboardFocusManagerPeer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<WKeyboardFocusManagerPeer*(*)()>(&WKeyboardFocusManagerPeer::getInstance))},
	{"getNativeFocusOwner", "()Ljava/awt/Component;", nullptr, $STATIC | $NATIVE, $method(static_cast<$Component*(*)()>(&WKeyboardFocusManagerPeer::getNativeFocusOwner))},
	{"getNativeFocusedWindow", "()Ljava/awt/Window;", nullptr, $STATIC | $NATIVE, $method(static_cast<$Window*(*)()>(&WKeyboardFocusManagerPeer::getNativeFocusedWindow))},
	{"setCurrentFocusOwner", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"setCurrentFocusedWindow", "(Ljava/awt/Window;)V", nullptr, $PUBLIC},
	{"setNativeFocusOwner", "(Ljava/awt/peer/ComponentPeer;)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)($ComponentPeer*)>(&WKeyboardFocusManagerPeer::setNativeFocusOwner))},
	{}
};

#define _METHOD_INDEX_getNativeFocusOwner 5
#define _METHOD_INDEX_getNativeFocusedWindow 6
#define _METHOD_INDEX_setNativeFocusOwner 9

$ClassInfo _WKeyboardFocusManagerPeer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.windows.WKeyboardFocusManagerPeer",
	"sun.awt.KeyboardFocusManagerPeerImpl",
	nullptr,
	_WKeyboardFocusManagerPeer_FieldInfo_,
	_WKeyboardFocusManagerPeer_MethodInfo_
};

$Object* allocate$WKeyboardFocusManagerPeer($Class* clazz) {
	return $of($alloc(WKeyboardFocusManagerPeer));
}

WKeyboardFocusManagerPeer* WKeyboardFocusManagerPeer::inst = nullptr;

void WKeyboardFocusManagerPeer::setNativeFocusOwner($ComponentPeer* peer) {
	$init(WKeyboardFocusManagerPeer);
	$prepareNativeStatic(WKeyboardFocusManagerPeer, setNativeFocusOwner, void, $ComponentPeer* peer);
	$invokeNativeStatic(WKeyboardFocusManagerPeer, setNativeFocusOwner, peer);
	$finishNativeStatic();
}

$Component* WKeyboardFocusManagerPeer::getNativeFocusOwner() {
	$init(WKeyboardFocusManagerPeer);
	$var($Component, $ret, nullptr);
	$prepareNativeStatic(WKeyboardFocusManagerPeer, getNativeFocusOwner, $Component*);
	$assign($ret, $invokeNativeStatic(WKeyboardFocusManagerPeer, getNativeFocusOwner));
	$finishNativeStatic();
	return $ret;
}

$Window* WKeyboardFocusManagerPeer::getNativeFocusedWindow() {
	$init(WKeyboardFocusManagerPeer);
	$var($Window, $ret, nullptr);
	$prepareNativeStatic(WKeyboardFocusManagerPeer, getNativeFocusedWindow, $Window*);
	$assign($ret, $invokeNativeStatic(WKeyboardFocusManagerPeer, getNativeFocusedWindow));
	$finishNativeStatic();
	return $ret;
}

WKeyboardFocusManagerPeer* WKeyboardFocusManagerPeer::getInstance() {
	$init(WKeyboardFocusManagerPeer);
	return WKeyboardFocusManagerPeer::inst;
}

void WKeyboardFocusManagerPeer::init$() {
	$KeyboardFocusManagerPeerImpl::init$();
}

void WKeyboardFocusManagerPeer::setCurrentFocusOwner($Component* comp) {
	$useLocalCurrentObjectStackCache();
	$var($AWTAccessor$ComponentAccessor, acc, $AWTAccessor::getComponentAccessor());
	setNativeFocusOwner(comp != nullptr ? $($nc(acc)->getPeer(comp)) : ($ComponentPeer*)nullptr);
}

$Component* WKeyboardFocusManagerPeer::getCurrentFocusOwner() {
	return getNativeFocusOwner();
}

void WKeyboardFocusManagerPeer::setCurrentFocusedWindow($Window* win) {
	$throwNew($RuntimeException, "not implemented"_s);
}

$Window* WKeyboardFocusManagerPeer::getCurrentFocusedWindow() {
	return getNativeFocusedWindow();
}

bool WKeyboardFocusManagerPeer::deliverFocus($Component* lightweightChild, $Component* target, bool temporary, bool focusedWindowChangeAllowed, int64_t time, $FocusEvent$Cause* cause) {
	$init(WKeyboardFocusManagerPeer);
	return $KeyboardFocusManagerPeerImpl::deliverFocus(lightweightChild, target, temporary, focusedWindowChangeAllowed, time, cause, $(getNativeFocusOwner()));
}

void clinit$WKeyboardFocusManagerPeer($Class* class$) {
	$assignStatic(WKeyboardFocusManagerPeer::inst, $new(WKeyboardFocusManagerPeer));
}

WKeyboardFocusManagerPeer::WKeyboardFocusManagerPeer() {
}

$Class* WKeyboardFocusManagerPeer::load$($String* name, bool initialize) {
	$loadClass(WKeyboardFocusManagerPeer, name, initialize, &_WKeyboardFocusManagerPeer_ClassInfo_, clinit$WKeyboardFocusManagerPeer, allocate$WKeyboardFocusManagerPeer);
	return class$;
}

$Class* WKeyboardFocusManagerPeer::class$ = nullptr;

		} // windows
	} // awt
} // sun