#include <sun/lwawt/macosx/CAccessibility$26.h>

#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleComponent.h>
#include <javax/accessibility/AccessibleContext.h>
#include <sun/lwawt/macosx/CAccessibility.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleComponent = ::javax::accessibility::AccessibleComponent;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CAccessibility$26_FieldInfo_[] = {
	{"val$a", "Ljavax/accessibility/Accessible;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$26, val$a)},
	{}
};

$MethodInfo _CAccessibility$26_MethodInfo_[] = {
	{"<init>", "(Ljavax/accessibility/Accessible;)V", "()V", 0, $method(static_cast<void(CAccessibility$26::*)($Accessible*)>(&CAccessibility$26::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _CAccessibility$26_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CAccessibility",
	"requestFocus",
	"(Ljavax/accessibility/Accessible;Ljava/awt/Component;)V"
};

$InnerClassInfo _CAccessibility$26_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CAccessibility$26", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CAccessibility$26_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CAccessibility$26",
	"java.lang.Object",
	"java.lang.Runnable",
	_CAccessibility$26_FieldInfo_,
	_CAccessibility$26_MethodInfo_,
	nullptr,
	&_CAccessibility$26_EnclosingMethodInfo_,
	_CAccessibility$26_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CAccessibility"
};

$Object* allocate$CAccessibility$26($Class* clazz) {
	return $of($alloc(CAccessibility$26));
}

void CAccessibility$26::init$($Accessible* val$a) {
	$set(this, val$a, val$a);
}

void CAccessibility$26::run() {
	$useLocalCurrentObjectStackCache();
	$var($AccessibleContext, ac, $nc(this->val$a)->getAccessibleContext());
	if (ac == nullptr) {
		return;
	}
	$var($AccessibleComponent, aComp, $nc(ac)->getAccessibleComponent());
	if (aComp == nullptr) {
		return;
	}
	$nc(aComp)->requestFocus();
}

CAccessibility$26::CAccessibility$26() {
}

$Class* CAccessibility$26::load$($String* name, bool initialize) {
	$loadClass(CAccessibility$26, name, initialize, &_CAccessibility$26_ClassInfo_, allocate$CAccessibility$26);
	return class$;
}

$Class* CAccessibility$26::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun