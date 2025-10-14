#include <tableView$trView.h>

#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/CompositeView.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/TableView$TableRow.h>
#include <javax/swing/text/View.h>
#include <tableView.h>
#include <jcpp.h>

using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BoxView = ::javax::swing::text::BoxView;
using $CompositeView = ::javax::swing::text::CompositeView;
using $Element = ::javax::swing::text::Element;
using $TableView = ::javax::swing::text::TableView;
using $TableView$TableRow = ::javax::swing::text::TableView$TableRow;
using $View = ::javax::swing::text::View;
using $tableView = ::tableView;

$FieldInfo _tableView$trView_FieldInfo_[] = {
	{"this$0", "LtableView;", nullptr, $FINAL | $SYNTHETIC, $field(tableView$trView, this$0)},
	{}
};

$MethodInfo _tableView$trView_MethodInfo_[] = {
	{"<init>", "(LtableView;Ljavax/swing/text/Element;)V", nullptr, $PUBLIC, $method(static_cast<void(tableView$trView::*)($tableView*,$Element*)>(&tableView$trView::init$))},
	{"getAlignment", "(I)F", nullptr, $PUBLIC},
	{"getMaximumSpan", "(I)F", nullptr, $PUBLIC},
	{"getMinimumSpan", "(I)F", nullptr, $PUBLIC},
	{"paintChild", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;I)V", nullptr, $PROTECTED},
	{"setParent", "(Ljavax/swing/text/View;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _tableView$trView_InnerClassesInfo_[] = {
	{"tableView$trView", "tableView", "trView", $PUBLIC},
	{"javax.swing.text.TableView$TableRow", "javax.swing.text.TableView", "TableRow", $PUBLIC},
	{}
};

$ClassInfo _tableView$trView_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"tableView$trView",
	"javax.swing.text.TableView$TableRow",
	nullptr,
	_tableView$trView_FieldInfo_,
	_tableView$trView_MethodInfo_,
	nullptr,
	nullptr,
	_tableView$trView_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"tableView"
};

$Object* allocate$tableView$trView($Class* clazz) {
	return $of($alloc(tableView$trView));
}

void tableView$trView::setParent($View* parent) {
	$TableView$TableRow::setParent(parent);
}

void tableView$trView::init$($tableView* this$0, $Element* elem) {
	$set(this, this$0, this$0);
	$TableView$TableRow::init$(this$0, elem);
}

float tableView$trView::getMinimumSpan(int32_t axis) {
	return getPreferredSpan(axis);
}

float tableView$trView::getMaximumSpan(int32_t axis) {
	return getPreferredSpan(axis);
}

float tableView$trView::getAlignment(int32_t axis) {
	return 0.0f;
}

void tableView$trView::paintChild($Graphics* g, $Rectangle* alloc, int32_t index) {
	$TableView$TableRow::paintChild(g, alloc, index);
	int32_t lastY = $nc(alloc)->y + alloc->height - 1;
	$nc(g)->drawLine(alloc->x, alloc->y, alloc->x, lastY);
	int32_t lastX = alloc->x + alloc->width;
	g->drawLine(lastX, alloc->y, lastX, lastY);
}

tableView$trView::tableView$trView() {
}

$Class* tableView$trView::load$($String* name, bool initialize) {
	$loadClass(tableView$trView, name, initialize, &_tableView$trView_ClassInfo_, allocate$tableView$trView);
	return class$;
}

$Class* tableView$trView::class$ = nullptr;