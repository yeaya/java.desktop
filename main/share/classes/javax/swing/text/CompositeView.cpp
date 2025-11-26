#include <javax/swing/text/CompositeView.h>

#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/lang/Math.h>
#include <java/util/AbstractSet.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/HashSet.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/Position$Bias.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/Utilities.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/ViewFactory.h>
#include <jcpp.h>

#undef EAST
#undef NORTH
#undef SOUTH
#undef WEST
#undef ZERO

using $Position$BiasArray = $Array<::javax::swing::text::Position$Bias>;
using $ViewArray = $Array<::javax::swing::text::View>;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSet = ::java::util::AbstractSet;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $HashSet = ::java::util::HashSet;
using $List = ::java::util::List;
using $Set = ::java::util::Set;
using $SwingConstants = ::javax::swing::SwingConstants;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $Position$Bias = ::javax::swing::text::Position$Bias;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $Utilities = ::javax::swing::text::Utilities;
using $View = ::javax::swing::text::View;
using $ViewFactory = ::javax::swing::text::ViewFactory;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _CompositeView_FieldInfo_[] = {
	{"ZERO", "[Ljavax/swing/text/View;", nullptr, $PRIVATE | $STATIC, $staticField(CompositeView, ZERO)},
	{"children", "[Ljavax/swing/text/View;", nullptr, $PRIVATE, $field(CompositeView, children)},
	{"nchildren", "I", nullptr, $PRIVATE, $field(CompositeView, nchildren)},
	{"left", "S", nullptr, $PRIVATE, $field(CompositeView, left)},
	{"right", "S", nullptr, $PRIVATE, $field(CompositeView, right)},
	{"top", "S", nullptr, $PRIVATE, $field(CompositeView, top)},
	{"bottom", "S", nullptr, $PRIVATE, $field(CompositeView, bottom)},
	{"childAlloc", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(CompositeView, childAlloc)},
	{}
};

$MethodInfo _CompositeView_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/Element;)V", nullptr, $PUBLIC, $method(static_cast<void(CompositeView::*)($Element*)>(&CompositeView::init$))},
	{"childAllocation", "(ILjava/awt/Rectangle;)V", nullptr, $PROTECTED | $ABSTRACT},
	{"flipEastAndWestAtEnds", "(ILjavax/swing/text/Position$Bias;)Z", nullptr, $PROTECTED},
	{"getBottomInset", "()S", nullptr, $PROTECTED},
	{"getChildAllocation", "(ILjava/awt/Shape;)Ljava/awt/Shape;", nullptr, $PUBLIC},
	{"getInsideAllocation", "(Ljava/awt/Shape;)Ljava/awt/Rectangle;", nullptr, $PROTECTED},
	{"getLeftInset", "()S", nullptr, $PROTECTED},
	{"getNextEastWestVisualPositionFrom", "(ILjavax/swing/text/Position$Bias;Ljava/awt/Shape;I[Ljavax/swing/text/Position$Bias;)I", nullptr, $PROTECTED, nullptr, "javax.swing.text.BadLocationException"},
	{"getNextNorthSouthVisualPositionFrom", "(ILjavax/swing/text/Position$Bias;Ljava/awt/Shape;I[Ljavax/swing/text/Position$Bias;)I", nullptr, $PROTECTED, nullptr, "javax.swing.text.BadLocationException"},
	{"getNextVisualPositionFrom", "(ILjavax/swing/text/Position$Bias;Ljava/awt/Shape;I[Ljavax/swing/text/Position$Bias;)I", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{"getRightInset", "()S", nullptr, $PROTECTED},
	{"getTopInset", "()S", nullptr, $PROTECTED},
	{"getView", "(I)Ljavax/swing/text/View;", nullptr, $PUBLIC},
	{"getViewAtPoint", "(IILjava/awt/Rectangle;)Ljavax/swing/text/View;", nullptr, $PROTECTED | $ABSTRACT},
	{"getViewAtPosition", "(ILjava/awt/Rectangle;)Ljavax/swing/text/View;", nullptr, $PROTECTED},
	{"getViewCount", "()I", nullptr, $PUBLIC},
	{"getViewIndex", "(ILjavax/swing/text/Position$Bias;)I", nullptr, $PUBLIC},
	{"getViewIndexAtPosition", "(I)I", nullptr, $PROTECTED},
	{"isAfter", "(IILjava/awt/Rectangle;)Z", nullptr, $PROTECTED | $ABSTRACT},
	{"isBefore", "(IILjava/awt/Rectangle;)Z", nullptr, $PROTECTED | $ABSTRACT},
	{"loadChildren", "(Ljavax/swing/text/ViewFactory;)V", nullptr, $PROTECTED},
	{"modelToView", "(ILjava/awt/Shape;Ljavax/swing/text/Position$Bias;)Ljava/awt/Shape;", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{"modelToView", "(ILjavax/swing/text/Position$Bias;ILjavax/swing/text/Position$Bias;Ljava/awt/Shape;)Ljava/awt/Shape;", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{"replace", "(II[Ljavax/swing/text/View;)V", nullptr, $PUBLIC},
	{"setInsets", "(SSSS)V", nullptr, $PROTECTED},
	{"setParagraphInsets", "(Ljavax/swing/text/AttributeSet;)V", nullptr, $PROTECTED},
	{"setParent", "(Ljavax/swing/text/View;)V", nullptr, $PUBLIC},
	{"viewToModel", "(FFLjava/awt/Shape;[Ljavax/swing/text/Position$Bias;)I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CompositeView_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.text.CompositeView",
	"javax.swing.text.View",
	nullptr,
	_CompositeView_FieldInfo_,
	_CompositeView_MethodInfo_
};

$Object* allocate$CompositeView($Class* clazz) {
	return $of($alloc(CompositeView));
}

$ViewArray* CompositeView::ZERO = nullptr;

void CompositeView::init$($Element* elem) {
	$View::init$(elem);
	$set(this, children, $new($ViewArray, 1));
	this->nchildren = 0;
	$set(this, childAlloc, $new($Rectangle));
}

void CompositeView::loadChildren($ViewFactory* f) {
	$useLocalCurrentObjectStackCache();
	if (f == nullptr) {
		return;
	}
	$var($Element, e, getElement());
	int32_t n = $nc(e)->getElementCount();
	if (n > 0) {
		$var($ViewArray, added, $new($ViewArray, n));
		for (int32_t i = 0; i < n; ++i) {
			added->set(i, $($nc(f)->create($(e->getElement(i)))));
		}
		replace(0, 0, added);
	}
}

void CompositeView::setParent($View* parent) {
	$View::setParent(parent);
	if ((parent != nullptr) && (this->nchildren == 0)) {
		$var($ViewFactory, f, getViewFactory());
		loadChildren(f);
	}
}

int32_t CompositeView::getViewCount() {
	return this->nchildren;
}

$View* CompositeView::getView(int32_t n) {
	return $nc(this->children)->get(n);
}

void CompositeView::replace(int32_t offset, int32_t length, $ViewArray* views$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($ViewArray, views, views$renamed);
	if (views == nullptr) {
		$assign(views, CompositeView::ZERO);
	}
	$var($Set, set, $new($HashSet, $(static_cast<$Collection*>($Arrays::asList(views)))));
	for (int32_t i = offset; i < offset + length; ++i) {
		$var($View, child, $nc(this->children)->get(i));
		bool var$0 = $equals($nc(child)->getParent(), this);
		if (var$0 && !set->contains(child)) {
			$nc($nc(this->children)->get(i))->setParent(nullptr);
		}
		$nc(this->children)->set(i, nullptr);
	}
	int32_t delta = $nc(views)->length - length;
	int32_t src = offset + length;
	int32_t nmove = this->nchildren - src;
	int32_t dest = src + delta;
	if ((this->nchildren + delta) >= $nc(this->children)->length) {
		int32_t newLength = $Math::max(2 * $nc(this->children)->length, this->nchildren + delta);
		$var($ViewArray, newChildren, $new($ViewArray, newLength));
		$System::arraycopy(this->children, 0, newChildren, 0, offset);
		$System::arraycopy(views, 0, newChildren, offset, views->length);
		$System::arraycopy(this->children, src, newChildren, dest, nmove);
		$set(this, children, newChildren);
	} else {
		$System::arraycopy(this->children, src, this->children, dest, nmove);
		$System::arraycopy(views, 0, this->children, offset, views->length);
	}
	this->nchildren = this->nchildren + delta;
	for (int32_t i = 0; i < views->length; ++i) {
		$nc(views->get(i))->setParent(this);
	}
}

$Shape* CompositeView::getChildAllocation(int32_t index, $Shape* a) {
	$var($Rectangle, alloc, getInsideAllocation(a));
	childAllocation(index, alloc);
	return alloc;
}

$Shape* CompositeView::modelToView(int32_t pos, $Shape* a, $Position$Bias* b) {
	$useLocalCurrentObjectStackCache();
	$init($Position$Bias);
	bool isBackward = (b == $Position$Bias::Backward);
	int32_t testPos = (isBackward) ? $Math::max(0, pos - 1) : pos;
	if (isBackward && testPos < getStartOffset()) {
		return nullptr;
	}
	int32_t vIndex = getViewIndexAtPosition(testPos);
	if ((vIndex != -1) && (vIndex < getViewCount())) {
		$var($View, v, getView(vIndex));
		bool var$0 = v != nullptr && testPos >= v->getStartOffset();
		if (var$0 && testPos < v->getEndOffset()) {
			$var($Shape, childShape, getChildAllocation(vIndex, a));
			if (childShape == nullptr) {
				return nullptr;
			}
			$var($Shape, retShape, v->modelToView(pos, childShape, b));
			if (retShape == nullptr && v->getEndOffset() == pos) {
				if (++vIndex < getViewCount()) {
					$assign(v, getView(vIndex));
					$assign(retShape, $nc(v)->modelToView(pos, $(getChildAllocation(vIndex, a)), b));
				}
			}
			return retShape;
		}
	}
	$throwNew($BadLocationException, "Position not represented by view"_s, pos);
}

$Shape* CompositeView::modelToView(int32_t p0, $Position$Bias* b0, int32_t p1, $Position$Bias* b1, $Shape* a) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = p0 == getStartOffset();
	if (var$0 && p1 == getEndOffset()) {
		return a;
	}
	$var($Rectangle, alloc, getInsideAllocation(a));
	$var($Rectangle, r0, $new($Rectangle, alloc));
	$init($Position$Bias);
	$var($View, v0, getViewAtPosition((b0 == $Position$Bias::Backward) ? $Math::max(0, p0 - 1) : p0, r0));
	$var($Rectangle, r1, $new($Rectangle, alloc));
	$var($View, v1, getViewAtPosition((b1 == $Position$Bias::Backward) ? $Math::max(0, p1 - 1) : p1, r1));
	if (v0 == v1) {
		if (v0 == nullptr) {
			return a;
		}
		return $nc(v0)->modelToView(p0, b0, p1, b1, r0);
	}
	int32_t viewCount = getViewCount();
	int32_t counter = 0;
	while (counter < viewCount) {
		$var($View, v, nullptr);
		if (($assign(v, getView(counter))) == v0 || v == v1) {
			$var($View, endView, nullptr);
			$var($Rectangle, retRect, nullptr);
			$var($Rectangle, tempRect, $new($Rectangle));
			if (v == v0) {
				$assign(retRect, $nc($($nc(v0)->modelToView(p0, b0, v0->getEndOffset(), $Position$Bias::Backward, r0)))->getBounds());
				$assign(endView, v1);
			} else {
				$assign(retRect, $nc($($nc(v1)->modelToView(v1->getStartOffset(), $Position$Bias::Forward, p1, b1, r1)))->getBounds());
				$assign(endView, v0);
			}
			while (true) {
				bool var$1 = ++counter < viewCount;
				if (!(var$1 && ($assign(v, getView(counter))) != endView)) {
					break;
				}
				{
					tempRect->setBounds(alloc);
					childAllocation(counter, tempRect);
					$nc(retRect)->add(tempRect);
				}
			}
			if (endView != nullptr) {
				$var($Shape, endShape, nullptr);
				if (endView == v1) {
					$assign(endShape, $nc(v1)->modelToView(v1->getStartOffset(), $Position$Bias::Forward, p1, b1, r1));
				} else {
					$assign(endShape, $nc(v0)->modelToView(p0, b0, v0->getEndOffset(), $Position$Bias::Backward, r0));
				}
				if ($instanceOf($Rectangle, endShape)) {
					$nc(retRect)->add($cast($Rectangle, endShape));
				} else {
					$nc(retRect)->add($($nc(endShape)->getBounds()));
				}
			}
			return retRect;
		}
		++counter;
	}
	$throwNew($BadLocationException, "Position not represented by view"_s, p0);
}

int32_t CompositeView::viewToModel(float x, float y, $Shape* a, $Position$BiasArray* bias) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, alloc, getInsideAllocation(a));
	if (isBefore($cast(int32_t, x), $cast(int32_t, y), alloc)) {
		int32_t retValue = -1;
		try {
			$init($Position$Bias);
			retValue = getNextVisualPositionFrom(-1, $Position$Bias::Forward, a, $SwingConstants::EAST, bias);
		} catch ($BadLocationException& ble) {
		} catch ($IllegalArgumentException& iae) {
		}
		if (retValue == -1) {
			retValue = getStartOffset();
			$init($Position$Bias);
			$nc(bias)->set(0, $Position$Bias::Forward);
		}
		return retValue;
	} else if (isAfter($cast(int32_t, x), $cast(int32_t, y), alloc)) {
		int32_t retValue = -1;
		try {
			$init($Position$Bias);
			retValue = getNextVisualPositionFrom(-1, $Position$Bias::Forward, a, $SwingConstants::WEST, bias);
		} catch ($BadLocationException& ble) {
		} catch ($IllegalArgumentException& iae) {
		}
		if (retValue == -1) {
			retValue = getEndOffset() - 1;
			$init($Position$Bias);
			$nc(bias)->set(0, $Position$Bias::Forward);
		}
		return retValue;
	} else {
		$var($View, v, getViewAtPoint($cast(int32_t, x), $cast(int32_t, y), alloc));
		if (v != nullptr) {
			return v->viewToModel(x, y, alloc, bias);
		}
	}
	return -1;
}

int32_t CompositeView::getNextVisualPositionFrom(int32_t pos, $Position$Bias* b, $Shape* a, int32_t direction, $Position$BiasArray* biasRet) {
	$useLocalCurrentObjectStackCache();
	if (pos < -1 || pos > $nc($(getDocument()))->getLength()) {
		$throwNew($BadLocationException, "invalid position"_s, pos);
	}
	$var($Rectangle, alloc, getInsideAllocation(a));
	switch (direction) {
	case $SwingConstants::NORTH:
		{
			return getNextNorthSouthVisualPositionFrom(pos, b, a, direction, biasRet);
		}
	case $SwingConstants::SOUTH:
		{
			return getNextNorthSouthVisualPositionFrom(pos, b, a, direction, biasRet);
		}
	case $SwingConstants::EAST:
		{
			return getNextEastWestVisualPositionFrom(pos, b, a, direction, biasRet);
		}
	case $SwingConstants::WEST:
		{
			return getNextEastWestVisualPositionFrom(pos, b, a, direction, biasRet);
		}
	default:
		{
			$throwNew($IllegalArgumentException, $$str({"Bad direction: "_s, $$str(direction)}));
		}
	}
}

int32_t CompositeView::getViewIndex(int32_t pos, $Position$Bias* b) {
	$init($Position$Bias);
	if (b == $Position$Bias::Backward) {
		pos -= 1;
	}
	bool var$0 = (pos >= getStartOffset());
	if (var$0 && (pos < getEndOffset())) {
		return getViewIndexAtPosition(pos);
	}
	return -1;
}

$View* CompositeView::getViewAtPosition(int32_t pos, $Rectangle* a) {
	int32_t index = getViewIndexAtPosition(pos);
	if ((index >= 0) && (index < getViewCount())) {
		$var($View, v, getView(index));
		if (a != nullptr) {
			childAllocation(index, a);
		}
		return v;
	}
	return nullptr;
}

int32_t CompositeView::getViewIndexAtPosition(int32_t pos) {
	$var($Element, elem, getElement());
	return $nc(elem)->getElementIndex(pos);
}

$Rectangle* CompositeView::getInsideAllocation($Shape* a) {
	if (a != nullptr) {
		$var($Rectangle, alloc, nullptr);
		if ($instanceOf($Rectangle, a)) {
			$assign(alloc, $cast($Rectangle, a));
		} else {
			$assign(alloc, a->getBounds());
		}
		$nc(this->childAlloc)->setBounds(alloc);
		$nc(this->childAlloc)->x += getLeftInset();
		$nc(this->childAlloc)->y += getTopInset();
		int16_t var$0 = getLeftInset();
		$nc(this->childAlloc)->width -= var$0 + getRightInset();
		int16_t var$1 = getTopInset();
		$nc(this->childAlloc)->height -= var$1 + getBottomInset();
		return this->childAlloc;
	}
	return nullptr;
}

