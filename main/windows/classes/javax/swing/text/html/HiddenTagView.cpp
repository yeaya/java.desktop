#include <javax/swing/text/html/HiddenTagView.h>

#include <java/awt/BorderLayout.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Shape.h>
#include <java/awt/Toolkit.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/event/DocumentEvent.h>
#include <javax/swing/event/DocumentListener.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/ComponentView.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/SimpleAttributeSet.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/StyledDocument.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/ViewFactory.h>
#include <javax/swing/text/html/EditableView.h>
#include <javax/swing/text/html/HTML$Attribute.h>
#include <javax/swing/text/html/HTML$UnknownTag.h>
#include <javax/swing/text/html/HiddenTagView$1.h>
#include <javax/swing/text/html/HiddenTagView$2.h>
#include <javax/swing/text/html/HiddenTagView$EndTagBorder.h>
#include <javax/swing/text/html/HiddenTagView$StartTagBorder.h>
#include <jcpp.h>

#undef ENDTAG
#undef X_AXIS
#undef Y_AXIS

using $BorderLayout = ::java::awt::BorderLayout;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Shape = ::java::awt::Shape;
using $Toolkit = ::java::awt::Toolkit;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JComponent = ::javax::swing::JComponent;
using $JPanel = ::javax::swing::JPanel;
using $JTextField = ::javax::swing::JTextField;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $Border = ::javax::swing::border::Border;
using $DocumentEvent = ::javax::swing::event::DocumentEvent;
using $DocumentListener = ::javax::swing::event::DocumentListener;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $ComponentView = ::javax::swing::text::ComponentView;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $SimpleAttributeSet = ::javax::swing::text::SimpleAttributeSet;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $StyledDocument = ::javax::swing::text::StyledDocument;
using $View = ::javax::swing::text::View;
using $ViewFactory = ::javax::swing::text::ViewFactory;
using $EditableView = ::javax::swing::text::html::EditableView;
using $HTML$Attribute = ::javax::swing::text::html::HTML$Attribute;
using $HTML$UnknownTag = ::javax::swing::text::html::HTML$UnknownTag;
using $HiddenTagView$1 = ::javax::swing::text::html::HiddenTagView$1;
using $HiddenTagView$2 = ::javax::swing::text::html::HiddenTagView$2;
using $HiddenTagView$EndTagBorder = ::javax::swing::text::html::HiddenTagView$EndTagBorder;
using $HiddenTagView$StartTagBorder = ::javax::swing::text::html::HiddenTagView$StartTagBorder;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _HiddenTagView_FieldInfo_[] = {
	{"yAlign", "F", nullptr, 0, $field(HiddenTagView, yAlign)},
	{"isSettingAttributes", "Z", nullptr, 0, $field(HiddenTagView, isSettingAttributes)},
	{"circleR", "I", nullptr, $STATIC | $FINAL, $constField(HiddenTagView, circleR)},
	{"circleD", "I", nullptr, $STATIC | $FINAL, $constField(HiddenTagView, circleD)},
	{"tagSize", "I", nullptr, $STATIC | $FINAL, $constField(HiddenTagView, tagSize)},
	{"padding", "I", nullptr, $STATIC | $FINAL, $constField(HiddenTagView, padding)},
	{"UnknownTagBorderColor", "Ljava/awt/Color;", nullptr, $STATIC | $FINAL, $staticField(HiddenTagView, UnknownTagBorderColor)},
	{"StartBorder", "Ljavax/swing/border/Border;", nullptr, $STATIC | $FINAL, $staticField(HiddenTagView, StartBorder)},
	{"EndBorder", "Ljavax/swing/border/Border;", nullptr, $STATIC | $FINAL, $staticField(HiddenTagView, EndBorder)},
	{}
};

$MethodInfo _HiddenTagView_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/text/Element;)V", nullptr, 0, $method(static_cast<void(HiddenTagView::*)($Element*)>(&HiddenTagView::init$))},
	{"_setTextFromModel", "()V", nullptr, 0},
	{"_updateModelFromText", "()V", nullptr, 0},
	{"changedUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC},
	{"changedUpdate", "(Ljavax/swing/event/DocumentEvent;Ljava/awt/Shape;Ljavax/swing/text/ViewFactory;)V", nullptr, $PUBLIC},
	{"createComponent", "()Ljava/awt/Component;", nullptr, $PROTECTED},
	{"getAlignment", "(I)F", nullptr, $PUBLIC},
	{"getMaximumSpan", "(I)F", nullptr, $PUBLIC},
	{"getMinimumSpan", "(I)F", nullptr, $PUBLIC},
	{"getPreferredSpan", "(I)F", nullptr, $PUBLIC},
	{"getRepresentedText", "()Ljava/lang/String;", nullptr, 0},
	{"getTextComponent", "()Ljavax/swing/text/JTextComponent;", nullptr, 0},
	{"insertUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC},
	{"isEndTag", "()Z", nullptr, 0},
	{"removeUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC},
	{"resetBorder", "()V", nullptr, 0},
	{"setTextFromModel", "()V", nullptr, 0},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateModelFromText", "()V", nullptr, 0},
	{"updateYAlign", "(Ljava/awt/Font;)V", nullptr, 0},
	{}
};

$InnerClassInfo _HiddenTagView_InnerClassesInfo_[] = {
	{"javax.swing.text.html.HiddenTagView$EndTagBorder", "javax.swing.text.html.HiddenTagView", "EndTagBorder", $STATIC},
	{"javax.swing.text.html.HiddenTagView$StartTagBorder", "javax.swing.text.html.HiddenTagView", "StartTagBorder", $STATIC},
	{"javax.swing.text.html.HiddenTagView$2", nullptr, nullptr, 0},
	{"javax.swing.text.html.HiddenTagView$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HiddenTagView_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.HiddenTagView",
	"javax.swing.text.html.EditableView",
	"javax.swing.event.DocumentListener",
	_HiddenTagView_FieldInfo_,
	_HiddenTagView_MethodInfo_,
	nullptr,
	nullptr,
	_HiddenTagView_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.text.html.HiddenTagView$EndTagBorder,javax.swing.text.html.HiddenTagView$StartTagBorder,javax.swing.text.html.HiddenTagView$2,javax.swing.text.html.HiddenTagView$1"
};

$Object* allocate$HiddenTagView($Class* clazz) {
	return $of($alloc(HiddenTagView));
}

int32_t HiddenTagView::hashCode() {
	 return this->$EditableView::hashCode();
}

bool HiddenTagView::equals(Object$* arg0) {
	 return this->$EditableView::equals(arg0);
}

$Object* HiddenTagView::clone() {
	 return this->$EditableView::clone();
}

$String* HiddenTagView::toString() {
	 return this->$EditableView::toString();
}

void HiddenTagView::finalize() {
	this->$EditableView::finalize();
}

$Color* HiddenTagView::UnknownTagBorderColor = nullptr;
$Border* HiddenTagView::StartBorder = nullptr;
$Border* HiddenTagView::EndBorder = nullptr;

void HiddenTagView::init$($Element* e) {
	$EditableView::init$(e);
	this->yAlign = (float)1;
}

$Component* HiddenTagView::createComponent() {
	$useLocalCurrentObjectStackCache();
	$var($JTextField, tf, $new($JTextField, $($nc($(getElement()))->getName())));
	$var($Document, doc, getDocument());
	$var($Font, font, nullptr);
	if ($instanceOf($StyledDocument, doc)) {
		$assign(font, $nc(($cast($StyledDocument, doc)))->getFont($(getAttributes())));
		tf->setFont(font);
	} else {
		$assign(font, tf->getFont());
	}
	$nc($(tf->getDocument()))->addDocumentListener(this);
	updateYAlign(font);
	$var($JPanel, panel, $new($JPanel, static_cast<$LayoutManager*>($$new($BorderLayout))));
	panel->setBackground(nullptr);
	if (isEndTag()) {
		panel->setBorder(HiddenTagView::EndBorder);
	} else {
		panel->setBorder(HiddenTagView::StartBorder);
	}
	panel->add(static_cast<$Component*>(tf));
	return panel;
}

float HiddenTagView::getAlignment(int32_t axis) {
	if (axis == $View::Y_AXIS) {
		return this->yAlign;
	}
	return 0.5f;
}

float HiddenTagView::getMinimumSpan(int32_t axis) {
	if (axis == $View::X_AXIS && isVisible()) {
		return $Math::max((float)30, $EditableView::getPreferredSpan(axis));
	}
	return $EditableView::getMinimumSpan(axis);
}

float HiddenTagView::getPreferredSpan(int32_t axis) {
	if (axis == $View::X_AXIS && isVisible()) {
		return $Math::max((float)30, $EditableView::getPreferredSpan(axis));
	}
	return $EditableView::getPreferredSpan(axis);
}

float HiddenTagView::getMaximumSpan(int32_t axis) {
	if (axis == $View::X_AXIS && isVisible()) {
		return $Math::max((float)30, $EditableView::getMaximumSpan(axis));
	}
	return $EditableView::getMaximumSpan(axis);
}

void HiddenTagView::insertUpdate($DocumentEvent* e) {
	updateModelFromText();
}

void HiddenTagView::removeUpdate($DocumentEvent* e) {
	updateModelFromText();
}

void HiddenTagView::changedUpdate($DocumentEvent* e) {
	updateModelFromText();
}

void HiddenTagView::changedUpdate($DocumentEvent* e, $Shape* a, $ViewFactory* f) {
	if (!this->isSettingAttributes) {
		setTextFromModel();
	}
}

void HiddenTagView::updateYAlign($Font* font) {
	$useLocalCurrentObjectStackCache();
	$var($Container, c, getContainer());
	$var($FontMetrics, fm, (c != nullptr) ? $nc(c)->getFontMetrics(font) : $nc($($Toolkit::getDefaultToolkit()))->getFontMetrics(font));
	float h = (float)$nc(fm)->getHeight();
	float d = (float)fm->getDescent();
	this->yAlign = (h > 0) ? (h - d) / h : (float)0;
}

void HiddenTagView::resetBorder() {
	$var($Component, comp, getComponent());
	if (comp != nullptr) {
		if (isEndTag()) {
			$nc(($cast($JPanel, comp)))->setBorder(HiddenTagView::EndBorder);
		} else {
			$nc(($cast($JPanel, comp)))->setBorder(HiddenTagView::StartBorder);
		}
	}
}

void HiddenTagView::setTextFromModel() {
	if ($SwingUtilities::isEventDispatchThread()) {
		_setTextFromModel();
	} else {
		$SwingUtilities::invokeLater($$new($HiddenTagView$1, this));
	}
}

void HiddenTagView::_setTextFromModel() {
	$useLocalCurrentObjectStackCache();
	$var($Document, doc, getDocument());
	{
		$var($Throwable, var$0, nullptr);
		try {
			this->isSettingAttributes = true;
			if ($instanceOf($AbstractDocument, doc)) {
				$nc(($cast($AbstractDocument, doc)))->readLock();
			}
			$var($JTextComponent, text, getTextComponent());
			if (text != nullptr) {
				text->setText($(getRepresentedText()));
				resetBorder();
				$var($Container, host, getContainer());
				if (host != nullptr) {
					preferenceChanged(this, true, true);
					host->repaint();
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			this->isSettingAttributes = false;
			if ($instanceOf($AbstractDocument, doc)) {
				$nc(($cast($AbstractDocument, doc)))->readUnlock();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void HiddenTagView::updateModelFromText() {
	if (!this->isSettingAttributes) {
		if ($SwingUtilities::isEventDispatchThread()) {
			_updateModelFromText();
		} else {
			$SwingUtilities::invokeLater($$new($HiddenTagView$2, this));
		}
	}
}

void HiddenTagView::_updateModelFromText() {
	$useLocalCurrentObjectStackCache();
	$var($Document, doc, getDocument());
	$init($StyleConstants);
	$var($Object, name, $nc($($nc($(getElement()))->getAttributes()))->getAttribute($StyleConstants::NameAttribute));
	if (($instanceOf($HTML$UnknownTag, name)) && ($instanceOf($StyledDocument, doc))) {
		$var($SimpleAttributeSet, sas, $new($SimpleAttributeSet));
		$var($JTextComponent, textComponent, getTextComponent());
		if (textComponent != nullptr) {
			$var($String, text, textComponent->getText());
			this->isSettingAttributes = true;
			{
				$var($Throwable, var$0, nullptr);
				try {
					sas->addAttribute($StyleConstants::NameAttribute, $$new($HTML$UnknownTag, text));
					int32_t var$1 = getStartOffset();
					int32_t var$2 = getEndOffset();
					$nc(($cast($StyledDocument, doc)))->setCharacterAttributes(var$1, var$2 - getStartOffset(), sas, false);
				} catch ($Throwable&) {
					$assign(var$0, $catch());
				} /*finally*/ {
					this->isSettingAttributes = false;
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		}
	}
}

$JTextComponent* HiddenTagView::getTextComponent() {
	$var($Component, comp, getComponent());
	return (comp == nullptr) ? ($JTextComponent*)nullptr : $cast($JTextComponent, $nc(($cast($Container, comp)))->getComponent(0));
}

$String* HiddenTagView::getRepresentedText() {
	$useLocalCurrentObjectStackCache();
	$var($String, retValue, $nc($(getElement()))->getName());
	return (retValue == nullptr) ? ""_s : retValue;
}

bool HiddenTagView::isEndTag() {
	$useLocalCurrentObjectStackCache();
	$var($AttributeSet, as, $nc($(getElement()))->getAttributes());
	if (as != nullptr) {
		$init($HTML$Attribute);
		$var($Object, end, as->getAttribute($HTML$Attribute::ENDTAG));
		if (end != nullptr && ($instanceOf($String, end)) && $nc(($cast($String, end)))->equals("true"_s)) {
			return true;
		}
	}
	return false;
}

void clinit$HiddenTagView($Class* class$) {
	$init($Color);
	$assignStatic(HiddenTagView::UnknownTagBorderColor, $Color::black);
	$assignStatic(HiddenTagView::StartBorder, $new($HiddenTagView$StartTagBorder));
	$assignStatic(HiddenTagView::EndBorder, $new($HiddenTagView$EndTagBorder));
}

HiddenTagView::HiddenTagView() {
}

$Class* HiddenTagView::load$($String* name, bool initialize) {
	$loadClass(HiddenTagView, name, initialize, &_HiddenTagView_ClassInfo_, clinit$HiddenTagView, allocate$HiddenTagView);
	return class$;
}

$Class* HiddenTagView::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax