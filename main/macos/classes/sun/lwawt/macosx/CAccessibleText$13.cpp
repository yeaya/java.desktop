#include <sun/lwawt/macosx/CAccessibleText$13.h>

#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/geom/Rectangle2D.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleComponent.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleEditableText.h>
#include <javax/accessibility/AccessibleText.h>
#include <sun/lwawt/macosx/CAccessibleText.h>
#include <jcpp.h>

using $Point = ::java::awt::Point;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleComponent = ::javax::accessibility::AccessibleComponent;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleText = ::javax::accessibility::AccessibleText;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CAccessibleText$13_FieldInfo_[] = {
	{"val$length", "I", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibleText$13, val$length)},
	{"val$location", "I", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibleText$13, val$location)},
	{"val$ret", "[D", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibleText$13, val$ret)},
	{"val$a", "Ljavax/accessibility/Accessible;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibleText$13, val$a)},
	{}
};

$MethodInfo _CAccessibleText$13_MethodInfo_[] = {
	{"<init>", "(Ljavax/accessibility/Accessible;[DII)V", "()V", 0, $method(static_cast<void(CAccessibleText$13::*)($Accessible*,$doubles*,int32_t,int32_t)>(&CAccessibleText$13::init$))},
	{"call", "()[D", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _CAccessibleText$13_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CAccessibleText",
	"getBoundsForRange",
	"(Ljavax/accessibility/Accessible;Ljava/awt/Component;II)[D"
};

$InnerClassInfo _CAccessibleText$13_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CAccessibleText$13", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CAccessibleText$13_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CAccessibleText$13",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_CAccessibleText$13_FieldInfo_,
	_CAccessibleText$13_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<[D>;",
	&_CAccessibleText$13_EnclosingMethodInfo_,
	_CAccessibleText$13_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CAccessibleText"
};

$Object* allocate$CAccessibleText$13($Class* clazz) {
	return $of($alloc(CAccessibleText$13));
}

void CAccessibleText$13::init$($Accessible* val$a, $doubles* val$ret, int32_t val$location, int32_t val$length) {
	$set(this, val$a, val$a);
	$set(this, val$ret, val$ret);
	this->val$location = val$location;
	this->val$length = val$length;
}

$Object* CAccessibleText$13::call() {
	$useLocalCurrentObjectStackCache();
	$var($AccessibleContext, ac, $nc(this->val$a)->getAccessibleContext());
	if (ac == nullptr) {
		return $of(this->val$ret);
	}
	$var($AccessibleText, at, $nc(ac)->getAccessibleText());
	if (at == nullptr) {
		ac->getAccessibleName();
		ac->getAccessibleEditableText();
		return $of(this->val$ret);
	}
	$var($Rectangle2D, boundsStart, $nc(at)->getCharacterBounds(this->val$location));
	$var($Rectangle2D, boundsEnd, at->getCharacterBounds(this->val$location + this->val$length - 1));
	if (boundsEnd == nullptr || boundsStart == nullptr) {
		return $of(this->val$ret);
	}
	$var($Rectangle2D, boundsUnion, $nc(boundsStart)->createUnion(boundsEnd));
	if ($nc(boundsUnion)->isEmpty()) {
		return $of(this->val$ret);
	}
	double localX = $nc(boundsUnion)->getX();
	double localY = boundsUnion->getY();
	$var($Point, componentLocation, $nc($(ac->getAccessibleComponent()))->getLocationOnScreen());
	if (componentLocation == nullptr) {
		return $of(this->val$ret);
	}
	double screenX = $nc(componentLocation)->getX() + localX;
	double screenY = componentLocation->getY() + localY;
	$nc(this->val$ret)->set(0, screenX);
	$nc(this->val$ret)->set(1, screenY);
	$nc(this->val$ret)->set(2, boundsUnion->getWidth());
	$nc(this->val$ret)->set(3, boundsUnion->getHeight());
	return $of(this->val$ret);
}

CAccessibleText$13::CAccessibleText$13() {
}

$Class* CAccessibleText$13::load$($String* name, bool initialize) {
	$loadClass(CAccessibleText$13, name, initialize, &_CAccessibleText$13_ClassInfo_, allocate$CAccessibleText$13);
	return class$;
}

$Class* CAccessibleText$13::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun