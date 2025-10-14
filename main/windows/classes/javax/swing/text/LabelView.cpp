#include <javax/swing/text/LabelView.h>

#include <java/awt/Color.h>
#include <java/awt/Container.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Shape.h>
#include <java/awt/Toolkit.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/event/DocumentEvent.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/GlyphView.h>
#include <javax/swing/text/StateInvariantError.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/StyledDocument.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/ViewFactory.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Shape = ::java::awt::Shape;
using $Toolkit = ::java::awt::Toolkit;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DocumentEvent = ::javax::swing::event::DocumentEvent;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $GlyphView = ::javax::swing::text::GlyphView;
using $StateInvariantError = ::javax::swing::text::StateInvariantError;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $StyledDocument = ::javax::swing::text::StyledDocument;
using $View = ::javax::swing::text::View;
using $ViewFactory = ::javax::swing::text::ViewFactory;

namespace javax {
	namespace swing {
		namespace text {

$CompoundAttribute _LabelView_MethodAnnotations_getFontMetrics4[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _LabelView_FieldInfo_[] = {
	{"font", "Ljava/awt/Font;", nullptr, $PRIVATE, $field(LabelView, font)},
	{"fg", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(LabelView, fg)},
	{"bg", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(LabelView, bg)},
	{"underline", "Z", nullptr, $PRIVATE, $field(LabelView, underline)},
	{"strike", "Z", nullptr, $PRIVATE, $field(LabelView, strike)},
	{"superscript", "Z", nullptr, $PRIVATE, $field(LabelView, superscript)},
	{"subscript", "Z", nullptr, $PRIVATE, $field(LabelView, subscript)},
	{}
};

$MethodInfo _LabelView_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/Element;)V", nullptr, $PUBLIC, $method(static_cast<void(LabelView::*)($Element*)>(&LabelView::init$))},
	{"changedUpdate", "(Ljavax/swing/event/DocumentEvent;Ljava/awt/Shape;Ljavax/swing/text/ViewFactory;)V", nullptr, $PUBLIC},
	{"getBackground", "()Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getFont", "()Ljava/awt/Font;", nullptr, $PUBLIC},
	{"getFontMetrics", "()Ljava/awt/FontMetrics;", nullptr, $PROTECTED | $DEPRECATED, nullptr, nullptr, nullptr, _LabelView_MethodAnnotations_getFontMetrics4},
	{"getForeground", "()Ljava/awt/Color;", nullptr, $PUBLIC},
	{"isStrikeThrough", "()Z", nullptr, $PUBLIC},
	{"isSubscript", "()Z", nullptr, $PUBLIC},
	{"isSuperscript", "()Z", nullptr, $PUBLIC},
	{"isUnderline", "()Z", nullptr, $PUBLIC},
	{"setBackground", "(Ljava/awt/Color;)V", nullptr, $PROTECTED},
	{"setPropertiesFromAttributes", "()V", nullptr, $PROTECTED},
	{"setStrikeThrough", "(Z)V", nullptr, $PROTECTED},
	{"setSubscript", "(Z)V", nullptr, $PROTECTED},
	{"setSuperscript", "(Z)V", nullptr, $PROTECTED},
	{"setUnderline", "(Z)V", nullptr, $PROTECTED},
	{"sync", "()V", nullptr, $FINAL, $method(static_cast<void(LabelView::*)()>(&LabelView::sync))},
	{}
};

$ClassInfo _LabelView_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.LabelView",
	"javax.swing.text.GlyphView",
	nullptr,
	_LabelView_FieldInfo_,
	_LabelView_MethodInfo_
};

$Object* allocate$LabelView($Class* clazz) {
	return $of($alloc(LabelView));
}

void LabelView::init$($Element* elem) {
	$GlyphView::init$(elem);
}

void LabelView::sync() {
	if (this->font == nullptr) {
		setPropertiesFromAttributes();
	}
}

void LabelView::setUnderline(bool u) {
	this->underline = u;
}

void LabelView::setStrikeThrough(bool s) {
	this->strike = s;
}

void LabelView::setSuperscript(bool s) {
	this->superscript = s;
}

void LabelView::setSubscript(bool s) {
	this->subscript = s;
}

void LabelView::setBackground($Color* bg) {
	$set(this, bg, bg);
}

void LabelView::setPropertiesFromAttributes() {
	$var($AttributeSet, attr, getAttributes());
	if (attr != nullptr) {
		$var($Document, d, getDocument());
		if ($instanceOf($StyledDocument, d)) {
			$var($StyledDocument, doc, $cast($StyledDocument, d));
			$set(this, font, $nc(doc)->getFont(attr));
			$set(this, fg, doc->getForeground(attr));
			$init($StyleConstants);
			if (attr->isDefined($StyleConstants::Background)) {
				$set(this, bg, doc->getBackground(attr));
			} else {
				$set(this, bg, nullptr);
			}
			setUnderline($StyleConstants::isUnderline(attr));
			setStrikeThrough($StyleConstants::isStrikeThrough(attr));
			setSuperscript($StyleConstants::isSuperscript(attr));
			setSubscript($StyleConstants::isSubscript(attr));
		} else {
			$throwNew($StateInvariantError, "LabelView needs StyledDocument"_s);
		}
	}
}

$FontMetrics* LabelView::getFontMetrics() {
	sync();
	$var($Container, c, getContainer());
	return (c != nullptr) ? $nc(c)->getFontMetrics(this->font) : $nc($($Toolkit::getDefaultToolkit()))->getFontMetrics(this->font);
}

$Color* LabelView::getBackground() {
	sync();
	return this->bg;
}

$Color* LabelView::getForeground() {
	sync();
	return this->fg;
}

$Font* LabelView::getFont() {
	sync();
	return this->font;
}

bool LabelView::isUnderline() {
	sync();
	return this->underline;
}

bool LabelView::isStrikeThrough() {
	sync();
	return this->strike;
}

bool LabelView::isSubscript() {
	sync();
	return this->subscript;
}

bool LabelView::isSuperscript() {
	sync();
	return this->superscript;
}

void LabelView::changedUpdate($DocumentEvent* e, $Shape* a, $ViewFactory* f) {
	$set(this, font, nullptr);
	$GlyphView::changedUpdate(e, a, f);
}

LabelView::LabelView() {
}

$Class* LabelView::load$($String* name, bool initialize) {
	$loadClass(LabelView, name, initialize, &_LabelView_ClassInfo_, allocate$LabelView);
	return class$;
}

$Class* LabelView::class$ = nullptr;

		} // text
	} // swing
} // javax