void CompositeView::setParagraphInsets($AttributeSet* attr) {
	this->top = $cast(int16_t, $StyleConstants::getSpaceAbove(attr));
	this->left = $cast(int16_t, $StyleConstants::getLeftIndent(attr));
	this->bottom = $cast(int16_t, $StyleConstants::getSpaceBelow(attr));
	this->right = $cast(int16_t, $StyleConstants::getRightIndent(attr));
}

void CompositeView::setInsets(int16_t top, int16_t left, int16_t bottom, int16_t right) {
	this->top = top;
	this->left = left;
	this->right = right;
	this->bottom = bottom;
}

int16_t CompositeView::getLeftInset() {
	return this->left;
}

int16_t CompositeView::getRightInset() {
	return this->right;
}

int16_t CompositeView::getTopInset() {
	return this->top;
}

int16_t CompositeView::getBottomInset() {
	return this->bottom;
}

int32_t CompositeView::getNextNorthSouthVisualPositionFrom(int32_t pos, $Position$Bias* b, $Shape* a, int32_t direction, $Position$BiasArray* biasRet) {
	if (pos < -1 || pos > $nc($(getDocument()))->getLength()) {
		$throwNew($BadLocationException, "invalid position"_s, pos);
	}
	return $Utilities::getNextVisualPositionFrom(this, pos, b, a, direction, biasRet);
}

int32_t CompositeView::getNextEastWestVisualPositionFrom(int32_t pos, $Position$Bias* b, $Shape* a, int32_t direction, $Position$BiasArray* biasRet) {
	if (pos < -1 || pos > $nc($(getDocument()))->getLength()) {
		$throwNew($BadLocationException, "invalid position"_s, pos);
	}
	return $Utilities::getNextVisualPositionFrom(this, pos, b, a, direction, biasRet);
}

bool CompositeView::flipEastAndWestAtEnds(int32_t position, $Position$Bias* bias) {
	return false;
}

void clinit$CompositeView($Class* class$) {
	$assignStatic(CompositeView::ZERO, $new($ViewArray, 0));
}

CompositeView::CompositeView() {
}

$Class* CompositeView::load$($String* name, bool initialize) {
	$loadClass(CompositeView, name, initialize, &_CompositeView_ClassInfo_, clinit$CompositeView, allocate$CompositeView);
	return class$;
}

$Class* CompositeView::class$ = nullptr;

		} // text
	} // swing
} // javax