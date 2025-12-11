#include <sun/lwawt/macosx/CAccessibility$27.h>

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
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleSelection = ::javax::accessibility::AccessibleSelection;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CAccessibility$27_FieldInfo_[] = {
	{"val$a", "Ljavax/accessibility/Accessible;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$27, val$a)},
	{}
};

$MethodInfo _CAccessibility$27_MethodInfo_[] = {
	{"<init>", "(Ljavax/accessibility/Accessible;)V", "()V", 0, $method(static_cast<void(CAccessibility$27::*)($Accessible*)>(&CAccessibility$27::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _CAccessibility$27_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CAccessibility",
	"requestSelection",
	"(Ljavax/accessibility/Accessible;Ljava/awt/Component;)V"
};

$InnerClassInfo _CAccessibility$27_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CAccessibility$27", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CAccessibility$27_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CAccessibility$27",
	"java.lang.Object",
	"java.lang.Runnable",
	_CAccessibility$27_FieldInfo_,
	_CAccessibility$27_MethodInfo_,
	nullptr,
	&_CAccessibility$27_EnclosingMethodInfo_,
	_CAccessibility$27_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CAccessibility"
};

$Object* allocate$CAccessibility$27($Class* clazz) {
	return $of($alloc(CAccessibility$27));
}

void CAccessibility$27::init$($Accessible* val$a) {
	$set(this, val$a, val$a);
}

void CAccessibility$27::run() {
	$useLocalCurrentObjectStackCache();
	$var($AccessibleContext, ac, $nc(this->val$a)->getAccessibleContext());
	if (ac == nullptr) {
		return;
	}
	int32_t i = $nc(ac)->getAccessibleIndexInParent();
	if (i == -1) {
		return;
	}
	$var($Accessible, parent, ac->getAccessibleParent());
	$var($AccessibleContext, pac, $nc(parent)->getAccessibleContext());
	if (pac == nullptr) {
		return;
	}
	$var($AccessibleSelection, as, $nc(pac)->getAccessibleSelection());
	if (as == nullptr) {
		return;
	}
	$nc(as)->addAccessibleSelection(i);
}

CAccessibility$27::CAccessibility$27() {
}

$Class* CAccessibility$27::load$($String* name, bool initialize) {
	$loadClass(CAccessibility$27, name, initialize, &_CAccessibility$27_ClassInfo_, allocate$CAccessibility$27);
	return class$;
}

$Class* CAccessibility$27::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun