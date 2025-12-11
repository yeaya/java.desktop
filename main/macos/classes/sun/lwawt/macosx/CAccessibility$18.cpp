#include <sun/lwawt/macosx/CAccessibility$18.h>

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

$FieldInfo _CAccessibility$18_FieldInfo_[] = {
	{"val$a", "Ljavax/accessibility/Accessible;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$18, val$a)},
	{}
};

$MethodInfo _CAccessibility$18_MethodInfo_[] = {
	{"<init>", "(Ljavax/accessibility/Accessible;)V", "()V", 0, $method(static_cast<void(CAccessibility$18::*)($Accessible*)>(&CAccessibility$18::init$))},
	{"call", "()Ljavax/accessibility/AccessibleValue;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _CAccessibility$18_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CAccessibility",
	"getAccessibleValue",
	"(Ljavax/accessibility/Accessible;Ljava/awt/Component;)Ljavax/accessibility/AccessibleValue;"
};

$InnerClassInfo _CAccessibility$18_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CAccessibility$18", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CAccessibility$18_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CAccessibility$18",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_CAccessibility$18_FieldInfo_,
	_CAccessibility$18_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljavax/accessibility/AccessibleValue;>;",
	&_CAccessibility$18_EnclosingMethodInfo_,
	_CAccessibility$18_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CAccessibility"
};

$Object* allocate$CAccessibility$18($Class* clazz) {
	return $of($alloc(CAccessibility$18));
}

void CAccessibility$18::init$($Accessible* val$a) {
	$set(this, val$a, val$a);
}

$Object* CAccessibility$18::call() {
	$useLocalCurrentObjectStackCache();
	$var($AccessibleContext, ac, $nc(this->val$a)->getAccessibleContext());
	if (ac == nullptr) {
		return $of(nullptr);
	}
	$var($AccessibleValue, accessibleValue, $nc(ac)->getAccessibleValue());
	return $of(accessibleValue);
}

CAccessibility$18::CAccessibility$18() {
}

$Class* CAccessibility$18::load$($String* name, bool initialize) {
	$loadClass(CAccessibility$18, name, initialize, &_CAccessibility$18_ClassInfo_, allocate$CAccessibility$18);
	return class$;
}

$Class* CAccessibility$18::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun