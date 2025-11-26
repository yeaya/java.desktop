#include <javax/swing/text/MaskFormatter$HexCharacter.h>

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

$FieldInfo _MaskFormatter$HexCharacter_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/MaskFormatter;", nullptr, $FINAL | $SYNTHETIC, $field(MaskFormatter$HexCharacter, this$0)},
	{}
};

$MethodInfo _MaskFormatter$HexCharacter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/MaskFormatter;)V", nullptr, $PRIVATE, $method(static_cast<void(MaskFormatter$HexCharacter::*)($MaskFormatter*)>(&MaskFormatter$HexCharacter::init$))},
	{"getChar", "(C)C", nullptr, $PUBLIC},
	{"isValidCharacter", "(C)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MaskFormatter$HexCharacter_InnerClassesInfo_[] = {
	{"javax.swing.text.MaskFormatter$HexCharacter", "javax.swing.text.MaskFormatter", "HexCharacter", $PRIVATE},
	{"javax.swing.text.MaskFormatter$MaskCharacter", "javax.swing.text.MaskFormatter", "MaskCharacter", $PRIVATE},
	{}
};

$ClassInfo _MaskFormatter$HexCharacter_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.MaskFormatter$HexCharacter",
	"javax.swing.text.MaskFormatter$MaskCharacter",
	nullptr,
	_MaskFormatter$HexCharacter_FieldInfo_,
	_MaskFormatter$HexCharacter_MethodInfo_,
	nullptr,
	nullptr,
	_MaskFormatter$HexCharacter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.MaskFormatter"
};

$Object* allocate$MaskFormatter$HexCharacter($Class* clazz) {
	return $of($alloc(MaskFormatter$HexCharacter));
}

void MaskFormatter$HexCharacter::init$($MaskFormatter* this$0) {
	$set(this, this$0, this$0);
	$MaskFormatter$MaskCharacter::init$(this$0);
}

bool MaskFormatter$HexCharacter::isValidCharacter(char16_t aChar) {
	return ((aChar == u'0' || aChar == u'1' || aChar == u'2' || aChar == u'3' || aChar == u'4' || aChar == u'5' || aChar == u'6' || aChar == u'7' || aChar == u'8' || aChar == u'9' || aChar == u'a' || aChar == u'A' || aChar == u'b' || aChar == u'B' || aChar == u'c' || aChar == u'C' || aChar == u'd' || aChar == u'D' || aChar == u'e' || aChar == u'E' || aChar == u'f' || aChar == u'F') && $MaskFormatter$MaskCharacter::isValidCharacter(aChar));
}

char16_t MaskFormatter$HexCharacter::getChar(char16_t aChar) {
	if ($Character::isDigit(aChar)) {
		return aChar;
	}
	return $Character::toUpperCase(aChar);
}

MaskFormatter$HexCharacter::MaskFormatter$HexCharacter() {
}

$Class* MaskFormatter$HexCharacter::load$($String* name, bool initialize) {
	$loadClass(MaskFormatter$HexCharacter, name, initialize, &_MaskFormatter$HexCharacter_ClassInfo_, allocate$MaskFormatter$HexCharacter);
	return class$;
}

$Class* MaskFormatter$HexCharacter::class$ = nullptr;

		} // text
	} // swing
} // javax