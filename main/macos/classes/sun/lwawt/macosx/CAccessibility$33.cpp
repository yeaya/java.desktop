#include <sun/lwawt/macosx/CAccessibility$33.h>

#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleComponent.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleState.h>
#include <javax/accessibility/AccessibleStateSet.h>
#include <javax/accessibility/AccessibleText.h>
#include <javax/accessibility/AccessibleValue.h>
#include <sun/lwawt/macosx/CAccessibility.h>
#include <jcpp.h>

#undef HORIZONTAL
#undef VERTICAL

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleComponent = ::javax::accessibility::AccessibleComponent;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleState = ::javax::accessibility::AccessibleState;
using $AccessibleStateSet = ::javax::accessibility::AccessibleStateSet;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CAccessibility$33_FieldInfo_[] = {
	{"val$ret", "[Z", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$33, val$ret)},
	{"val$a", "Ljavax/accessibility/Accessible;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$33, val$a)},
	{}
};

$MethodInfo _CAccessibility$33_MethodInfo_[] = {
	{"<init>", "(Ljavax/accessibility/Accessible;[Z)V", "()V", 0, $method(static_cast<void(CAccessibility$33::*)($Accessible*,$booleans*)>(&CAccessibility$33::init$))},
	{"call", "()[Z", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _CAccessibility$33_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CAccessibility",
	"getInitialAttributeStates",
	"(Ljavax/accessibility/Accessible;Ljava/awt/Component;)[Z"
};

$InnerClassInfo _CAccessibility$33_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CAccessibility$33", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CAccessibility$33_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CAccessibility$33",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_CAccessibility$33_FieldInfo_,
	_CAccessibility$33_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<[Z>;",
	&_CAccessibility$33_EnclosingMethodInfo_,
	_CAccessibility$33_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CAccessibility"
};

$Object* allocate$CAccessibility$33($Class* clazz) {
	return $of($alloc(CAccessibility$33));
}

void CAccessibility$33::init$($Accessible* val$a, $booleans* val$ret) {
	$set(this, val$a, val$a);
	$set(this, val$ret, val$ret);
}

$Object* CAccessibility$33::call() {
	$useLocalCurrentObjectStackCache();
	$var($AccessibleContext, aContext, $nc(this->val$a)->getAccessibleContext());
	if (aContext == nullptr) {
		return $of(this->val$ret);
	}
	$var($AccessibleComponent, aComponent, $nc(aContext)->getAccessibleComponent());
	$nc(this->val$ret)->set(0, (aComponent != nullptr));
	$nc(this->val$ret)->set(1, ((aComponent != nullptr) && (aComponent->isFocusTraversable())));
	$nc(this->val$ret)->set(2, (aContext->getAccessibleValue() != nullptr));
	$nc(this->val$ret)->set(3, (aContext->getAccessibleText() != nullptr));
	$var($AccessibleStateSet, aStateSet, aContext->getAccessibleStateSet());
	$init($AccessibleState);
	bool var$0 = $nc(aStateSet)->contains($AccessibleState::HORIZONTAL);
	$nc(this->val$ret)->set(4, (var$0 || $nc(aStateSet)->contains($AccessibleState::VERTICAL)));
	$nc(this->val$ret)->set(5, (aContext->getAccessibleName() != nullptr));
	$nc(this->val$ret)->set(6, (aContext->getAccessibleChildrenCount() > 0));
	return $of(this->val$ret);
}

CAccessibility$33::CAccessibility$33() {
}

$Class* CAccessibility$33::load$($String* name, bool initialize) {
	$loadClass(CAccessibility$33, name, initialize, &_CAccessibility$33_ClassInfo_, allocate$CAccessibility$33);
	return class$;
}

$Class* CAccessibility$33::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun