#include <java/awt/TextComponent$AccessibleAWTTextComponent.h>

#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/TextComponent.h>
#include <java/awt/event/TextEvent.h>
#include <java/awt/event/TextListener.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/BreakIterator.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/accessibility/AccessibleState.h>
#include <javax/accessibility/AccessibleStateSet.h>
#include <javax/accessibility/AccessibleText.h>
#include <javax/swing/text/AttributeSet.h>
#include <jcpp.h>

#undef ACCESSIBLE_TEXT_PROPERTY
#undef CHARACTER
#undef DONE
#undef EDITABLE
#undef NEXT
#undef PREVIOUS
#undef SENTENCE
#undef TEXT
#undef WORD

using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $TextComponent = ::java::awt::TextComponent;
using $TextEvent = ::java::awt::event::TextEvent;
using $TextListener = ::java::awt::event::TextListener;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $BreakIterator = ::java::text::BreakIterator;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $AccessibleState = ::javax::accessibility::AccessibleState;
using $AccessibleStateSet = ::javax::accessibility::AccessibleStateSet;
using $AccessibleText = ::javax::accessibility::AccessibleText;
using $AttributeSet = ::javax::swing::text::AttributeSet;

namespace java {
	namespace awt {

$FieldInfo _TextComponent$AccessibleAWTTextComponent_FieldInfo_[] = {
	{"this$0", "Ljava/awt/TextComponent;", nullptr, $FINAL | $SYNTHETIC, $field(TextComponent$AccessibleAWTTextComponent, this$0)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TextComponent$AccessibleAWTTextComponent, serialVersionUID)},
	{"NEXT", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TextComponent$AccessibleAWTTextComponent, NEXT)},
	{"PREVIOUS", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TextComponent$AccessibleAWTTextComponent, PREVIOUS)},
	{}
};

$MethodInfo _TextComponent$AccessibleAWTTextComponent_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/TextComponent;)V", nullptr, $PUBLIC, $method(static_cast<void(TextComponent$AccessibleAWTTextComponent::*)($TextComponent*)>(&TextComponent$AccessibleAWTTextComponent::init$))},
	{"findWordLimit", "(ILjava/text/BreakIterator;ZLjava/lang/String;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(TextComponent$AccessibleAWTTextComponent::*)(int32_t,$BreakIterator*,bool,$String*)>(&TextComponent$AccessibleAWTTextComponent::findWordLimit))},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC},
	{"getAccessibleStateSet", "()Ljavax/accessibility/AccessibleStateSet;", nullptr, $PUBLIC},
	{"getAccessibleText", "()Ljavax/accessibility/AccessibleText;", nullptr, $PUBLIC},
	{"getAfterIndex", "(II)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAtIndex", "(II)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getBeforeIndex", "(II)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getCaretPosition", "()I", nullptr, $PUBLIC},
	{"getCharCount", "()I", nullptr, $PUBLIC},
	{"getCharacterAttribute", "(I)Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC},
	{"getCharacterBounds", "(I)Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getIndexAtPoint", "(Ljava/awt/Point;)I", nullptr, $PUBLIC},
	{"getSelectedText", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSelectionEnd", "()I", nullptr, $PUBLIC},
	{"getSelectionStart", "()I", nullptr, $PUBLIC},
	{"textValueChanged", "(Ljava/awt/event/TextEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TextComponent$AccessibleAWTTextComponent_InnerClassesInfo_[] = {
	{"java.awt.TextComponent$AccessibleAWTTextComponent", "java.awt.TextComponent", "AccessibleAWTTextComponent", $PROTECTED},
	{"java.awt.Component$AccessibleAWTComponent", "java.awt.Component", "AccessibleAWTComponent", $PROTECTED | $ABSTRACT},
	{}
};

$ClassInfo _TextComponent$AccessibleAWTTextComponent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.TextComponent$AccessibleAWTTextComponent",
	"java.awt.Component$AccessibleAWTComponent",
	"javax.accessibility.AccessibleText,java.awt.event.TextListener",
	_TextComponent$AccessibleAWTTextComponent_FieldInfo_,
	_TextComponent$AccessibleAWTTextComponent_MethodInfo_,
	nullptr,
	nullptr,
	_TextComponent$AccessibleAWTTextComponent_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.TextComponent"
};

$Object* allocate$TextComponent$AccessibleAWTTextComponent($Class* clazz) {
	return $of($alloc(TextComponent$AccessibleAWTTextComponent));
}

int32_t TextComponent$AccessibleAWTTextComponent::hashCode() {
	 return this->$Component$AccessibleAWTComponent::hashCode();
}

bool TextComponent$AccessibleAWTTextComponent::equals(Object$* arg0) {
	 return this->$Component$AccessibleAWTComponent::equals(arg0);
}

$Object* TextComponent$AccessibleAWTTextComponent::clone() {
	 return this->$Component$AccessibleAWTComponent::clone();
}

$String* TextComponent$AccessibleAWTTextComponent::toString() {
	 return this->$Component$AccessibleAWTComponent::toString();
}

void TextComponent$AccessibleAWTTextComponent::finalize() {
	this->$Component$AccessibleAWTComponent::finalize();
}

void TextComponent$AccessibleAWTTextComponent::init$($TextComponent* this$0) {
	$set(this, this$0, this$0);
	$Component$AccessibleAWTComponent::init$(this$0);
	this$0->addTextListener(this);
}

void TextComponent$AccessibleAWTTextComponent::textValueChanged($TextEvent* textEvent) {
	$var($Integer, cpos, $Integer::valueOf(this->this$0->getCaretPosition()));
	$init($AccessibleContext);
	firePropertyChange($AccessibleContext::ACCESSIBLE_TEXT_PROPERTY, nullptr, cpos);
}

$AccessibleStateSet* TextComponent$AccessibleAWTTextComponent::getAccessibleStateSet() {
	$var($AccessibleStateSet, states, $Component$AccessibleAWTComponent::getAccessibleStateSet());
	if (this->this$0->isEditable()) {
		$init($AccessibleState);
		$nc(states)->add($AccessibleState::EDITABLE);
	}
	return states;
}

$AccessibleRole* TextComponent$AccessibleAWTTextComponent::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::TEXT;
}

$AccessibleText* TextComponent$AccessibleAWTTextComponent::getAccessibleText() {
	return this;
}

int32_t TextComponent$AccessibleAWTTextComponent::getIndexAtPoint($Point* p) {
	return -1;
}

$Rectangle* TextComponent$AccessibleAWTTextComponent::getCharacterBounds(int32_t i) {
	return nullptr;
}

int32_t TextComponent$AccessibleAWTTextComponent::getCharCount() {
	return $nc($(this->this$0->getText()))->length();
}

int32_t TextComponent$AccessibleAWTTextComponent::getCaretPosition() {
	return this->this$0->getCaretPosition();
}

$AttributeSet* TextComponent$AccessibleAWTTextComponent::getCharacterAttribute(int32_t i) {
	return nullptr;
}

int32_t TextComponent$AccessibleAWTTextComponent::getSelectionStart() {
	return this->this$0->getSelectionStart();
}

int32_t TextComponent$AccessibleAWTTextComponent::getSelectionEnd() {
	return this->this$0->getSelectionEnd();
}

$String* TextComponent$AccessibleAWTTextComponent::getSelectedText() {
	$var($String, selText, this->this$0->getSelectedText());
	if (selText == nullptr || $nc(selText)->isEmpty()) {
		return nullptr;
	}
	return selText;
}

$String* TextComponent$AccessibleAWTTextComponent::getAtIndex(int32_t part, int32_t index) {
	if (index < 0 || index >= $nc($(this->this$0->getText()))->length()) {
		return nullptr;
	}
	switch (part) {
	case $AccessibleText::CHARACTER:
		{
			return $nc($(this->this$0->getText()))->substring(index, index + 1);
		}
	case $AccessibleText::WORD:
		{
			{
				$var($String, s, this->this$0->getText());
				$var($BreakIterator, words, $BreakIterator::getWordInstance());
				$nc(words)->setText(s);
				int32_t end = words->following(index);
				return $nc(s)->substring(words->previous(), end);
			}
		}
	case $AccessibleText::SENTENCE:
		{
			{
				$var($String, s, this->this$0->getText());
				$var($BreakIterator, sentence, $BreakIterator::getSentenceInstance());
				$nc(sentence)->setText(s);
				int32_t end = sentence->following(index);
				return $nc(s)->substring(sentence->previous(), end);
			}
		}
	default:
		{
			return nullptr;
		}
	}
}

int32_t TextComponent$AccessibleAWTTextComponent::findWordLimit(int32_t index, $BreakIterator* words, bool direction, $String* s) {
	int32_t last = (direction == TextComponent$AccessibleAWTTextComponent::NEXT) ? $nc(words)->following(index) : words->preceding(index);
	int32_t current = (direction == TextComponent$AccessibleAWTTextComponent::NEXT) ? words->next() : words->previous();
	while (current != $BreakIterator::DONE) {
		for (int32_t p = $Math::min(last, current); p < $Math::max(last, current); ++p) {
			if ($Character::isLetter($nc(s)->charAt(p))) {
				return last;
			}
		}
		last = current;
		current = (direction == TextComponent$AccessibleAWTTextComponent::NEXT) ? words->next() : words->previous();
	}
	return $BreakIterator::DONE;
}

$String* TextComponent$AccessibleAWTTextComponent::getAfterIndex(int32_t part, int32_t index) {
	if (index < 0 || index >= $nc($(this->this$0->getText()))->length()) {
		return nullptr;
	}
	switch (part) {
	case $AccessibleText::CHARACTER:
		{
			if (index + 1 >= $nc($(this->this$0->getText()))->length()) {
				return nullptr;
			}
			return $nc($(this->this$0->getText()))->substring(index + 1, index + 2);
		}
	case $AccessibleText::WORD:
		{
			{
				$var($String, s, this->this$0->getText());
				$var($BreakIterator, words, $BreakIterator::getWordInstance());
				$nc(words)->setText(s);
				int32_t start = findWordLimit(index, words, TextComponent$AccessibleAWTTextComponent::NEXT, s);
				if (start == $BreakIterator::DONE || start >= $nc(s)->length()) {
					return nullptr;
				}
				int32_t end = words->following(start);
				if (end == $BreakIterator::DONE || end >= $nc(s)->length()) {
					return nullptr;
				}
				return $nc(s)->substring(start, end);
			}
		}
	case $AccessibleText::SENTENCE:
		{
			{
				$var($String, s, this->this$0->getText());
				$var($BreakIterator, sentence, $BreakIterator::getSentenceInstance());
				$nc(sentence)->setText(s);
				int32_t start = sentence->following(index);
				if (start == $BreakIterator::DONE || start >= $nc(s)->length()) {
					return nullptr;
				}
				int32_t end = sentence->following(start);
				if (end == $BreakIterator::DONE || end >= $nc(s)->length()) {
					return nullptr;
				}
				return $nc(s)->substring(start, end);
			}
		}
	default:
		{
			return nullptr;
		}
	}
}

$String* TextComponent$AccessibleAWTTextComponent::getBeforeIndex(int32_t part, int32_t index) {
	if (index < 0 || index > $nc($(this->this$0->getText()))->length() - 1) {
		return nullptr;
	}
	switch (part) {
	case $AccessibleText::CHARACTER:
		{
			if (index == 0) {
				return nullptr;
			}
			return $nc($(this->this$0->getText()))->substring(index - 1, index);
		}
	case $AccessibleText::WORD:
		{
			{
				$var($String, s, this->this$0->getText());
				$var($BreakIterator, words, $BreakIterator::getWordInstance());
				$nc(words)->setText(s);
				int32_t end = findWordLimit(index, words, TextComponent$AccessibleAWTTextComponent::PREVIOUS, s);
				if (end == $BreakIterator::DONE) {
					return nullptr;
				}
				int32_t start = words->preceding(end);
				if (start == $BreakIterator::DONE) {
					return nullptr;
				}
				return $nc(s)->substring(start, end);
			}
		}
	case $AccessibleText::SENTENCE:
		{
			{
				$var($String, s, this->this$0->getText());
				$var($BreakIterator, sentence, $BreakIterator::getSentenceInstance());
				$nc(sentence)->setText(s);
				int32_t end = sentence->following(index);
				end = sentence->previous();
				int32_t start = sentence->previous();
				if (start == $BreakIterator::DONE) {
					return nullptr;
				}
				return $nc(s)->substring(start, end);
			}
		}
	default:
		{
			return nullptr;
		}
	}
}

TextComponent$AccessibleAWTTextComponent::TextComponent$AccessibleAWTTextComponent() {
}

$Class* TextComponent$AccessibleAWTTextComponent::load$($String* name, bool initialize) {
	$loadClass(TextComponent$AccessibleAWTTextComponent, name, initialize, &_TextComponent$AccessibleAWTTextComponent_ClassInfo_, allocate$TextComponent$AccessibleAWTTextComponent);
	return class$;
}

$Class* TextComponent$AccessibleAWTTextComponent::class$ = nullptr;

	} // awt
} // java