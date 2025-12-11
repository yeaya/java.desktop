#include <sun/lwawt/macosx/CAccessibleText$4.h>

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

$FieldInfo _CAccessibleText$4_FieldInfo_[] = {
	{"val$endIndex", "I", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibleText$4, val$endIndex)},
	{"val$startIndex", "I", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibleText$4, val$startIndex)},
	{"val$a", "Ljavax/accessibility/Accessible;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibleText$4, val$a)},
	{}
};

$MethodInfo _CAccessibleText$4_MethodInfo_[] = {
	{"<init>", "(Ljavax/accessibility/Accessible;II)V", "()V", 0, $method(static_cast<void(CAccessibleText$4::*)($Accessible*,int32_t,int32_t)>(&CAccessibleText$4::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _CAccessibleText$4_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CAccessibleText",
	"setSelectedTextRange",
	"(Ljavax/accessibility/Accessible;Ljava/awt/Component;II)V"
};

$InnerClassInfo _CAccessibleText$4_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CAccessibleText$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CAccessibleText$4_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CAccessibleText$4",
	"java.lang.Object",
	"java.lang.Runnable",
	_CAccessibleText$4_FieldInfo_,
	_CAccessibleText$4_MethodInfo_,
	nullptr,
	&_CAccessibleText$4_EnclosingMethodInfo_,
	_CAccessibleText$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CAccessibleText"
};

$Object* allocate$CAccessibleText$4($Class* clazz) {
	return $of($alloc(CAccessibleText$4));
}

void CAccessibleText$4::init$($Accessible* val$a, int32_t val$startIndex, int32_t val$endIndex) {
	$set(this, val$a, val$a);
	this->val$startIndex = val$startIndex;
	this->val$endIndex = val$endIndex;
}

void CAccessibleText$4::run() {
	$useLocalCurrentObjectStackCache();
	$var($AccessibleContext, ac, $nc(this->val$a)->getAccessibleContext());
	if (ac == nullptr) {
		return;
	}
	$var($AccessibleEditableText, aet, $nc(ac)->getAccessibleEditableText());
	if (aet == nullptr) {
		return;
	}
	bool validRange = (this->val$startIndex >= 0) && (this->val$endIndex >= this->val$startIndex) && (this->val$endIndex <= $nc(aet)->getCharCount());
	if (!validRange) {
		return;
	}
	aet->selectText(this->val$startIndex, this->val$endIndex);
}

CAccessibleText$4::CAccessibleText$4() {
}

$Class* CAccessibleText$4::load$($String* name, bool initialize) {
	$loadClass(CAccessibleText$4, name, initialize, &_CAccessibleText$4_ClassInfo_, allocate$CAccessibleText$4);
	return class$;
}

$Class* CAccessibleText$4::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun