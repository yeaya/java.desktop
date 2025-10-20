#include <javax/swing/JLabel$AccessibleJLabel.h>

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
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/BreakIterator.h>
#include <java/util/Locale.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleExtendedComponent.h>
#include <javax/accessibility/AccessibleIcon.h>
#include <javax/accessibility/AccessibleKeyBinding.h>
#include <javax/accessibility/AccessibleRelation.h>
#include <javax/accessibility/AccessibleRelationSet.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/accessibility/AccessibleText.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel$AccessibleJLabel$LabelKeyBinding.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/Position$Bias.h>
#include <javax/swing/text/StyledDocument.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

#undef ACCESSIBLE_NAME_PROPERTY
#undef CHARACTER
#undef DONE
#undef LABEL
#undef LABEL_FOR
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
using $MethodInfo = ::java::lang::MethodInfo;
using $BreakIterator = ::java::text::BreakIterator;
using $Locale = ::java::util::Locale;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleExtendedComponent = ::javax::accessibility::AccessibleExtendedComponent;
using $AccessibleIcon = ::javax::accessibility::AccessibleIcon;
using $AccessibleKeyBinding = ::javax::accessibility::AccessibleKeyBinding;
using $AccessibleRelation = ::javax::accessibility::AccessibleRelation;
using $AccessibleRelationSet = ::javax::accessibility::AccessibleRelationSet;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $AccessibleText = ::javax::accessibility::AccessibleText;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JLabel = ::javax::swing::JLabel;
using $JLabel$AccessibleJLabel$LabelKeyBinding = ::javax::swing::JLabel$AccessibleJLabel$LabelKeyBinding;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $Position$Bias = ::javax::swing::text::Position$Bias;
using $StyledDocument = ::javax::swing::text::StyledDocument;
using $View = ::javax::swing::text::View;

namespace javax {
	namespace swing {

$FieldInfo _JLabel$AccessibleJLabel_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JLabel;", nullptr, $FINAL | $SYNTHETIC, $field(JLabel$AccessibleJLabel, this$0)},
	{}
};

$MethodInfo _JLabel$AccessibleJLabel_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JLabel;)V", nullptr, $PROTECTED, $method(static_cast<void(JLabel$AccessibleJLabel::*)($JLabel*)>(&JLabel$AccessibleJLabel::init$))},
	{"getAccessibleExtendedComponent", "()Ljavax/accessibility/AccessibleExtendedComponent;", nullptr, 0},
	{"getAccessibleIcon", "()[Ljavax/accessibility/AccessibleIcon;", nullptr, $PUBLIC},
	{"getAccessibleKeyBinding", "()Ljavax/accessibility/AccessibleKeyBinding;", nullptr, $PUBLIC},
	{"getAccessibleName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAccessibleRelationSet", "()Ljavax/accessibility/AccessibleRelationSet;", nullptr, $PUBLIC},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC},
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
	{"getText", "(II)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(JLabel$AccessibleJLabel::*)(int32_t,int32_t)>(&JLabel$AccessibleJLabel::getText)), "javax.swing.text.BadLocationException"},
	{"getTextRectangle", "()Ljava/awt/Rectangle;", nullptr, $PRIVATE, $method(static_cast<$Rectangle*(JLabel$AccessibleJLabel::*)()>(&JLabel$AccessibleJLabel::getTextRectangle))},
	{"getTitledBorderText", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getToolTipText", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JLabel$AccessibleJLabel_InnerClassesInfo_[] = {
	{"javax.swing.JLabel$AccessibleJLabel", "javax.swing.JLabel", "AccessibleJLabel", $PROTECTED},
	{"javax.swing.JComponent$AccessibleJComponent", "javax.swing.JComponent", "AccessibleJComponent", $PUBLIC | $ABSTRACT},
	{"javax.swing.JLabel$AccessibleJLabel$LabelKeyBinding", "javax.swing.JLabel$AccessibleJLabel", "LabelKeyBinding", 0},
	{}
};

$ClassInfo _JLabel$AccessibleJLabel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JLabel$AccessibleJLabel",
	"javax.swing.JComponent$AccessibleJComponent",
	"javax.accessibility.AccessibleText",
	_JLabel$AccessibleJLabel_FieldInfo_,
	_JLabel$AccessibleJLabel_MethodInfo_,
	nullptr,
	nullptr,
	_JLabel$AccessibleJLabel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JLabel"
};

$Object* allocate$JLabel$AccessibleJLabel($Class* clazz) {
	return $of($alloc(JLabel$AccessibleJLabel));
}

int32_t JLabel$AccessibleJLabel::hashCode() {
	 return this->$JComponent$AccessibleJComponent::hashCode();
}

bool JLabel$AccessibleJLabel::equals(Object$* arg0) {
	 return this->$JComponent$AccessibleJComponent::equals(arg0);
}

$Object* JLabel$AccessibleJLabel::clone() {
	 return this->$JComponent$AccessibleJComponent::clone();
}

$String* JLabel$AccessibleJLabel::toString() {
	 return this->$JComponent$AccessibleJComponent::toString();
}

void JLabel$AccessibleJLabel::finalize() {
	this->$JComponent$AccessibleJComponent::finalize();
}

void JLabel$AccessibleJLabel::init$($JLabel* this$0) {
	$set(this, this$0, this$0);
	$JComponent$AccessibleJComponent::init$(this$0);
}

$String* JLabel$AccessibleJLabel::getAccessibleName() {
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

$AccessibleRole* JLabel$AccessibleJLabel::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::LABEL;
}

$AccessibleIconArray* JLabel$AccessibleJLabel::getAccessibleIcon() {
	$useLocalCurrentObjectStackCache();
	$var($Icon, icon, this->this$0->getIcon());
	if ($instanceOf($Accessible, icon)) {
		$var($AccessibleContext, ac, $nc(($cast($Accessible, icon)))->getAccessibleContext());
		if (ac != nullptr && $instanceOf($AccessibleIcon, ac)) {
			return $new($AccessibleIconArray, {$cast($AccessibleIcon, ac)});
		}
	}
	return nullptr;
}

$AccessibleRelationSet* JLabel$AccessibleJLabel::getAccessibleRelationSet() {
	$useLocalCurrentObjectStackCache();
	$var($AccessibleRelationSet, relationSet, $JComponent$AccessibleJComponent::getAccessibleRelationSet());
	$init($AccessibleRelation);
	if (!$nc(relationSet)->contains($AccessibleRelation::LABEL_FOR)) {
		$var($Component, c, this->this$0->getLabelFor());
		if (c != nullptr) {
			$var($AccessibleRelation, relation, $new($AccessibleRelation, $AccessibleRelation::LABEL_FOR));
			relation->setTarget($of(c));
			relationSet->add(relation);
		}
	}
	return relationSet;
}

$AccessibleText* JLabel$AccessibleJLabel::getAccessibleText() {
	$var($View, view, $cast($View, this->this$0->getClientProperty("html"_s)));
	if (view != nullptr) {
		return this;
	} else {
		return nullptr;
	}
}

int32_t JLabel$AccessibleJLabel::getIndexAtPoint($Point* p) {
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

$Rectangle* JLabel$AccessibleJLabel::getCharacterBounds(int32_t i) {
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
		} catch ($BadLocationException&) {
			$var($BadLocationException, e, $catch());
			return nullptr;
		}
	} else {
		return nullptr;
	}
}

int32_t JLabel$AccessibleJLabel::getCharCount() {
	$useLocalCurrentObjectStackCache();
	$var($View, view, $cast($View, this->this$0->getClientProperty("html"_s)));
	if (view != nullptr) {
		$var($Document, d, view->getDocument());
		if ($instanceOf($StyledDocument, d)) {
			$var($StyledDocument, doc, $cast($StyledDocument, d));
			return $nc(doc)->getLength();
		}
	}
	return $nc($($nc($($JLabel::access$000(this->this$0)))->getAccessibleName()))->length();
}

int32_t JLabel$AccessibleJLabel::getCaretPosition() {
	return -1;
}

$String* JLabel$AccessibleJLabel::getAtIndex(int32_t part, int32_t index) {
	$useLocalCurrentObjectStackCache();
	if (index < 0 || index >= getCharCount()) {
		return nullptr;
	}
	switch (part) {
	case $AccessibleText::CHARACTER:
		{
			try {
				return getText(index, 1);
			} catch ($BadLocationException&) {
				$var($BadLocationException, e, $catch());
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
			} catch ($BadLocationException&) {
				$var($BadLocationException, e, $catch());
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
			} catch ($BadLocationException&) {
				$var($BadLocationException, e, $catch());
				return nullptr;
			}
		}
	default:
		{
			return nullptr;
		}
	}
}

$String* JLabel$AccessibleJLabel::getAfterIndex(int32_t part, int32_t index) {
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
			} catch ($BadLocationException&) {
				$var($BadLocationException, e, $catch());
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
			} catch ($BadLocationException&) {
				$var($BadLocationException, e, $catch());
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
			} catch ($BadLocationException&) {
				$var($BadLocationException, e, $catch());
				return nullptr;
			}
		}
	default:
		{
			return nullptr;
		}
	}
}

$String* JLabel$AccessibleJLabel::getBeforeIndex(int32_t part, int32_t index) {
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
			} catch ($BadLocationException&) {
				$var($BadLocationException, e, $catch());
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
			} catch ($BadLocationException&) {
				$var($BadLocationException, e, $catch());
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
			} catch ($BadLocationException&) {
				$var($BadLocationException, e, $catch());
				return nullptr;
			}
		}
	default:
		{
			return nullptr;
		}
	}
}

$AttributeSet* JLabel$AccessibleJLabel::getCharacterAttribute(int32_t i) {
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

int32_t JLabel$AccessibleJLabel::getSelectionStart() {
	return -1;
}

int32_t JLabel$AccessibleJLabel::getSelectionEnd() {
	return -1;
}

$String* JLabel$AccessibleJLabel::getSelectedText() {
	return nullptr;
}

$String* JLabel$AccessibleJLabel::getText(int32_t offset, int32_t length) {
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

$Rectangle* JLabel$AccessibleJLabel::getTextRectangle() {
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
	int32_t var$7 = this->this$0->getHorizontalTextPosition();
	$var($Rectangle, var$8, paintViewR);
	$var($Rectangle, var$9, paintIconR);
	$var($Rectangle, var$10, paintTextR);
	$var($String, clippedText, $SwingUtilities::layoutCompoundLabel(var$0, var$1, var$2, var$3, var$4, var$5, var$6, var$7, var$8, var$9, var$10, this->this$0->getIconTextGap()));
	return paintTextR;
}

$AccessibleExtendedComponent* JLabel$AccessibleJLabel::getAccessibleExtendedComponent() {
	return this;
}

$String* JLabel$AccessibleJLabel::getToolTipText() {
	return this->this$0->getToolTipText();
}

$String* JLabel$AccessibleJLabel::getTitledBorderText() {
	return $JComponent$AccessibleJComponent::getTitledBorderText();
}

$AccessibleKeyBinding* JLabel$AccessibleJLabel::getAccessibleKeyBinding() {
	int32_t mnemonic = this->this$0->getDisplayedMnemonic();
	if (mnemonic == 0) {
		return nullptr;
	}
	return $new($JLabel$AccessibleJLabel$LabelKeyBinding, this, mnemonic);
}

JLabel$AccessibleJLabel::JLabel$AccessibleJLabel() {
}

$Class* JLabel$AccessibleJLabel::load$($String* name, bool initialize) {
	$loadClass(JLabel$AccessibleJLabel, name, initialize, &_JLabel$AccessibleJLabel_ClassInfo_, allocate$JLabel$AccessibleJLabel);
	return class$;
}

$Class* JLabel$AccessibleJLabel::class$ = nullptr;

	} // swing
} // javax