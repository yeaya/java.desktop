#include <sun/lwawt/macosx/CAccessibility$31.h>

#include <java/lang/Number.h>
#include <javax/accessibility/AccessibleValue.h>
#include <sun/lwawt/macosx/CAccessibility.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $AccessibleValue = ::javax::accessibility::AccessibleValue;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CAccessibility$31_FieldInfo_[] = {
	{"val$av", "Ljavax/accessibility/AccessibleValue;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$31, val$av)},
	{}
};

$MethodInfo _CAccessibility$31_MethodInfo_[] = {
	{"<init>", "(Ljavax/accessibility/AccessibleValue;)V", "()V", 0, $method(static_cast<void(CAccessibility$31::*)($AccessibleValue*)>(&CAccessibility$31::init$))},
	{"call", "()Ljava/lang/Number;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _CAccessibility$31_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CAccessibility",
	"getCurrentAccessibleValue",
	"(Ljavax/accessibility/AccessibleValue;Ljava/awt/Component;)Ljava/lang/Number;"
};

$InnerClassInfo _CAccessibility$31_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CAccessibility$31", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CAccessibility$31_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CAccessibility$31",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_CAccessibility$31_FieldInfo_,
	_CAccessibility$31_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Number;>;",
	&_CAccessibility$31_EnclosingMethodInfo_,
	_CAccessibility$31_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CAccessibility"
};

$Object* allocate$CAccessibility$31($Class* clazz) {
	return $of($alloc(CAccessibility$31));
}

void CAccessibility$31::init$($AccessibleValue* val$av) {
	$set(this, val$av, val$av);
}

$Object* CAccessibility$31::call() {
	$var($Number, currentAccessibleValue, $nc(this->val$av)->getCurrentAccessibleValue());
	return $of(currentAccessibleValue);
}

CAccessibility$31::CAccessibility$31() {
}

$Class* CAccessibility$31::load$($String* name, bool initialize) {
	$loadClass(CAccessibility$31, name, initialize, &_CAccessibility$31_ClassInfo_, allocate$CAccessibility$31);
	return class$;
}

$Class* CAccessibility$31::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun