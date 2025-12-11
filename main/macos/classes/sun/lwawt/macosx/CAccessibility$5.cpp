#include <sun/lwawt/macosx/CAccessibility$5.h>

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

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CAccessibility$5_FieldInfo_[] = {
	{"val$ac", "Ljavax/accessibility/AccessibleContext;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$5, val$ac)},
	{}
};

$MethodInfo _CAccessibility$5_MethodInfo_[] = {
	{"<init>", "(Ljavax/accessibility/AccessibleContext;)V", "()V", 0, $method(static_cast<void(CAccessibility$5::*)($AccessibleContext*)>(&CAccessibility$5::init$))},
	{"call", "()Ljavax/accessibility/AccessibleSelection;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _CAccessibility$5_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CAccessibility",
	"getAccessibleSelection",
	"(Ljavax/accessibility/AccessibleContext;Ljava/awt/Component;)Ljavax/accessibility/AccessibleSelection;"
};

$InnerClassInfo _CAccessibility$5_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CAccessibility$5", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CAccessibility$5_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CAccessibility$5",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_CAccessibility$5_FieldInfo_,
	_CAccessibility$5_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljavax/accessibility/AccessibleSelection;>;",
	&_CAccessibility$5_EnclosingMethodInfo_,
	_CAccessibility$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CAccessibility"
};

$Object* allocate$CAccessibility$5($Class* clazz) {
	return $of($alloc(CAccessibility$5));
}

void CAccessibility$5::init$($AccessibleContext* val$ac) {
	$set(this, val$ac, val$ac);
}

$Object* CAccessibility$5::call() {
	return $of($nc(this->val$ac)->getAccessibleSelection());
}

CAccessibility$5::CAccessibility$5() {
}

$Class* CAccessibility$5::load$($String* name, bool initialize) {
	$loadClass(CAccessibility$5, name, initialize, &_CAccessibility$5_ClassInfo_, allocate$CAccessibility$5);
	return class$;
}

$Class* CAccessibility$5::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun