#include <javax/swing/text/MaskFormatter$AlphaNumericCharacter.h>

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

$FieldInfo _MaskFormatter$AlphaNumericCharacter_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/MaskFormatter;", nullptr, $FINAL | $SYNTHETIC, $field(MaskFormatter$AlphaNumericCharacter, this$0)},
	{}
};

$MethodInfo _MaskFormatter$AlphaNumericCharacter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/MaskFormatter;)V", nullptr, $PRIVATE, $method(static_cast<void(MaskFormatter$AlphaNumericCharacter::*)($MaskFormatter*)>(&MaskFormatter$AlphaNumericCharacter::init$))},
	{"isValidCharacter", "(C)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MaskFormatter$AlphaNumericCharacter_InnerClassesInfo_[] = {
	{"javax.swing.text.MaskFormatter$AlphaNumericCharacter", "javax.swing.text.MaskFormatter", "AlphaNumericCharacter", $PRIVATE},
	{"javax.swing.text.MaskFormatter$MaskCharacter", "javax.swing.text.MaskFormatter", "MaskCharacter", $PRIVATE},
	{}
};

$ClassInfo _MaskFormatter$AlphaNumericCharacter_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.MaskFormatter$AlphaNumericCharacter",
	"javax.swing.text.MaskFormatter$MaskCharacter",
	nullptr,
	_MaskFormatter$AlphaNumericCharacter_FieldInfo_,
	_MaskFormatter$AlphaNumericCharacter_MethodInfo_,
	nullptr,
	nullptr,
	_MaskFormatter$AlphaNumericCharacter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.MaskFormatter"
};

$Object* allocate$MaskFormatter$AlphaNumericCharacter($Class* clazz) {
	return $of($alloc(MaskFormatter$AlphaNumericCharacter));
}

void MaskFormatter$AlphaNumericCharacter::init$($MaskFormatter* this$0) {
	$set(this, this$0, this$0);
	$MaskFormatter$MaskCharacter::init$(this$0);
}

bool MaskFormatter$AlphaNumericCharacter::isValidCharacter(char16_t aChar) {
	bool var$0 = $Character::isLetterOrDigit(aChar);
	return (var$0 && $MaskFormatter$MaskCharacter::isValidCharacter(aChar));
}

MaskFormatter$AlphaNumericCharacter::MaskFormatter$AlphaNumericCharacter() {
}

$Class* MaskFormatter$AlphaNumericCharacter::load$($String* name, bool initialize) {
	$loadClass(MaskFormatter$AlphaNumericCharacter, name, initialize, &_MaskFormatter$AlphaNumericCharacter_ClassInfo_, allocate$MaskFormatter$AlphaNumericCharacter);
	return class$;
}

$Class* MaskFormatter$AlphaNumericCharacter::class$ = nullptr;

		} // text
	} // swing
} // javax