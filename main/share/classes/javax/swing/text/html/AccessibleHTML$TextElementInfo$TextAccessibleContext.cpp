#include <javax/swing/text/html/AccessibleHTML$TextElementInfo$TextAccessibleContext.h>

#include <java/awt/Color.h>
#include <java/awt/Container.h>
#include <java/awt/Cursor.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/event/FocusListener.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/text/BreakIterator.h>
#include <java/text/CharacterIterator.h>
#include <java/util/Locale.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleComponent.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/accessibility/AccessibleStateSet.h>
#include <javax/accessibility/AccessibleText.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/PlainDocument.h>
#include <javax/swing/text/Segment.h>
#include <javax/swing/text/StyledDocument.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/html/AccessibleHTML$ElementInfo.h>
#include <javax/swing/text/html/AccessibleHTML$HTMLAccessibleContext.h>
#include <javax/swing/text/html/AccessibleHTML$TextElementInfo$TextAccessibleContext$IndexedSegment.h>
#include <javax/swing/text/html/AccessibleHTML$TextElementInfo.h>
#include <javax/swing/text/html/AccessibleHTML.h>
#include <jcpp.h>

#undef CHARACTER
#undef DONE
#undef SENTENCE
#undef TEXT
#undef WORD

using $Color = ::java::awt::Color;
using $Container = ::java::awt::Container;
using $Cursor = ::java::awt::Cursor;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $FocusListener = ::java::awt::event::FocusListener;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BreakIterator = ::java::text::BreakIterator;
using $CharacterIterator = ::java::text::CharacterIterator;
using $Locale = ::java::util::Locale;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleComponent = ::javax::accessibility::AccessibleComponent;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $AccessibleStateSet = ::javax::accessibility::AccessibleStateSet;
using $AccessibleText = ::javax::accessibility::AccessibleText;
using $JEditorPane = ::javax::swing::JEditorPane;
using $TextUI = ::javax::swing::plaf::TextUI;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $PlainDocument = ::javax::swing::text::PlainDocument;
using $Segment = ::javax::swing::text::Segment;
using $StyledDocument = ::javax::swing::text::StyledDocument;
using $View = ::javax::swing::text::View;
using $AccessibleHTML$ElementInfo = ::javax::swing::text::html::AccessibleHTML$ElementInfo;
using $AccessibleHTML$HTMLAccessibleContext = ::javax::swing::text::html::AccessibleHTML$HTMLAccessibleContext;
using $AccessibleHTML$TextElementInfo = ::javax::swing::text::html::AccessibleHTML$TextElementInfo;
using $AccessibleHTML$TextElementInfo$TextAccessibleContext$IndexedSegment = ::javax::swing::text::html::AccessibleHTML$TextElementInfo$TextAccessibleContext$IndexedSegment;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _AccessibleHTML$TextElementInfo$TextAccessibleContext_FieldInfo_[] = {
	{"this$1", "Ljavax/swing/text/html/AccessibleHTML$TextElementInfo;", nullptr, $FINAL | $SYNTHETIC, $field(AccessibleHTML$TextElementInfo$TextAccessibleContext, this$1)},
	{}
};

$MethodInfo _AccessibleHTML$TextElementInfo$TextAccessibleContext_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/text/html/AccessibleHTML$TextElementInfo;Ljavax/swing/text/html/AccessibleHTML$ElementInfo;)V", nullptr, $PUBLIC, $method(static_cast<void(AccessibleHTML$TextElementInfo$TextAccessibleContext::*)($AccessibleHTML$TextElementInfo*,$AccessibleHTML$ElementInfo*)>(&AccessibleHTML$TextElementInfo$TextAccessibleContext::init$))},
	{"addFocusListener", "(Ljava/awt/event/FocusListener;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"contains", "(Ljava/awt/Point;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getAccessibleAt", "(Ljava/awt/Point;)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getAccessibleChild", "(I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getAccessibleChildrenCount", "()I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getAccessibleComponent", "()Ljavax/accessibility/AccessibleComponent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getAccessibleDescription", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAccessibleIndexInParent", "()I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getAccessibleName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC},
	{"getAccessibleStateSet", "()Ljavax/accessibility/AccessibleStateSet;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getAccessibleText", "()Ljavax/accessibility/AccessibleText;", nullptr, $PUBLIC},
	{"getAfterIndex", "(II)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAtIndex", "(II)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAtIndex", "(III)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(AccessibleHTML$TextElementInfo$TextAccessibleContext::*)(int32_t,int32_t,int32_t)>(&AccessibleHTML$TextElementInfo$TextAccessibleContext::getAtIndex))},
	{"getBackground", "()Ljava/awt/Color;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getBeforeIndex", "(II)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getCaretPosition", "()I", nullptr, $PUBLIC},
	{"getCharCount", "()I", nullptr, $PUBLIC},
	{"getCharacterAttribute", "(I)Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC},
	{"getCharacterBounds", "(I)Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getCursor", "()Ljava/awt/Cursor;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getFont", "()Ljava/awt/Font;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getForeground", "()Ljava/awt/Color;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getIndexAtPoint", "(Ljava/awt/Point;)I", nullptr, $PUBLIC},
	{"getLocale", "()Ljava/util/Locale;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.awt.IllegalComponentStateException"},
	{"getLocation", "()Ljava/awt/Point;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getParagraphElement", "(I)Ljavax/swing/text/Element;", nullptr, $PRIVATE, $method(static_cast<$Element*(AccessibleHTML$TextElementInfo$TextAccessibleContext::*)(int32_t)>(&AccessibleHTML$TextElementInfo$TextAccessibleContext::getParagraphElement))},
	{"getParagraphElementText", "(I)Ljavax/swing/text/html/AccessibleHTML$TextElementInfo$TextAccessibleContext$IndexedSegment;", nullptr, $PRIVATE, $method(static_cast<$AccessibleHTML$TextElementInfo$TextAccessibleContext$IndexedSegment*(AccessibleHTML$TextElementInfo$TextAccessibleContext::*)(int32_t)>(&AccessibleHTML$TextElementInfo$TextAccessibleContext::getParagraphElementText)), "javax.swing.text.BadLocationException"},
	{"getSegmentAt", "(II)Ljavax/swing/text/html/AccessibleHTML$TextElementInfo$TextAccessibleContext$IndexedSegment;", nullptr, $PRIVATE, $method(static_cast<$AccessibleHTML$TextElementInfo$TextAccessibleContext$IndexedSegment*(AccessibleHTML$TextElementInfo$TextAccessibleContext::*)(int32_t,int32_t)>(&AccessibleHTML$TextElementInfo$TextAccessibleContext::getSegmentAt)), "javax.swing.text.BadLocationException"},
	{"getSelectedText", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSelectionEnd", "()I", nullptr, $PUBLIC},
	{"getSelectionStart", "()I", nullptr, $PUBLIC},
	{"getSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getText", "(II)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(AccessibleHTML$TextElementInfo$TextAccessibleContext::*)(int32_t,int32_t)>(&AccessibleHTML$TextElementInfo$TextAccessibleContext::getText)), "javax.swing.text.BadLocationException"},
	{"isEnabled", "()Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"isFocusTraversable", "()Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"isShowing", "()Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"isVisible", "()Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"removeFocusListener", "(Ljava/awt/event/FocusListener;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"requestFocus", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"setBounds", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"setCursor", "(Ljava/awt/Cursor;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"setEnabled", "(Z)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"setLocation", "(Ljava/awt/Point;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"setSize", "(Ljava/awt/Dimension;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"setVisible", "(Z)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AccessibleHTML$TextElementInfo$TextAccessibleContext_InnerClassesInfo_[] = {
	{"javax.swing.text.html.AccessibleHTML$TextElementInfo", "javax.swing.text.html.AccessibleHTML", "TextElementInfo", 0},
	{"javax.swing.text.html.AccessibleHTML$TextElementInfo$TextAccessibleContext", "javax.swing.text.html.AccessibleHTML$TextElementInfo", "TextAccessibleContext", $PUBLIC},
	{"javax.swing.text.html.AccessibleHTML$HTMLAccessibleContext", "javax.swing.text.html.AccessibleHTML", "HTMLAccessibleContext", $PROTECTED | $ABSTRACT},
	{"javax.swing.text.html.AccessibleHTML$TextElementInfo$TextAccessibleContext$IndexedSegment", "javax.swing.text.html.AccessibleHTML$TextElementInfo$TextAccessibleContext", "IndexedSegment", $PRIVATE},
	{}
};

$ClassInfo _AccessibleHTML$TextElementInfo$TextAccessibleContext_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.html.AccessibleHTML$TextElementInfo$TextAccessibleContext",
	"javax.swing.text.html.AccessibleHTML$HTMLAccessibleContext",
	"javax.accessibility.AccessibleText",
	_AccessibleHTML$TextElementInfo$TextAccessibleContext_FieldInfo_,
	_AccessibleHTML$TextElementInfo$TextAccessibleContext_MethodInfo_,
	nullptr,
	nullptr,
	_AccessibleHTML$TextElementInfo$TextAccessibleContext_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.AccessibleHTML"
};

$Object* allocate$AccessibleHTML$TextElementInfo$TextAccessibleContext($Class* clazz) {
	return $of($alloc(AccessibleHTML$TextElementInfo$TextAccessibleContext));
}

int32_t AccessibleHTML$TextElementInfo$TextAccessibleContext::hashCode() {
	 return this->$AccessibleHTML$HTMLAccessibleContext::hashCode();
}

bool AccessibleHTML$TextElementInfo$TextAccessibleContext::equals(Object$* arg0) {
	 return this->$AccessibleHTML$HTMLAccessibleContext::equals(arg0);
}

$Object* AccessibleHTML$TextElementInfo$TextAccessibleContext::clone() {
	 return this->$AccessibleHTML$HTMLAccessibleContext::clone();
}

$String* AccessibleHTML$TextElementInfo$TextAccessibleContext::toString() {
	 return this->$AccessibleHTML$HTMLAccessibleContext::toString();
}

void AccessibleHTML$TextElementInfo$TextAccessibleContext::finalize() {
	this->$AccessibleHTML$HTMLAccessibleContext::finalize();
}

void AccessibleHTML$TextElementInfo$TextAccessibleContext::init$($AccessibleHTML$TextElementInfo* this$1, $AccessibleHTML$ElementInfo* elementInfo) {
	$set(this, this$1, this$1);
	$AccessibleHTML$HTMLAccessibleContext::init$(this$1->this$0, elementInfo);
}

$AccessibleText* AccessibleHTML$TextElementInfo$TextAccessibleContext::getAccessibleText() {
	return this;
}

$String* AccessibleHTML$TextElementInfo$TextAccessibleContext::getAccessibleName() {
	if ($nc(this->this$1->this$0)->model != nullptr) {
		$init($Document);
		return $cast($String, $nc($nc(this->this$1->this$0)->model)->getProperty($Document::TitleProperty));
	} else {
		return nullptr;
	}
}

$String* AccessibleHTML$TextElementInfo$TextAccessibleContext::getAccessibleDescription() {
	return $nc($nc(this->this$1->this$0)->editor)->getContentType();
}

$AccessibleRole* AccessibleHTML$TextElementInfo$TextAccessibleContext::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::TEXT;
}

int32_t AccessibleHTML$TextElementInfo$TextAccessibleContext::getIndexAtPoint($Point* p) {
	$useLocalCurrentObjectStackCache();
	$var($View, v, this->this$1->getView());
	if (v != nullptr) {
		return v->viewToModel((float)$nc(p)->x, (float)p->y, $(getBounds()));
	} else {
		return -1;
	}
}

$Rectangle* AccessibleHTML$TextElementInfo$TextAccessibleContext::getCharacterBounds(int32_t i) {
	try {
		return $nc($($cast($TextUI, $nc($nc(this->this$1->this$0)->editor)->getUI())))->modelToView($nc(this->this$1->this$0)->editor, i);
	} catch ($BadLocationException& e) {
		return nullptr;
	}
	$shouldNotReachHere();
}

int32_t AccessibleHTML$TextElementInfo$TextAccessibleContext::getCharCount() {
	if (this->this$1->validateIfNecessary()) {
		$var($Element, elem, $nc(this->elementInfo)->getElement());
		int32_t var$0 = $nc(elem)->getEndOffset();
		return var$0 - elem->getStartOffset();
	}
	return 0;
}

int32_t AccessibleHTML$TextElementInfo$TextAccessibleContext::getCaretPosition() {
	$useLocalCurrentObjectStackCache();
	$var($View, v, this->this$1->getView());
	if (v == nullptr) {
		return -1;
	}
	$var($Container, c, $nc(v)->getContainer());
	if (c == nullptr) {
		return -1;
	}
	if ($instanceOf($JTextComponent, c)) {
		return $nc(($cast($JTextComponent, c)))->getCaretPosition();
	} else {
		return -1;
	}
}

$String* AccessibleHTML$TextElementInfo$TextAccessibleContext::getAtIndex(int32_t part, int32_t index) {
	return getAtIndex(part, index, 0);
}

$String* AccessibleHTML$TextElementInfo$TextAccessibleContext::getAfterIndex(int32_t part, int32_t index) {
	return getAtIndex(part, index, 1);
}

$String* AccessibleHTML$TextElementInfo$TextAccessibleContext::getBeforeIndex(int32_t part, int32_t index) {
	return getAtIndex(part, index, -1);
}

$String* AccessibleHTML$TextElementInfo$TextAccessibleContext::getAtIndex(int32_t part, int32_t index, int32_t direction) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($AbstractDocument, $nc(this->this$1->this$0)->model)) {
		$nc(($cast($AbstractDocument, $nc(this->this$1->this$0)->model)))->readLock();
	}
	{
		$var($Throwable, var$0, nullptr);
		$var($String, var$2, nullptr);
		bool return$1 = false;
		try {
			try {
				if (index < 0 || index >= $nc($nc(this->this$1->this$0)->model)->getLength()) {
					$assign(var$2, nullptr);
					return$1 = true;
					goto $finally;
				}
				{
					$var($AccessibleHTML$TextElementInfo$TextAccessibleContext$IndexedSegment, seg, nullptr)
					switch (part) {
					case $AccessibleText::CHARACTER:
						{
							if (index + direction < $nc($nc(this->this$1->this$0)->model)->getLength() && index + direction >= 0) {
								$assign(var$2, $nc($nc(this->this$1->this$0)->model)->getText(index + direction, 1));
								return$1 = true;
								goto $finally;
							}
							break;
						}
					case $AccessibleText::WORD:
						{}
					case $AccessibleText::SENTENCE:
						{
							$assign(seg, getSegmentAt(part, index));
							if (seg != nullptr) {
								if (direction != 0) {
									int32_t next = 0;
									if (direction < 0) {
										next = seg->modelOffset - 1;
									} else {
										next = seg->modelOffset + direction * seg->count;
									}
									if (next >= 0 && next <= $nc($nc(this->this$1->this$0)->model)->getLength()) {
										$assign(seg, getSegmentAt(part, next));
									} else {
										$assign(seg, nullptr);
									}
								}
								if (seg != nullptr) {
									$assign(var$2, $new($String, seg->array, seg->offset, seg->count));
									return$1 = true;
									goto $finally;
								}
							}
							break;
						}
					default:
						{
							break;
						}
					}
				}
			} catch ($BadLocationException& e) {
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			if ($instanceOf($AbstractDocument, $nc(this->this$1->this$0)->model)) {
				$nc(($cast($AbstractDocument, $nc(this->this$1->this$0)->model)))->readUnlock();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	return nullptr;
}

$Element* AccessibleHTML$TextElementInfo$TextAccessibleContext::getParagraphElement(int32_t index) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($PlainDocument, $nc(this->this$1->this$0)->model)) {
		$var($PlainDocument, sdoc, $cast($PlainDocument, $nc(this->this$1->this$0)->model));
		return $nc(sdoc)->getParagraphElement(index);
	} else if ($instanceOf($StyledDocument, $nc(this->this$1->this$0)->model)) {
		$var($StyledDocument, sdoc, $cast($StyledDocument, $nc(this->this$1->this$0)->model));
		return $nc(sdoc)->getParagraphElement(index);
	} else {
		$var($Element, para, nullptr);
		for ($assign(para, $nc($nc(this->this$1->this$0)->model)->getDefaultRootElement()); !$nc(para)->isLeaf();) {
			int32_t pos = $nc(para)->getElementIndex(index);
			$assign(para, para->getElement(pos));
		}
		if (para == nullptr) {
			return nullptr;
		}
		return $nc(para)->getParentElement();
	}
}

$AccessibleHTML$TextElementInfo$TextAccessibleContext$IndexedSegment* AccessibleHTML$TextElementInfo$TextAccessibleContext::getParagraphElementText(int32_t index) {
	$useLocalCurrentObjectStackCache();
	$var($Element, para, getParagraphElement(index));
	if (para != nullptr) {
		$var($AccessibleHTML$TextElementInfo$TextAccessibleContext$IndexedSegment, segment, $new($AccessibleHTML$TextElementInfo$TextAccessibleContext$IndexedSegment, this));
		try {
			int32_t var$0 = para->getEndOffset();
			int32_t length = var$0 - para->getStartOffset();
			$nc($nc(this->this$1->this$0)->model)->getText(para->getStartOffset(), length, segment);
		} catch ($BadLocationException& e) {
			return nullptr;
		}
		segment->modelOffset = para->getStartOffset();
		return segment;
	}
	return nullptr;
}

$AccessibleHTML$TextElementInfo$TextAccessibleContext$IndexedSegment* AccessibleHTML$TextElementInfo$TextAccessibleContext::getSegmentAt(int32_t part, int32_t index) {
	$useLocalCurrentObjectStackCache();
	$var($AccessibleHTML$TextElementInfo$TextAccessibleContext$IndexedSegment, seg, getParagraphElementText(index));
	if (seg == nullptr) {
		return nullptr;
	}
	$var($BreakIterator, iterator, nullptr);
	switch (part) {
	case $AccessibleText::WORD:
		{
			$assign(iterator, $BreakIterator::getWordInstance($(getLocale())));
			break;
		}
	case $AccessibleText::SENTENCE:
		{
			$assign(iterator, $BreakIterator::getSentenceInstance($(getLocale())));
			break;
		}
	default:
		{
			return nullptr;
		}
	}
	$nc(seg)->first();
	$nc(iterator)->setText(static_cast<$CharacterIterator*>(seg));
	int32_t end = iterator->following(index - seg->modelOffset + seg->offset);
	if (end == $BreakIterator::DONE) {
		return nullptr;
	}
	if (end > seg->offset + seg->count) {
		return nullptr;
	}
	int32_t begin = iterator->previous();
	if (begin == $BreakIterator::DONE || begin >= seg->offset + seg->count) {
		return nullptr;
	}
	seg->modelOffset = seg->modelOffset + begin - seg->offset;
	seg->offset = begin;
	seg->count = end - begin;
	return seg;
}

$AttributeSet* AccessibleHTML$TextElementInfo$TextAccessibleContext::getCharacterAttribute(int32_t i) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($StyledDocument, $nc(this->this$1->this$0)->model)) {
		$var($StyledDocument, doc, $cast($StyledDocument, $nc(this->this$1->this$0)->model));
		$var($Element, elem, $nc(doc)->getCharacterElement(i));
		if (elem != nullptr) {
			return elem->getAttributes();
		}
	}
	return nullptr;
}

int32_t AccessibleHTML$TextElementInfo$TextAccessibleContext::getSelectionStart() {
	return $nc($nc(this->this$1->this$0)->editor)->getSelectionStart();
}

int32_t AccessibleHTML$TextElementInfo$TextAccessibleContext::getSelectionEnd() {
	return $nc($nc(this->this$1->this$0)->editor)->getSelectionEnd();
}

$String* AccessibleHTML$TextElementInfo$TextAccessibleContext::getSelectedText() {
	return $nc($nc(this->this$1->this$0)->editor)->getSelectedText();
}

$String* AccessibleHTML$TextElementInfo$TextAccessibleContext::getText(int32_t offset, int32_t length) {
	if ($nc(this->this$1->this$0)->model != nullptr && $instanceOf($StyledDocument, $nc(this->this$1->this$0)->model)) {
		$var($StyledDocument, doc, $cast($StyledDocument, $nc(this->this$1->this$0)->model));
		return $nc($nc(this->this$1->this$0)->model)->getText(offset, length);
	} else {
		return nullptr;
	}
}

void AccessibleHTML$TextElementInfo$TextAccessibleContext::removeFocusListener($FocusListener* l) {
	$AccessibleHTML$HTMLAccessibleContext::removeFocusListener(l);
}

void AccessibleHTML$TextElementInfo$TextAccessibleContext::addFocusListener($FocusListener* l) {
	$AccessibleHTML$HTMLAccessibleContext::addFocusListener(l);
}

void AccessibleHTML$TextElementInfo$TextAccessibleContext::requestFocus() {
	$AccessibleHTML$HTMLAccessibleContext::requestFocus();
}

bool AccessibleHTML$TextElementInfo$TextAccessibleContext::isFocusTraversable() {
	return $AccessibleHTML$HTMLAccessibleContext::isFocusTraversable();
}

$Accessible* AccessibleHTML$TextElementInfo$TextAccessibleContext::getAccessibleAt($Point* p) {
	return $AccessibleHTML$HTMLAccessibleContext::getAccessibleAt(p);
}

void AccessibleHTML$TextElementInfo$TextAccessibleContext::setSize($Dimension* d) {
	$AccessibleHTML$HTMLAccessibleContext::setSize(d);
}

$Dimension* AccessibleHTML$TextElementInfo$TextAccessibleContext::getSize() {
	return $AccessibleHTML$HTMLAccessibleContext::getSize();
}

void AccessibleHTML$TextElementInfo$TextAccessibleContext::setBounds($Rectangle* r) {
	$AccessibleHTML$HTMLAccessibleContext::setBounds(r);
}

$Rectangle* AccessibleHTML$TextElementInfo$TextAccessibleContext::getBounds() {
	return $AccessibleHTML$HTMLAccessibleContext::getBounds();
}

void AccessibleHTML$TextElementInfo$TextAccessibleContext::setLocation($Point* p) {
	$AccessibleHTML$HTMLAccessibleContext::setLocation(p);
}

$Point* AccessibleHTML$TextElementInfo$TextAccessibleContext::getLocation() {
	return $AccessibleHTML$HTMLAccessibleContext::getLocation();
}

$Point* AccessibleHTML$TextElementInfo$TextAccessibleContext::getLocationOnScreen() {
	return $AccessibleHTML$HTMLAccessibleContext::getLocationOnScreen();
}

bool AccessibleHTML$TextElementInfo$TextAccessibleContext::contains($Point* p) {
	return $AccessibleHTML$HTMLAccessibleContext::contains(p);
}

bool AccessibleHTML$TextElementInfo$TextAccessibleContext::isShowing() {
	return $AccessibleHTML$HTMLAccessibleContext::isShowing();
}

void AccessibleHTML$TextElementInfo$TextAccessibleContext::setVisible(bool b) {
	$AccessibleHTML$HTMLAccessibleContext::setVisible(b);
}

bool AccessibleHTML$TextElementInfo$TextAccessibleContext::isVisible() {
	return $AccessibleHTML$HTMLAccessibleContext::isVisible();
}

void AccessibleHTML$TextElementInfo$TextAccessibleContext::setEnabled(bool b) {
	$AccessibleHTML$HTMLAccessibleContext::setEnabled(b);
}

bool AccessibleHTML$TextElementInfo$TextAccessibleContext::isEnabled() {
	return $AccessibleHTML$HTMLAccessibleContext::isEnabled();
}

$FontMetrics* AccessibleHTML$TextElementInfo$TextAccessibleContext::getFontMetrics($Font* f) {
	return $AccessibleHTML$HTMLAccessibleContext::getFontMetrics(f);
}

void AccessibleHTML$TextElementInfo$TextAccessibleContext::setFont($Font* f) {
	$AccessibleHTML$HTMLAccessibleContext::setFont(f);
}

$Font* AccessibleHTML$TextElementInfo$TextAccessibleContext::getFont() {
	return $AccessibleHTML$HTMLAccessibleContext::getFont();
}

void AccessibleHTML$TextElementInfo$TextAccessibleContext::setCursor($Cursor* cursor) {
	$AccessibleHTML$HTMLAccessibleContext::setCursor(cursor);
}

$Cursor* AccessibleHTML$TextElementInfo$TextAccessibleContext::getCursor() {
	return $AccessibleHTML$HTMLAccessibleContext::getCursor();
}

void AccessibleHTML$TextElementInfo$TextAccessibleContext::setForeground($Color* c) {
	$AccessibleHTML$HTMLAccessibleContext::setForeground(c);
}

$Color* AccessibleHTML$TextElementInfo$TextAccessibleContext::getForeground() {
	return $AccessibleHTML$HTMLAccessibleContext::getForeground();
}

void AccessibleHTML$TextElementInfo$TextAccessibleContext::setBackground($Color* c) {
	$AccessibleHTML$HTMLAccessibleContext::setBackground(c);
}

$Color* AccessibleHTML$TextElementInfo$TextAccessibleContext::getBackground() {
	return $AccessibleHTML$HTMLAccessibleContext::getBackground();
}

$AccessibleComponent* AccessibleHTML$TextElementInfo$TextAccessibleContext::getAccessibleComponent() {
	return $AccessibleHTML$HTMLAccessibleContext::getAccessibleComponent();
}

$Locale* AccessibleHTML$TextElementInfo$TextAccessibleContext::getLocale() {
	return $AccessibleHTML$HTMLAccessibleContext::getLocale();
}

$Accessible* AccessibleHTML$TextElementInfo$TextAccessibleContext::getAccessibleChild(int32_t i) {
	return $AccessibleHTML$HTMLAccessibleContext::getAccessibleChild(i);
}

int32_t AccessibleHTML$TextElementInfo$TextAccessibleContext::getAccessibleChildrenCount() {
	return $AccessibleHTML$HTMLAccessibleContext::getAccessibleChildrenCount();
}

int32_t AccessibleHTML$TextElementInfo$TextAccessibleContext::getAccessibleIndexInParent() {
	return $AccessibleHTML$HTMLAccessibleContext::getAccessibleIndexInParent();
}

$AccessibleStateSet* AccessibleHTML$TextElementInfo$TextAccessibleContext::getAccessibleStateSet() {
	return $AccessibleHTML$HTMLAccessibleContext::getAccessibleStateSet();
}

$AccessibleContext* AccessibleHTML$TextElementInfo$TextAccessibleContext::getAccessibleContext() {
	return $AccessibleHTML$HTMLAccessibleContext::getAccessibleContext();
}

AccessibleHTML$TextElementInfo$TextAccessibleContext::AccessibleHTML$TextElementInfo$TextAccessibleContext() {
}

$Class* AccessibleHTML$TextElementInfo$TextAccessibleContext::load$($String* name, bool initialize) {
	$loadClass(AccessibleHTML$TextElementInfo$TextAccessibleContext, name, initialize, &_AccessibleHTML$TextElementInfo$TextAccessibleContext_ClassInfo_, allocate$AccessibleHTML$TextElementInfo$TextAccessibleContext);
	return class$;
}

$Class* AccessibleHTML$TextElementInfo$TextAccessibleContext::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax