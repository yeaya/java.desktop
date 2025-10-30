#include <javax/swing/text/html/InlineView.h>

#include <java/awt/Color.h>
#include <java/awt/Shape.h>
#include <javax/swing/event/DocumentEvent.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/GlyphView.h>
#include <javax/swing/text/LabelView.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/ViewFactory.h>
#include <javax/swing/text/html/CSS$Attribute.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <javax/swing/text/html/StyleSheet.h>
#include <jcpp.h>

#undef TEXT_DECORATION
#undef VERTICAL_ALIGN
#undef WHITE_SPACE

using $Color = ::java::awt::Color;
using $Shape = ::java::awt::Shape;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DocumentEvent = ::javax::swing::event::DocumentEvent;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $DefaultStyledDocument = ::javax::swing::text::DefaultStyledDocument;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $GlyphView = ::javax::swing::text::GlyphView;
using $LabelView = ::javax::swing::text::LabelView;
using $View = ::javax::swing::text::View;
using $ViewFactory = ::javax::swing::text::ViewFactory;
using $CSS$Attribute = ::javax::swing::text::html::CSS$Attribute;
using $HTMLDocument = ::javax::swing::text::html::HTMLDocument;
using $StyleSheet = ::javax::swing::text::html::StyleSheet;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _InlineView_FieldInfo_[] = {
	{"nowrap", "Z", nullptr, $PRIVATE, $field(InlineView, nowrap)},
	{"attr", "Ljavax/swing/text/AttributeSet;", nullptr, $PRIVATE, $field(InlineView, attr)},
	{}
};

$MethodInfo _InlineView_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/Element;)V", nullptr, $PUBLIC, $method(static_cast<void(InlineView::*)($Element*)>(&InlineView::init$))},
	{"breakView", "(IIFF)Ljavax/swing/text/View;", nullptr, $PUBLIC},
	{"changedUpdate", "(Ljavax/swing/event/DocumentEvent;Ljava/awt/Shape;Ljavax/swing/text/ViewFactory;)V", nullptr, $PUBLIC},
	{"getAttributes", "()Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC},
	{"getBreakWeight", "(IFF)I", nullptr, $PUBLIC},
	{"getStyleSheet", "()Ljavax/swing/text/html/StyleSheet;", nullptr, $PROTECTED},
	{"insertUpdate", "(Ljavax/swing/event/DocumentEvent;Ljava/awt/Shape;Ljavax/swing/text/ViewFactory;)V", nullptr, $PUBLIC},
	{"removeUpdate", "(Ljavax/swing/event/DocumentEvent;Ljava/awt/Shape;Ljavax/swing/text/ViewFactory;)V", nullptr, $PUBLIC},
	{"setPropertiesFromAttributes", "()V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _InlineView_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.html.InlineView",
	"javax.swing.text.LabelView",
	nullptr,
	_InlineView_FieldInfo_,
	_InlineView_MethodInfo_
};

$Object* allocate$InlineView($Class* clazz) {
	return $of($alloc(InlineView));
}

void InlineView::init$($Element* elem) {
	$LabelView::init$(elem);
	$var($StyleSheet, sheet, getStyleSheet());
	$set(this, attr, $nc(sheet)->getViewAttributes(this));
}

void InlineView::insertUpdate($DocumentEvent* e, $Shape* a, $ViewFactory* f) {
	$LabelView::insertUpdate(e, a, f);
}

void InlineView::removeUpdate($DocumentEvent* e, $Shape* a, $ViewFactory* f) {
	$LabelView::removeUpdate(e, a, f);
}

void InlineView::changedUpdate($DocumentEvent* e, $Shape* a, $ViewFactory* f) {
	$LabelView::changedUpdate(e, a, f);
	$var($StyleSheet, sheet, getStyleSheet());
	$set(this, attr, $nc(sheet)->getViewAttributes(this));
	preferenceChanged(nullptr, true, true);
}

$AttributeSet* InlineView::getAttributes() {
	return this->attr;
}

int32_t InlineView::getBreakWeight(int32_t axis, float pos, float len) {
	if (this->nowrap) {
		return $View::BadBreakWeight;
	}
	return $LabelView::getBreakWeight(axis, pos, len);
}

$View* InlineView::breakView(int32_t axis, int32_t offset, float pos, float len) {
	return $LabelView::breakView(axis, offset, pos, len);
}

void InlineView::setPropertiesFromAttributes() {
	$useLocalCurrentObjectStackCache();
	$LabelView::setPropertiesFromAttributes();
	$var($AttributeSet, a, getAttributes());
	$init($CSS$Attribute);
	$var($Object, decor, $nc(a)->getAttribute($CSS$Attribute::TEXT_DECORATION));
	bool u = (decor != nullptr) ? ($nc($($nc($of(decor))->toString()))->indexOf("underline"_s) >= 0) : false;
	setUnderline(u);
	bool s = (decor != nullptr) ? ($nc($($of(decor)->toString()))->indexOf("line-through"_s) >= 0) : false;
	setStrikeThrough(s);
	$var($Object, vAlign, a->getAttribute($CSS$Attribute::VERTICAL_ALIGN));
	s = (vAlign != nullptr) ? ($nc($($nc($of(vAlign))->toString()))->indexOf("sup"_s) >= 0) : false;
	setSuperscript(s);
	s = (vAlign != nullptr) ? ($nc($($of(vAlign)->toString()))->indexOf("sub"_s) >= 0) : false;
	setSubscript(s);
	$var($Object, whitespace, a->getAttribute($CSS$Attribute::WHITE_SPACE));
	if ((whitespace != nullptr) && $of(whitespace)->equals("nowrap"_s)) {
		this->nowrap = true;
	} else {
		this->nowrap = false;
	}
	$var($HTMLDocument, doc, $cast($HTMLDocument, getDocument()));
	$var($Color, bg, $nc(doc)->getBackground(a));
	if (bg != nullptr) {
		setBackground(bg);
	}
}

$StyleSheet* InlineView::getStyleSheet() {
	$var($HTMLDocument, doc, $cast($HTMLDocument, getDocument()));
	return $nc(doc)->getStyleSheet();
}

InlineView::InlineView() {
}

$Class* InlineView::load$($String* name, bool initialize) {
	$loadClass(InlineView, name, initialize, &_InlineView_ClassInfo_, allocate$InlineView);
	return class$;
}

$Class* InlineView::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax