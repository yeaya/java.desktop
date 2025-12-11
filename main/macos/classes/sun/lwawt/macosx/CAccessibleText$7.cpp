#include <sun/lwawt/macosx/CAccessibleText$7.h>

#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleText.h>
#include <sun/lwawt/macosx/CAccessibleText.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleText = ::javax::accessibility::AccessibleText;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CAccessibleText$7_FieldInfo_[] = {
	{"val$a", "Ljavax/accessibility/Accessible;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibleText$7, val$a)},
	{}
};

$MethodInfo _CAccessibleText$7_MethodInfo_[] = {
	{"<init>", "(Ljavax/accessibility/Accessible;)V", "()V", 0, $method(static_cast<void(CAccessibleText$7::*)($Accessible*)>(&CAccessibleText$7::init$))},
	{"call", "()[I", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _CAccessibleText$7_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CAccessibleText",
	"getSelectedTextRange",
	"(Ljavax/accessibility/Accessible;Ljava/awt/Component;)[I"
};

$InnerClassInfo _CAccessibleText$7_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CAccessibleText$7", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CAccessibleText$7_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CAccessibleText$7",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_CAccessibleText$7_FieldInfo_,
	_CAccessibleText$7_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<[I>;",
	&_CAccessibleText$7_EnclosingMethodInfo_,
	_CAccessibleText$7_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CAccessibleText"
};

$Object* allocate$CAccessibleText$7($Class* clazz) {
	return $of($alloc(CAccessibleText$7));
}

void CAccessibleText$7::init$($Accessible* val$a) {
	$set(this, val$a, val$a);
}

$Object* CAccessibleText$7::call() {
	$useLocalCurrentObjectStackCache();
	$var($AccessibleContext, ac, $nc(this->val$a)->getAccessibleContext());
	if (ac == nullptr) {
		return $of($new($ints, 2));
	}
	$var($AccessibleText, at, $nc(ac)->getAccessibleText());
	if (at == nullptr) {
		return $of($new($ints, 2));
	}
	$var($ints, ret, $new($ints, 2));
	ret->set(0, $nc(at)->getSelectionStart());
	ret->set(1, at->getSelectionEnd());
	return $of(ret);
}

CAccessibleText$7::CAccessibleText$7() {
}

$Class* CAccessibleText$7::load$($String* name, bool initialize) {
	$loadClass(CAccessibleText$7, name, initialize, &_CAccessibleText$7_ClassInfo_, allocate$CAccessibleText$7);
	return class$;
}

$Class* CAccessibleText$7::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun