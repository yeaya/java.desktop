#include <sun/lwawt/macosx/CAccessibility$19.h>

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
using $CAccessibility = ::sun::lwawt::macosx::CAccessibility;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CAccessibility$19_FieldInfo_[] = {
	{"val$a", "Ljavax/accessibility/Accessible;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$19, val$a)},
	{}
};

$MethodInfo _CAccessibility$19_MethodInfo_[] = {
	{"<init>", "(Ljavax/accessibility/Accessible;)V", "()V", 0, $method(static_cast<void(CAccessibility$19::*)($Accessible*)>(&CAccessibility$19::init$))},
	{"call", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _CAccessibility$19_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CAccessibility",
	"getAccessibleName",
	"(Ljavax/accessibility/Accessible;Ljava/awt/Component;)Ljava/lang/String;"
};

$InnerClassInfo _CAccessibility$19_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CAccessibility$19", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CAccessibility$19_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CAccessibility$19",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_CAccessibility$19_FieldInfo_,
	_CAccessibility$19_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/String;>;",
	&_CAccessibility$19_EnclosingMethodInfo_,
	_CAccessibility$19_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CAccessibility"
};

$Object* allocate$CAccessibility$19($Class* clazz) {
	return $of($alloc(CAccessibility$19));
}

void CAccessibility$19::init$($Accessible* val$a) {
	$set(this, val$a, val$a);
}

$Object* CAccessibility$19::call() {
	$useLocalCurrentObjectStackCache();
	$var($AccessibleContext, ac, $nc(this->val$a)->getAccessibleContext());
	if (ac == nullptr) {
		return $of(nullptr);
	}
	$var($String, accessibleName, $nc(ac)->getAccessibleName());
	if (accessibleName == nullptr) {
		return $of(ac->getAccessibleDescription());
	}
	$var($String, acceleratorText, $CAccessibility::getAcceleratorText(ac));
	if (!$nc(acceleratorText)->isEmpty()) {
		return $of($str({accessibleName, $$str(u' '), acceleratorText}));
	}
	return $of(accessibleName);
}

CAccessibility$19::CAccessibility$19() {
}

$Class* CAccessibility$19::load$($String* name, bool initialize) {
	$loadClass(CAccessibility$19, name, initialize, &_CAccessibility$19_ClassInfo_, allocate$CAccessibility$19);
	return class$;
}

$Class* CAccessibility$19::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun