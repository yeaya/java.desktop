#include <sun/lwawt/macosx/CAccessibility$9.h>

#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleSelection.h>
#include <sun/lwawt/macosx/CAccessibility.h>
#include <jcpp.h>

#undef FALSE

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleSelection = ::javax::accessibility::AccessibleSelection;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CAccessibility$9_FieldInfo_[] = {
	{"val$index", "I", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$9, val$index)},
	{"val$a", "Ljavax/accessibility/Accessible;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$9, val$a)},
	{}
};

$MethodInfo _CAccessibility$9_MethodInfo_[] = {
	{"<init>", "(Ljavax/accessibility/Accessible;I)V", "()V", 0, $method(static_cast<void(CAccessibility$9::*)($Accessible*,int32_t)>(&CAccessibility$9::init$))},
	{"call", "()Ljava/lang/Boolean;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _CAccessibility$9_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CAccessibility",
	"isAccessibleChildSelected",
	"(Ljavax/accessibility/Accessible;ILjava/awt/Component;)Z"
};

$InnerClassInfo _CAccessibility$9_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CAccessibility$9", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CAccessibility$9_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CAccessibility$9",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_CAccessibility$9_FieldInfo_,
	_CAccessibility$9_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Boolean;>;",
	&_CAccessibility$9_EnclosingMethodInfo_,
	_CAccessibility$9_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CAccessibility"
};

$Object* allocate$CAccessibility$9($Class* clazz) {
	return $of($alloc(CAccessibility$9));
}

void CAccessibility$9::init$($Accessible* val$a, int32_t val$index) {
	$set(this, val$a, val$a);
	this->val$index = val$index;
}

$Object* CAccessibility$9::call() {
	$useLocalCurrentObjectStackCache();
	$var($AccessibleContext, ac, $nc(this->val$a)->getAccessibleContext());
	if (ac == nullptr) {
		$init($Boolean);
		return $of($Boolean::FALSE);
	}
	$var($AccessibleSelection, as, $nc(ac)->getAccessibleSelection());
	if (as == nullptr) {
		$init($Boolean);
		return $of($Boolean::FALSE);
	}
	return $of($Boolean::valueOf($nc(as)->isAccessibleChildSelected(this->val$index)));
}

CAccessibility$9::CAccessibility$9() {
}

$Class* CAccessibility$9::load$($String* name, bool initialize) {
	$loadClass(CAccessibility$9, name, initialize, &_CAccessibility$9_ClassInfo_, allocate$CAccessibility$9);
	return class$;
}

$Class* CAccessibility$9::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun