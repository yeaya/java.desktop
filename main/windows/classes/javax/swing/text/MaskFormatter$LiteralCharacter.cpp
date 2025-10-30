#include <javax/swing/text/MaskFormatter$LiteralCharacter.h>

#include <javax/swing/text/MaskFormatter$MaskCharacter.h>
#include <javax/swing/text/MaskFormatter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MaskFormatter = ::javax::swing::text::MaskFormatter;
using $MaskFormatter$MaskCharacter = ::javax::swing::text::MaskFormatter$MaskCharacter;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _MaskFormatter$LiteralCharacter_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/MaskFormatter;", nullptr, $FINAL | $SYNTHETIC, $field(MaskFormatter$LiteralCharacter, this$0)},
	{"fixedChar", "C", nullptr, $PRIVATE, $field(MaskFormatter$LiteralCharacter, fixedChar)},
	{}
};

$MethodInfo _MaskFormatter$LiteralCharacter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/MaskFormatter;C)V", nullptr, $PUBLIC, $method(static_cast<void(MaskFormatter$LiteralCharacter::*)($MaskFormatter*,char16_t)>(&MaskFormatter$LiteralCharacter::init$))},
	{"getChar", "(C)C", nullptr, $PUBLIC},
	{"isLiteral", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MaskFormatter$LiteralCharacter_InnerClassesInfo_[] = {
	{"javax.swing.text.MaskFormatter$LiteralCharacter", "javax.swing.text.MaskFormatter", "LiteralCharacter", $PRIVATE},
	{"javax.swing.text.MaskFormatter$MaskCharacter", "javax.swing.text.MaskFormatter", "MaskCharacter", $PRIVATE},
	{}
};

$ClassInfo _MaskFormatter$LiteralCharacter_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.MaskFormatter$LiteralCharacter",
	"javax.swing.text.MaskFormatter$MaskCharacter",
	nullptr,
	_MaskFormatter$LiteralCharacter_FieldInfo_,
	_MaskFormatter$LiteralCharacter_MethodInfo_,
	nullptr,
	nullptr,
	_MaskFormatter$LiteralCharacter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.MaskFormatter"
};

$Object* allocate$MaskFormatter$LiteralCharacter($Class* clazz) {
	return $of($alloc(MaskFormatter$LiteralCharacter));
}

void MaskFormatter$LiteralCharacter::init$($MaskFormatter* this$0, char16_t fixedChar) {
	$set(this, this$0, this$0);
	$MaskFormatter$MaskCharacter::init$(this$0);
	this->fixedChar = fixedChar;
}

bool MaskFormatter$LiteralCharacter::isLiteral() {
	return true;
}

char16_t MaskFormatter$LiteralCharacter::getChar(char16_t aChar) {
	return this->fixedChar;
}

MaskFormatter$LiteralCharacter::MaskFormatter$LiteralCharacter() {
}

$Class* MaskFormatter$LiteralCharacter::load$($String* name, bool initialize) {
	$loadClass(MaskFormatter$LiteralCharacter, name, initialize, &_MaskFormatter$LiteralCharacter_ClassInfo_, allocate$MaskFormatter$LiteralCharacter);
	return class$;
}

$Class* MaskFormatter$LiteralCharacter::class$ = nullptr;

		} // text
	} // swing
} // javax