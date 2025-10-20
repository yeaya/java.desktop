#include <javax/swing/JEditorPane$PlainEditorKit$PlainParagraph$LogicalView.h>

#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Error.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JEditorPane$PlainEditorKit$PlainParagraph.h>
#include <javax/swing/event/DocumentEvent$ElementChange.h>
#include <javax/swing/event/DocumentEvent.h>
#include <javax/swing/text/CompositeView.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/GlyphView.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/ViewFactory.h>
#include <jcpp.h>

using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JEditorPane$PlainEditorKit$PlainParagraph = ::javax::swing::JEditorPane$PlainEditorKit$PlainParagraph;
using $DocumentEvent = ::javax::swing::event::DocumentEvent;
using $DocumentEvent$ElementChange = ::javax::swing::event::DocumentEvent$ElementChange;
using $CompositeView = ::javax::swing::text::CompositeView;
using $Element = ::javax::swing::text::Element;
using $GlyphView = ::javax::swing::text::GlyphView;
using $View = ::javax::swing::text::View;
using $ViewFactory = ::javax::swing::text::ViewFactory;

namespace javax {
	namespace swing {

$MethodInfo _JEditorPane$PlainEditorKit$PlainParagraph$LogicalView_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/Element;)V", nullptr, 0, $method(static_cast<void(JEditorPane$PlainEditorKit$PlainParagraph$LogicalView::*)($Element*)>(&JEditorPane$PlainEditorKit$PlainParagraph$LogicalView::init$))},
	{"childAllocation", "(ILjava/awt/Rectangle;)V", nullptr, $PROTECTED},
	{"forwardUpdateToView", "(Ljavax/swing/text/View;Ljavax/swing/event/DocumentEvent;Ljava/awt/Shape;Ljavax/swing/text/ViewFactory;)V", nullptr, $PROTECTED},
	{"getPreferredSpan", "(I)F", nullptr, $PUBLIC},
	{"getViewAtPoint", "(IILjava/awt/Rectangle;)Ljavax/swing/text/View;", nullptr, $PROTECTED},
	{"getViewIndexAtPosition", "(I)I", nullptr, $PROTECTED},
	{"isAfter", "(IILjava/awt/Rectangle;)Z", nullptr, $PROTECTED},
	{"isBefore", "(IILjava/awt/Rectangle;)Z", nullptr, $PROTECTED},
	{"loadChildren", "(Ljavax/swing/text/ViewFactory;)V", nullptr, $PROTECTED},
	{"paint", "(Ljava/awt/Graphics;Ljava/awt/Shape;)V", nullptr, $PUBLIC},
	{"updateChildren", "(Ljavax/swing/event/DocumentEvent$ElementChange;Ljavax/swing/event/DocumentEvent;Ljavax/swing/text/ViewFactory;)Z", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _JEditorPane$PlainEditorKit$PlainParagraph$LogicalView_InnerClassesInfo_[] = {
	{"javax.swing.JEditorPane$PlainEditorKit", "javax.swing.JEditorPane", "PlainEditorKit", $STATIC},
	{"javax.swing.JEditorPane$PlainEditorKit$PlainParagraph", "javax.swing.JEditorPane$PlainEditorKit", "PlainParagraph", $STATIC},
	{"javax.swing.JEditorPane$PlainEditorKit$PlainParagraph$LogicalView", "javax.swing.JEditorPane$PlainEditorKit$PlainParagraph", "LogicalView", $STATIC},
	{}
};

$ClassInfo _JEditorPane$PlainEditorKit$PlainParagraph$LogicalView_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JEditorPane$PlainEditorKit$PlainParagraph$LogicalView",
	"javax.swing.text.CompositeView",
	nullptr,
	nullptr,
	_JEditorPane$PlainEditorKit$PlainParagraph$LogicalView_MethodInfo_,
	nullptr,
	nullptr,
	_JEditorPane$PlainEditorKit$PlainParagraph$LogicalView_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JEditorPane"
};

$Object* allocate$JEditorPane$PlainEditorKit$PlainParagraph$LogicalView($Class* clazz) {
	return $of($alloc(JEditorPane$PlainEditorKit$PlainParagraph$LogicalView));
}

void JEditorPane$PlainEditorKit$PlainParagraph$LogicalView::init$($Element* elem) {
	$CompositeView::init$(elem);
}

int32_t JEditorPane$PlainEditorKit$PlainParagraph$LogicalView::getViewIndexAtPosition(int32_t pos) {
	$var($Element, elem, getElement());
	if ($nc(elem)->getElementCount() > 0) {
		return elem->getElementIndex(pos);
	}
	return 0;
}

bool JEditorPane$PlainEditorKit$PlainParagraph$LogicalView::updateChildren($DocumentEvent$ElementChange* ec, $DocumentEvent* e, $ViewFactory* f) {
	return false;
}

void JEditorPane$PlainEditorKit$PlainParagraph$LogicalView::loadChildren($ViewFactory* f) {
	$useLocalCurrentObjectStackCache();
	$var($Element, elem, getElement());
	if ($nc(elem)->getElementCount() > 0) {
		$CompositeView::loadChildren(f);
	} else {
		$var($View, v, $new($GlyphView, elem));
		append(v);
	}
}

float JEditorPane$PlainEditorKit$PlainParagraph$LogicalView::getPreferredSpan(int32_t axis) {
	if (getViewCount() != 1) {
		$throwNew($Error, "One child view is assumed."_s);
	}
	$var($View, v, getView(0));
	return $nc(v)->getPreferredSpan(axis);
}

void JEditorPane$PlainEditorKit$PlainParagraph$LogicalView::forwardUpdateToView($View* v, $DocumentEvent* e, $Shape* a, $ViewFactory* f) {
	$nc(v)->setParent(this);
	$CompositeView::forwardUpdateToView(v, e, a, f);
}

void JEditorPane$PlainEditorKit$PlainParagraph$LogicalView::paint($Graphics* g, $Shape* allocation) {
}

bool JEditorPane$PlainEditorKit$PlainParagraph$LogicalView::isBefore(int32_t x, int32_t y, $Rectangle* alloc) {
	return false;
}

bool JEditorPane$PlainEditorKit$PlainParagraph$LogicalView::isAfter(int32_t x, int32_t y, $Rectangle* alloc) {
	return false;
}

$View* JEditorPane$PlainEditorKit$PlainParagraph$LogicalView::getViewAtPoint(int32_t x, int32_t y, $Rectangle* alloc) {
	return nullptr;
}

void JEditorPane$PlainEditorKit$PlainParagraph$LogicalView::childAllocation(int32_t index, $Rectangle* a) {
}

JEditorPane$PlainEditorKit$PlainParagraph$LogicalView::JEditorPane$PlainEditorKit$PlainParagraph$LogicalView() {
}

$Class* JEditorPane$PlainEditorKit$PlainParagraph$LogicalView::load$($String* name, bool initialize) {
	$loadClass(JEditorPane$PlainEditorKit$PlainParagraph$LogicalView, name, initialize, &_JEditorPane$PlainEditorKit$PlainParagraph$LogicalView_ClassInfo_, allocate$JEditorPane$PlainEditorKit$PlainParagraph$LogicalView);
	return class$;
}

$Class* JEditorPane$PlainEditorKit$PlainParagraph$LogicalView::class$ = nullptr;

	} // swing
} // javax