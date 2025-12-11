#include <sun/lwawt/macosx/CAccessibility$15.h>

#include <javax/accessibility/Accessible.h>
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

$FieldInfo _CAccessibility$15_FieldInfo_[] = {
	{"val$a", "Ljavax/accessibility/Accessible;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$15, val$a)},
	{}
};

$MethodInfo _CAccessibility$15_MethodInfo_[] = {
	{"<init>", "(Ljavax/accessibility/Accessible;)V", "()V", 0, $method(static_cast<void(CAccessibility$15::*)($Accessible*)>(&CAccessibility$15::init$))},
	{"call", "()Ljavax/accessibility/Accessible;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _CAccessibility$15_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CAccessibility",
	"getAccessibleParent",
	"(Ljavax/accessibility/Accessible;Ljava/awt/Component;)Ljavax/accessibility/Accessible;"
};

$InnerClassInfo _CAccessibility$15_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CAccessibility$15", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CAccessibility$15_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CAccessibility$15",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_CAccessibility$15_FieldInfo_,
	_CAccessibility$15_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljavax/accessibility/Accessible;>;",
	&_CAccessibility$15_EnclosingMethodInfo_,
	_CAccessibility$15_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CAccessibility"
};

$Object* allocate$CAccessibility$15($Class* clazz) {
	return $of($alloc(CAccessibility$15));
}

void CAccessibility$15::init$($Accessible* val$a) {
	$set(this, val$a, val$a);
}

$Object* CAccessibility$15::call() {
	$var($AccessibleContext, ac, $nc(this->val$a)->getAccessibleContext());
	if (ac == nullptr) {
		return $of(nullptr);
	}
	return $of($nc(ac)->getAccessibleParent());
}

CAccessibility$15::CAccessibility$15() {
}

$Class* CAccessibility$15::load$($String* name, bool initialize) {
	$loadClass(CAccessibility$15, name, initialize, &_CAccessibility$15_ClassInfo_, allocate$CAccessibility$15);
	return class$;
}

$Class* CAccessibility$15::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun