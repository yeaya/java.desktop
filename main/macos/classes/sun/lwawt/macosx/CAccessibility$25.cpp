#include <sun/lwawt/macosx/CAccessibility$25.h>

#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleComponent.h>
#include <javax/accessibility/AccessibleContext.h>
#include <sun/lwawt/macosx/CAccessibility.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
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

$FieldInfo _CAccessibility$25_FieldInfo_[] = {
	{"val$a", "Ljavax/accessibility/Accessible;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$25, val$a)},
	{}
};

$MethodInfo _CAccessibility$25_MethodInfo_[] = {
	{"<init>", "(Ljavax/accessibility/Accessible;)V", "()V", 0, $method(static_cast<void(CAccessibility$25::*)($Accessible*)>(&CAccessibility$25::init$))},
	{"call", "()Ljava/lang/Boolean;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _CAccessibility$25_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CAccessibility",
	"isEnabled",
	"(Ljavax/accessibility/Accessible;Ljava/awt/Component;)Z"
};

$InnerClassInfo _CAccessibility$25_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CAccessibility$25", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CAccessibility$25_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CAccessibility$25",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_CAccessibility$25_FieldInfo_,
	_CAccessibility$25_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Boolean;>;",
	&_CAccessibility$25_EnclosingMethodInfo_,
	_CAccessibility$25_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CAccessibility"
};

$Object* allocate$CAccessibility$25($Class* clazz) {
	return $of($alloc(CAccessibility$25));
}

void CAccessibility$25::init$($Accessible* val$a) {
	$set(this, val$a, val$a);
}

$Object* CAccessibility$25::call() {
	$useLocalCurrentObjectStackCache();
	$var($AccessibleContext, ac, $nc(this->val$a)->getAccessibleContext());
	if (ac == nullptr) {
		return $of(nullptr);
	}
	$var($AccessibleComponent, aComp, $nc(ac)->getAccessibleComponent());
	if (aComp == nullptr) {
		return $of(nullptr);
	}
	return $of($Boolean::valueOf($nc(aComp)->isEnabled()));
}

CAccessibility$25::CAccessibility$25() {
}

$Class* CAccessibility$25::load$($String* name, bool initialize) {
	$loadClass(CAccessibility$25, name, initialize, &_CAccessibility$25_ClassInfo_, allocate$CAccessibility$25);
	return class$;
}

$Class* CAccessibility$25::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun