#include <sun/lwawt/macosx/CAccessibility$6.h>

#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleSelection.h>
#include <sun/lwawt/macosx/CAccessibility.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleSelection = ::javax::accessibility::AccessibleSelection;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CAccessibility$6_FieldInfo_[] = {
	{"val$index", "I", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$6, val$index)},
	{"val$ac", "Ljavax/accessibility/AccessibleContext;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$6, val$ac)},
	{}
};

$MethodInfo _CAccessibility$6_MethodInfo_[] = {
	{"<init>", "(Ljavax/accessibility/AccessibleContext;I)V", "()V", 0, $method(static_cast<void(CAccessibility$6::*)($AccessibleContext*,int32_t)>(&CAccessibility$6::init$))},
	{"call", "()Ljavax/accessibility/Accessible;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _CAccessibility$6_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CAccessibility",
	"ax_getAccessibleSelection",
	"(Ljavax/accessibility/AccessibleContext;ILjava/awt/Component;)Ljavax/accessibility/Accessible;"
};

$InnerClassInfo _CAccessibility$6_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CAccessibility$6", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CAccessibility$6_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CAccessibility$6",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_CAccessibility$6_FieldInfo_,
	_CAccessibility$6_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljavax/accessibility/Accessible;>;",
	&_CAccessibility$6_EnclosingMethodInfo_,
	_CAccessibility$6_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CAccessibility"
};

$Object* allocate$CAccessibility$6($Class* clazz) {
	return $of($alloc(CAccessibility$6));
}

void CAccessibility$6::init$($AccessibleContext* val$ac, int32_t val$index) {
	$set(this, val$ac, val$ac);
	this->val$index = val$index;
}

$Object* CAccessibility$6::call() {
	$var($AccessibleSelection, as, $nc(this->val$ac)->getAccessibleSelection());
	if (as == nullptr) {
		return $of(nullptr);
	}
	return $of($nc(as)->getAccessibleSelection(this->val$index));
}

CAccessibility$6::CAccessibility$6() {
}

$Class* CAccessibility$6::load$($String* name, bool initialize) {
	$loadClass(CAccessibility$6, name, initialize, &_CAccessibility$6_ClassInfo_, allocate$CAccessibility$6);
	return class$;
}

$Class* CAccessibility$6::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun