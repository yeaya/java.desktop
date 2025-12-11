#include <sun/lwawt/macosx/CAccessibility$20.h>

#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleText.h>
#include <sun/lwawt/macosx/CAccessibility.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleText = ::javax::accessibility::AccessibleText;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CAccessibility$20_FieldInfo_[] = {
	{"val$a", "Ljavax/accessibility/Accessible;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$20, val$a)},
	{}
};

$MethodInfo _CAccessibility$20_MethodInfo_[] = {
	{"<init>", "(Ljavax/accessibility/Accessible;)V", "()V", 0, $method(static_cast<void(CAccessibility$20::*)($Accessible*)>(&CAccessibility$20::init$))},
	{"call", "()Ljavax/accessibility/AccessibleText;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _CAccessibility$20_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CAccessibility",
	"getAccessibleText",
	"(Ljavax/accessibility/Accessible;Ljava/awt/Component;)Ljavax/accessibility/AccessibleText;"
};

$InnerClassInfo _CAccessibility$20_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CAccessibility$20", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CAccessibility$20_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CAccessibility$20",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_CAccessibility$20_FieldInfo_,
	_CAccessibility$20_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljavax/accessibility/AccessibleText;>;",
	&_CAccessibility$20_EnclosingMethodInfo_,
	_CAccessibility$20_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CAccessibility"
};

$Object* allocate$CAccessibility$20($Class* clazz) {
	return $of($alloc(CAccessibility$20));
}

void CAccessibility$20::init$($Accessible* val$a) {
	$set(this, val$a, val$a);
}

$Object* CAccessibility$20::call() {
	$useLocalCurrentObjectStackCache();
	$var($AccessibleContext, ac, $nc(this->val$a)->getAccessibleContext());
	if (ac == nullptr) {
		return $of(nullptr);
	}
	$var($AccessibleText, accessibleText, $nc(ac)->getAccessibleText());
	return $of(accessibleText);
}

CAccessibility$20::CAccessibility$20() {
}

$Class* CAccessibility$20::load$($String* name, bool initialize) {
	$loadClass(CAccessibility$20, name, initialize, &_CAccessibility$20_ClassInfo_, allocate$CAccessibility$20);
	return class$;
}

$Class* CAccessibility$20::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun