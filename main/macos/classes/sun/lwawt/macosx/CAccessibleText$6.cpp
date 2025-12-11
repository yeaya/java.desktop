#include <sun/lwawt/macosx/CAccessibleText$6.h>

#include <java/awt/Point.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleComponent.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleText.h>
#include <sun/lwawt/macosx/CAccessibleText.h>
#include <jcpp.h>

using $Point = ::java::awt::Point;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleComponent = ::javax::accessibility::AccessibleComponent;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleText = ::javax::accessibility::AccessibleText;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CAccessibleText$6_FieldInfo_[] = {
	{"val$y", "I", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibleText$6, val$y)},
	{"val$x", "I", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibleText$6, val$x)},
	{"val$a", "Ljavax/accessibility/Accessible;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibleText$6, val$a)},
	{}
};

$MethodInfo _CAccessibleText$6_MethodInfo_[] = {
	{"<init>", "(Ljavax/accessibility/Accessible;II)V", "()V", 0, $method(static_cast<void(CAccessibleText$6::*)($Accessible*,int32_t,int32_t)>(&CAccessibleText$6::init$))},
	{"call", "()Ljava/lang/Integer;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _CAccessibleText$6_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CAccessibleText",
	"getCharacterIndexAtPosition",
	"(Ljavax/accessibility/Accessible;Ljava/awt/Component;II)I"
};

$InnerClassInfo _CAccessibleText$6_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CAccessibleText$6", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CAccessibleText$6_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CAccessibleText$6",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_CAccessibleText$6_FieldInfo_,
	_CAccessibleText$6_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Integer;>;",
	&_CAccessibleText$6_EnclosingMethodInfo_,
	_CAccessibleText$6_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CAccessibleText"
};

$Object* allocate$CAccessibleText$6($Class* clazz) {
	return $of($alloc(CAccessibleText$6));
}

void CAccessibleText$6::init$($Accessible* val$a, int32_t val$x, int32_t val$y) {
	$set(this, val$a, val$a);
	this->val$x = val$x;
	this->val$y = val$y;
}

$Object* CAccessibleText$6::call() {
	$useLocalCurrentObjectStackCache();
	$var($AccessibleContext, ac, $nc(this->val$a)->getAccessibleContext());
	if (ac == nullptr) {
		return $of(nullptr);
	}
	$var($AccessibleText, at, $nc(ac)->getAccessibleText());
	if (at == nullptr) {
		return $of(nullptr);
	}
	$var($Point, componentLocation, $nc($(ac->getAccessibleComponent()))->getLocationOnScreen());
	int32_t localX = this->val$x - $cast(int32_t, $nc(componentLocation)->getX());
	int32_t localY = this->val$y - $cast(int32_t, componentLocation->getY());
	return $of($Integer::valueOf($nc(at)->getIndexAtPoint($$new($Point, localX, localY))));
}

CAccessibleText$6::CAccessibleText$6() {
}

$Class* CAccessibleText$6::load$($String* name, bool initialize) {
	$loadClass(CAccessibleText$6, name, initialize, &_CAccessibleText$6_ClassInfo_, allocate$CAccessibleText$6);
	return class$;
}

$Class* CAccessibleText$6::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun