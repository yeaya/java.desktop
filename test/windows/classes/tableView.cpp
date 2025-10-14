#include <tableView.h>

#include <CodeBugDocument.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/BoxView.h>
#include <javax/swing/text/CompositeView.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/TableView$TableRow.h>
#include <javax/swing/text/TableView.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/ViewFactory.h>
#include <tableView$trView.h>
#include <jcpp.h>

#undef ELEMENT_TD
#undef ELEMENT_TR
#undef Y_AXIS

using $CodeBugDocument = ::CodeBugDocument;
using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $ClassInfo = ::java::lang::ClassInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BoxView = ::javax::swing::text::BoxView;
using $CompositeView = ::javax::swing::text::CompositeView;
using $Element = ::javax::swing::text::Element;
using $TableView = ::javax::swing::text::TableView;
using $TableView$TableRow = ::javax::swing::text::TableView$TableRow;
using $View = ::javax::swing::text::View;
using $ViewFactory = ::javax::swing::text::ViewFactory;
using $tableView$trView = ::tableView$trView;

$MethodInfo _tableView_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/text/Element;)V", nullptr, $PUBLIC, $method(static_cast<void(tableView::*)($Element*)>(&tableView::init$))},
	{"create", "(Ljavax/swing/text/Element;)Ljavax/swing/text/View;", nullptr, $PUBLIC},
	{"getAlignment", "(I)F", nullptr, $PUBLIC},
	{"getMaximumSpan", "(I)F", nullptr, $PUBLIC},
	{"getMinimumSpan", "(I)F", nullptr, $PUBLIC},
	{"getPreferredSpan", "(I)F", nullptr, $PUBLIC},
	{"getViewFactory", "()Ljavax/swing/text/ViewFactory;", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;Ljava/awt/Shape;)V", nullptr, $PUBLIC},
	{"paintChild", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;I)V", nullptr, $PROTECTED},
	{"setParent", "(Ljavax/swing/text/View;)V", nullptr, $PUBLIC},
	{"setSize", "(FF)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _tableView_InnerClassesInfo_[] = {
	{"tableView$trView", "tableView", "trView", $PUBLIC},
	{}
};

$ClassInfo _tableView_ClassInfo_ = {
	$ACC_SUPER,
	"tableView",
	"javax.swing.text.TableView",
	"javax.swing.text.ViewFactory",
	nullptr,
	_tableView_MethodInfo_,
	nullptr,
	nullptr,
	_tableView_InnerClassesInfo_,
	nullptr,
	nullptr,
	"tableView$trView"
};

$Object* allocate$tableView($Class* clazz) {
	return $of($alloc(tableView));
}

int32_t tableView::hashCode() {
	 return this->$TableView::hashCode();
}

bool tableView::equals(Object$* arg0) {
	 return this->$TableView::equals(arg0);
}

$Object* tableView::clone() {
	 return this->$TableView::clone();
}

$String* tableView::toString() {
	 return this->$TableView::toString();
}

void tableView::finalize() {
	this->$TableView::finalize();
}

void tableView::init$($Element* elem) {
	$TableView::init$(elem);
}

void tableView::setParent($View* parent) {
	$TableView::setParent(parent);
}

void tableView::setSize(float width, float height) {
	$TableView::setSize(width, height);
}

$ViewFactory* tableView::getViewFactory() {
	return this;
}

float tableView::getMinimumSpan(int32_t axis) {
	return getPreferredSpan(axis);
}

float tableView::getMaximumSpan(int32_t axis) {
	return getPreferredSpan(axis);
}

float tableView::getAlignment(int32_t axis) {
	return 0.5f;
}

float tableView::getPreferredSpan(int32_t axis) {
	if (axis == 0) {
		return $TableView::getPreferredSpan(0);
	}
	float preferredSpan = $TableView::getPreferredSpan(axis);
	return preferredSpan;
}

void tableView::paint($Graphics* g, $Shape* allocation) {
	$TableView::paint(g, allocation);
	$var($Rectangle, alloc, $nc(allocation)->getBounds());
	int32_t lastY = $nc(alloc)->y + alloc->height - 1;
	$nc(g)->drawLine(alloc->x, lastY, alloc->x + alloc->width, lastY);
}

void tableView::paintChild($Graphics* g, $Rectangle* alloc, int32_t index) {
	$TableView::paintChild(g, alloc, index);
	int32_t lastX = $nc(alloc)->x + alloc->width;
	$nc(g)->drawLine(alloc->x, alloc->y, lastX, alloc->y);
}

$View* tableView::create($Element* elem) {
	$var($String, kind, $nc(elem)->getName());
	if (kind != nullptr) {
		$init($CodeBugDocument);
		if (kind->equals($CodeBugDocument::ELEMENT_TR)) {
			return $new($tableView$trView, this, elem);
		} else {
			if (kind->equals($CodeBugDocument::ELEMENT_TD)) {
				return $new($BoxView, elem, $View::Y_AXIS);
			}
		}
	}
	$var($View, p, getParent());
	if (p != nullptr) {
		$var($ViewFactory, f, p->getViewFactory());
		if (f != nullptr) {
			return f->create(elem);
		}
	}
	return nullptr;
}

tableView::tableView() {
}

$Class* tableView::load$($String* name, bool initialize) {
	$loadClass(tableView, name, initialize, &_tableView_ClassInfo_, allocate$tableView);
	return class$;
}

$Class* tableView::class$ = nullptr;