#include <javax/swing/text/JTextComponent$AccessibleJTextComponent.h>

#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/EventQueue.h>
#include <java/awt/IllegalComponentStateException.h>
#include <java/awt/Insets.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ComponentAdapter.h>
#include <java/awt/event/ComponentListener.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Math.h>
#include <java/lang/Runnable.h>
#include <java/text/BreakIterator.h>
#include <java/text/CharacterIterator.h>
#include <java/util/Locale.h>
#include <javax/accessibility/AccessibleAction.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleEditableText.h>
#include <javax/accessibility/AccessibleExtendedText.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/accessibility/AccessibleState.h>
#include <javax/accessibility/AccessibleStateSet.h>
#include <javax/accessibility/AccessibleText.h>
#include <javax/accessibility/AccessibleTextSequence.h>
#include <javax/swing/Action.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/CaretEvent.h>
#include <javax/swing/event/CaretListener.h>
#include <javax/swing/event/DocumentEvent.h>
#include <javax/swing/event/DocumentListener.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/JTextComponent$AccessibleJTextComponent$1.h>
#include <javax/swing/text/JTextComponent$AccessibleJTextComponent$2.h>
#include <javax/swing/text/JTextComponent$AccessibleJTextComponent$3.h>
#include <javax/swing/text/JTextComponent$AccessibleJTextComponent$4.h>
#include <javax/swing/text/JTextComponent$AccessibleJTextComponent$IndexedSegment.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/PlainDocument.h>
#include <javax/swing/text/Position$Bias.h>
#include <javax/swing/text/Segment.h>
#include <javax/swing/text/StyledDocument.h>
#include <javax/swing/text/Utilities.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

#undef ACCESSIBLE_CARET_PROPERTY
#undef ACCESSIBLE_SELECTION_PROPERTY
#undef ACCESSIBLE_TEXT_PROPERTY
#undef ACTION_PERFORMED
#undef ATTRIBUTE_RUN
#undef CHARACTER
#undef DONE
#undef EDITABLE
#undef LINE
#undef MIN_VALUE
#undef NAME
#undef SENTENCE
#undef TEXT
#undef WORD

using $ActionArray = $Array<::javax::swing::Action>;
using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $Container = ::java::awt::Container;
using $EventQueue = ::java::awt::EventQueue;
using $IllegalComponentStateException = ::java::awt::IllegalComponentStateException;
using $Insets = ::java::awt::Insets;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ComponentAdapter = ::java::awt::event::ComponentAdapter;
using $ComponentListener = ::java::awt::event::ComponentListener;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $BreakIterator = ::java::text::BreakIterator;
using $CharacterIterator = ::java::text::CharacterIterator;
using $Locale = ::java::util::Locale;
using $AccessibleAction = ::javax::accessibility::AccessibleAction;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleEditableText = ::javax::accessibility::AccessibleEditableText;
using $AccessibleExtendedText = ::javax::accessibility::AccessibleExtendedText;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $AccessibleState = ::javax::accessibility::AccessibleState;
using $AccessibleStateSet = ::javax::accessibility::AccessibleStateSet;
using $AccessibleText = ::javax::accessibility::AccessibleText;
using $AccessibleTextSequence = ::javax::accessibility::AccessibleTextSequence;
using $Action = ::javax::swing::Action;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $CaretEvent = ::javax::swing::event::CaretEvent;
using $CaretListener = ::javax::swing::event::CaretListener;
using $DocumentEvent = ::javax::swing::event::DocumentEvent;
using $DocumentListener = ::javax::swing::event::DocumentListener;
using $TextUI = ::javax::swing::plaf::TextUI;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $JTextComponent$AccessibleJTextComponent$1 = ::javax::swing::text::JTextComponent$AccessibleJTextComponent$1;
using $JTextComponent$AccessibleJTextComponent$2 = ::javax::swing::text::JTextComponent$AccessibleJTextComponent$2;
using $JTextComponent$AccessibleJTextComponent$3 = ::javax::swing::text::JTextComponent$AccessibleJTextComponent$3;
using $JTextComponent$AccessibleJTextComponent$4 = ::javax::swing::text::JTextComponent$AccessibleJTextComponent$4;
using $JTextComponent$AccessibleJTextComponent$IndexedSegment = ::javax::swing::text::JTextComponent$AccessibleJTextComponent$IndexedSegment;
using $PlainDocument = ::javax::swing::text::PlainDocument;
using $Position$Bias = ::javax::swing::text::Position$Bias;
using $Segment = ::javax::swing::text::Segment;
using $StyledDocument = ::javax::swing::text::StyledDocument;
using $Utilities = ::javax::swing::text::Utilities;
using $View = ::javax::swing::text::View;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _JTextComponent$AccessibleJTextComponent_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/JTextComponent;", nullptr, $FINAL | $SYNTHETIC, $field(JTextComponent$AccessibleJTextComponent, this$0)},
	{"caretPos", "I", nullptr, 0, $field(JTextComponent$AccessibleJTextComponent, caretPos)},
	{"oldLocationOnScreen", "Ljava/awt/Point;", nullptr, 0, $field(JTextComponent$AccessibleJTextComponent, oldLocationOnScreen)},
	{}
};

$MethodInfo _JTextComponent$AccessibleJTextComponent_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/text/JTextComponent;)V", nullptr, $PUBLIC, $method(static_cast<void(JTextComponent$AccessibleJTextComponent::*)($JTextComponent*)>(&JTextComponent$AccessibleJTextComponent::init$))},
	{"caretUpdate", "(Ljavax/swing/event/CaretEvent;)V", nullptr, $PUBLIC},
	{"changedUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC},
	{"cut", "(II)V", nullptr, $PUBLIC},
	{"delete", "(II)V", nullptr, $PUBLIC},
	{"doAccessibleAction", "(I)Z", nullptr, $PUBLIC},
	{"getAccessibleAction", "()Ljavax/accessibility/AccessibleAction;", nullptr, $PUBLIC},
	{"getAccessibleActionCount", "()I", nullptr, $PUBLIC},
	{"getAccessibleActionDescription", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAccessibleEditableText", "()Ljavax/accessibility/AccessibleEditableText;", nullptr, $PUBLIC},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC},
	{"getAccessibleStateSet", "()Ljavax/accessibility/AccessibleStateSet;", nullptr, $PUBLIC},
	{"getAccessibleText", "()Ljavax/accessibility/AccessibleText;", nullptr, $PUBLIC},
	{"getAfterIndex", "(II)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAtIndex", "(II)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAtIndex", "(III)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(JTextComponent$AccessibleJTextComponent::*)(int32_t,int32_t,int32_t)>(&JTextComponent$AccessibleJTextComponent::getAtIndex))},
	{"getBeforeIndex", "(II)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getCaretPosition", "()I", nullptr, $PUBLIC},
	{"getCharCount", "()I", nullptr, $PUBLIC},
	{"getCharacterAttribute", "(I)Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC},
	{"getCharacterBounds", "(I)Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getIndexAtPoint", "(Ljava/awt/Point;)I", nullptr, $PUBLIC},
	{"getParagraphElement", "(I)Ljavax/swing/text/Element;", nullptr, $PRIVATE, $method(static_cast<$Element*(JTextComponent$AccessibleJTextComponent::*)(int32_t)>(&JTextComponent$AccessibleJTextComponent::getParagraphElement))},
	{"getParagraphElementText", "(I)Ljavax/swing/text/JTextComponent$AccessibleJTextComponent$IndexedSegment;", nullptr, $PRIVATE, $method(static_cast<$JTextComponent$AccessibleJTextComponent$IndexedSegment*(JTextComponent$AccessibleJTextComponent::*)(int32_t)>(&JTextComponent$AccessibleJTextComponent::getParagraphElementText)), "javax.swing.text.BadLocationException"},
	{"getRootEditorRect", "()Ljava/awt/Rectangle;", nullptr, 0},
	{"getRunEdge", "(II)I", nullptr, $PRIVATE, $method(static_cast<int32_t(JTextComponent$AccessibleJTextComponent::*)(int32_t,int32_t)>(&JTextComponent$AccessibleJTextComponent::getRunEdge)), "javax.swing.text.BadLocationException"},
	{"getSegmentAt", "(II)Ljavax/swing/text/JTextComponent$AccessibleJTextComponent$IndexedSegment;", nullptr, $PRIVATE, $method(static_cast<$JTextComponent$AccessibleJTextComponent$IndexedSegment*(JTextComponent$AccessibleJTextComponent::*)(int32_t,int32_t)>(&JTextComponent$AccessibleJTextComponent::getSegmentAt)), "javax.swing.text.BadLocationException"},
	{"getSelectedText", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSelectionEnd", "()I", nullptr, $PUBLIC},
	{"getSelectionStart", "()I", nullptr, $PUBLIC},
	{"getSequenceAtIndex", "(III)Ljavax/accessibility/AccessibleTextSequence;", nullptr, $PRIVATE, $method(static_cast<$AccessibleTextSequence*(JTextComponent$AccessibleJTextComponent::*)(int32_t,int32_t,int32_t)>(&JTextComponent$AccessibleJTextComponent::getSequenceAtIndex))},
	{"getTextBounds", "(II)Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getTextRange", "(II)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getTextSequenceAfter", "(II)Ljavax/accessibility/AccessibleTextSequence;", nullptr, $PUBLIC},
	{"getTextSequenceAt", "(II)Ljavax/accessibility/AccessibleTextSequence;", nullptr, $PUBLIC},
	{"getTextSequenceBefore", "(II)Ljavax/accessibility/AccessibleTextSequence;", nullptr, $PUBLIC},
	{"insertTextAtIndex", "(ILjava/lang/String;)V", nullptr, $PUBLIC},
	{"insertUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC},
	{"paste", "(I)V", nullptr, $PUBLIC},
	{"removeUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC},
	{"replaceText", "(IILjava/lang/String;)V", nullptr, $PUBLIC},
	{"selectText", "(II)V", nullptr, $PUBLIC},
	{"setAttributes", "(IILjavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC},
	{"setTextContents", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JTextComponent$AccessibleJTextComponent_InnerClassesInfo_[] = {
	{"javax.swing.text.JTextComponent$AccessibleJTextComponent", "javax.swing.text.JTextComponent", "AccessibleJTextComponent", $PUBLIC},
	{"javax.swing.JComponent$AccessibleJComponent", "javax.swing.JComponent", "AccessibleJComponent", $PUBLIC | $ABSTRACT},
	{"javax.swing.text.JTextComponent$AccessibleJTextComponent$IndexedSegment", "javax.swing.text.JTextComponent$AccessibleJTextComponent", "IndexedSegment", $PRIVATE},
	{"javax.swing.text.JTextComponent$AccessibleJTextComponent$4", nullptr, nullptr, 0},
	{"javax.swing.text.JTextComponent$AccessibleJTextComponent$3", nullptr, nullptr, 0},
	{"javax.swing.text.JTextComponent$AccessibleJTextComponent$2", nullptr, nullptr, 0},
	{"javax.swing.text.JTextComponent$AccessibleJTextComponent$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JTextComponent$AccessibleJTextComponent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.JTextComponent$AccessibleJTextComponent",
	"javax.swing.JComponent$AccessibleJComponent",
	"javax.swing.event.CaretListener,javax.swing.event.DocumentListener,javax.accessibility.AccessibleAction,javax.accessibility.AccessibleEditableText,javax.accessibility.AccessibleExtendedText",
	_JTextComponent$AccessibleJTextComponent_FieldInfo_,
	_JTextComponent$AccessibleJTextComponent_MethodInfo_,
	nullptr,
	nullptr,
	_JTextComponent$AccessibleJTextComponent_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.JTextComponent"
};

$Object* allocate$JTextComponent$AccessibleJTextComponent($Class* clazz) {
	return $of($alloc(JTextComponent$AccessibleJTextComponent));
}

int32_t JTextComponent$AccessibleJTextComponent::hashCode() {
	 return this->$JComponent$AccessibleJComponent::hashCode();
}

bool JTextComponent$AccessibleJTextComponent::equals(Object$* arg0) {
	 return this->$JComponent$AccessibleJComponent::equals(arg0);
}

$Object* JTextComponent$AccessibleJTextComponent::clone() {
	 return this->$JComponent$AccessibleJComponent::clone();
}

$String* JTextComponent$AccessibleJTextComponent::toString() {
	 return this->$JComponent$AccessibleJComponent::toString();
}

void JTextComponent$AccessibleJTextComponent::finalize() {
	this->$JComponent$AccessibleJComponent::finalize();
}

void JTextComponent$AccessibleJTextComponent::init$($JTextComponent* this$0) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$JComponent$AccessibleJComponent::init$(this$0);
	$var($Document, doc, this$0->getDocument());
	if (doc != nullptr) {
		doc->addDocumentListener(this);
	}
	this$0->addCaretListener(this);
	this->caretPos = getCaretPosition();
	try {
		$set(this, oldLocationOnScreen, getLocationOnScreen());
	} catch ($IllegalComponentStateException& iae) {
	}
	this$0->addComponentListener($$new($JTextComponent$AccessibleJTextComponent$1, this, this$0));
}

void JTextComponent$AccessibleJTextComponent::caretUpdate($CaretEvent* e) {
	$useLocalCurrentObjectStackCache();
	int32_t dot = $nc(e)->getDot();
	int32_t mark = e->getMark();
	if (this->caretPos != dot) {
		$init($AccessibleContext);
		$var($String, var$0, $AccessibleContext::ACCESSIBLE_CARET_PROPERTY);
		$var($Object, var$1, $of($Integer::valueOf(this->caretPos)));
		firePropertyChange(var$0, var$1, $($Integer::valueOf(dot)));
		this->caretPos = dot;
		try {
			$set(this, oldLocationOnScreen, getLocationOnScreen());
		} catch ($IllegalComponentStateException& iae) {
		}
	}
	if (mark != dot) {
		$init($AccessibleContext);
		firePropertyChange($AccessibleContext::ACCESSIBLE_SELECTION_PROPERTY, nullptr, $(getSelectedText()));
	}
}

void JTextComponent$AccessibleJTextComponent::insertUpdate($DocumentEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($Integer, pos, $Integer::valueOf($nc(e)->getOffset()));
	if ($SwingUtilities::isEventDispatchThread()) {
		$init($AccessibleContext);
		firePropertyChange($AccessibleContext::ACCESSIBLE_TEXT_PROPERTY, nullptr, pos);
	} else {
		$var($Runnable, doFire, $new($JTextComponent$AccessibleJTextComponent$2, this, pos));
		$SwingUtilities::invokeLater(doFire);
	}
}

void JTextComponent$AccessibleJTextComponent::removeUpdate($DocumentEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($Integer, pos, $Integer::valueOf($nc(e)->getOffset()));
	if ($SwingUtilities::isEventDispatchThread()) {
		$init($AccessibleContext);
		firePropertyChange($AccessibleContext::ACCESSIBLE_TEXT_PROPERTY, nullptr, pos);
	} else {
		$var($Runnable, doFire, $new($JTextComponent$AccessibleJTextComponent$3, this, pos));
		$SwingUtilities::invokeLater(doFire);
	}
}

void JTextComponent$AccessibleJTextComponent::changedUpdate($DocumentEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($Integer, pos, $Integer::valueOf($nc(e)->getOffset()));
	if ($SwingUtilities::isEventDispatchThread()) {
		$init($AccessibleContext);
		firePropertyChange($AccessibleContext::ACCESSIBLE_TEXT_PROPERTY, nullptr, pos);
	} else {
		$var($Runnable, doFire, $new($JTextComponent$AccessibleJTextComponent$4, this, pos));
		$SwingUtilities::invokeLater(doFire);
	}
}

$AccessibleStateSet* JTextComponent$AccessibleJTextComponent::getAccessibleStateSet() {
	$var($AccessibleStateSet, states, $JComponent$AccessibleJComponent::getAccessibleStateSet());
	if (this->this$0->isEditable()) {
		$init($AccessibleState);
		$nc(states)->add($AccessibleState::EDITABLE);
	}
	return states;
}

$AccessibleRole* JTextComponent$AccessibleJTextComponent::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::TEXT;
}

$AccessibleText* JTextComponent$AccessibleJTextComponent::getAccessibleText() {
	return this;
}

int32_t JTextComponent$AccessibleJTextComponent::getIndexAtPoint($Point* p) {
	if (p == nullptr) {
		return -1;
	}
	return this->this$0->viewToModel(p);
}

$Rectangle* JTextComponent$AccessibleJTextComponent::getRootEditorRect() {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, alloc, this->this$0->getBounds());
	if (($nc(alloc)->width > 0) && (alloc->height > 0)) {
		alloc->x = (alloc->y = 0);
		$var($Insets, insets, this->this$0->getInsets());
		alloc->x += $nc(insets)->left;
		alloc->y += insets->top;
		alloc->width -= insets->left + insets->right;
		alloc->height -= insets->top + insets->bottom;
		return alloc;
	}
	return nullptr;
}

$Rectangle* JTextComponent$AccessibleJTextComponent::getCharacterBounds(int32_t i) {
	$useLocalCurrentObjectStackCache();
	if (i < 0 || i > $nc(this->this$0->model)->getLength() - 1) {
		return nullptr;
	}
	$var($TextUI, ui, $cast($TextUI, this->this$0->getUI()));
	if (ui == nullptr) {
		return nullptr;
	}
	$var($Rectangle, rect, nullptr);
	$var($Rectangle, alloc, getRootEditorRect());
	if (alloc == nullptr) {
		return nullptr;
	}
	if ($instanceOf($AbstractDocument, this->this$0->model)) {
		$nc(($cast($AbstractDocument, this->this$0->model)))->readLock();
	}
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$var($View, rootView, $nc(ui)->getRootView(this->this$0));
				if (rootView != nullptr) {
					rootView->setSize((float)$nc(alloc)->width, (float)alloc->height);
					$init($Position$Bias);
					$var($Shape, bounds, rootView->modelToView(i, $Position$Bias::Forward, i + 1, $Position$Bias::Backward, alloc));
					$assign(rect, ($instanceOf($Rectangle, bounds)) ? $cast($Rectangle, bounds) : $nc(bounds)->getBounds());
				}
			} catch ($BadLocationException& e) {
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			if ($instanceOf($AbstractDocument, this->this$0->model)) {
				$nc(($cast($AbstractDocument, this->this$0->model)))->readUnlock();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return rect;
}

int32_t JTextComponent$AccessibleJTextComponent::getCharCount() {
	return $nc(this->this$0->model)->getLength();
}

int32_t JTextComponent$AccessibleJTextComponent::getCaretPosition() {
	return this->this$0->getCaretPosition();
}

$AttributeSet* JTextComponent$AccessibleJTextComponent::getCharacterAttribute(int32_t i) {
	$useLocalCurrentObjectStackCache();
	$var($Element, e, nullptr);
	if ($instanceOf($AbstractDocument, this->this$0->model)) {
		$nc(($cast($AbstractDocument, this->this$0->model)))->readLock();
	}
	{
		$var($Throwable, var$0, nullptr);
		try {
			for ($assign(e, $nc(this->this$0->model)->getDefaultRootElement()); !$nc(e)->isLeaf();) {
				int32_t index = $nc(e)->getElementIndex(i);
				$assign(e, e->getElement(index));
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			if ($instanceOf($AbstractDocument, this->this$0->model)) {
				$nc(($cast($AbstractDocument, this->this$0->model)))->readUnlock();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return $nc(e)->getAttributes();
}

int32_t JTextComponent$AccessibleJTextComponent::getSelectionStart() {
	return this->this$0->getSelectionStart();
}

int32_t JTextComponent$AccessibleJTextComponent::getSelectionEnd() {
	return this->this$0->getSelectionEnd();
}

$String* JTextComponent$AccessibleJTextComponent::getSelectedText() {
	return this->this$0->getSelectedText();
}

$String* JTextComponent$AccessibleJTextComponent::getAtIndex(int32_t part, int32_t index) {
	return getAtIndex(part, index, 0);
}

$String* JTextComponent$AccessibleJTextComponent::getAfterIndex(int32_t part, int32_t index) {
	return getAtIndex(part, index, 1);
}

$String* JTextComponent$AccessibleJTextComponent::getBeforeIndex(int32_t part, int32_t index) {
	return getAtIndex(part, index, -1);
}

$String* JTextComponent$AccessibleJTextComponent::getAtIndex(int32_t part, int32_t index, int32_t direction) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($AbstractDocument, this->this$0->model)) {
		$nc(($cast($AbstractDocument, this->this$0->model)))->readLock();
	}
	{
		$var($Throwable, var$0, nullptr);
		$var($String, var$2, nullptr);
		bool return$1 = false;
		try {
			try {
				if (index < 0 || index >= $nc(this->this$0->model)->getLength()) {
					$assign(var$2, nullptr);
					return$1 = true;
					goto $finally;
				}
				{
					$var($JTextComponent$AccessibleJTextComponent$IndexedSegment, seg, nullptr)
					switch (part) {
					case $AccessibleText::CHARACTER:
						{
							if (index + direction < $nc(this->this$0->model)->getLength() && index + direction >= 0) {
								$assign(var$2, $nc(this->this$0->model)->getText(index + direction, 1));
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
									if (next >= 0 && next <= $nc(this->this$0->model)->getLength()) {
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
			if ($instanceOf($AbstractDocument, this->this$0->model)) {
				$nc(($cast($AbstractDocument, this->this$0->model)))->readUnlock();
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

$Element* JTextComponent$AccessibleJTextComponent::getParagraphElement(int32_t index) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($PlainDocument, this->this$0->model)) {
		$var($PlainDocument, sdoc, $cast($PlainDocument, this->this$0->model));
		return $nc(sdoc)->getParagraphElement(index);
	} else if ($instanceOf($StyledDocument, this->this$0->model)) {
		$var($StyledDocument, sdoc, $cast($StyledDocument, this->this$0->model));
		return $nc(sdoc)->getParagraphElement(index);
	} else {
		$var($Element, para, nullptr);
		for ($assign(para, $nc(this->this$0->model)->getDefaultRootElement()); !$nc(para)->isLeaf();) {
			int32_t pos = $nc(para)->getElementIndex(index);
			$assign(para, para->getElement(pos));
		}
		if (para == nullptr) {
			return nullptr;
		}
		return $nc(para)->getParentElement();
	}
}

$JTextComponent$AccessibleJTextComponent$IndexedSegment* JTextComponent$AccessibleJTextComponent::getParagraphElementText(int32_t index) {
	$useLocalCurrentObjectStackCache();
	$var($Element, para, getParagraphElement(index));
	if (para != nullptr) {
		$var($JTextComponent$AccessibleJTextComponent$IndexedSegment, segment, $new($JTextComponent$AccessibleJTextComponent$IndexedSegment, this));
		try {
			int32_t var$0 = para->getEndOffset();
			int32_t length = var$0 - para->getStartOffset();
			$nc(this->this$0->model)->getText(para->getStartOffset(), length, segment);
		} catch ($BadLocationException& e) {
			return nullptr;
		}
		segment->modelOffset = para->getStartOffset();
		return segment;
	}
	return nullptr;
}

$JTextComponent$AccessibleJTextComponent$IndexedSegment* JTextComponent$AccessibleJTextComponent::getSegmentAt(int32_t part, int32_t index) {
	$useLocalCurrentObjectStackCache();
	$var($JTextComponent$AccessibleJTextComponent$IndexedSegment, seg, getParagraphElementText(index));
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

$AccessibleEditableText* JTextComponent$AccessibleJTextComponent::getAccessibleEditableText() {
	return this;
}

void JTextComponent$AccessibleJTextComponent::setTextContents($String* s) {
	this->this$0->setText(s);
}

void JTextComponent$AccessibleJTextComponent::insertTextAtIndex(int32_t index, $String* s) {
	$useLocalCurrentObjectStackCache();
	$var($Document, doc, this->this$0->getDocument());
	if (doc != nullptr) {
		try {
			if (s != nullptr && s->length() > 0) {
				bool composedTextSaved = this->this$0->saveComposedText(index);
				doc->insertString(index, s, nullptr);
				if (composedTextSaved) {
					this->this$0->restoreComposedText();
				}
			}
		} catch ($BadLocationException& e) {
			$nc($($UIManager::getLookAndFeel()))->provideErrorFeedback(this->this$0);
		}
	}
}

$String* JTextComponent$AccessibleJTextComponent::getTextRange(int32_t startIndex, int32_t endIndex) {
	$useLocalCurrentObjectStackCache();
	$var($String, txt, nullptr);
	int32_t p0 = $Math::min(startIndex, endIndex);
	int32_t p1 = $Math::max(startIndex, endIndex);
	if (p0 != p1) {
		try {
			$var($Document, doc, this->this$0->getDocument());
			$assign(txt, $nc(doc)->getText(p0, p1 - p0));
		} catch ($BadLocationException& e) {
			$throwNew($IllegalArgumentException, $(e->getMessage()));
		}
	}
	return txt;
}

void JTextComponent$AccessibleJTextComponent::delete$(int32_t startIndex, int32_t endIndex) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = this->this$0->isEditable();
	if (var$0 && isEnabled()) {
		try {
			int32_t p0 = $Math::min(startIndex, endIndex);
			int32_t p1 = $Math::max(startIndex, endIndex);
			if (p0 != p1) {
				$var($Document, doc, this->this$0->getDocument());
				$nc(doc)->remove(p0, p1 - p0);
			}
		} catch ($BadLocationException& e) {
		}
	} else {
		$nc($($UIManager::getLookAndFeel()))->provideErrorFeedback(this->this$0);
	}
}

void JTextComponent$AccessibleJTextComponent::cut(int32_t startIndex, int32_t endIndex) {
	selectText(startIndex, endIndex);
	this->this$0->cut();
}

void JTextComponent$AccessibleJTextComponent::paste(int32_t startIndex) {
	this->this$0->setCaretPosition(startIndex);
	this->this$0->paste();
}

void JTextComponent$AccessibleJTextComponent::replaceText(int32_t startIndex, int32_t endIndex, $String* s) {
	selectText(startIndex, endIndex);
	this->this$0->replaceSelection(s);
}

void JTextComponent$AccessibleJTextComponent::selectText(int32_t startIndex, int32_t endIndex) {
	this->this$0->select(startIndex, endIndex);
}

void JTextComponent$AccessibleJTextComponent::setAttributes(int32_t startIndex, int32_t endIndex, $AttributeSet* as) {
	$useLocalCurrentObjectStackCache();
	$var($Document, doc, this->this$0->getDocument());
	if (doc != nullptr && $instanceOf($StyledDocument, doc)) {
		$var($StyledDocument, sDoc, $cast($StyledDocument, doc));
		int32_t offset = startIndex;
		int32_t length = endIndex - startIndex;
		sDoc->setCharacterAttributes(offset, length, as, true);
	}
}

$AccessibleTextSequence* JTextComponent$AccessibleJTextComponent::getSequenceAtIndex(int32_t part, int32_t index, int32_t direction) {
	$useLocalCurrentObjectStackCache();
	if (index < 0 || index >= $nc(this->this$0->model)->getLength()) {
		return nullptr;
	}
	if (direction < -1 || direction > 1) {
		return nullptr;
	}
	{
		$var($AccessibleTextSequence, charSequence, nullptr)
		$var($AccessibleTextSequence, rangeSequence, nullptr)
		$var($AccessibleTextSequence, lineSequence, nullptr)
		int32_t attributeRunStartIndex = 0;
		int32_t attributeRunEndIndex = 0;
		$var($String, runText, nullptr)
		switch (part) {
		case $AccessibleText::CHARACTER:
			{
				if ($instanceOf($AbstractDocument, this->this$0->model)) {
					$nc(($cast($AbstractDocument, this->this$0->model)))->readLock();
				}
				$assign(charSequence, nullptr);
				{
					$var($Throwable, var$0, nullptr);
					try {
						try {
							if (index + direction < $nc(this->this$0->model)->getLength() && index + direction >= 0) {
								$assign(charSequence, $new($AccessibleTextSequence, index + direction, index + direction + 1, $($nc(this->this$0->model)->getText(index + direction, 1))));
							}
						} catch ($BadLocationException& e) {
						}
					} catch ($Throwable& var$1) {
						$assign(var$0, var$1);
					} /*finally*/ {
						if ($instanceOf($AbstractDocument, this->this$0->model)) {
							$nc(($cast($AbstractDocument, this->this$0->model)))->readUnlock();
						}
					}
					if (var$0 != nullptr) {
						$throw(var$0);
					}
				}
				return charSequence;
			}
		case $AccessibleText::WORD:
			{}
		case $AccessibleText::SENTENCE:
			{
				if ($instanceOf($AbstractDocument, this->this$0->model)) {
					$nc(($cast($AbstractDocument, this->this$0->model)))->readLock();
				}
				$assign(rangeSequence, nullptr);
				{
					$var($Throwable, var$2, nullptr);
					try {
						try {
							$var($JTextComponent$AccessibleJTextComponent$IndexedSegment, seg, getSegmentAt(part, index));
							if (seg != nullptr) {
								if (direction != 0) {
									int32_t next = 0;
									if (direction < 0) {
										next = seg->modelOffset - 1;
									} else {
										next = seg->modelOffset + seg->count;
									}
									if (next >= 0 && next <= $nc(this->this$0->model)->getLength()) {
										$assign(seg, getSegmentAt(part, next));
									} else {
										$assign(seg, nullptr);
									}
								}
								if (seg != nullptr && (seg->offset + seg->count) <= $nc(this->this$0->model)->getLength()) {
									$assign(rangeSequence, $new($AccessibleTextSequence, seg->offset, seg->offset + seg->count, $$new($String, seg->array, seg->offset, seg->count)));
								}
							}
						} catch ($BadLocationException& e) {
						}
					} catch ($Throwable& var$3) {
						$assign(var$2, var$3);
					} /*finally*/ {
						if ($instanceOf($AbstractDocument, this->this$0->model)) {
							$nc(($cast($AbstractDocument, this->this$0->model)))->readUnlock();
						}
					}
					if (var$2 != nullptr) {
						$throw(var$2);
					}
				}
				return rangeSequence;
			}
		case $AccessibleExtendedText::LINE:
			{
				$assign(lineSequence, nullptr);
				if ($instanceOf($AbstractDocument, this->this$0->model)) {
					$nc(($cast($AbstractDocument, this->this$0->model)))->readLock();
				}
				{
					$var($Throwable, var$4, nullptr);
					try {
						try {
							int32_t startIndex = $Utilities::getRowStart(this->this$0, index);
							int32_t endIndex = $Utilities::getRowEnd(this->this$0, index);
							if (startIndex >= 0 && endIndex >= startIndex) {
								if (direction == 0) {
									$assign(lineSequence, $new($AccessibleTextSequence, startIndex, endIndex, $($nc(this->this$0->model)->getText(startIndex, endIndex - startIndex + 1))));
								} else if (direction == -1 && startIndex > 0) {
									endIndex = $Utilities::getRowEnd(this->this$0, startIndex - 1);
									startIndex = $Utilities::getRowStart(this->this$0, startIndex - 1);
									if (startIndex >= 0 && endIndex >= startIndex) {
										$assign(lineSequence, $new($AccessibleTextSequence, startIndex, endIndex, $($nc(this->this$0->model)->getText(startIndex, endIndex - startIndex + 1))));
									}
								} else if (direction == 1 && endIndex < $nc(this->this$0->model)->getLength()) {
									startIndex = $Utilities::getRowStart(this->this$0, endIndex + 1);
									endIndex = $Utilities::getRowEnd(this->this$0, endIndex + 1);
									if (startIndex >= 0 && endIndex >= startIndex) {
										$assign(lineSequence, $new($AccessibleTextSequence, startIndex, endIndex, $($nc(this->this$0->model)->getText(startIndex, endIndex - startIndex + 1))));
									}
								}
							}
						} catch ($BadLocationException& e) {
						}
					} catch ($Throwable& var$5) {
						$assign(var$4, var$5);
					} /*finally*/ {
						if ($instanceOf($AbstractDocument, this->this$0->model)) {
							$nc(($cast($AbstractDocument, this->this$0->model)))->readUnlock();
						}
					}
					if (var$4 != nullptr) {
						$throw(var$4);
					}
				}
				return lineSequence;
			}
		case $AccessibleExtendedText::ATTRIBUTE_RUN:
			{
				$assign(runText, nullptr);
				if ($instanceOf($AbstractDocument, this->this$0->model)) {
					$nc(($cast($AbstractDocument, this->this$0->model)))->readLock();
				}
				{
					$var($Throwable, var$6, nullptr);
					$var($AccessibleTextSequence, var$8, nullptr);
					bool return$7 = false;
					try {
						try {
							attributeRunStartIndex = (attributeRunEndIndex = $Integer::MIN_VALUE);
							int32_t tempIndex = index;
							switch (direction) {
							case -1:
								{
									attributeRunEndIndex = getRunEdge(index, direction);
									tempIndex = attributeRunEndIndex - 1;
									break;
								}
							case 1:
								{
									attributeRunStartIndex = getRunEdge(index, direction);
									tempIndex = attributeRunStartIndex;
									break;
								}
							case 0:
								{
									break;
								}
							default:
								{
									$throwNew($AssertionError, direction);
								}
							}
							attributeRunStartIndex = (attributeRunStartIndex != $Integer::MIN_VALUE) ? attributeRunStartIndex : getRunEdge(tempIndex, -1);
							attributeRunEndIndex = (attributeRunEndIndex != $Integer::MIN_VALUE) ? attributeRunEndIndex : getRunEdge(tempIndex, 1);
							$assign(runText, $nc(this->this$0->model)->getText(attributeRunStartIndex, attributeRunEndIndex - attributeRunStartIndex));
						} catch ($BadLocationException& e) {
							$assign(var$8, nullptr);
							return$7 = true;
							goto $finally3;
						}
					} catch ($Throwable& var$9) {
						$assign(var$6, var$9);
					} $finally3: {
						if ($instanceOf($AbstractDocument, this->this$0->model)) {
							$nc(($cast($AbstractDocument, this->this$0->model)))->readUnlock();
						}
					}
					if (var$6 != nullptr) {
						$throw(var$6);
					}
					if (return$7) {
						return var$8;
					}
				}
				return $new($AccessibleTextSequence, attributeRunStartIndex, attributeRunEndIndex, runText);
			}
		default:
			{
				break;
			}
		}
	}
	return nullptr;
}

int32_t JTextComponent$AccessibleJTextComponent::getRunEdge(int32_t index, int32_t direction) {
	$useLocalCurrentObjectStackCache();
	if (index < 0 || index >= $nc(this->this$0->model)->getLength()) {
		$throwNew($BadLocationException, "Location out of bounds"_s, index);
	}
	$var($Element, indexElement, nullptr);
	int32_t elementIndex = -1;
	for ($assign(indexElement, $nc(this->this$0->model)->getDefaultRootElement()); !$nc(indexElement)->isLeaf();) {
		elementIndex = $nc(indexElement)->getElementIndex(index);
		$assign(indexElement, indexElement->getElement(elementIndex));
	}
	if (elementIndex == -1) {
		$throwNew($AssertionError, index);
	}
	$var($AttributeSet, indexAS, $nc(indexElement)->getAttributes());
	$var($Element, parent, indexElement->getParentElement());
	$var($Element, edgeElement, nullptr);
	{
		int32_t edgeElementIndex = 0;
		int32_t elementCount = 0;
		switch (direction) {
		case -1:
			{}
		case 1:
			{
				edgeElementIndex = elementIndex;
				elementCount = $nc(parent)->getElementCount();
				while ((edgeElementIndex + direction) > 0 && ((edgeElementIndex + direction) < elementCount) && $nc($($nc($(parent->getElement(edgeElementIndex + direction)))->getAttributes()))->isEqual(indexAS)) {
					edgeElementIndex += direction;
				}
				$assign(edgeElement, parent->getElement(edgeElementIndex));
				break;
			}
		default:
			{
				$throwNew($AssertionError, direction);
			}
		}
	}
	switch (direction) {
	case -1:
		{
			return $nc(edgeElement)->getStartOffset();
		}
	case 1:
		{
			return $nc(edgeElement)->getEndOffset();
		}
	default:
		{
			return $Integer::MIN_VALUE;
		}
	}
}

$AccessibleTextSequence* JTextComponent$AccessibleJTextComponent::getTextSequenceAt(int32_t part, int32_t index) {
	return getSequenceAtIndex(part, index, 0);
}

$AccessibleTextSequence* JTextComponent$AccessibleJTextComponent::getTextSequenceAfter(int32_t part, int32_t index) {
	return getSequenceAtIndex(part, index, 1);
}

$AccessibleTextSequence* JTextComponent$AccessibleJTextComponent::getTextSequenceBefore(int32_t part, int32_t index) {
	return getSequenceAtIndex(part, index, -1);
}

$Rectangle* JTextComponent$AccessibleJTextComponent::getTextBounds(int32_t startIndex, int32_t endIndex) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = startIndex < 0 || startIndex > $nc(this->this$0->model)->getLength() - 1 || endIndex < 0;
	if (var$0 || endIndex > $nc(this->this$0->model)->getLength() - 1 || startIndex > endIndex) {
		return nullptr;
	}
	$var($TextUI, ui, $cast($TextUI, this->this$0->getUI()));
	if (ui == nullptr) {
		return nullptr;
	}
	$var($Rectangle, rect, nullptr);
	$var($Rectangle, alloc, getRootEditorRect());
	if (alloc == nullptr) {
		return nullptr;
	}
	if ($instanceOf($AbstractDocument, this->this$0->model)) {
		$nc(($cast($AbstractDocument, this->this$0->model)))->readLock();
	}
	{
		$var($Throwable, var$1, nullptr);
		try {
			try {
				$var($View, rootView, $nc(ui)->getRootView(this->this$0));
				if (rootView != nullptr) {
					$init($Position$Bias);
					$var($Shape, bounds, rootView->modelToView(startIndex, $Position$Bias::Forward, endIndex, $Position$Bias::Backward, alloc));
					$assign(rect, ($instanceOf($Rectangle, bounds)) ? $cast($Rectangle, bounds) : $nc(bounds)->getBounds());
				}
			} catch ($BadLocationException& e) {
			}
		} catch ($Throwable& var$2) {
			$assign(var$1, var$2);
		} /*finally*/ {
			if ($instanceOf($AbstractDocument, this->this$0->model)) {
				$nc(($cast($AbstractDocument, this->this$0->model)))->readUnlock();
			}
		}
		if (var$1 != nullptr) {
			$throw(var$1);
		}
	}
	return rect;
}

$AccessibleAction* JTextComponent$AccessibleJTextComponent::getAccessibleAction() {
	return this;
}

int32_t JTextComponent$AccessibleJTextComponent::getAccessibleActionCount() {
	$var($ActionArray, actions, this->this$0->getActions());
	return $nc(actions)->length;
}

$String* JTextComponent$AccessibleJTextComponent::getAccessibleActionDescription(int32_t i) {
	$var($ActionArray, actions, this->this$0->getActions());
	if (i < 0 || i >= $nc(actions)->length) {
		return nullptr;
	}
	$init($Action);
	return $cast($String, $nc($nc(actions)->get(i))->getValue($Action::NAME));
}

bool JTextComponent$AccessibleJTextComponent::doAccessibleAction(int32_t i) {
	$useLocalCurrentObjectStackCache();
	$var($ActionArray, actions, this->this$0->getActions());
	if (i < 0 || i >= $nc(actions)->length) {
		return false;
	}
	$var($Object, var$0, $of(this->this$0));
	int64_t var$1 = $EventQueue::getMostRecentEventTime();
	$var($ActionEvent, ae, $new($ActionEvent, var$0, $ActionEvent::ACTION_PERFORMED, nullptr, var$1, this->this$0->getCurrentEventModifiers()));
	$nc($nc(actions)->get(i))->actionPerformed(ae);
	return true;
}

JTextComponent$AccessibleJTextComponent::JTextComponent$AccessibleJTextComponent() {
}

$Class* JTextComponent$AccessibleJTextComponent::load$($String* name, bool initialize) {
	$loadClass(JTextComponent$AccessibleJTextComponent, name, initialize, &_JTextComponent$AccessibleJTextComponent_ClassInfo_, allocate$JTextComponent$AccessibleJTextComponent);
	return class$;
}

$Class* JTextComponent$AccessibleJTextComponent::class$ = nullptr;

		} // text
	} // swing
} // javax