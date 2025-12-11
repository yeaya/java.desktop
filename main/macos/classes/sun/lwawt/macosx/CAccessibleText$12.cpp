#include <sun/lwawt/macosx/CAccessibleText$12.h>

#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleEditableText.h>
#include <javax/accessibility/AccessibleText.h>
#include <sun/lwawt/macosx/CAccessibleText.h>
#include <jcpp.h>

#undef WORD

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleEditableText = ::javax::accessibility::AccessibleEditableText;
using $AccessibleText = ::javax::accessibility::AccessibleText;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CAccessibleText$12_FieldInfo_[] = {
	{"val$index", "I", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibleText$12, val$index)},
	{"val$a", "Ljavax/accessibility/Accessible;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibleText$12, val$a)},
	{}
};

$MethodInfo _CAccessibleText$12_MethodInfo_[] = {
	{"<init>", "(Ljavax/accessibility/Accessible;I)V", "()V", 0, $method(static_cast<void(CAccessibleText$12::*)($Accessible*,int32_t)>(&CAccessibleText$12::init$))},
	{"call", "()[I", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _CAccessibleText$12_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CAccessibleText",
	"getRangeForIndex",
	"(Ljavax/accessibility/Accessible;Ljava/awt/Component;I)[I"
};

$InnerClassInfo _CAccessibleText$12_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CAccessibleText$12", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CAccessibleText$12_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CAccessibleText$12",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_CAccessibleText$12_FieldInfo_,
	_CAccessibleText$12_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<[I>;",
	&_CAccessibleText$12_EnclosingMethodInfo_,
	_CAccessibleText$12_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CAccessibleText"
};

$Object* allocate$CAccessibleText$12($Class* clazz) {
	return $of($alloc(CAccessibleText$12));
}

void CAccessibleText$12::init$($Accessible* val$a, int32_t val$index) {
	$set(this, val$a, val$a);
	this->val$index = val$index;
}

$Object* CAccessibleText$12::call() {
	$useLocalCurrentObjectStackCache();
	$var($AccessibleContext, ac, $nc(this->val$a)->getAccessibleContext());
	if (ac == nullptr) {
		return $of($new($ints, 2));
	}
	$var($AccessibleEditableText, aet, $nc(ac)->getAccessibleEditableText());
	if (aet == nullptr) {
		return $of($new($ints, 2));
	}
	int32_t charCount = $nc(aet)->getCharCount();
	if (this->val$index >= charCount) {
		return $of($new($ints, 2));
	}
	$var($String, foundWord, aet->getAtIndex($AccessibleText::WORD, this->val$index));
	int32_t foundWordLength = $nc(foundWord)->length();
	$var($String, wholeString, aet->getTextRange(0, charCount - 1));
	int32_t foundWordIndex = -1;
	int32_t offset = 0;
	while ((foundWordIndex == -1) && (offset < foundWordLength)) {
		if ($nc(wholeString)->regionMatches(true, this->val$index - offset, foundWord, 0, foundWordLength)) {
			foundWordIndex = this->val$index - offset;
		}
		if ($nc(wholeString)->regionMatches(true, this->val$index + offset, foundWord, 0, foundWordLength)) {
			foundWordIndex = this->val$index + offset;
		}
		++offset;
	}
	$var($ints, ret, $new($ints, 2));
	ret->set(0, foundWordIndex);
	ret->set(1, foundWordIndex + foundWordLength);
	return $of(ret);
}

CAccessibleText$12::CAccessibleText$12() {
}

$Class* CAccessibleText$12::load$($String* name, bool initialize) {
	$loadClass(CAccessibleText$12, name, initialize, &_CAccessibleText$12_ClassInfo_, allocate$CAccessibleText$12);
	return class$;
}

$Class* CAccessibleText$12::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun