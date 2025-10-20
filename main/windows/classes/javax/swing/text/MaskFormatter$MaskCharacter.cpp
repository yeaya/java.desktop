#include <javax/swing/text/MaskFormatter$MaskCharacter.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/ParseException.h>
#include <javax/swing/text/MaskFormatter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ParseException = ::java::text::ParseException;
using $MaskFormatter = ::javax::swing::text::MaskFormatter;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _MaskFormatter$MaskCharacter_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/MaskFormatter;", nullptr, $FINAL | $SYNTHETIC, $field(MaskFormatter$MaskCharacter, this$0)},
	{}
};

$MethodInfo _MaskFormatter$MaskCharacter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/MaskFormatter;)V", nullptr, $PRIVATE, $method(static_cast<void(MaskFormatter$MaskCharacter::*)($MaskFormatter*)>(&MaskFormatter$MaskCharacter::init$))},
	{"append", "(Ljava/lang/StringBuilder;Ljava/lang/String;[ILjava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.text.ParseException"},
	{"getChar", "(C)C", nullptr, $PUBLIC},
	{"isLiteral", "()Z", nullptr, $PUBLIC},
	{"isValidCharacter", "(C)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MaskFormatter$MaskCharacter_InnerClassesInfo_[] = {
	{"javax.swing.text.MaskFormatter$MaskCharacter", "javax.swing.text.MaskFormatter", "MaskCharacter", $PRIVATE},
	{}
};

$ClassInfo _MaskFormatter$MaskCharacter_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.MaskFormatter$MaskCharacter",
	"java.lang.Object",
	nullptr,
	_MaskFormatter$MaskCharacter_FieldInfo_,
	_MaskFormatter$MaskCharacter_MethodInfo_,
	nullptr,
	nullptr,
	_MaskFormatter$MaskCharacter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.MaskFormatter"
};

$Object* allocate$MaskFormatter$MaskCharacter($Class* clazz) {
	return $of($alloc(MaskFormatter$MaskCharacter));
}

void MaskFormatter$MaskCharacter::init$($MaskFormatter* this$0) {
	$set(this, this$0, this$0);
}

bool MaskFormatter$MaskCharacter::isLiteral() {
	return false;
}

bool MaskFormatter$MaskCharacter::isValidCharacter(char16_t aChar) {
	if (isLiteral()) {
		return (getChar(aChar) == aChar);
	}
	aChar = getChar(aChar);
	$var($String, filter, this->this$0->getValidCharacters());
	if (filter != nullptr && filter->indexOf((int32_t)aChar) == -1) {
		return false;
	}
	$assign(filter, this->this$0->getInvalidCharacters());
	if (filter != nullptr && filter->indexOf((int32_t)aChar) != -1) {
		return false;
	}
	return true;
}

char16_t MaskFormatter$MaskCharacter::getChar(char16_t aChar) {
	return aChar;
}

void MaskFormatter$MaskCharacter::append($StringBuilder* buff, $String* formatting, $ints* index, $String* placeholder) {
	$useLocalCurrentObjectStackCache();
	bool inString = $nc(index)->get(0) < $nc(formatting)->length();
	char16_t aChar = inString ? formatting->charAt(index->get(0)) : (char16_t)0;
	if (isLiteral()) {
		$nc(buff)->append(getChar(aChar));
		if (this->this$0->getValueContainsLiteralCharacters()) {
			if (inString && aChar != getChar(aChar)) {
				$throwNew($ParseException, $$str({"Invalid character: "_s, $$str(aChar)}), index->get(0));
			}
			index->set(0, index->get(0) + 1);
		}
	} else if (index->get(0) >= formatting->length()) {
		if (placeholder != nullptr && index->get(0) < placeholder->length()) {
			$nc(buff)->append(placeholder->charAt(index->get(0)));
		} else {
			$nc(buff)->append(this->this$0->getPlaceholderCharacter());
		}
		index->set(0, index->get(0) + 1);
	} else if (isValidCharacter(aChar)) {
		$nc(buff)->append(getChar(aChar));
		index->set(0, index->get(0) + 1);
	} else {
		$throwNew($ParseException, $$str({"Invalid character: "_s, $$str(aChar)}), index->get(0));
	}
}

MaskFormatter$MaskCharacter::MaskFormatter$MaskCharacter() {
}

$Class* MaskFormatter$MaskCharacter::load$($String* name, bool initialize) {
	$loadClass(MaskFormatter$MaskCharacter, name, initialize, &_MaskFormatter$MaskCharacter_ClassInfo_, allocate$MaskFormatter$MaskCharacter);
	return class$;
}

$Class* MaskFormatter$MaskCharacter::class$ = nullptr;

		} // text
	} // swing
} // javax