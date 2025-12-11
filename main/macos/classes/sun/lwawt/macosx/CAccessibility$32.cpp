#include <sun/lwawt/macosx/CAccessibility$32.h>

#include <java/awt/Component.h>
#include <java/awt/KeyboardFocusManager.h>
#include <javax/accessibility/Accessible.h>
#include <sun/lwawt/macosx/CAccessibility.h>
#include <sun/lwawt/macosx/CAccessible.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $CAccessible = ::sun::lwawt::macosx::CAccessible;

namespace sun {
	namespace lwawt {
		namespace macosx {

$MethodInfo _CAccessibility$32_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CAccessibility$32::*)()>(&CAccessibility$32::init$))},
	{"call", "()Ljavax/accessibility/Accessible;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _CAccessibility$32_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CAccessibility",
	"getFocusOwner",
	"(Ljava/awt/Component;)Ljavax/accessibility/Accessible;"
};

$InnerClassInfo _CAccessibility$32_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CAccessibility$32", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CAccessibility$32_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CAccessibility$32",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	nullptr,
	_CAccessibility$32_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljavax/accessibility/Accessible;>;",
	&_CAccessibility$32_EnclosingMethodInfo_,
	_CAccessibility$32_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CAccessibility"
};

$Object* allocate$CAccessibility$32($Class* clazz) {
	return $of($alloc(CAccessibility$32));
}

void CAccessibility$32::init$() {
}

$Object* CAccessibility$32::call() {
	$useLocalCurrentObjectStackCache();
	$var($Component, c, $nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->getFocusOwner());
	if (c == nullptr || !($instanceOf($Accessible, c))) {
		return $of(nullptr);
	}
	return $of($CAccessible::getCAccessible($cast($Accessible, c)));
}

CAccessibility$32::CAccessibility$32() {
}

$Class* CAccessibility$32::load$($String* name, bool initialize) {
	$loadClass(CAccessibility$32, name, initialize, &_CAccessibility$32_ClassInfo_, allocate$CAccessibility$32);
	return class$;
}

$Class* CAccessibility$32::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun