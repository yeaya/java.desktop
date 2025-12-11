#include <sun/lwawt/macosx/CAccessibility$10.h>

#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleStateSet.h>
#include <sun/lwawt/macosx/CAccessibility.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CAccessibility$10_FieldInfo_[] = {
	{"val$ac", "Ljavax/accessibility/AccessibleContext;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$10, val$ac)},
	{}
};

$MethodInfo _CAccessibility$10_MethodInfo_[] = {
	{"<init>", "(Ljavax/accessibility/AccessibleContext;)V", "()V", 0, $method(static_cast<void(CAccessibility$10::*)($AccessibleContext*)>(&CAccessibility$10::init$))},
	{"call", "()Ljavax/accessibility/AccessibleStateSet;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _CAccessibility$10_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CAccessibility",
	"getAccessibleStateSet",
	"(Ljavax/accessibility/AccessibleContext;Ljava/awt/Component;)Ljavax/accessibility/AccessibleStateSet;"
};

$InnerClassInfo _CAccessibility$10_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CAccessibility$10", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CAccessibility$10_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CAccessibility$10",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_CAccessibility$10_FieldInfo_,
	_CAccessibility$10_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljavax/accessibility/AccessibleStateSet;>;",
	&_CAccessibility$10_EnclosingMethodInfo_,
	_CAccessibility$10_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CAccessibility"
};

$Object* allocate$CAccessibility$10($Class* clazz) {
	return $of($alloc(CAccessibility$10));
}

void CAccessibility$10::init$($AccessibleContext* val$ac) {
	$set(this, val$ac, val$ac);
}

$Object* CAccessibility$10::call() {
	return $of($nc(this->val$ac)->getAccessibleStateSet());
}

CAccessibility$10::CAccessibility$10() {
}

$Class* CAccessibility$10::load$($String* name, bool initialize) {
	$loadClass(CAccessibility$10, name, initialize, &_CAccessibility$10_ClassInfo_, allocate$CAccessibility$10);
	return class$;
}

$Class* CAccessibility$10::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun