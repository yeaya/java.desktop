#include <sun/lwawt/macosx/CAccessibility$16.h>

#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleContext.h>
#include <sun/lwawt/macosx/CAccessibility.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CAccessibility$16_FieldInfo_[] = {
	{"val$a", "Ljavax/accessibility/Accessible;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$16, val$a)},
	{}
};

$MethodInfo _CAccessibility$16_MethodInfo_[] = {
	{"<init>", "(Ljavax/accessibility/Accessible;)V", "()V", 0, $method(static_cast<void(CAccessibility$16::*)($Accessible*)>(&CAccessibility$16::init$))},
	{"call", "()Ljava/lang/Integer;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _CAccessibility$16_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CAccessibility",
	"getAccessibleIndexInParent",
	"(Ljavax/accessibility/Accessible;Ljava/awt/Component;)I"
};

$InnerClassInfo _CAccessibility$16_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CAccessibility$16", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CAccessibility$16_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CAccessibility$16",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_CAccessibility$16_FieldInfo_,
	_CAccessibility$16_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Integer;>;",
	&_CAccessibility$16_EnclosingMethodInfo_,
	_CAccessibility$16_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CAccessibility"
};

$Object* allocate$CAccessibility$16($Class* clazz) {
	return $of($alloc(CAccessibility$16));
}

void CAccessibility$16::init$($Accessible* val$a) {
	$set(this, val$a, val$a);
}

$Object* CAccessibility$16::call() {
	$var($AccessibleContext, ac, $nc(this->val$a)->getAccessibleContext());
	if (ac == nullptr) {
		return $of(nullptr);
	}
	return $of($Integer::valueOf($nc(ac)->getAccessibleIndexInParent()));
}

CAccessibility$16::CAccessibility$16() {
}

$Class* CAccessibility$16::load$($String* name, bool initialize) {
	$loadClass(CAccessibility$16, name, initialize, &_CAccessibility$16_ClassInfo_, allocate$CAccessibility$16);
	return class$;
}

$Class* CAccessibility$16::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun