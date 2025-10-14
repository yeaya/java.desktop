#include <javax/swing/text/MaskFormatter$LowerCaseCharacter.h>

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

$FieldInfo _MaskFormatter$LowerCaseCharacter_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/MaskFormatter;", nullptr, $FINAL | $SYNTHETIC, $field(MaskFormatter$LowerCaseCharacter, this$0)},
	{}
};

$MethodInfo _MaskFormatter$LowerCaseCharacter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/MaskFormatter;)V", nullptr, $PRIVATE, $method(static_cast<void(MaskFormatter$LowerCaseCharacter::*)($MaskFormatter*)>(&MaskFormatter$LowerCaseCharacter::init$))},
	{"getChar", "(C)C", nullptr, $PUBLIC},
	{"isValidCharacter", "(C)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MaskFormatter$LowerCaseCharacter_InnerClassesInfo_[] = {
	{"javax.swing.text.MaskFormatter$LowerCaseCharacter", "javax.swing.text.MaskFormatter", "LowerCaseCharacter", $PRIVATE},
	{"javax.swing.text.MaskFormatter$MaskCharacter", "javax.swing.text.MaskFormatter", "MaskCharacter", $PRIVATE},
	{}
};

$ClassInfo _MaskFormatter$LowerCaseCharacter_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.MaskFormatter$LowerCaseCharacter",
	"javax.swing.text.MaskFormatter$MaskCharacter",
	nullptr,
	_MaskFormatter$LowerCaseCharacter_FieldInfo_,
	_MaskFormatter$LowerCaseCharacter_MethodInfo_,
	nullptr,
	nullptr,
	_MaskFormatter$LowerCaseCharacter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.MaskFormatter"
};

$Object* allocate$MaskFormatter$LowerCaseCharacter($Class* clazz) {
	return $of($alloc(MaskFormatter$LowerCaseCharacter));
}

void MaskFormatter$LowerCaseCharacter::init$($MaskFormatter* this$0) {
	$set(this, this$0, this$0);
	$MaskFormatter$MaskCharacter::init$(this$0);
}

bool MaskFormatter$LowerCaseCharacter::isValidCharacter(char16_t aChar) {
	bool var$0 = $Character::isLetter(aChar);
	return (var$0 && $MaskFormatter$MaskCharacter::isValidCharacter(aChar));
}

char16_t MaskFormatter$LowerCaseCharacter::getChar(char16_t aChar) {
	return $Character::toLowerCase(aChar);
}

MaskFormatter$LowerCaseCharacter::MaskFormatter$LowerCaseCharacter() {
}

$Class* MaskFormatter$LowerCaseCharacter::load$($String* name, bool initialize) {
	$loadClass(MaskFormatter$LowerCaseCharacter, name, initialize, &_MaskFormatter$LowerCaseCharacter_ClassInfo_, allocate$MaskFormatter$LowerCaseCharacter);
	return class$;
}

$Class* MaskFormatter$LowerCaseCharacter::class$ = nullptr;

		} // text
	} // swing
} // javax