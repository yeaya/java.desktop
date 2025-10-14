#include <javax/swing/plaf/basic/BasicTextAreaUI$PlainParagraph$LogicalView.h>

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
#include <javax/swing/event/DocumentEvent$ElementChange.h>
#include <javax/swing/event/DocumentEvent.h>
#include <javax/swing/plaf/basic/BasicTextAreaUI$PlainParagraph.h>
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
using $DocumentEvent = ::javax::swing::event::DocumentEvent;
using $DocumentEvent$ElementChange = ::javax::swing::event::DocumentEvent$ElementChange;
using $BasicTextAreaUI$PlainParagraph = ::javax::swing::plaf::basic::BasicTextAreaUI$PlainParagraph;
using $CompositeView = ::javax::swing::text::CompositeView;
using $Element = ::javax::swing::text::Element;
using $GlyphView = ::javax::swing::text::GlyphView;
using $View = ::javax::swing::text::View;
using $ViewFactory = ::javax::swing::text::ViewFactory;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$MethodInfo _BasicTextAreaUI$PlainParagraph$LogicalView_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/Element;)V", nullptr, 0, $method(static_cast<void(BasicTextAreaUI$PlainParagraph$LogicalView::*)($Element*)>(&BasicTextAreaUI$PlainParagraph$LogicalView::init$))},
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

$InnerClassInfo _BasicTextAreaUI$PlainParagraph$LogicalView_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicTextAreaUI$PlainParagraph", "javax.swing.plaf.basic.BasicTextAreaUI", "PlainParagraph", $STATIC},
	{"javax.swing.plaf.basic.BasicTextAreaUI$PlainParagraph$LogicalView", "javax.swing.plaf.basic.BasicTextAreaUI$PlainParagraph", "LogicalView", $STATIC},
	{}
};

$ClassInfo _BasicTextAreaUI$PlainParagraph$LogicalView_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicTextAreaUI$PlainParagraph$LogicalView",
	"javax.swing.text.CompositeView",
	nullptr,
	nullptr,
	_BasicTextAreaUI$PlainParagraph$LogicalView_MethodInfo_,
	nullptr,
	nullptr,
	_BasicTextAreaUI$PlainParagraph$LogicalView_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicTextAreaUI"
};

$Object* allocate$BasicTextAreaUI$PlainParagraph$LogicalView($Class* clazz) {
	return $of($alloc(BasicTextAreaUI$PlainParagraph$LogicalView));
}

void BasicTextAreaUI$PlainParagraph$LogicalView::init$($Element* elem) {
	$CompositeView::init$(elem);
}

int32_t BasicTextAreaUI$PlainParagraph$LogicalView::getViewIndexAtPosition(int32_t pos) {
	$var($Element, elem, getElement());
	if ($nc(elem)->getElementCount() > 0) {
		return elem->getElementIndex(pos);
	}
	return 0;
}

bool BasicTextAreaUI$PlainParagraph$LogicalView::updateChildren($DocumentEvent$ElementChange* ec, $DocumentEvent* e, $ViewFactory* f) {
	return false;
}

void BasicTextAreaUI$PlainParagraph$LogicalView::loadChildren($ViewFactory* f) {
	$var($Element, elem, getElement());
	if ($nc(elem)->getElementCount() > 0) {
		$CompositeView::loadChildren(f);
	} else {
		$var($View, v, $new($GlyphView, elem));
		append(v);
	}
}

float BasicTextAreaUI$PlainParagraph$LogicalView::getPreferredSpan(int32_t axis) {
	if (getViewCount() != 1) {
		$throwNew($Error, "One child view is assumed."_s);
	}
	$var($View, v, getView(0));
	return $nc(v)->getPreferredSpan(axis);
}

void BasicTextAreaUI$PlainParagraph$LogicalView::forwardUpdateToView($View* v, $DocumentEvent* e, $Shape* a, $ViewFactory* f) {
	$nc(v)->setParent(this);
	$CompositeView::forwardUpdateToView(v, e, a, f);
}

void BasicTextAreaUI$PlainParagraph$LogicalView::paint($Graphics* g, $Shape* allocation) {
}

bool BasicTextAreaUI$PlainParagraph$LogicalView::isBefore(int32_t x, int32_t y, $Rectangle* alloc) {
	return false;
}

bool BasicTextAreaUI$PlainParagraph$LogicalView::isAfter(int32_t x, int32_t y, $Rectangle* alloc) {
	return false;
}

$View* BasicTextAreaUI$PlainParagraph$LogicalView::getViewAtPoint(int32_t x, int32_t y, $Rectangle* alloc) {
	return nullptr;
}

void BasicTextAreaUI$PlainParagraph$LogicalView::childAllocation(int32_t index, $Rectangle* a) {
}

BasicTextAreaUI$PlainParagraph$LogicalView::BasicTextAreaUI$PlainParagraph$LogicalView() {
}

$Class* BasicTextAreaUI$PlainParagraph$LogicalView::load$($String* name, bool initialize) {
	$loadClass(BasicTextAreaUI$PlainParagraph$LogicalView, name, initialize, &_BasicTextAreaUI$PlainParagraph$LogicalView_ClassInfo_, allocate$BasicTextAreaUI$PlainParagraph$LogicalView);
	return class$;
}

$Class* BasicTextAreaUI$PlainParagraph$LogicalView::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax