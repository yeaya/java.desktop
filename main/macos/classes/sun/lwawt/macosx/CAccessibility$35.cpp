#include <sun/lwawt/macosx/CAccessibility$35.h>

#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleContext.h>
#include <sun/lwawt/macosx/CAccessibility.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CAccessibility$35_FieldInfo_[] = {
	{"val$a", "Ljavax/accessibility/Accessible;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$35, val$a)},
	{}
};

$MethodInfo _CAccessibility$35_MethodInfo_[] = {
	{"<init>", "(Ljavax/accessibility/Accessible;)V", "()V", 0, $method(static_cast<void(CAccessibility$35::*)($Accessible*)>(&CAccessibility$35::init$))},
	{"call", "()[Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _CAccessibility$35_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CAccessibility",
	"getChildren",
	"(Ljavax/accessibility/Accessible;Ljava/awt/Component;)[Ljava/lang/Object;"
};

$InnerClassInfo _CAccessibility$35_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CAccessibility$35", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CAccessibility$35_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CAccessibility$35",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_CAccessibility$35_FieldInfo_,
	_CAccessibility$35_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<[Ljava/lang/Object;>;",
	&_CAccessibility$35_EnclosingMethodInfo_,
	_CAccessibility$35_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CAccessibility"
};

$Object* allocate$CAccessibility$35($Class* clazz) {
	return $of($alloc(CAccessibility$35));
}

void CAccessibility$35::init$($Accessible* val$a) {
	$set(this, val$a, val$a);
}

$Object* CAccessibility$35::call() {
	$useLocalCurrentObjectStackCache();
	$var($AccessibleContext, ac, $nc(this->val$a)->getAccessibleContext());
	if (ac == nullptr) {
		return $of(nullptr);
	}
	int32_t numChildren = $nc(ac)->getAccessibleChildrenCount();
	$var($ObjectArray, children, $new($ObjectArray, numChildren));
	for (int32_t i = 0; i < numChildren; ++i) {
		children->set(i, $(ac->getAccessibleChild(i)));
	}
	return $of(children);
}

CAccessibility$35::CAccessibility$35() {
}

$Class* CAccessibility$35::load$($String* name, bool initialize) {
	$loadClass(CAccessibility$35, name, initialize, &_CAccessibility$35_ClassInfo_, allocate$CAccessibility$35);
	return class$;
}

$Class* CAccessibility$35::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun