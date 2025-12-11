#include <sun/lwawt/macosx/CAccessibility$3.h>

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

$FieldInfo _CAccessibility$3_FieldInfo_[] = {
	{"val$index", "I", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$3, val$index)},
	{"val$aa", "Ljavax/accessibility/AccessibleAction;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$3, val$aa)},
	{}
};

$MethodInfo _CAccessibility$3_MethodInfo_[] = {
	{"<init>", "(Ljavax/accessibility/AccessibleAction;I)V", "()V", 0, $method(static_cast<void(CAccessibility$3::*)($AccessibleAction*,int32_t)>(&CAccessibility$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _CAccessibility$3_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CAccessibility",
	"doAccessibleAction",
	"(Ljavax/accessibility/AccessibleAction;ILjava/awt/Component;)V"
};

$InnerClassInfo _CAccessibility$3_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CAccessibility$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CAccessibility$3_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CAccessibility$3",
	"java.lang.Object",
	"java.lang.Runnable",
	_CAccessibility$3_FieldInfo_,
	_CAccessibility$3_MethodInfo_,
	nullptr,
	&_CAccessibility$3_EnclosingMethodInfo_,
	_CAccessibility$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CAccessibility"
};

$Object* allocate$CAccessibility$3($Class* clazz) {
	return $of($alloc(CAccessibility$3));
}

void CAccessibility$3::init$($AccessibleAction* val$aa, int32_t val$index) {
	$set(this, val$aa, val$aa);
	this->val$index = val$index;
}

void CAccessibility$3::run() {
	$nc(this->val$aa)->doAccessibleAction(this->val$index);
}

CAccessibility$3::CAccessibility$3() {
}

$Class* CAccessibility$3::load$($String* name, bool initialize) {
	$loadClass(CAccessibility$3, name, initialize, &_CAccessibility$3_ClassInfo_, allocate$CAccessibility$3);
	return class$;
}

$Class* CAccessibility$3::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun