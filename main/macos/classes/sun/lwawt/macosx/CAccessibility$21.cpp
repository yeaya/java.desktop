#include <sun/lwawt/macosx/CAccessibility$21.h>

#include <java/awt/Component.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/JComponent.h>
#include <sun/lwawt/macosx/CAccessibility.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $JComponent = ::javax::swing::JComponent;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CAccessibility$21_FieldInfo_[] = {
	{"val$c", "Ljava/awt/Component;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$21, val$c)},
	{"val$a", "Ljavax/accessibility/Accessible;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$21, val$a)},
	{}
};

$MethodInfo _CAccessibility$21_MethodInfo_[] = {
	{"<init>", "(Ljavax/accessibility/Accessible;Ljava/awt/Component;)V", "()V", 0, $method(static_cast<void(CAccessibility$21::*)($Accessible*,$Component*)>(&CAccessibility$21::init$))},
	{"call", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _CAccessibility$21_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CAccessibility",
	"getAccessibleDescription",
	"(Ljavax/accessibility/Accessible;Ljava/awt/Component;)Ljava/lang/String;"
};

$InnerClassInfo _CAccessibility$21_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CAccessibility$21", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CAccessibility$21_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CAccessibility$21",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_CAccessibility$21_FieldInfo_,
	_CAccessibility$21_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/String;>;",
	&_CAccessibility$21_EnclosingMethodInfo_,
	_CAccessibility$21_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CAccessibility"
};

$Object* allocate$CAccessibility$21($Class* clazz) {
	return $of($alloc(CAccessibility$21));
}

void CAccessibility$21::init$($Accessible* val$a, $Component* val$c) {
	$set(this, val$a, val$a);
	$set(this, val$c, val$c);
}

$Object* CAccessibility$21::call() {
	$useLocalCurrentObjectStackCache();
	$var($AccessibleContext, ac, $nc(this->val$a)->getAccessibleContext());
	if (ac == nullptr) {
		return $of(nullptr);
	}
	$var($String, accessibleDescription, $nc(ac)->getAccessibleDescription());
	if (accessibleDescription == nullptr) {
		if ($instanceOf($JComponent, this->val$c)) {
			$var($String, toolTipText, $nc(($cast($JComponent, this->val$c)))->getToolTipText());
			if (toolTipText != nullptr) {
				return $of(toolTipText);
			}
		}
	}
	return $of(accessibleDescription);
}

CAccessibility$21::CAccessibility$21() {
}

$Class* CAccessibility$21::load$($String* name, bool initialize) {
	$loadClass(CAccessibility$21, name, initialize, &_CAccessibility$21_ClassInfo_, allocate$CAccessibility$21);
	return class$;
}

$Class* CAccessibility$21::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun