#include <sun/lwawt/macosx/CAccessibility$8.h>

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

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CAccessibility$8_FieldInfo_[] = {
	{"val$a", "Ljavax/accessibility/Accessible;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$8, val$a)},
	{}
};

$MethodInfo _CAccessibility$8_MethodInfo_[] = {
	{"<init>", "(Ljavax/accessibility/Accessible;)V", "()V", 0, $method(static_cast<void(CAccessibility$8::*)($Accessible*)>(&CAccessibility$8::init$))},
	{"call", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _CAccessibility$8_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CAccessibility",
	"getAccessibleContext",
	"(Ljavax/accessibility/Accessible;Ljava/awt/Component;)Ljavax/accessibility/AccessibleContext;"
};

$InnerClassInfo _CAccessibility$8_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CAccessibility$8", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CAccessibility$8_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CAccessibility$8",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_CAccessibility$8_FieldInfo_,
	_CAccessibility$8_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljavax/accessibility/AccessibleContext;>;",
	&_CAccessibility$8_EnclosingMethodInfo_,
	_CAccessibility$8_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CAccessibility"
};

$Object* allocate$CAccessibility$8($Class* clazz) {
	return $of($alloc(CAccessibility$8));
}

void CAccessibility$8::init$($Accessible* val$a) {
	$set(this, val$a, val$a);
}

$Object* CAccessibility$8::call() {
	return $of($nc(this->val$a)->getAccessibleContext());
}

CAccessibility$8::CAccessibility$8() {
}

$Class* CAccessibility$8::load$($String* name, bool initialize) {
	$loadClass(CAccessibility$8, name, initialize, &_CAccessibility$8_ClassInfo_, allocate$CAccessibility$8);
	return class$;
}

$Class* CAccessibility$8::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun