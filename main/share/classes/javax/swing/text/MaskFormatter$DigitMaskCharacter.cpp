#include <javax/swing/text/MaskFormatter$DigitMaskCharacter.h>

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

$FieldInfo _MaskFormatter$DigitMaskCharacter_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/MaskFormatter;", nullptr, $FINAL | $SYNTHETIC, $field(MaskFormatter$DigitMaskCharacter, this$0)},
	{}
};

$MethodInfo _MaskFormatter$DigitMaskCharacter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/MaskFormatter;)V", nullptr, $PRIVATE, $method(static_cast<void(MaskFormatter$DigitMaskCharacter::*)($MaskFormatter*)>(&MaskFormatter$DigitMaskCharacter::init$))},
	{"isValidCharacter", "(C)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MaskFormatter$DigitMaskCharacter_InnerClassesInfo_[] = {
	{"javax.swing.text.MaskFormatter$DigitMaskCharacter", "javax.swing.text.MaskFormatter", "DigitMaskCharacter", $PRIVATE},
	{"javax.swing.text.MaskFormatter$MaskCharacter", "javax.swing.text.MaskFormatter", "MaskCharacter", $PRIVATE},
	{}
};

$ClassInfo _MaskFormatter$DigitMaskCharacter_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.MaskFormatter$DigitMaskCharacter",
	"javax.swing.text.MaskFormatter$MaskCharacter",
	nullptr,
	_MaskFormatter$DigitMaskCharacter_FieldInfo_,
	_MaskFormatter$DigitMaskCharacter_MethodInfo_,
	nullptr,
	nullptr,
	_MaskFormatter$DigitMaskCharacter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.MaskFormatter"
};

$Object* allocate$MaskFormatter$DigitMaskCharacter($Class* clazz) {
	return $of($alloc(MaskFormatter$DigitMaskCharacter));
}

void MaskFormatter$DigitMaskCharacter::init$($MaskFormatter* this$0) {
	$set(this, this$0, this$0);
	$MaskFormatter$MaskCharacter::init$(this$0);
}

bool MaskFormatter$DigitMaskCharacter::isValidCharacter(char16_t aChar) {
	bool var$0 = $Character::isDigit(aChar);
	return (var$0 && $MaskFormatter$MaskCharacter::isValidCharacter(aChar));
}

MaskFormatter$DigitMaskCharacter::MaskFormatter$DigitMaskCharacter() {
}

$Class* MaskFormatter$DigitMaskCharacter::load$($String* name, bool initialize) {
	$loadClass(MaskFormatter$DigitMaskCharacter, name, initialize, &_MaskFormatter$DigitMaskCharacter_ClassInfo_, allocate$MaskFormatter$DigitMaskCharacter);
	return class$;
}

$Class* MaskFormatter$DigitMaskCharacter::class$ = nullptr;

		} // text
	} // swing
} // javax