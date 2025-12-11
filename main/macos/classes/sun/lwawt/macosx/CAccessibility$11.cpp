#include <sun/lwawt/macosx/CAccessibility$11.h>

#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleState.h>
#include <javax/accessibility/AccessibleStateSet.h>
#include <sun/lwawt/macosx/CAccessibility.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleState = ::javax::accessibility::AccessibleState;
using $AccessibleStateSet = ::javax::accessibility::AccessibleStateSet;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CAccessibility$11_FieldInfo_[] = {
	{"val$as", "Ljavax/accessibility/AccessibleState;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$11, val$as)},
	{"val$ac", "Ljavax/accessibility/AccessibleContext;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$11, val$ac)},
	{}
};

$MethodInfo _CAccessibility$11_MethodInfo_[] = {
	{"<init>", "(Ljavax/accessibility/AccessibleContext;Ljavax/accessibility/AccessibleState;)V", "()V", 0, $method(static_cast<void(CAccessibility$11::*)($AccessibleContext*,$AccessibleState*)>(&CAccessibility$11::init$))},
	{"call", "()Ljava/lang/Boolean;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _CAccessibility$11_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CAccessibility",
	"contains",
	"(Ljavax/accessibility/AccessibleContext;Ljavax/accessibility/AccessibleState;Ljava/awt/Component;)Z"
};

$InnerClassInfo _CAccessibility$11_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CAccessibility$11", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CAccessibility$11_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CAccessibility$11",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_CAccessibility$11_FieldInfo_,
	_CAccessibility$11_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Boolean;>;",
	&_CAccessibility$11_EnclosingMethodInfo_,
	_CAccessibility$11_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CAccessibility"
};

$Object* allocate$CAccessibility$11($Class* clazz) {
	return $of($alloc(CAccessibility$11));
}

void CAccessibility$11::init$($AccessibleContext* val$ac, $AccessibleState* val$as) {
	$set(this, val$ac, val$ac);
	$set(this, val$as, val$as);
}

$Object* CAccessibility$11::call() {
	$var($AccessibleStateSet, ass, $nc(this->val$ac)->getAccessibleStateSet());
	if (ass == nullptr) {
		return $of(nullptr);
	}
	return $of($Boolean::valueOf($nc(ass)->contains(this->val$as)));
}

CAccessibility$11::CAccessibility$11() {
}

$Class* CAccessibility$11::load$($String* name, bool initialize) {
	$loadClass(CAccessibility$11, name, initialize, &_CAccessibility$11_ClassInfo_, allocate$CAccessibility$11);
	return class$;
}

$Class* CAccessibility$11::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun