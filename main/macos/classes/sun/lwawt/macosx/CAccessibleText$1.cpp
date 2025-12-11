#include <sun/lwawt/macosx/CAccessibleText$1.h>

#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleEditableText.h>
#include <sun/lwawt/macosx/CAccessibleText.h>
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

$FieldInfo _CAccessibleText$1_FieldInfo_[] = {
	{"val$a", "Ljavax/accessibility/Accessible;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibleText$1, val$a)},
	{}
};

$MethodInfo _CAccessibleText$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/accessibility/Accessible;)V", "()V", 0, $method(static_cast<void(CAccessibleText$1::*)($Accessible*)>(&CAccessibleText$1::init$))},
	{"call", "()Ljavax/accessibility/AccessibleEditableText;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _CAccessibleText$1_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CAccessibleText",
	"getAccessibleEditableText",
	"(Ljavax/accessibility/Accessible;Ljava/awt/Component;)Ljavax/accessibility/AccessibleEditableText;"
};

$InnerClassInfo _CAccessibleText$1_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CAccessibleText$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CAccessibleText$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CAccessibleText$1",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_CAccessibleText$1_FieldInfo_,
	_CAccessibleText$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljavax/accessibility/AccessibleEditableText;>;",
	&_CAccessibleText$1_EnclosingMethodInfo_,
	_CAccessibleText$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CAccessibleText"
};

$Object* allocate$CAccessibleText$1($Class* clazz) {
	return $of($alloc(CAccessibleText$1));
}

void CAccessibleText$1::init$($Accessible* val$a) {
	$set(this, val$a, val$a);
}

$Object* CAccessibleText$1::call() {
	$var($AccessibleContext, ac, $nc(this->val$a)->getAccessibleContext());
	if (ac == nullptr) {
		return $of(nullptr);
	}
	return $of($nc(ac)->getAccessibleEditableText());
}

CAccessibleText$1::CAccessibleText$1() {
}

$Class* CAccessibleText$1::load$($String* name, bool initialize) {
	$loadClass(CAccessibleText$1, name, initialize, &_CAccessibleText$1_ClassInfo_, allocate$CAccessibleText$1);
	return class$;
}

$Class* CAccessibleText$1::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun