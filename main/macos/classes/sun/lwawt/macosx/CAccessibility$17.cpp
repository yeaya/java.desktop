#include <sun/lwawt/macosx/CAccessibility$17.h>

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
using $AccessibleContext = ::javax::accessibility::AccessibleContext;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CAccessibility$17_FieldInfo_[] = {
	{"val$a", "Ljavax/accessibility/Accessible;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$17, val$a)},
	{}
};

$MethodInfo _CAccessibility$17_MethodInfo_[] = {
	{"<init>", "(Ljavax/accessibility/Accessible;)V", "()V", 0, $method(static_cast<void(CAccessibility$17::*)($Accessible*)>(&CAccessibility$17::init$))},
	{"call", "()Ljavax/accessibility/AccessibleComponent;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _CAccessibility$17_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CAccessibility",
	"getAccessibleComponent",
	"(Ljavax/accessibility/Accessible;Ljava/awt/Component;)Ljavax/accessibility/AccessibleComponent;"
};

$InnerClassInfo _CAccessibility$17_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CAccessibility$17", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CAccessibility$17_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CAccessibility$17",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_CAccessibility$17_FieldInfo_,
	_CAccessibility$17_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljavax/accessibility/AccessibleComponent;>;",
	&_CAccessibility$17_EnclosingMethodInfo_,
	_CAccessibility$17_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CAccessibility"
};

$Object* allocate$CAccessibility$17($Class* clazz) {
	return $of($alloc(CAccessibility$17));
}

void CAccessibility$17::init$($Accessible* val$a) {
	$set(this, val$a, val$a);
}

$Object* CAccessibility$17::call() {
	$var($AccessibleContext, ac, $nc(this->val$a)->getAccessibleContext());
	if (ac == nullptr) {
		return $of(nullptr);
	}
	return $of($nc(ac)->getAccessibleComponent());
}

CAccessibility$17::CAccessibility$17() {
}

$Class* CAccessibility$17::load$($String* name, bool initialize) {
	$loadClass(CAccessibility$17, name, initialize, &_CAccessibility$17_ClassInfo_, allocate$CAccessibility$17);
	return class$;
}

$Class* CAccessibility$17::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun