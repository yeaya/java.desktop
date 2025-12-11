#include <sun/lwawt/macosx/CAccessibility$24.h>

#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleAction.h>
#include <javax/accessibility/AccessibleContext.h>
#include <sun/lwawt/macosx/CAccessibility.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CAccessibility$24_FieldInfo_[] = {
	{"val$a", "Ljavax/accessibility/Accessible;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$24, val$a)},
	{}
};

$MethodInfo _CAccessibility$24_MethodInfo_[] = {
	{"<init>", "(Ljavax/accessibility/Accessible;)V", "()V", 0, $method(static_cast<void(CAccessibility$24::*)($Accessible*)>(&CAccessibility$24::init$))},
	{"call", "()Ljavax/accessibility/AccessibleAction;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _CAccessibility$24_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CAccessibility",
	"getAccessibleAction",
	"(Ljavax/accessibility/Accessible;Ljava/awt/Component;)Ljavax/accessibility/AccessibleAction;"
};

$InnerClassInfo _CAccessibility$24_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CAccessibility$24", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CAccessibility$24_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CAccessibility$24",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_CAccessibility$24_FieldInfo_,
	_CAccessibility$24_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljavax/accessibility/AccessibleAction;>;",
	&_CAccessibility$24_EnclosingMethodInfo_,
	_CAccessibility$24_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CAccessibility"
};

$Object* allocate$CAccessibility$24($Class* clazz) {
	return $of($alloc(CAccessibility$24));
}

void CAccessibility$24::init$($Accessible* val$a) {
	$set(this, val$a, val$a);
}

$Object* CAccessibility$24::call() {
	$var($AccessibleContext, ac, $nc(this->val$a)->getAccessibleContext());
	if (ac == nullptr) {
		return $of(nullptr);
	}
	return $of($nc(ac)->getAccessibleAction());
}

CAccessibility$24::CAccessibility$24() {
}

$Class* CAccessibility$24::load$($String* name, bool initialize) {
	$loadClass(CAccessibility$24, name, initialize, &_CAccessibility$24_ClassInfo_, allocate$CAccessibility$24);
	return class$;
}

$Class* CAccessibility$24::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun