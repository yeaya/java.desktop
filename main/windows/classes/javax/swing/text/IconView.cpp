#include <javax/swing/text/IconView.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/Icon.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/Position$Bias.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

#undef X_AXIS
#undef Y_AXIS

using $Position$BiasArray = $Array<::javax::swing::text::Position$Bias>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Element = ::javax::swing::text::Element;
using $Position$Bias = ::javax::swing::text::Position$Bias;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $View = ::javax::swing::text::View;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _IconView_FieldInfo_[] = {
	{"c", "Ljavax/swing/Icon;", nullptr, $PRIVATE, $field(IconView, c)},
	{}
};

$MethodInfo _IconView_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/Element;)V", nullptr, $PUBLIC, $method(static_cast<void(IconView::*)($Element*)>(&IconView::init$))},
	{"getAlignment", "(I)F", nullptr, $PUBLIC},
	{"getPreferredSpan", "(I)F", nullptr, $PUBLIC},
	{"modelToView", "(ILjava/awt/Shape;Ljavax/swing/text/Position$Bias;)Ljava/awt/Shape;", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{"paint", "(Ljava/awt/Graphics;Ljava/awt/Shape;)V", nullptr, $PUBLIC},
	{"viewToModel", "(FFLjava/awt/Shape;[Ljavax/swing/text/Position$Bias;)I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _IconView_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.IconView",
	"javax.swing.text.View",
	nullptr,
	_IconView_FieldInfo_,
	_IconView_MethodInfo_
};

$Object* allocate$IconView($Class* clazz) {
	return $of($alloc(IconView));
}

void IconView::init$($Element* elem) {
	$View::init$(elem);
	$var($AttributeSet, attr, $nc(elem)->getAttributes());
	$set(this, c, $StyleConstants::getIcon(attr));
}

void IconView::paint($Graphics* g, $Shape* a) {
	$var($Rectangle, alloc, $nc(a)->getBounds());
	$nc(this->c)->paintIcon($(getContainer()), g, $nc(alloc)->x, alloc->y);
}

float IconView::getPreferredSpan(int32_t axis) {
	switch (axis) {
	case $View::X_AXIS:
		{
			return (float)$nc(this->c)->getIconWidth();
		}
	case $View::Y_AXIS:
		{
			return (float)$nc(this->c)->getIconHeight();
		}
	default:
		{
			$throwNew($IllegalArgumentException, $$str({"Invalid axis: "_s, $$str(axis)}));
		}
	}
}

float IconView::getAlignment(int32_t axis) {
	switch (axis) {
	case $View::Y_AXIS:
		{
			return (float)1;
		}
	default:
		{
			return $View::getAlignment(axis);
		}
	}
}

$Shape* IconView::modelToView(int32_t pos, $Shape* a, $Position$Bias* b) {
	int32_t p0 = getStartOffset();
	int32_t p1 = getEndOffset();
	if ((pos >= p0) && (pos <= p1)) {
		$var($Rectangle, r, $nc(a)->getBounds());
		if (pos == p1) {
			$nc(r)->x += r->width;
		}
		$nc(r)->width = 0;
		return r;
	}
	$throwNew($BadLocationException, $$str({$$str(pos), " not in range "_s, $$str(p0), ","_s, $$str(p1)}), pos);
}

int32_t IconView::viewToModel(float x, float y, $Shape* a, $Position$BiasArray* bias) {
	$var($Rectangle, alloc, $cast($Rectangle, a));
	if (x < $nc(alloc)->x + (alloc->width / 2)) {
		$init($Position$Bias);
		$nc(bias)->set(0, $Position$Bias::Forward);
		return getStartOffset();
	}
	$init($Position$Bias);
	$nc(bias)->set(0, $Position$Bias::Backward);
	return getEndOffset();
}

IconView::IconView() {
}

$Class* IconView::load$($String* name, bool initialize) {
	$loadClass(IconView, name, initialize, &_IconView_ClassInfo_, allocate$IconView);
	return class$;
}

$Class* IconView::class$ = nullptr;

		} // text
	} // swing
} // javax