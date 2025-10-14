#include <javax/swing/text/MaskFormatter$UpperCaseCharacter.h>

#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/MaskFormatter$MaskCharacter.h>
#include <javax/swing/text/MaskFormatter.h>
#include <jcpp.h>

using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MaskFormatter = ::javax::swing::text::MaskFormatter;
using $MaskFormatter$MaskCharacter = ::javax::swing::text::MaskFormatter$MaskCharacter;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _MaskFormatter$UpperCaseCharacter_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/MaskFormatter;", nullptr, $FINAL | $SYNTHETIC, $field(MaskFormatter$UpperCaseCharacter, this$0)},
	{}
};

$MethodInfo _MaskFormatter$UpperCaseCharacter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/MaskFormatter;)V", nullptr, $PRIVATE, $method(static_cast<void(MaskFormatter$UpperCaseCharacter::*)($MaskFormatter*)>(&MaskFormatter$UpperCaseCharacter::init$))},
	{"getChar", "(C)C", nullptr, $PUBLIC},
	{"isValidCharacter", "(C)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MaskFormatter$UpperCaseCharacter_InnerClassesInfo_[] = {
	{"javax.swing.text.MaskFormatter$UpperCaseCharacter", "javax.swing.text.MaskFormatter", "UpperCaseCharacter", $PRIVATE},
	{"javax.swing.text.MaskFormatter$MaskCharacter", "javax.swing.text.MaskFormatter", "MaskCharacter", $PRIVATE},
	{}
};

$ClassInfo _MaskFormatter$UpperCaseCharacter_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.MaskFormatter$UpperCaseCharacter",
	"javax.swing.text.MaskFormatter$MaskCharacter",
	nullptr,
	_MaskFormatter$UpperCaseCharacter_FieldInfo_,
	_MaskFormatter$UpperCaseCharacter_MethodInfo_,
	nullptr,
	nullptr,
	_MaskFormatter$UpperCaseCharacter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.MaskFormatter"
};

$Object* allocate$MaskFormatter$UpperCaseCharacter($Class* clazz) {
	return $of($alloc(MaskFormatter$UpperCaseCharacter));
}

void MaskFormatter$UpperCaseCharacter::init$($MaskFormatter* this$0) {
	$set(this, this$0, this$0);
	$MaskFormatter$MaskCharacter::init$(this$0);
}

bool MaskFormatter$UpperCaseCharacter::isValidCharacter(char16_t aChar) {
	bool var$0 = $Character::isLetter(aChar);
	return (var$0 && $MaskFormatter$MaskCharacter::isValidCharacter(aChar));
}

char16_t MaskFormatter$UpperCaseCharacter::getChar(char16_t aChar) {
	return $Character::toUpperCase(aChar);
}

MaskFormatter$UpperCaseCharacter::MaskFormatter$UpperCaseCharacter() {
}

$Class* MaskFormatter$UpperCaseCharacter::load$($String* name, bool initialize) {
	$loadClass(MaskFormatter$UpperCaseCharacter, name, initialize, &_MaskFormatter$UpperCaseCharacter_ClassInfo_, allocate$MaskFormatter$UpperCaseCharacter);
	return class$;
}

$Class* MaskFormatter$UpperCaseCharacter::class$ = nullptr;

		} // text
	} // swing
} // javax