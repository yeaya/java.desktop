#include <javax/swing/text/html/ListView.h>

#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BoxView.h>
#include <javax/swing/text/CompositeView.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/html/BlockView.h>
#include <javax/swing/text/html/StyleSheet$ListPainter.h>
#include <javax/swing/text/html/StyleSheet.h>
#include <jcpp.h>

#undef X_AXIS
#undef Y_AXIS

using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $BoxView = ::javax::swing::text::BoxView;
using $CompositeView = ::javax::swing::text::CompositeView;
using $Element = ::javax::swing::text::Element;
using $View = ::javax::swing::text::View;
using $BlockView = ::javax::swing::text::html::BlockView;
using $StyleSheet = ::javax::swing::text::html::StyleSheet;
using $StyleSheet$ListPainter = ::javax::swing::text::html::StyleSheet$ListPainter;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _ListView_FieldInfo_[] = {
	{"listPainter", "Ljavax/swing/text/html/StyleSheet$ListPainter;", nullptr, $PRIVATE, $field(ListView, listPainter)},
	{}
};

$MethodInfo _ListView_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/Element;)V", nullptr, $PUBLIC, $method(static_cast<void(ListView::*)($Element*)>(&ListView::init$))},
	{"getAlignment", "(I)F", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;Ljava/awt/Shape;)V", nullptr, $PUBLIC},
	{"paintChild", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;I)V", nullptr, $PROTECTED},
	{"setPropertiesFromAttributes", "()V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _ListView_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.html.ListView",
	"javax.swing.text.html.BlockView",
	nullptr,
	_ListView_FieldInfo_,
	_ListView_MethodInfo_
};

$Object* allocate$ListView($Class* clazz) {
	return $of($alloc(ListView));
}

void ListView::init$($Element* elem) {
	$BlockView::init$(elem, $View::Y_AXIS);
}

float ListView::getAlignment(int32_t axis) {
	$useLocalCurrentObjectStackCache();
	switch (axis) {
	case $View::X_AXIS:
		{
			return 0.5f;
		}
	case $View::Y_AXIS:
		{
			return 0.5f;
		}
	default:
		{
			$throwNew($IllegalArgumentException, $$str({"Invalid axis: "_s, $$str(axis)}));
		}
	}
}

void ListView::paint($Graphics* g, $Shape* allocation) {
	$useLocalCurrentObjectStackCache();
	$BlockView::paint(g, allocation);
	$var($Rectangle, alloc, $nc(allocation)->getBounds());
	$var($Rectangle, clip, $nc(g)->getClipBounds());
	if (($nc(clip)->x + clip->width) < ($nc(alloc)->x + getLeftInset())) {
		$var($Rectangle, childRect, alloc);
		$assign(alloc, getInsideAllocation(allocation));
		int32_t n = getViewCount();
		int32_t endY = clip->y + clip->height;
		for (int32_t i = 0; i < n; ++i) {
			childRect->setBounds(alloc);
			childAllocation(i, childRect);
			if (childRect->y < endY) {
				if ((childRect->y + childRect->height) >= clip->y) {
					$nc(this->listPainter)->paint(g, (float)childRect->x, (float)childRect->y, (float)childRect->width, (float)childRect->height, this, i);
				}
			} else {
				break;
			}
		}
	}
}

void ListView::paintChild($Graphics* g, $Rectangle* alloc, int32_t index) {
	$nc(this->listPainter)->paint(g, (float)$nc(alloc)->x, (float)alloc->y, (float)alloc->width, (float)alloc->height, this, index);
	$BlockView::paintChild(g, alloc, index);
}

void ListView::setPropertiesFromAttributes() {
	$useLocalCurrentObjectStackCache();
	$BlockView::setPropertiesFromAttributes();
	$set(this, listPainter, $nc($(getStyleSheet()))->getListPainter($(getAttributes())));
}

ListView::ListView() {
}

$Class* ListView::load$($String* name, bool initialize) {
	$loadClass(ListView, name, initialize, &_ListView_ClassInfo_, allocate$ListView);
	return class$;
}

$Class* ListView::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax