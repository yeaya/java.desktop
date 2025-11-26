#include <javax/swing/AbstractButton$AccessibleAbstractButton.h>

#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Insets.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/geom/Rectangle2D$Float.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/lang/Number.h>
#include <java/text/BreakIterator.h>
#include <java/util/Enumeration.h>
#include <java/util/Locale.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleAction.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleExtendedComponent.h>
#include <javax/accessibility/AccessibleIcon.h>
#include <javax/accessibility/AccessibleKeyBinding.h>
#include <javax/accessibility/AccessibleRelation.h>
#include <javax/accessibility/AccessibleRelationSet.h>
#include <javax/accessibility/AccessibleState.h>
#include <javax/accessibility/AccessibleStateSet.h>
#include <javax/accessibility/AccessibleText.h>
#include <javax/accessibility/AccessibleValue.h>
#include <javax/swing/AbstractButton$AccessibleAbstractButton$ButtonKeyBinding.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonGroup.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/DefaultButtonModel.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/Position$Bias.h>
#include <javax/swing/text/StyledDocument.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

#undef ACCESSIBLE_NAME_PROPERTY
#undef ARMED
#undef CHARACTER
#undef CHECKED
#undef DONE
#undef FOCUSED
#undef MEMBER_OF
#undef PRESSED
#undef SENTENCE
#undef WORD

using $AccessibleIconArray = $Array<::javax::accessibility::AccessibleIcon>;
using $Position$BiasArray = $Array<::javax::swing::text::Position$Bias>;
using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Insets = ::java::awt::Insets;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Rectangle2D$Float = ::java::awt::geom::Rectangle2D$Float;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $BreakIterator = ::java::text::BreakIterator;
using $Enumeration = ::java::util::Enumeration;
using $Locale = ::java::util::Locale;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleAction = ::javax::accessibility::AccessibleAction;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleExtendedComponent = ::javax::accessibility::AccessibleExtendedComponent;
using $AccessibleIcon = ::javax::accessibility::AccessibleIcon;
using $AccessibleKeyBinding = ::javax::accessibility::AccessibleKeyBinding;
using $AccessibleRelation = ::javax::accessibility::AccessibleRelation;
using $AccessibleRelationSet = ::javax::accessibility::AccessibleRelationSet;
using $AccessibleState = ::javax::accessibility::AccessibleState;
using $AccessibleStateSet = ::javax::accessibility::AccessibleStateSet;
using $AccessibleText = ::javax::accessibility::AccessibleText;
using $AccessibleValue = ::javax::accessibility::AccessibleValue;
using $AbstractButton = ::javax::swing::AbstractButton;
using $AbstractButton$AccessibleAbstractButton$ButtonKeyBinding = ::javax::swing::AbstractButton$AccessibleAbstractButton$ButtonKeyBinding;
using $ButtonGroup = ::javax::swing::ButtonGroup;
using $ButtonModel = ::javax::swing::ButtonModel;
using $DefaultButtonModel = ::javax::swing::DefaultButtonModel;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $Position$Bias = ::javax::swing::text::Position$Bias;
using $StyledDocument = ::javax::swing::text::StyledDocument;
using $View = ::javax::swing::text::View;

namespace javax {
	namespace swing {

$FieldInfo _AbstractButton$AccessibleAbstractButton_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/AbstractButton;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractButton$AccessibleAbstractButton, this$0)},
	{}
};

$MethodInfo _AbstractButton$AccessibleAbstractButton_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED, $method(static_cast<void(AbstractButton$AccessibleAbstractButton::*)($AbstractButton*)>(&AbstractButton$AccessibleAbstractButton::init$))},
	{"doAccessibleAction", "(I)Z", nullptr, $PUBLIC},
	{"getAccessibleAction", "()Ljavax/accessibility/AccessibleAction;", nullptr, $PUBLIC},
	{"getAccessibleActionCount", "()I", nullptr, $PUBLIC},
	{"getAccessibleActionDescription", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAccessibleExtendedComponent", "()Ljavax/accessibility/AccessibleExtendedComponent;", nullptr, 0},
	{"getAccessibleIcon", "()[Ljavax/accessibility/AccessibleIcon;", nullptr, $PUBLIC},
	{"getAccessibleKeyBinding", "()Ljavax/accessibility/AccessibleKeyBinding;", nullptr, $PUBLIC},
	{"getAccessibleName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAccessibleRelationSet", "()Ljavax/accessibility/AccessibleRelationSet;", nullptr, $PUBLIC},
	{"getAccessibleStateSet", "()Ljavax/accessibility/AccessibleStateSet;", nullptr, $PUBLIC},
	{"getAccessibleText", "()Ljavax/accessibility/AccessibleText;", nullptr, $PUBLIC},
	{"getAccessibleValue", "()Ljavax/accessibility/AccessibleValue;", nullptr, $PUBLIC},
	{"getAfterIndex", "(II)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAtIndex", "(II)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getBeforeIndex", "(II)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getCaretPosition", "()I", nullptr, $PUBLIC},
	{"getCharCount", "()I", nullptr, $PUBLIC},
	{"getCharacterAttribute", "(I)Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC},
	{"getCharacterBounds", "(I)Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getCurrentAccessibleValue", "()Ljava/lang/Number;", nullptr, $PUBLIC},
	{"getIndexAtPoint", "(Ljava/awt/Point;)I", nullptr, $PUBLIC},
	{"getMaximumAccessibleValue", "()Ljava/lang/Number;", nullptr, $PUBLIC},
	{"getMinimumAccessibleValue", "()Ljava/lang/Number;", nullptr, $PUBLIC},
	{"getSelectedText", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSelectionEnd", "()I", nullptr, $PUBLIC},
	{"getSelectionStart", "()I", nullptr, $PUBLIC},
	{"getText", "(II)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(AbstractButton$AccessibleAbstractButton::*)(int32_t,int32_t)>(&AbstractButton$AccessibleAbstractButton::getText)), "javax.swing.text.BadLocationException"},
	{"getTextRectangle", "()Ljava/awt/Rectangle;", nullptr, $PRIVATE, $method(static_cast<$Rectangle*(AbstractButton$AccessibleAbstractButton::*)()>(&AbstractButton$AccessibleAbstractButton::getTextRectangle))},
	{"getTitledBorderText", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getToolTipText", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"setCurrentAccessibleValue", "(Ljava/lang/Number;)Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AbstractButton$AccessibleAbstractButton_InnerClassesInfo_[] = {
	{"javax.swing.AbstractButton$AccessibleAbstractButton", "javax.swing.AbstractButton", "AccessibleAbstractButton", $PROTECTED | $ABSTRACT},
	{"javax.swing.JComponent$AccessibleJComponent", "javax.swing.JComponent", "AccessibleJComponent", $PUBLIC | $ABSTRACT},
	{"javax.swing.AbstractButton$AccessibleAbstractButton$ButtonKeyBinding", "javax.swing.AbstractButton$AccessibleAbstractButton", "ButtonKeyBinding", 0},
	{}
};

$ClassInfo _AbstractButton$AccessibleAbstractButton_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.AbstractButton$AccessibleAbstractButton",
	"javax.swing.JComponent$AccessibleJComponent",
	"javax.accessibility.AccessibleAction,javax.accessibility.AccessibleValue,javax.accessibility.AccessibleText",
	_AbstractButton$AccessibleAbstractButton_FieldInfo_,
	_AbstractButton$AccessibleAbstractButton_MethodInfo_,
	nullptr,
	nullptr,
	_AbstractButton$AccessibleAbstractButton_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.AbstractButton"
};

$Object* allocate$AbstractButton$AccessibleAbstractButton($Class* clazz) {
	return $of($alloc(AbstractButton$AccessibleAbstractButton));
}

int32_t AbstractButton$AccessibleAbstractButton::hashCode() {
	 return this->$JComponent$AccessibleJComponent::hashCode();
}

bool AbstractButton$AccessibleAbstractButton::equals(Object$* arg0) {
	 return this->$JComponent$AccessibleJComponent::equals(arg0);
}

$Object* AbstractButton$AccessibleAbstractButton::clone() {
	 return this->$JComponent$AccessibleJComponent::clone();
}

$String* AbstractButton$AccessibleAbstractButton::toString() {
	 return this->$JComponent$AccessibleJComponent::toString();
}

void AbstractButton$AccessibleAbstractButton::finalize() {
	this->$JComponent$AccessibleJComponent::finalize();
}

void AbstractButton$AccessibleAbstractButton::init$($AbstractButton* this$0) {
	$set(this, this$0, this$0);
	$JComponent$AccessibleJComponent::init$(this$0);
}

$String* AbstractButton$AccessibleAbstractButton::getAccessibleName() {
	$var($String, name, this->accessibleName);
	if (name == nullptr) {
		$init($AccessibleContext);
		$assign(name, $cast($String, this->this$0->getClientProperty($AccessibleContext::ACCESSIBLE_NAME_PROPERTY)));
	}
	if (name == nullptr) {
		$assign(name, this->this$0->getText());
	}
	if (name == nullptr) {
		$assign(name, $JComponent$AccessibleJComponent::getAccessibleName());
	}
	return name;
}

$AccessibleIconArray* AbstractButton$AccessibleAbstractButton::getAccessibleIcon() {
	$useLocalCurrentObjectStackCache();
	$var($Icon, defaultIcon, this->this$0->getIcon());
	if ($instanceOf($Accessible, defaultIcon)) {
		$var($AccessibleContext, ac, $nc(($cast($Accessible, defaultIcon)))->getAccessibleContext());
		if (ac != nullptr && $instanceOf($AccessibleIcon, ac)) {
			return $new($AccessibleIconArray, {$cast($AccessibleIcon, ac)});
		}
	}
	return nullptr;
}

$AccessibleStateSet* AbstractButton$AccessibleAbstractButton::getAccessibleStateSet() {
	$useLocalCurrentObjectStackCache();
	$var($AccessibleStateSet, states, $JComponent$AccessibleJComponent::getAccessibleStateSet());
	if ($nc($(this->this$0->getModel()))->isArmed()) {
		$init($AccessibleState);
		$nc(states)->add($AccessibleState::ARMED);
	}
	if (this->this$0->isFocusOwner()) {
		$init($AccessibleState);
		$nc(states)->add($AccessibleState::FOCUSED);
	}
	if ($nc($(this->this$0->getModel()))->isPressed()) {
		$init($AccessibleState);
		$nc(states)->add($AccessibleState::PRESSED);
	}
	if (this->this$0->isSelected()) {
		$init($AccessibleState);
		$nc(states)->add($AccessibleState::CHECKED);
	}
	return states;
}

$AccessibleRelationSet* AbstractButton$AccessibleAbstractButton::getAccessibleRelationSet() {
	$useLocalCurrentObjectStackCache();
	$var($AccessibleRelationSet, relationSet, $JComponent$AccessibleJComponent::getAccessibleRelationSet());
	$init($AccessibleRelation);
	if (!$nc(relationSet)->contains($AccessibleRelation::MEMBER_OF)) {
		$var($ButtonModel, model, this->this$0->getModel());
		if (model != nullptr && $instanceOf($DefaultButtonModel, model)) {
			$var($ButtonGroup, group, $nc(($cast($DefaultButtonModel, model)))->getGroup());
			if (group != nullptr) {
				int32_t len = group->getButtonCount();
				$var($ObjectArray, target, $new($ObjectArray, len));
				$var($Enumeration, elem, group->getElements());
				for (int32_t i = 0; i < len; ++i) {
					if ($nc(elem)->hasMoreElements()) {
						target->set(i, $(elem->nextElement()));
					}
				}
				$var($AccessibleRelation, relation, $new($AccessibleRelation, $AccessibleRelation::MEMBER_OF));
				relation->setTarget(target);
				relationSet->add(relation);
			}
		}
	}
	return relationSet;
}

$AccessibleAction* AbstractButton$AccessibleAbstractButton::getAccessibleAction() {
	return this;
}

$AccessibleValue* AbstractButton$AccessibleAbstractButton::getAccessibleValue() {
	return this;
}

int32_t AbstractButton$AccessibleAbstractButton::getAccessibleActionCount() {
	return 1;
}

$String* AbstractButton$AccessibleAbstractButton::getAccessibleActionDescription(int32_t i) {
	if (i == 0) {
		return $UIManager::getString("AbstractButton.clickText"_s);
	} else {
		return nullptr;
	}
}

bool AbstractButton$AccessibleAbstractButton::doAccessibleAction(int32_t i) {
	if (i == 0) {
		this->this$0->doClick();
		return true;
	} else {
		return false;
	}
}

$Number* AbstractButton$AccessibleAbstractButton::getCurrentAccessibleValue() {
	if (this->this$0->isSelected()) {
		return $Integer::valueOf(1);
	} else {
		return $Integer::valueOf(0);
	}
}

bool AbstractButton$AccessibleAbstractButton::setCurrentAccessibleValue($Number* n) {
	if (n == nullptr) {
		return false;
	}
	int32_t i = $nc(n)->intValue();
	if (i == 0) {
		this->this$0->setSelected(false);
	} else {
		this->this$0->setSelected(true);
	}
	return true;
}

$Number* AbstractButton$AccessibleAbstractButton::getMinimumAccessibleValue() {
	return $Integer::valueOf(0);
}

$Number* AbstractButton$AccessibleAbstractButton::getMaximumAccessibleValue() {
	return $Integer::valueOf(1);
}

$AccessibleText* AbstractButton$AccessibleAbstractButton::getAccessibleText() {
	$var($View, view, $cast($View, this->this$0->getClientProperty("html"_s)));
	if (view != nullptr) {
		return this;
	} else {
		return nullptr;
	}
}

int32_t AbstractButton$AccessibleAbstractButton::getIndexAtPoint($Point* p) {
	$useLocalCurrentObjectStackCache();
	$var($View, view, $cast($View, this->this$0->getClientProperty("html"_s)));
	if (view != nullptr) {
		$var($Rectangle, r, getTextRectangle());
		if (r == nullptr) {
			return -1;
		}
		$var($Rectangle2D$Float, shape, $new($Rectangle2D$Float, (float)$nc(r)->x, (float)r->y, (float)r->width, (float)r->height));
		$var($Position$BiasArray, bias, $new($Position$BiasArray, 1));
		return view->viewToModel((float)$nc(p)->x, (float)p->y, shape, bias);
	} else {
		return -1;
	}
}

$Rectangle* AbstractButton$AccessibleAbstractButton::getCharacterBounds(int32_t i) {
	$useLocalCurrentObjectStackCache();
	$var($View, view, $cast($View, this->this$0->getClientProperty("html"_s)));
	if (view != nullptr) {
		$var($Rectangle, r, getTextRectangle());
		if (r == nullptr) {
			return nullptr;
		}
		$var($Rectangle2D$Float, shape, $new($Rectangle2D$Float, (float)$nc(r)->x, (float)r->y, (float)r->width, (float)r->height));
		try {
			$init($Position$Bias);
			$var($Shape, charShape, view->modelToView(i, shape, $Position$Bias::Forward));
			return $nc(charShape)->getBounds();
		} catch ($BadLocationException& e) {
			return nullptr;
		}
	} else {
		return nullptr;
	}
}

int32_t AbstractButton$AccessibleAbstractButton::getCharCount() {
	$useLocalCurrentObjectStackCache();
	$var($View, view, $cast($View, this->this$0->getClientProperty("html"_s)));
	if (view != nullptr) {
		$var($Document, d, view->getDocument());
		if ($instanceOf($StyledDocument, d)) {
			$var($StyledDocument, doc, $cast($StyledDocument, d));
			return $nc(doc)->getLength();
		}
	}
	return $nc($($nc($($AbstractButton::access$000(this->this$0)))->getAccessibleName()))->length();
}

int32_t AbstractButton$AccessibleAbstractButton::getCaretPosition() {
	return -1;
}

$String* AbstractButton$AccessibleAbstractButton::getAtIndex(int32_t part, int32_t index) {
	$useLocalCurrentObjectStackCache();
	if (index < 0 || index >= getCharCount()) {
		return nullptr;
	}
	switch (part) {
	case $AccessibleText::CHARACTER:
		{
			try {
				return getText(index, 1);
			} catch ($BadLocationException& e) {
				return nullptr;
			}
		}
	case $AccessibleText::WORD:
		{
			try {
				$var($String, s, getText(0, getCharCount()));
				$var($BreakIterator, words, $BreakIterator::getWordInstance($(getLocale())));
				$nc(words)->setText(s);
				int32_t end = words->following(index);
				return $nc(s)->substring(words->previous(), end);
			} catch ($BadLocationException& e) {
				return nullptr;
			}
		}
	case $AccessibleText::SENTENCE:
		{
			try {
				$var($String, s, getText(0, getCharCount()));
				$var($BreakIterator, sentence, $BreakIterator::getSentenceInstance($(getLocale())));
				$nc(sentence)->setText(s);
				int32_t end = sentence->following(index);
				return $nc(s)->substring(sentence->previous(), end);
			} catch ($BadLocationException& e) {
				return nullptr;
			}
		}
	default:
		{
			return nullptr;
		}
	}
}

$String* AbstractButton$AccessibleAbstractButton::getAfterIndex(int32_t part, int32_t index) {
	$useLocalCurrentObjectStackCache();
	if (index < 0 || index >= getCharCount()) {
		return nullptr;
	}
	switch (part) {
	case $AccessibleText::CHARACTER:
		{
			if (index + 1 >= getCharCount()) {
				return nullptr;
			}
			try {
				return getText(index + 1, 1);
			} catch ($BadLocationException& e) {
				return nullptr;
			}
		}
	case $AccessibleText::WORD:
		{
			try {
				$var($String, s, getText(0, getCharCount()));
				$var($BreakIterator, words, $BreakIterator::getWordInstance($(getLocale())));
				$nc(words)->setText(s);
				int32_t start = words->following(index);
				if (start == $BreakIterator::DONE || start >= $nc(s)->length()) {
					return nullptr;
				}
				int32_t end = words->following(start);
				if (end == $BreakIterator::DONE || end >= $nc(s)->length()) {
					return nullptr;
				}
				return $nc(s)->substring(start, end);
			} catch ($BadLocationException& e) {
				return nullptr;
			}
		}
	case $AccessibleText::SENTENCE:
		{
			try {
				$var($String, s, getText(0, getCharCount()));
				$var($BreakIterator, sentence, $BreakIterator::getSentenceInstance($(getLocale())));
				$nc(sentence)->setText(s);
				int32_t start = sentence->following(index);
				if (start == $BreakIterator::DONE || start > $nc(s)->length()) {
					return nullptr;
				}
				int32_t end = sentence->following(start);
				if (end == $BreakIterator::DONE || end > $nc(s)->length()) {
					return nullptr;
				}
				return $nc(s)->substring(start, end);
			} catch ($BadLocationException& e) {
				return nullptr;
			}
		}
	default:
		{
			return nullptr;
		}
	}
}

$String* AbstractButton$AccessibleAbstractButton::getBeforeIndex(int32_t part, int32_t index) {
	$useLocalCurrentObjectStackCache();
	if (index < 0 || index > getCharCount() - 1) {
		return nullptr;
	}
	switch (part) {
	case $AccessibleText::CHARACTER:
		{
			if (index == 0) {
				return nullptr;
			}
			try {
				return getText(index - 1, 1);
			} catch ($BadLocationException& e) {
				return nullptr;
			}
		}
	case $AccessibleText::WORD:
		{
			try {
				$var($String, s, getText(0, getCharCount()));
				$var($BreakIterator, words, $BreakIterator::getWordInstance($(getLocale())));
				$nc(words)->setText(s);
				int32_t end = words->following(index);
				end = words->previous();
				int32_t start = words->previous();
				if (start == $BreakIterator::DONE) {
					return nullptr;
				}
				return $nc(s)->substring(start, end);
			} catch ($BadLocationException& e) {
				return nullptr;
			}
		}
	case $AccessibleText::SENTENCE:
		{
			try {
				$var($String, s, getText(0, getCharCount()));
				$var($BreakIterator, sentence, $BreakIterator::getSentenceInstance($(getLocale())));
				$nc(sentence)->setText(s);
				int32_t end = sentence->following(index);
				end = sentence->previous();
				int32_t start = sentence->previous();
				if (start == $BreakIterator::DONE) {
					return nullptr;
				}
				return $nc(s)->substring(start, end);
			} catch ($BadLocationException& e) {
				return nullptr;
			}
		}
	default:
		{
			return nullptr;
		}
	}
}

$AttributeSet* AbstractButton$AccessibleAbstractButton::getCharacterAttribute(int32_t i) {
	$useLocalCurrentObjectStackCache();
	$var($View, view, $cast($View, this->this$0->getClientProperty("html"_s)));
	if (view != nullptr) {
		$var($Document, d, view->getDocument());
		if ($instanceOf($StyledDocument, d)) {
			$var($StyledDocument, doc, $cast($StyledDocument, d));
			$var($Element, elem, $nc(doc)->getCharacterElement(i));
			if (elem != nullptr) {
				return elem->getAttributes();
			}
		}
	}
	return nullptr;
}

int32_t AbstractButton$AccessibleAbstractButton::getSelectionStart() {
	return -1;
}

int32_t AbstractButton$AccessibleAbstractButton::getSelectionEnd() {
	return -1;
}

$String* AbstractButton$AccessibleAbstractButton::getSelectedText() {
	return nullptr;
}

$String* AbstractButton$AccessibleAbstractButton::getText(int32_t offset, int32_t length) {
	$useLocalCurrentObjectStackCache();
	$var($View, view, $cast($View, this->this$0->getClientProperty("html"_s)));
	if (view != nullptr) {
		$var($Document, d, view->getDocument());
		if ($instanceOf($StyledDocument, d)) {
			$var($StyledDocument, doc, $cast($StyledDocument, d));
			return $nc(doc)->getText(offset, length);
		}
	}
	return nullptr;
}

$Rectangle* AbstractButton$AccessibleAbstractButton::getTextRectangle() {
	$useLocalCurrentObjectStackCache();
	$var($String, text, this->this$0->getText());
	$var($Icon, icon, (this->this$0->isEnabled()) ? this->this$0->getIcon() : this->this$0->getDisabledIcon());
	if ((icon == nullptr) && (text == nullptr)) {
		return nullptr;
	}
	$var($Rectangle, paintIconR, $new($Rectangle));
	$var($Rectangle, paintTextR, $new($Rectangle));
	$var($Rectangle, paintViewR, $new($Rectangle));
	$var($Insets, paintViewInsets, $new($Insets, 0, 0, 0, 0));
	$assign(paintViewInsets, this->this$0->getInsets(paintViewInsets));
	paintViewR->x = $nc(paintViewInsets)->left;
	paintViewR->y = paintViewInsets->top;
	paintViewR->width = this->this$0->getWidth() - (paintViewInsets->left + paintViewInsets->right);
	paintViewR->height = this->this$0->getHeight() - (paintViewInsets->top + paintViewInsets->bottom);
	$var($JComponent, var$0, static_cast<$JComponent*>(this->this$0));
	$var($FontMetrics, var$1, getFontMetrics($(getFont())));
	$var($String, var$2, text);
	$var($Icon, var$3, icon);
	int32_t var$4 = this->this$0->getVerticalAlignment();
	int32_t var$5 = this->this$0->getHorizontalAlignment();
	int32_t var$6 = this->this$0->getVerticalTextPosition();
	$var($String, clippedText, $SwingUtilities::layoutCompoundLabel(var$0, var$1, var$2, var$3, var$4, var$5, var$6, this->this$0->getHorizontalTextPosition(), paintViewR, paintIconR, paintTextR, 0));
	return paintTextR;
}

$AccessibleExtendedComponent* AbstractButton$AccessibleAbstractButton::getAccessibleExtendedComponent() {
	return this;
}

$String* AbstractButton$AccessibleAbstractButton::getToolTipText() {
	return this->this$0->getToolTipText();
}

$String* AbstractButton$AccessibleAbstractButton::getTitledBorderText() {
	return $JComponent$AccessibleJComponent::getTitledBorderText();
}

$AccessibleKeyBinding* AbstractButton$AccessibleAbstractButton::getAccessibleKeyBinding() {
	int32_t mnemonic = this->this$0->getMnemonic();
	if (mnemonic == 0) {
		return nullptr;
	}
	return $new($AbstractButton$AccessibleAbstractButton$ButtonKeyBinding, this, mnemonic);
}

AbstractButton$AccessibleAbstractButton::AbstractButton$AccessibleAbstractButton() {
}

$Class* AbstractButton$AccessibleAbstractButton::load$($String* name, bool initialize) {
	$loadClass(AbstractButton$AccessibleAbstractButton, name, initialize, &_AbstractButton$AccessibleAbstractButton_ClassInfo_, allocate$AbstractButton$AccessibleAbstractButton);
	return class$;
}

$Class* AbstractButton$AccessibleAbstractButton::class$ = nullptr;

	} // swing
} // javax