#include <sun/lwawt/macosx/CAccessibility$13.h>

#include <java/awt/Point.h>
#include <javax/accessibility/AccessibleComponent.h>
#include <sun/lwawt/macosx/CAccessibility.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleComponent = ::javax::accessibility::AccessibleComponent;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CAccessibility$13_FieldInfo_[] = {
	{"val$ac", "Ljavax/accessibility/AccessibleComponent;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$13, val$ac)},
	{}
};

$MethodInfo _CAccessibility$13_MethodInfo_[] = {
	{"<init>", "(Ljavax/accessibility/AccessibleComponent;)V", "()V", 0, $method(static_cast<void(CAccessibility$13::*)($AccessibleComponent*)>(&CAccessibility$13::init$))},
	{"call", "()Ljava/awt/Point;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _CAccessibility$13_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CAccessibility",
	"getLocationOnScreen",
	"(Ljavax/accessibility/AccessibleComponent;Ljava/awt/Component;)Ljava/awt/Point;"
};

$InnerClassInfo _CAccessibility$13_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CAccessibility$13", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CAccessibility$13_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CAccessibility$13",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_CAccessibility$13_FieldInfo_,
	_CAccessibility$13_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/awt/Point;>;",
	&_CAccessibility$13_EnclosingMethodInfo_,
	_CAccessibility$13_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CAccessibility"
};

$Object* allocate$CAccessibility$13($Class* clazz) {
	return $of($alloc(CAccessibility$13));
}

void CAccessibility$13::init$($AccessibleComponent* val$ac) {
	$set(this, val$ac, val$ac);
}

$Object* CAccessibility$13::call() {
	return $of($nc(this->val$ac)->getLocationOnScreen());
}

CAccessibility$13::CAccessibility$13() {
}

$Class* CAccessibility$13::load$($String* name, bool initialize) {
	$loadClass(CAccessibility$13, name, initialize, &_CAccessibility$13_ClassInfo_, allocate$CAccessibility$13);
	return class$;
}

$Class* CAccessibility$13::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun