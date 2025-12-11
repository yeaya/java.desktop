#include <sun/lwawt/macosx/CAccessibleText$2.h>

#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleText.h>
#include <sun/lwawt/macosx/CAccessibleText.h>
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

$FieldInfo _CAccessibleText$2_FieldInfo_[] = {
	{"val$a", "Ljavax/accessibility/Accessible;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibleText$2, val$a)},
	{}
};

$MethodInfo _CAccessibleText$2_MethodInfo_[] = {
	{"<init>", "(Ljavax/accessibility/Accessible;)V", "()V", 0, $method(static_cast<void(CAccessibleText$2::*)($Accessible*)>(&CAccessibleText$2::init$))},
	{"call", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _CAccessibleText$2_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CAccessibleText",
	"getSelectedText",
	"(Ljavax/accessibility/Accessible;Ljava/awt/Component;)Ljava/lang/String;"
};

$InnerClassInfo _CAccessibleText$2_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CAccessibleText$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CAccessibleText$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CAccessibleText$2",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_CAccessibleText$2_FieldInfo_,
	_CAccessibleText$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/String;>;",
	&_CAccessibleText$2_EnclosingMethodInfo_,
	_CAccessibleText$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CAccessibleText"
};

$Object* allocate$CAccessibleText$2($Class* clazz) {
	return $of($alloc(CAccessibleText$2));
}

void CAccessibleText$2::init$($Accessible* val$a) {
	$set(this, val$a, val$a);
}

$Object* CAccessibleText$2::call() {
	$useLocalCurrentObjectStackCache();
	$var($AccessibleContext, ac, $nc(this->val$a)->getAccessibleContext());
	if (ac == nullptr) {
		return $of(nullptr);
	}
	$var($AccessibleText, at, $nc(ac)->getAccessibleText());
	if (at == nullptr) {
		return $of(nullptr);
	}
	return $of($nc(at)->getSelectedText());
}

CAccessibleText$2::CAccessibleText$2() {
}

$Class* CAccessibleText$2::load$($String* name, bool initialize) {
	$loadClass(CAccessibleText$2, name, initialize, &_CAccessibleText$2_ClassInfo_, allocate$CAccessibleText$2);
	return class$;
}

$Class* CAccessibleText$2::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun