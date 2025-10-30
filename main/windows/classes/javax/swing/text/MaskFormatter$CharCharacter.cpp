#include <javax/swing/text/MaskFormatter$CharCharacter.h>

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

$FieldInfo _MaskFormatter$CharCharacter_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/MaskFormatter;", nullptr, $FINAL | $SYNTHETIC, $field(MaskFormatter$CharCharacter, this$0)},
	{}
};

$MethodInfo _MaskFormatter$CharCharacter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/MaskFormatter;)V", nullptr, $PRIVATE, $method(static_cast<void(MaskFormatter$CharCharacter::*)($MaskFormatter*)>(&MaskFormatter$CharCharacter::init$))},
	{"isValidCharacter", "(C)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MaskFormatter$CharCharacter_InnerClassesInfo_[] = {
	{"javax.swing.text.MaskFormatter$CharCharacter", "javax.swing.text.MaskFormatter", "CharCharacter", $PRIVATE},
	{"javax.swing.text.MaskFormatter$MaskCharacter", "javax.swing.text.MaskFormatter", "MaskCharacter", $PRIVATE},
	{}
};

$ClassInfo _MaskFormatter$CharCharacter_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.MaskFormatter$CharCharacter",
	"javax.swing.text.MaskFormatter$MaskCharacter",
	nullptr,
	_MaskFormatter$CharCharacter_FieldInfo_,
	_MaskFormatter$CharCharacter_MethodInfo_,
	nullptr,
	nullptr,
	_MaskFormatter$CharCharacter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.MaskFormatter"
};

$Object* allocate$MaskFormatter$CharCharacter($Class* clazz) {
	return $of($alloc(MaskFormatter$CharCharacter));
}

void MaskFormatter$CharCharacter::init$($MaskFormatter* this$0) {
	$set(this, this$0, this$0);
	$MaskFormatter$MaskCharacter::init$(this$0);
}

bool MaskFormatter$CharCharacter::isValidCharacter(char16_t aChar) {
	bool var$0 = $Character::isLetter(aChar);
	return (var$0 && $MaskFormatter$MaskCharacter::isValidCharacter(aChar));
}

MaskFormatter$CharCharacter::MaskFormatter$CharCharacter() {
}

$Class* MaskFormatter$CharCharacter::load$($String* name, bool initialize) {
	$loadClass(MaskFormatter$CharCharacter, name, initialize, &_MaskFormatter$CharCharacter_ClassInfo_, allocate$MaskFormatter$CharCharacter);
	return class$;
}

$Class* MaskFormatter$CharCharacter::class$ = nullptr;

		} // text
	} // swing
} // javax