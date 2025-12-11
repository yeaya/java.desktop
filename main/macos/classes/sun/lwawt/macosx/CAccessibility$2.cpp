#include <sun/lwawt/macosx/CAccessibility$2.h>

#include <javax/accessibility/AccessibleAction.h>
#include <sun/lwawt/macosx/CAccessibility.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleAction = ::javax::accessibility::AccessibleAction;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CAccessibility$2_FieldInfo_[] = {
	{"val$index", "I", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$2, val$index)},
	{"val$aa", "Ljavax/accessibility/AccessibleAction;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$2, val$aa)},
	{}
};

$MethodInfo _CAccessibility$2_MethodInfo_[] = {
	{"<init>", "(Ljavax/accessibility/AccessibleAction;I)V", "()V", 0, $method(static_cast<void(CAccessibility$2::*)($AccessibleAction*,int32_t)>(&CAccessibility$2::init$))},
	{"call", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _CAccessibility$2_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CAccessibility",
	"getAccessibleActionDescription",
	"(Ljavax/accessibility/AccessibleAction;ILjava/awt/Component;)Ljava/lang/String;"
};

$InnerClassInfo _CAccessibility$2_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CAccessibility$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CAccessibility$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CAccessibility$2",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_CAccessibility$2_FieldInfo_,
	_CAccessibility$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/String;>;",
	&_CAccessibility$2_EnclosingMethodInfo_,
	_CAccessibility$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CAccessibility"
};

$Object* allocate$CAccessibility$2($Class* clazz) {
	return $of($alloc(CAccessibility$2));
}

void CAccessibility$2::init$($AccessibleAction* val$aa, int32_t val$index) {
	$set(this, val$aa, val$aa);
	this->val$index = val$index;
}

$Object* CAccessibility$2::call() {
	return $of($nc(this->val$aa)->getAccessibleActionDescription(this->val$index));
}

CAccessibility$2::CAccessibility$2() {
}

$Class* CAccessibility$2::load$($String* name, bool initialize) {
	$loadClass(CAccessibility$2, name, initialize, &_CAccessibility$2_ClassInfo_, allocate$CAccessibility$2);
	return class$;
}

$Class* CAccessibility$2::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun