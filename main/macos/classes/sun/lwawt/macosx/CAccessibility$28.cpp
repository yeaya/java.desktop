#include <sun/lwawt/macosx/CAccessibility$28.h>

#include <java/lang/Number.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleValue.h>
#include <sun/lwawt/macosx/CAccessibility.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleValue = ::javax::accessibility::AccessibleValue;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CAccessibility$28_FieldInfo_[] = {
	{"val$a", "Ljavax/accessibility/Accessible;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$28, val$a)},
	{}
};

$MethodInfo _CAccessibility$28_MethodInfo_[] = {
	{"<init>", "(Ljavax/accessibility/Accessible;)V", "()V", 0, $method(static_cast<void(CAccessibility$28::*)($Accessible*)>(&CAccessibility$28::init$))},
	{"call", "()Ljava/lang/Number;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _CAccessibility$28_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CAccessibility",
	"getMaximumAccessibleValue",
	"(Ljavax/accessibility/Accessible;Ljava/awt/Component;)Ljava/lang/Number;"
};

$InnerClassInfo _CAccessibility$28_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CAccessibility$28", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CAccessibility$28_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CAccessibility$28",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_CAccessibility$28_FieldInfo_,
	_CAccessibility$28_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Number;>;",
	&_CAccessibility$28_EnclosingMethodInfo_,
	_CAccessibility$28_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CAccessibility"
};

$Object* allocate$CAccessibility$28($Class* clazz) {
	return $of($alloc(CAccessibility$28));
}

void CAccessibility$28::init$($Accessible* val$a) {
	$set(this, val$a, val$a);
}

$Object* CAccessibility$28::call() {
	$useLocalCurrentObjectStackCache();
	$var($AccessibleContext, ac, $nc(this->val$a)->getAccessibleContext());
	if (ac == nullptr) {
		return $of(nullptr);
	}
	$var($AccessibleValue, av, $nc(ac)->getAccessibleValue());
	if (av == nullptr) {
		return $of(nullptr);
	}
	return $of($nc(av)->getMaximumAccessibleValue());
}

CAccessibility$28::CAccessibility$28() {
}

$Class* CAccessibility$28::load$($String* name, bool initialize) {
	$loadClass(CAccessibility$28, name, initialize, &_CAccessibility$28_ClassInfo_, allocate$CAccessibility$28);
	return class$;
}

$Class* CAccessibility$28::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun