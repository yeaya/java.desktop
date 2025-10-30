#include <sun/awt/KeyboardFocusManagerPeerImpl$KfmAccessor.h>

#include <sun/awt/AWTAccessor$KeyboardFocusManagerAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/KeyboardFocusManagerPeerImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$KeyboardFocusManagerAccessor = ::sun::awt::AWTAccessor$KeyboardFocusManagerAccessor;
using $KeyboardFocusManagerPeerImpl = ::sun::awt::KeyboardFocusManagerPeerImpl;

namespace sun {
	namespace awt {

$FieldInfo _KeyboardFocusManagerPeerImpl$KfmAccessor_FieldInfo_[] = {
	{"instance", "Lsun/awt/AWTAccessor$KeyboardFocusManagerAccessor;", nullptr, $PRIVATE | $STATIC, $staticField(KeyboardFocusManagerPeerImpl$KfmAccessor, instance)},
	{}
};

$MethodInfo _KeyboardFocusManagerPeerImpl$KfmAccessor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(KeyboardFocusManagerPeerImpl$KfmAccessor::*)()>(&KeyboardFocusManagerPeerImpl$KfmAccessor::init$))},
	{}
};

$InnerClassInfo _KeyboardFocusManagerPeerImpl$KfmAccessor_InnerClassesInfo_[] = {
	{"sun.awt.KeyboardFocusManagerPeerImpl$KfmAccessor", "sun.awt.KeyboardFocusManagerPeerImpl", "KfmAccessor", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _KeyboardFocusManagerPeerImpl$KfmAccessor_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.KeyboardFocusManagerPeerImpl$KfmAccessor",
	"java.lang.Object",
	nullptr,
	_KeyboardFocusManagerPeerImpl$KfmAccessor_FieldInfo_,
	_KeyboardFocusManagerPeerImpl$KfmAccessor_MethodInfo_,
	nullptr,
	nullptr,
	_KeyboardFocusManagerPeerImpl$KfmAccessor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.KeyboardFocusManagerPeerImpl"
};

$Object* allocate$KeyboardFocusManagerPeerImpl$KfmAccessor($Class* clazz) {
	return $of($alloc(KeyboardFocusManagerPeerImpl$KfmAccessor));
}

$AWTAccessor$KeyboardFocusManagerAccessor* KeyboardFocusManagerPeerImpl$KfmAccessor::instance = nullptr;

void KeyboardFocusManagerPeerImpl$KfmAccessor::init$() {
}

void clinit$KeyboardFocusManagerPeerImpl$KfmAccessor($Class* class$) {
	$assignStatic(KeyboardFocusManagerPeerImpl$KfmAccessor::instance, $AWTAccessor::getKeyboardFocusManagerAccessor());
}

KeyboardFocusManagerPeerImpl$KfmAccessor::KeyboardFocusManagerPeerImpl$KfmAccessor() {
}

$Class* KeyboardFocusManagerPeerImpl$KfmAccessor::load$($String* name, bool initialize) {
	$loadClass(KeyboardFocusManagerPeerImpl$KfmAccessor, name, initialize, &_KeyboardFocusManagerPeerImpl$KfmAccessor_ClassInfo_, clinit$KeyboardFocusManagerPeerImpl$KfmAccessor, allocate$KeyboardFocusManagerPeerImpl$KfmAccessor);
	return class$;
}

$Class* KeyboardFocusManagerPeerImpl$KfmAccessor::class$ = nullptr;

	} // awt
} // sun