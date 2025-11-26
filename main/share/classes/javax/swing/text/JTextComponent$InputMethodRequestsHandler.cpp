#include <javax/swing/text/JTextComponent$InputMethodRequestsHandler.h>

#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/font/TextHitInfo.h>
#include <java/awt/im/InputMethodRequests.h>
#include <java/text/AttributedCharacterIterator$Attribute.h>
#include <java/text/AttributedCharacterIterator.h>
#include <java/text/AttributedString.h>
#include <javax/swing/event/DocumentEvent.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/Position.h>
#include <javax/swing/text/SimpleAttributeSet.h>
#include <jcpp.h>

using $AttributedCharacterIterator$AttributeArray = $Array<::java::text::AttributedCharacterIterator$Attribute>;
using $Component = ::java::awt::Component;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $TextHitInfo = ::java::awt::font::TextHitInfo;
using $InputMethodRequests = ::java::awt::im::InputMethodRequests;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributedCharacterIterator = ::java::text::AttributedCharacterIterator;
using $AttributedString = ::java::text::AttributedString;
using $DocumentEvent = ::javax::swing::event::DocumentEvent;
using $DocumentListener = ::javax::swing::event::DocumentListener;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Document = ::javax::swing::text::Document;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $Position = ::javax::swing::text::Position;
using $SimpleAttributeSet = ::javax::swing::text::SimpleAttributeSet;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _JTextComponent$InputMethodRequestsHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/JTextComponent;", nullptr, $FINAL | $SYNTHETIC, $field(JTextComponent$InputMethodRequestsHandler, this$0)},
	{}
};

$MethodInfo _JTextComponent$InputMethodRequestsHandler_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/text/JTextComponent;)V", nullptr, 0, $method(static_cast<void(JTextComponent$InputMethodRequestsHandler::*)($JTextComponent*)>(&JTextComponent$InputMethodRequestsHandler::init$))},
	{"cancelLatestCommittedText", "([Ljava/text/AttributedCharacterIterator$Attribute;)Ljava/text/AttributedCharacterIterator;", nullptr, $PUBLIC},
	{"changedUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC},
	{"getCommittedText", "(II[Ljava/text/AttributedCharacterIterator$Attribute;)Ljava/text/AttributedCharacterIterator;", nullptr, $PUBLIC},
	{"getCommittedTextLength", "()I", nullptr, $PUBLIC},
	{"getInsertPositionOffset", "()I", nullptr, $PUBLIC},
	{"getLocationOffset", "(II)Ljava/awt/font/TextHitInfo;", nullptr, $PUBLIC},
	{"getSelectedText", "([Ljava/text/AttributedCharacterIterator$Attribute;)Ljava/text/AttributedCharacterIterator;", nullptr, $PUBLIC},
	{"getTextLocation", "(Ljava/awt/font/TextHitInfo;)Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"insertUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC},
	{"removeUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JTextComponent$InputMethodRequestsHandler_InnerClassesInfo_[] = {
	{"javax.swing.text.JTextComponent$InputMethodRequestsHandler", "javax.swing.text.JTextComponent", "InputMethodRequestsHandler", 0},
	{}
};

$ClassInfo _JTextComponent$InputMethodRequestsHandler_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.JTextComponent$InputMethodRequestsHandler",
	"java.lang.Object",
	"java.awt.im.InputMethodRequests,javax.swing.event.DocumentListener",
	_JTextComponent$InputMethodRequestsHandler_FieldInfo_,
	_JTextComponent$InputMethodRequestsHandler_MethodInfo_,
	nullptr,
	nullptr,
	_JTextComponent$InputMethodRequestsHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.JTextComponent"
};

$Object* allocate$JTextComponent$InputMethodRequestsHandler($Class* clazz) {
	return $of($alloc(JTextComponent$InputMethodRequestsHandler));
}

int32_t JTextComponent$InputMethodRequestsHandler::hashCode() {
	 return this->$InputMethodRequests::hashCode();
}

bool JTextComponent$InputMethodRequestsHandler::equals(Object$* arg0) {
	 return this->$InputMethodRequests::equals(arg0);
}

$Object* JTextComponent$InputMethodRequestsHandler::clone() {
	 return this->$InputMethodRequests::clone();
}

$String* JTextComponent$InputMethodRequestsHandler::toString() {
	 return this->$InputMethodRequests::toString();
}

void JTextComponent$InputMethodRequestsHandler::finalize() {
	this->$InputMethodRequests::finalize();
}

void JTextComponent$InputMethodRequestsHandler::init$($JTextComponent* this$0) {
	$set(this, this$0, this$0);
}

$AttributedCharacterIterator* JTextComponent$InputMethodRequestsHandler::cancelLatestCommittedText($AttributedCharacterIterator$AttributeArray* attributes) {
	$useLocalCurrentObjectStackCache();
	$var($Document, doc, this->this$0->getDocument());
	if ((doc != nullptr) && (this->this$0->latestCommittedTextStart != nullptr) && (!$nc($of(this->this$0->latestCommittedTextStart))->equals(this->this$0->latestCommittedTextEnd))) {
		try {
			int32_t startIndex = $nc(this->this$0->latestCommittedTextStart)->getOffset();
			int32_t endIndex = $nc(this->this$0->latestCommittedTextEnd)->getOffset();
			$var($String, latestCommittedText, doc->getText(startIndex, endIndex - startIndex));
			doc->remove(startIndex, endIndex - startIndex);
			return $$new($AttributedString, latestCommittedText)->getIterator();
		} catch ($BadLocationException& ble) {
		}
	}
	return nullptr;
}

$AttributedCharacterIterator* JTextComponent$InputMethodRequestsHandler::getCommittedText(int32_t beginIndex, int32_t endIndex, $AttributedCharacterIterator$AttributeArray* attributes) {
	$useLocalCurrentObjectStackCache();
	int32_t composedStartIndex = 0;
	int32_t composedEndIndex = 0;
	if (this->this$0->composedTextExists()) {
		composedStartIndex = $nc(this->this$0->composedTextStart)->getOffset();
		composedEndIndex = $nc(this->this$0->composedTextEnd)->getOffset();
	}
	$var($String, committed, nullptr);
	try {
		if (beginIndex < composedStartIndex) {
			if (endIndex <= composedStartIndex) {
				$assign(committed, this->this$0->getText(beginIndex, endIndex - beginIndex));
			} else {
				int32_t firstPartLength = composedStartIndex - beginIndex;
				$var($String, var$0, $(this->this$0->getText(beginIndex, firstPartLength)));
				$assign(committed, $concat(var$0, $(this->this$0->getText(composedEndIndex, endIndex - beginIndex - firstPartLength))));
			}
		} else {
			$assign(committed, this->this$0->getText(beginIndex + (composedEndIndex - composedStartIndex), endIndex - beginIndex));
		}
	} catch ($BadLocationException& ble) {
		$throwNew($IllegalArgumentException, "Invalid range"_s);
	}
	return $$new($AttributedString, committed)->getIterator();
}

int32_t JTextComponent$InputMethodRequestsHandler::getCommittedTextLength() {
	$var($Document, doc, this->this$0->getDocument());
	int32_t length = 0;
	if (doc != nullptr) {
		length = doc->getLength();
		if (this->this$0->composedTextContent != nullptr) {
			if (this->this$0->composedTextEnd == nullptr || this->this$0->composedTextStart == nullptr) {
				length -= $nc(this->this$0->composedTextContent)->length();
			} else {
				int32_t var$0 = $nc(this->this$0->composedTextEnd)->getOffset();
				length -= var$0 - $nc(this->this$0->composedTextStart)->getOffset();
			}
		}
	}
	return length;
}

int32_t JTextComponent$InputMethodRequestsHandler::getInsertPositionOffset() {
	int32_t composedStartIndex = 0;
	int32_t composedEndIndex = 0;
	if (this->this$0->composedTextExists()) {
		composedStartIndex = $nc(this->this$0->composedTextStart)->getOffset();
		composedEndIndex = $nc(this->this$0->composedTextEnd)->getOffset();
	}
	int32_t caretIndex = this->this$0->getCaretPosition();
	if (caretIndex < composedStartIndex) {
		return caretIndex;
	} else if (caretIndex < composedEndIndex) {
		return composedStartIndex;
	} else {
		return caretIndex - (composedEndIndex - composedStartIndex);
	}
}

$TextHitInfo* JTextComponent$InputMethodRequestsHandler::getLocationOffset(int32_t x, int32_t y) {
	if (this->this$0->composedTextAttribute == nullptr) {
		return nullptr;
	} else {
		$var($Point, p, this->this$0->getLocationOnScreen());
		$nc(p)->x = x - p->x;
		p->y = y - p->y;
		int32_t pos = this->this$0->viewToModel(p);
		bool var$0 = (pos >= $nc(this->this$0->composedTextStart)->getOffset());
		if (var$0 && (pos <= $nc(this->this$0->composedTextEnd)->getOffset())) {
			return $TextHitInfo::leading(pos - $nc(this->this$0->composedTextStart)->getOffset());
		} else {
			return nullptr;
		}
	}
}

$Rectangle* JTextComponent$InputMethodRequestsHandler::getTextLocation($TextHitInfo* offset) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, r, nullptr);
	try {
		$assign(r, this->this$0->modelToView(this->this$0->getCaretPosition()));
		if (r != nullptr) {
			$var($Point, p, this->this$0->getLocationOnScreen());
			r->translate($nc(p)->x, p->y);
		}
	} catch ($BadLocationException& ble) {
		$assign(r, nullptr);
	}
	if (r == nullptr) {
		$assign(r, $new($Rectangle));
	}
	return r;
}

$AttributedCharacterIterator* JTextComponent$InputMethodRequestsHandler::getSelectedText($AttributedCharacterIterator$AttributeArray* attributes) {
	$useLocalCurrentObjectStackCache();
	$var($String, selection, this->this$0->getSelectedText());
	if (selection != nullptr) {
		return $$new($AttributedString, selection)->getIterator();
	} else {
		return nullptr;
	}
}

void JTextComponent$InputMethodRequestsHandler::changedUpdate($DocumentEvent* e) {
	$set(this->this$0, latestCommittedTextStart, ($set(this->this$0, latestCommittedTextEnd, nullptr)));
}

void JTextComponent$InputMethodRequestsHandler::insertUpdate($DocumentEvent* e) {
	$set(this->this$0, latestCommittedTextStart, ($set(this->this$0, latestCommittedTextEnd, nullptr)));
}

void JTextComponent$InputMethodRequestsHandler::removeUpdate($DocumentEvent* e) {
	$set(this->this$0, latestCommittedTextStart, ($set(this->this$0, latestCommittedTextEnd, nullptr)));
}

JTextComponent$InputMethodRequestsHandler::JTextComponent$InputMethodRequestsHandler() {
}

$Class* JTextComponent$InputMethodRequestsHandler::load$($String* name, bool initialize) {
	$loadClass(JTextComponent$InputMethodRequestsHandler, name, initialize, &_JTextComponent$InputMethodRequestsHandler_ClassInfo_, allocate$JTextComponent$InputMethodRequestsHandler);
	return class$;
}

$Class* JTextComponent$InputMethodRequestsHandler::class$ = nullptr;

		} // text
	} // swing
} // javax