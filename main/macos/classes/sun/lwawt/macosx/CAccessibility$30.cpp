#include <sun/lwawt/macosx/CAccessibility$30.h>

#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleRole.h>
#include <sun/lwawt/macosx/CAccessibility.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CAccessibility$30_FieldInfo_[] = {
	{"val$a", "Ljavax/accessibility/Accessible;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$30, val$a)},
	{}
};

$MethodInfo _CAccessibility$30_MethodInfo_[] = {
	{"<init>", "(Ljavax/accessibility/Accessible;)V", "()V", 0, $method(static_cast<void(CAccessibility$30::*)($Accessible*)>(&CAccessibility$30::init$))},
	{"call", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _CAccessibility$30_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CAccessibility",
	"getAccessibleRoleDisplayString",
	"(Ljavax/accessibility/Accessible;Ljava/awt/Component;)Ljava/lang/String;"
};

$InnerClassInfo _CAccessibility$30_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CAccessibility$30", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CAccessibility$30_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CAccessibility$30",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_CAccessibility$30_FieldInfo_,
	_CAccessibility$30_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/String;>;",
	&_CAccessibility$30_EnclosingMethodInfo_,
	_CAccessibility$30_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CAccessibility"
};

$Object* allocate$CAccessibility$30($Class* clazz) {
	return $of($alloc(CAccessibility$30));
}

void CAccessibility$30::init$($Accessible* val$a) {
	$set(this, val$a, val$a);
}

$Object* CAccessibility$30::call() {
	$useLocalCurrentObjectStackCache();
	$var($AccessibleContext, ac, $nc(this->val$a)->getAccessibleContext());
	if (ac == nullptr) {
		return $of(nullptr);
	}
	$var($AccessibleRole, ar, $nc(ac)->getAccessibleRole());
	if (ar == nullptr) {
		return $of(nullptr);
	}
	return $of($nc(ar)->toDisplayString());
}

CAccessibility$30::CAccessibility$30() {
}

$Class* CAccessibility$30::load$($String* name, bool initialize) {
	$loadClass(CAccessibility$30, name, initialize, &_CAccessibility$30_ClassInfo_, allocate$CAccessibility$30);
	return class$;
}

$Class* CAccessibility$30::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun