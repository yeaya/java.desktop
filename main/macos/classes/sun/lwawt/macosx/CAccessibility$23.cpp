#include <sun/lwawt/macosx/CAccessibility$23.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Point.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleComponent.h>
#include <javax/accessibility/AccessibleContext.h>
#include <sun/lwawt/macosx/CAccessibility.h>
#include <sun/lwawt/macosx/CAccessible.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Point = ::java::awt::Point;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleComponent = ::javax::accessibility::AccessibleComponent;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $CAccessible = ::sun::lwawt::macosx::CAccessible;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CAccessibility$23_FieldInfo_[] = {
	{"val$hitPointY", "F", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$23, val$hitPointY)},
	{"val$hitPointX", "F", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$23, val$hitPointX)},
	{"val$parent", "Ljava/awt/Container;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$23, val$parent)},
	{}
};

$MethodInfo _CAccessibility$23_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Container;FF)V", "()V", 0, $method(static_cast<void(CAccessibility$23::*)($Container*,float,float)>(&CAccessibility$23::init$))},
	{"call", "()Ljavax/accessibility/Accessible;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _CAccessibility$23_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CAccessibility",
	"accessibilityHitTest",
	"(Ljava/awt/Container;FF)Ljavax/accessibility/Accessible;"
};

$InnerClassInfo _CAccessibility$23_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CAccessibility$23", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CAccessibility$23_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CAccessibility$23",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_CAccessibility$23_FieldInfo_,
	_CAccessibility$23_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljavax/accessibility/Accessible;>;",
	&_CAccessibility$23_EnclosingMethodInfo_,
	_CAccessibility$23_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CAccessibility"
};

$Object* allocate$CAccessibility$23($Class* clazz) {
	return $of($alloc(CAccessibility$23));
}

void CAccessibility$23::init$($Container* val$parent, float val$hitPointX, float val$hitPointY) {
	$set(this, val$parent, val$parent);
	this->val$hitPointX = val$hitPointX;
	this->val$hitPointY = val$hitPointY;
}

$Object* CAccessibility$23::call() {
	$useLocalCurrentObjectStackCache();
	$var($Point, p, $nc(this->val$parent)->getLocationOnScreen());
	int32_t var$0 = $cast(int32_t, (this->val$hitPointX - $nc(p)->getX()));
	$var($Point, localPoint, $new($Point, var$0, $cast(int32_t, (this->val$hitPointY - p->getY()))));
	$var($Component, component, $nc(this->val$parent)->findComponentAt(localPoint));
	if (component == nullptr) {
		return $of(nullptr);
	}
	$var($AccessibleContext, axContext, $nc(component)->getAccessibleContext());
	if (axContext == nullptr) {
		return $of(nullptr);
	}
	$var($AccessibleComponent, axComponent, $nc(axContext)->getAccessibleComponent());
	if (axComponent == nullptr) {
		return $of(nullptr);
	}
	int32_t numChildren = axContext->getAccessibleChildrenCount();
	if (numChildren > 0) {
		$var($Point, p2, $nc(axComponent)->getLocationOnScreen());
		int32_t var$1 = $cast(int32_t, (this->val$hitPointX - $nc(p2)->getX()));
		$var($Point, localP2, $new($Point, var$1, $cast(int32_t, (this->val$hitPointY - p2->getY()))));
		return $of($CAccessible::getCAccessible($(axComponent->getAccessibleAt(localP2))));
	}
	if (!($instanceOf($Accessible, component))) {
		return $of(nullptr);
	}
	return $of($CAccessible::getCAccessible($cast($Accessible, component)));
}

CAccessibility$23::CAccessibility$23() {
}

$Class* CAccessibility$23::load$($String* name, bool initialize) {
	$loadClass(CAccessibility$23, name, initialize, &_CAccessibility$23_ClassInfo_, allocate$CAccessibility$23);
	return class$;
}

$Class* CAccessibility$23::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun