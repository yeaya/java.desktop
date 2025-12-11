#include <sun/lwawt/macosx/CAccessibleText$3.h>

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

$FieldInfo _CAccessibleText$3_FieldInfo_[] = {
	{"val$newText", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibleText$3, val$newText)},
	{"val$a", "Ljavax/accessibility/Accessible;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibleText$3, val$a)},
	{}
};

$MethodInfo _CAccessibleText$3_MethodInfo_[] = {
	{"<init>", "(Ljavax/accessibility/Accessible;Ljava/lang/String;)V", "()V", 0, $method(static_cast<void(CAccessibleText$3::*)($Accessible*,$String*)>(&CAccessibleText$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _CAccessibleText$3_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CAccessibleText",
	"setSelectedText",
	"(Ljavax/accessibility/Accessible;Ljava/awt/Component;Ljava/lang/String;)V"
};

$InnerClassInfo _CAccessibleText$3_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CAccessibleText$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CAccessibleText$3_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CAccessibleText$3",
	"java.lang.Object",
	"java.lang.Runnable",
	_CAccessibleText$3_FieldInfo_,
	_CAccessibleText$3_MethodInfo_,
	nullptr,
	&_CAccessibleText$3_EnclosingMethodInfo_,
	_CAccessibleText$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CAccessibleText"
};

$Object* allocate$CAccessibleText$3($Class* clazz) {
	return $of($alloc(CAccessibleText$3));
}

void CAccessibleText$3::init$($Accessible* val$a, $String* val$newText) {
	$set(this, val$a, val$a);
	$set(this, val$newText, val$newText);
}

void CAccessibleText$3::run() {
	$useLocalCurrentObjectStackCache();
	$var($AccessibleContext, ac, $nc(this->val$a)->getAccessibleContext());
	if (ac == nullptr) {
		return;
	}
	$var($AccessibleEditableText, aet, $nc(ac)->getAccessibleEditableText());
	if (aet == nullptr) {
		return;
	}
	int32_t selectionStart = $nc(aet)->getSelectionStart();
	int32_t selectionEnd = aet->getSelectionEnd();
	aet->replaceText(selectionStart, selectionEnd, this->val$newText);
}

CAccessibleText$3::CAccessibleText$3() {
}

$Class* CAccessibleText$3::load$($String* name, bool initialize) {
	$loadClass(CAccessibleText$3, name, initialize, &_CAccessibleText$3_ClassInfo_, allocate$CAccessibleText$3);
	return class$;
}

$Class* CAccessibleText$3::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun