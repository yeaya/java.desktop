#include <JapaneseReadingAttributes$2.h>

#include <JapaneseReadingAttributes.h>
#include <java/awt/event/InputMethodEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/Annotation.h>
#include <java/text/AttributedCharacterIterator$Attribute.h>
#include <java/text/AttributedCharacterIterator.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef READING

using $JapaneseReadingAttributes = ::JapaneseReadingAttributes;
using $InputMethodEvent = ::java::awt::event::InputMethodEvent;
using $InputMethodListener = ::java::awt::event::InputMethodListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Annotation = ::java::text::Annotation;
using $AttributedCharacterIterator = ::java::text::AttributedCharacterIterator;
using $AttributedCharacterIterator$Attribute = ::java::text::AttributedCharacterIterator$Attribute;
using $CharacterIterator = ::java::text::CharacterIterator;
using $JTextField = ::javax::swing::JTextField;
using $JTextComponent = ::javax::swing::text::JTextComponent;

$MethodInfo _JapaneseReadingAttributes$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(JapaneseReadingAttributes$2::*)()>(&JapaneseReadingAttributes$2::init$))},
	{"caretPositionChanged", "(Ljava/awt/event/InputMethodEvent;)V", nullptr, $PUBLIC},
	{"inputMethodTextChanged", "(Ljava/awt/event/InputMethodEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JapaneseReadingAttributes$2_EnclosingMethodInfo_ = {
	"JapaneseReadingAttributes",
	"setupUI",
	"()V"
};

$InnerClassInfo _JapaneseReadingAttributes$2_InnerClassesInfo_[] = {
	{"JapaneseReadingAttributes$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JapaneseReadingAttributes$2_ClassInfo_ = {
	$ACC_SUPER,
	"JapaneseReadingAttributes$2",
	"java.lang.Object",
	"java.awt.event.InputMethodListener",
	nullptr,
	_JapaneseReadingAttributes$2_MethodInfo_,
	nullptr,
	&_JapaneseReadingAttributes$2_EnclosingMethodInfo_,
	_JapaneseReadingAttributes$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"JapaneseReadingAttributes"
};

$Object* allocate$JapaneseReadingAttributes$2($Class* clazz) {
	return $of($alloc(JapaneseReadingAttributes$2));
}

void JapaneseReadingAttributes$2::init$() {
}

void JapaneseReadingAttributes$2::caretPositionChanged($InputMethodEvent* event) {
}

void JapaneseReadingAttributes$2::inputMethodTextChanged($InputMethodEvent* event) {
	$var($AttributedCharacterIterator, itr, $nc(event)->getText());
	if (itr != nullptr) {
		int32_t toCopy = event->getCommittedCharacterCount();
		if (toCopy > 0) {
			itr->first();
			$init($JapaneseReadingAttributes);
			$var($StringBuilder, yomigana, $new($StringBuilder, $($nc($JapaneseReadingAttributes::textFieldReading)->getText())));
			while (toCopy-- > 0) {
				int32_t var$0 = itr->getIndex();
				$init($AttributedCharacterIterator$Attribute);
				if (var$0 == itr->getRunStart($AttributedCharacterIterator$Attribute::READING)) {
					$var($Annotation, annotatedText, $cast($Annotation, itr->getAttribute($AttributedCharacterIterator$Attribute::READING)));
					yomigana->append($($nc(annotatedText)->getValue()));
				}
				itr->next();
			}
			$nc($JapaneseReadingAttributes::textFieldReading)->setText($(yomigana->toString()));
		}
	}
}

JapaneseReadingAttributes$2::JapaneseReadingAttributes$2() {
}

$Class* JapaneseReadingAttributes$2::load$($String* name, bool initialize) {
	$loadClass(JapaneseReadingAttributes$2, name, initialize, &_JapaneseReadingAttributes$2_ClassInfo_, allocate$JapaneseReadingAttributes$2);
	return class$;
}

$Class* JapaneseReadingAttributes$2::class$ = nullptr;