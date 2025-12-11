#include <sun/lwawt/macosx/CAccessibleText$14.h>

#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleEditableText.h>
#include <sun/lwawt/macosx/CAccessibleText.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleEditableText = ::javax::accessibility::AccessibleEditableText;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CAccessibleText$14_FieldInfo_[] = {
	{"val$length", "I", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibleText$14, val$length)},
	{"val$location", "I", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibleText$14, val$location)},
	{"val$a", "Ljavax/accessibility/Accessible;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibleText$14, val$a)},
	{}
};

$MethodInfo _CAccessibleText$14_MethodInfo_[] = {
	{"<init>", "(Ljavax/accessibility/Accessible;II)V", "()V", 0, $method(static_cast<void(CAccessibleText$14::*)($Accessible*,int32_t,int32_t)>(&CAccessibleText$14::init$))},
	{"call", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _CAccessibleText$14_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CAccessibleText",
	"getStringForRange",
	"(Ljavax/accessibility/Accessible;Ljava/awt/Component;II)Ljava/lang/String;"
};

$InnerClassInfo _CAccessibleText$14_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CAccessibleText$14", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CAccessibleText$14_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CAccessibleText$14",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_CAccessibleText$14_FieldInfo_,
	_CAccessibleText$14_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/String;>;",
	&_CAccessibleText$14_EnclosingMethodInfo_,
	_CAccessibleText$14_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CAccessibleText"
};

$Object* allocate$CAccessibleText$14($Class* clazz) {
	return $of($alloc(CAccessibleText$14));
}

void CAccessibleText$14::init$($Accessible* val$a, int32_t val$location, int32_t val$length) {
	$set(this, val$a, val$a);
	this->val$location = val$location;
	this->val$length = val$length;
}

$Object* CAccessibleText$14::call() {
	$useLocalCurrentObjectStackCache();
	$var($AccessibleContext, ac, $nc(this->val$a)->getAccessibleContext());
	if (ac == nullptr) {
		return $of(nullptr);
	}
	$var($AccessibleEditableText, aet, $nc(ac)->getAccessibleEditableText());
	if (aet == nullptr) {
		return $of(nullptr);
	}
	return $of($nc(aet)->getTextRange(this->val$location, this->val$location + this->val$length));
}

CAccessibleText$14::CAccessibleText$14() {
}

$Class* CAccessibleText$14::load$($String* name, bool initialize) {
	$loadClass(CAccessibleText$14, name, initialize, &_CAccessibleText$14_ClassInfo_, allocate$CAccessibleText$14);
	return class$;
}

$Class* CAccessibleText$14::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun