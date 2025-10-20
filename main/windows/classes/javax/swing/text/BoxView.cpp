#include <javax/swing/text/BoxView.h>

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
#include <java/lang/Float.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/SizeRequirements.h>
#include <javax/swing/event/DocumentEvent$ElementChange.h>
#include <javax/swing/event/DocumentEvent.h>
#include <javax/swing/text/CompositeView.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/Position$Bias.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/ViewFactory.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef X_AXIS
#undef Y_AXIS

using $Position$BiasArray = $Array<::javax::swing::text::Position$Bias>;
using $ViewArray = $Array<::javax::swing::text::View>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $SizeRequirements = ::javax::swing::SizeRequirements;
using $DocumentEvent = ::javax::swing::event::DocumentEvent;
using $DocumentEvent$ElementChange = ::javax::swing::event::DocumentEvent$ElementChange;
using $CompositeView = ::javax::swing::text::CompositeView;
using $Element = ::javax::swing::text::Element;
using $Position$Bias = ::javax::swing::text::Position$Bias;
using $View = ::javax::swing::text::View;
using $ViewFactory = ::javax::swing::text::ViewFactory;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _BoxView_FieldInfo_[] = {
	{"majorAxis", "I", nullptr, 0, $field(BoxView, majorAxis)},
	{"majorSpan", "I", nullptr, 0, $field(BoxView, majorSpan)},
	{"minorSpan", "I", nullptr, 0, $field(BoxView, minorSpan)},
	{"majorReqValid", "Z", nullptr, 0, $field(BoxView, majorReqValid)},
	{"minorReqValid", "Z", nullptr, 0, $field(BoxView, minorReqValid)},
	{"majorRequest", "Ljavax/swing/SizeRequirements;", nullptr, 0, $field(BoxView, majorRequest)},
	{"minorRequest", "Ljavax/swing/SizeRequirements;", nullptr, 0, $field(BoxView, minorRequest)},
	{"majorAllocValid", "Z", nullptr, 0, $field(BoxView, majorAllocValid)},
	{"majorOffsets", "[I", nullptr, 0, $field(BoxView, majorOffsets)},
	{"majorSpans", "[I", nullptr, 0, $field(BoxView, majorSpans)},
	{"minorAllocValid", "Z", nullptr, 0, $field(BoxView, minorAllocValid)},
	{"minorOffsets", "[I", nullptr, 0, $field(BoxView, minorOffsets)},
	{"minorSpans", "[I", nullptr, 0, $field(BoxView, minorSpans)},
	{"tempRect", "Ljava/awt/Rectangle;", nullptr, 0, $field(BoxView, tempRect)},
	{}
};

$MethodInfo _BoxView_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/Element;I)V", nullptr, $PUBLIC, $method(static_cast<void(BoxView::*)($Element*,int32_t)>(&BoxView::init$))},
	{"baselineLayout", "(II[I[I)V", nullptr, $PROTECTED},
	{"baselineRequirements", "(ILjavax/swing/SizeRequirements;)Ljavax/swing/SizeRequirements;", nullptr, $PROTECTED},
	{"calculateMajorAxisRequirements", "(ILjavax/swing/SizeRequirements;)Ljavax/swing/SizeRequirements;", nullptr, $PROTECTED},
	{"calculateMinorAxisRequirements", "(ILjavax/swing/SizeRequirements;)Ljavax/swing/SizeRequirements;", nullptr, $PROTECTED},
	{"checkRequests", "(I)V", nullptr, 0},
	{"childAllocation", "(ILjava/awt/Rectangle;)V", nullptr, $PROTECTED},
	{"flipEastAndWestAtEnds", "(ILjavax/swing/text/Position$Bias;)Z", nullptr, $PROTECTED},
	{"forwardUpdate", "(Ljavax/swing/event/DocumentEvent$ElementChange;Ljavax/swing/event/DocumentEvent;Ljava/awt/Shape;Ljavax/swing/text/ViewFactory;)V", nullptr, $PROTECTED},
	{"getAlignment", "(I)F", nullptr, $PUBLIC},
	{"getAxis", "()I", nullptr, $PUBLIC},
	{"getChildAllocation", "(ILjava/awt/Shape;)Ljava/awt/Shape;", nullptr, $PUBLIC},
	{"getHeight", "()I", nullptr, $PUBLIC},
	{"getMaximumSpan", "(I)F", nullptr, $PUBLIC},
	{"getMinimumSpan", "(I)F", nullptr, $PUBLIC},
	{"getOffset", "(II)I", nullptr, $PROTECTED},
	{"getPreferredSpan", "(I)F", nullptr, $PUBLIC},
	{"getResizeWeight", "(I)I", nullptr, $PUBLIC},
	{"getSpan", "(II)I", nullptr, $PROTECTED},
	{"getSpanOnAxis", "(I)F", nullptr, 0},
	{"getViewAtPoint", "(IILjava/awt/Rectangle;)Ljavax/swing/text/View;", nullptr, $PROTECTED},
	{"getWidth", "()I", nullptr, $PUBLIC},
	{"isAfter", "(IILjava/awt/Rectangle;)Z", nullptr, $PROTECTED},
	{"isAllocationValid", "()Z", nullptr, $PROTECTED},
	{"isBefore", "(IILjava/awt/Rectangle;)Z", nullptr, $PROTECTED},
	{"isLayoutValid", "(I)Z", nullptr, $PROTECTED},
	{"layout", "(II)V", nullptr, $PROTECTED},
	{"layoutChanged", "(I)V", nullptr, $PUBLIC},
	{"layoutMajorAxis", "(II[I[I)V", nullptr, $PROTECTED},
	{"layoutMinorAxis", "(II[I[I)V", nullptr, $PROTECTED},
	{"modelToView", "(ILjava/awt/Shape;Ljavax/swing/text/Position$Bias;)Ljava/awt/Shape;", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{"paint", "(Ljava/awt/Graphics;Ljava/awt/Shape;)V", nullptr, $PUBLIC},
	{"paintChild", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;I)V", nullptr, $PROTECTED},
	{"preferenceChanged", "(Ljavax/swing/text/View;ZZ)V", nullptr, $PUBLIC},
	{"replace", "(II[Ljavax/swing/text/View;)V", nullptr, $PUBLIC},
	{"setAxis", "(I)V", nullptr, $PUBLIC},
	{"setSize", "(FF)V", nullptr, $PUBLIC},
	{"setSpanOnAxis", "(IF)V", nullptr, 0},
	{"updateChildSizes", "()V", nullptr, 0},
	{"updateLayoutArray", "([III)[I", nullptr, 0},
	{"viewToModel", "(FFLjava/awt/Shape;[Ljavax/swing/text/Position$Bias;)I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _BoxView_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.BoxView",
	"javax.swing.text.CompositeView",
	nullptr,
	_BoxView_FieldInfo_,
	_BoxView_MethodInfo_
};

$Object* allocate$BoxView($Class* clazz) {
	return $of($alloc(BoxView));
}

void BoxView::init$($Element* elem, int32_t axis) {
	$CompositeView::init$(elem);
	$set(this, tempRect, $new($Rectangle));
	this->majorAxis = axis;
	$set(this, majorOffsets, $new($ints, 0));
	$set(this, majorSpans, $new($ints, 0));
	this->majorReqValid = false;
	this->majorAllocValid = false;
	$set(this, minorOffsets, $new($ints, 0));
	$set(this, minorSpans, $new($ints, 0));
	this->minorReqValid = false;
	this->minorAllocValid = false;
}

int32_t BoxView::getAxis() {
	return this->majorAxis;
}

void BoxView::setAxis(int32_t axis) {
	bool axisChanged = (axis != this->majorAxis);
	this->majorAxis = axis;
	if (axisChanged) {
		preferenceChanged(nullptr, true, true);
	}
}

void BoxView::layoutChanged(int32_t axis) {
	if (axis == this->majorAxis) {
		this->majorAllocValid = false;
	} else {
		this->minorAllocValid = false;
	}
}

bool BoxView::isLayoutValid(int32_t axis) {
	if (axis == this->majorAxis) {
		return this->majorAllocValid;
	} else {
		return this->minorAllocValid;
	}
}

void BoxView::paintChild($Graphics* g, $Rectangle* alloc, int32_t index) {
	$var($View, child, getView(index));
	$nc(child)->paint(g, alloc);
}

void BoxView::replace(int32_t index, int32_t length, $ViewArray* elems) {
	$CompositeView::replace(index, length, elems);
	int32_t nInserted = (elems != nullptr) ? $nc(elems)->length : 0;
	$set(this, majorOffsets, updateLayoutArray(this->majorOffsets, index, nInserted));
	$set(this, majorSpans, updateLayoutArray(this->majorSpans, index, nInserted));
	this->majorReqValid = false;
	this->majorAllocValid = false;
	$set(this, minorOffsets, updateLayoutArray(this->minorOffsets, index, nInserted));
	$set(this, minorSpans, updateLayoutArray(this->minorSpans, index, nInserted));
	this->minorReqValid = false;
	this->minorAllocValid = false;
}

$ints* BoxView::updateLayoutArray($ints* oldArray, int32_t offset, int32_t nInserted) {
	int32_t n = getViewCount();
	$var($ints, newArray, $new($ints, n));
	$System::arraycopy(oldArray, 0, newArray, 0, offset);
	$System::arraycopy(oldArray, offset, newArray, offset + nInserted, n - nInserted - offset);
	return newArray;
}

void BoxView::forwardUpdate($DocumentEvent$ElementChange* ec, $DocumentEvent* e, $Shape* a, $ViewFactory* f) {
	$useLocalCurrentObjectStackCache();
	bool wasValid = isLayoutValid(this->majorAxis);
	$CompositeView::forwardUpdate(ec, e, a, f);
	if (wasValid && (!isLayoutValid(this->majorAxis))) {
		$var($Component, c, getContainer());
		if ((a != nullptr) && (c != nullptr)) {
			int32_t pos = $nc(e)->getOffset();
			int32_t index = getViewIndexAtPosition(pos);
			$var($Rectangle, alloc, getInsideAllocation(a));
			if (this->majorAxis == $View::X_AXIS) {
				$nc(alloc)->x += $nc(this->majorOffsets)->get(index);
				alloc->width -= $nc(this->majorOffsets)->get(index);
			} else {
				$nc(alloc)->y += $nc(this->minorOffsets)->get(index);
				alloc->height -= $nc(this->minorOffsets)->get(index);
			}
			c->repaint($nc(alloc)->x, alloc->y, alloc->width, alloc->height);
		}
	}
}

void BoxView::preferenceChanged($View* child, bool width, bool height) {
	bool majorChanged = (this->majorAxis == $View::X_AXIS) ? width : height;
	bool minorChanged = (this->majorAxis == $View::X_AXIS) ? height : width;
	if (majorChanged) {
		this->majorReqValid = false;
		this->majorAllocValid = false;
	}
	if (minorChanged) {
		this->minorReqValid = false;
		this->minorAllocValid = false;
	}
	$CompositeView::preferenceChanged(child, width, height);
}

int32_t BoxView::getResizeWeight(int32_t axis) {
	checkRequests(axis);
	if (axis == this->majorAxis) {
		if (($nc(this->majorRequest)->preferred != $nc(this->majorRequest)->minimum) || ($nc(this->majorRequest)->preferred != $nc(this->majorRequest)->maximum)) {
			return 1;
		}
	} else if (($nc(this->minorRequest)->preferred != $nc(this->minorRequest)->minimum) || ($nc(this->minorRequest)->preferred != $nc(this->minorRequest)->maximum)) {
		return 1;
	}
	return 0;
}

void BoxView::setSpanOnAxis(int32_t axis, float span) {
	if (axis == this->majorAxis) {
		if (this->majorSpan != $cast(int32_t, span)) {
			this->majorAllocValid = false;
		}
		if (!this->majorAllocValid) {
			this->majorSpan = $cast(int32_t, span);
			checkRequests(this->majorAxis);
			layoutMajorAxis(this->majorSpan, axis, this->majorOffsets, this->majorSpans);
			this->majorAllocValid = true;
			updateChildSizes();
		}
	} else {
		if (($cast(int32_t, span)) != this->minorSpan) {
			this->minorAllocValid = false;
		}
		if (!this->minorAllocValid) {
			this->minorSpan = $cast(int32_t, span);
			checkRequests(axis);
			layoutMinorAxis(this->minorSpan, axis, this->minorOffsets, this->minorSpans);
			this->minorAllocValid = true;
			updateChildSizes();
		}
	}
}

void BoxView::updateChildSizes() {
	$useLocalCurrentObjectStackCache();
	int32_t n = getViewCount();
	if (this->majorAxis == $View::X_AXIS) {
		for (int32_t i = 0; i < n; ++i) {
			$var($View, v, getView(i));
			$nc(v)->setSize((float)$nc(this->majorSpans)->get(i), (float)$nc(this->minorSpans)->get(i));
		}
	} else {
		for (int32_t i = 0; i < n; ++i) {
			$var($View, v, getView(i));
			$nc(v)->setSize((float)$nc(this->minorSpans)->get(i), (float)$nc(this->majorSpans)->get(i));
		}
	}
}

float BoxView::getSpanOnAxis(int32_t axis) {
	if (axis == this->majorAxis) {
		return (float)this->majorSpan;
	} else {
		return (float)this->minorSpan;
	}
}

void BoxView::setSize(float width, float height) {
	float var$1 = width - getLeftInset();
	int32_t var$0 = $Math::max(0, $cast(int32_t, (var$1 - getRightInset())));
	float var$2 = height - getTopInset();
	layout(var$0, $Math::max(0, $cast(int32_t, (var$2 - getBottomInset()))));
}

void BoxView::paint($Graphics* g, $Shape* allocation) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, alloc, ($instanceOf($Rectangle, allocation)) ? $cast($Rectangle, allocation) : $nc(allocation)->getBounds());
	int32_t n = getViewCount();
	int32_t x = $nc(alloc)->x + getLeftInset();
	int32_t y = alloc->y + getTopInset();
	$var($Rectangle, clip, $nc(g)->getClipBounds());
	for (int32_t i = 0; i < n; ++i) {
		$nc(this->tempRect)->x = x + getOffset($View::X_AXIS, i);
		$nc(this->tempRect)->y = y + getOffset($View::Y_AXIS, i);
		$nc(this->tempRect)->width = getSpan($View::X_AXIS, i);
		$nc(this->tempRect)->height = getSpan($View::Y_AXIS, i);
		int32_t trx0 = $nc(this->tempRect)->x;
		int32_t trx1 = trx0 + $nc(this->tempRect)->width;
		int32_t try0 = $nc(this->tempRect)->y;
		int32_t try1 = try0 + $nc(this->tempRect)->height;
		int32_t crx0 = $nc(clip)->x;
		int32_t crx1 = crx0 + clip->width;
		int32_t cry0 = clip->y;
		int32_t cry1 = cry0 + clip->height;
		if ((trx1 >= crx0) && (try1 >= cry0) && (crx1 >= trx0) && (cry1 >= try0)) {
			paintChild(g, this->tempRect, i);
		}
	}
}

$Shape* BoxView::getChildAllocation(int32_t index, $Shape* a) {
	$useLocalCurrentObjectStackCache();
	if (a != nullptr) {
		$var($Shape, ca, $CompositeView::getChildAllocation(index, a));
		if ((ca != nullptr) && (!isAllocationValid())) {
			$var($Rectangle, r, ($instanceOf($Rectangle, ca)) ? $cast($Rectangle, ca) : ca->getBounds());
			if (($nc(r)->width == 0) && (r->height == 0)) {
				return nullptr;
			}
		}
		return ca;
	}
	return nullptr;
}

$Shape* BoxView::modelToView(int32_t pos, $Shape* a, $Position$Bias* b) {
	if (!isAllocationValid()) {
		$var($Rectangle, alloc, $nc(a)->getBounds());
		setSize((float)$nc(alloc)->width, (float)alloc->height);
	}
	return $CompositeView::modelToView(pos, a, b);
}

int32_t BoxView::viewToModel(float x, float y, $Shape* a, $Position$BiasArray* bias) {
	if (!isAllocationValid()) {
		$var($Rectangle, alloc, $nc(a)->getBounds());
		setSize((float)$nc(alloc)->width, (float)alloc->height);
	}
	return $CompositeView::viewToModel(x, y, a, bias);
}

float BoxView::getAlignment(int32_t axis) {
	checkRequests(axis);
	if (axis == this->majorAxis) {
		return $nc(this->majorRequest)->alignment;
	} else {
		return $nc(this->minorRequest)->alignment;
	}
}

float BoxView::getPreferredSpan(int32_t axis) {
	checkRequests(axis);
	int32_t var$0 = 0;
	if (axis == $View::X_AXIS) {
		int16_t var$1 = getLeftInset();
		var$0 = var$1 + getRightInset();
	} else {
		int16_t var$2 = getTopInset();
		var$0 = var$2 + getBottomInset();
	}
	float marginSpan = (float)var$0;
	if (axis == this->majorAxis) {
		return ((float)$nc(this->majorRequest)->preferred) + marginSpan;
	} else {
		return ((float)$nc(this->minorRequest)->preferred) + marginSpan;
	}
}

float BoxView::getMinimumSpan(int32_t axis) {
	checkRequests(axis);
	int32_t var$0 = 0;
	if (axis == $View::X_AXIS) {
		int16_t var$1 = getLeftInset();
		var$0 = var$1 + getRightInset();
	} else {
		int16_t var$2 = getTopInset();
		var$0 = var$2 + getBottomInset();
	}
	float marginSpan = (float)var$0;
	if (axis == this->majorAxis) {
		return ((float)$nc(this->majorRequest)->minimum) + marginSpan;
	} else {
		return ((float)$nc(this->minorRequest)->minimum) + marginSpan;
	}
}

float BoxView::getMaximumSpan(int32_t axis) {
	checkRequests(axis);
	int32_t var$0 = 0;
	if (axis == $View::X_AXIS) {
		int16_t var$1 = getLeftInset();
		var$0 = var$1 + getRightInset();
	} else {
		int16_t var$2 = getTopInset();
		var$0 = var$2 + getBottomInset();
	}
	float marginSpan = (float)var$0;
	if (axis == this->majorAxis) {
		return ((float)$nc(this->majorRequest)->maximum) + marginSpan;
	} else {
		return ((float)$nc(this->minorRequest)->maximum) + marginSpan;
	}
}

bool BoxView::isAllocationValid() {
	return (this->majorAllocValid && this->minorAllocValid);
}

bool BoxView::isBefore(int32_t x, int32_t y, $Rectangle* innerAlloc) {
	if (this->majorAxis == $View::X_AXIS) {
		return (x < $nc(innerAlloc)->x);
	} else {
		return (y < $nc(innerAlloc)->y);
	}
}

bool BoxView::isAfter(int32_t x, int32_t y, $Rectangle* innerAlloc) {
	if (this->majorAxis == $View::X_AXIS) {
		return (x > ($nc(innerAlloc)->width + innerAlloc->x));
	} else {
		return (y > ($nc(innerAlloc)->height + innerAlloc->y));
	}
}

$View* BoxView::getViewAtPoint(int32_t x, int32_t y, $Rectangle* alloc) {
	int32_t n = getViewCount();
	if (this->majorAxis == $View::X_AXIS) {
		if (x < ($nc(alloc)->x + $nc(this->majorOffsets)->get(0))) {
			childAllocation(0, alloc);
			return getView(0);
		}
		for (int32_t i = 0; i < n; ++i) {
			if (x < ($nc(alloc)->x + $nc(this->majorOffsets)->get(i))) {
				childAllocation(i - 1, alloc);
				return getView(i - 1);
			}
		}
		childAllocation(n - 1, alloc);
		return getView(n - 1);
	} else {
		if (y < ($nc(alloc)->y + $nc(this->majorOffsets)->get(0))) {
			childAllocation(0, alloc);
			return getView(0);
		}
		for (int32_t i = 0; i < n; ++i) {
			if (y < ($nc(alloc)->y + $nc(this->majorOffsets)->get(i))) {
				childAllocation(i - 1, alloc);
				return getView(i - 1);
			}
		}
		childAllocation(n - 1, alloc);
		return getView(n - 1);
	}
}

void BoxView::childAllocation(int32_t index, $Rectangle* alloc) {
	$nc(alloc)->x += getOffset($View::X_AXIS, index);
	alloc->y += getOffset($View::Y_AXIS, index);
	alloc->width = getSpan($View::X_AXIS, index);
	alloc->height = getSpan($View::Y_AXIS, index);
}

void BoxView::layout(int32_t width, int32_t height) {
	setSpanOnAxis($View::X_AXIS, (float)width);
	setSpanOnAxis($View::Y_AXIS, (float)height);
}

int32_t BoxView::getWidth() {
	int32_t span = 0;
	if (this->majorAxis == $View::X_AXIS) {
		span = this->majorSpan;
	} else {
		span = this->minorSpan;
	}
	int16_t var$0 = getLeftInset();
	span += var$0 - getRightInset();
	return span;
}

int32_t BoxView::getHeight() {
	int32_t span = 0;
	if (this->majorAxis == $View::Y_AXIS) {
		span = this->majorSpan;
	} else {
		span = this->minorSpan;
	}
	int16_t var$0 = getTopInset();
	span += var$0 - getBottomInset();
	return span;
}

void BoxView::layoutMajorAxis(int32_t targetSpan, int32_t axis, $ints* offsets, $ints* spans) {
	$useLocalCurrentObjectStackCache();
	int64_t preferred = 0;
	int32_t n = getViewCount();
	for (int32_t i = 0; i < n; ++i) {
		$var($View, v, getView(i));
		$nc(spans)->set(i, $cast(int32_t, $nc(v)->getPreferredSpan(axis)));
		preferred += spans->get(i);
	}
	int64_t desiredAdjustment = targetSpan - preferred;
	float adjustmentFactor = 0.0f;
	$var($ints, diffs, nullptr);
	if (desiredAdjustment != 0) {
		int64_t totalSpan = 0;
		$assign(diffs, $new($ints, n));
		for (int32_t i = 0; i < n; ++i) {
			$var($View, v, getView(i));
			int32_t tmp = 0;
			if (desiredAdjustment < 0) {
				tmp = $cast(int32_t, $nc(v)->getMinimumSpan(axis));
				diffs->set(i, $nc(spans)->get(i) - tmp);
			} else {
				tmp = $cast(int32_t, $nc(v)->getMaximumSpan(axis));
				diffs->set(i, tmp - $nc(spans)->get(i));
			}
			totalSpan += tmp;
		}
		float maximumAdjustment = (float)$Math::abs(totalSpan - preferred);
		adjustmentFactor = desiredAdjustment / maximumAdjustment;
		adjustmentFactor = $Math::min(adjustmentFactor, 1.0f);
		adjustmentFactor = $Math::max(adjustmentFactor, -1.0f);
	}
	int32_t totalOffset = 0;
	for (int32_t i = 0; i < n; ++i) {
		$nc(offsets)->set(i, totalOffset);
		if (desiredAdjustment != 0) {
			float adjF = adjustmentFactor * $nc(diffs)->get(i);
			(*$nc(spans))[i] += $Math::round(adjF);
		}
		totalOffset = (int32_t)$Math::min((int64_t)totalOffset + (int64_t)$nc(spans)->get(i), (int64_t)$Integer::MAX_VALUE);
	}
}

void BoxView::layoutMinorAxis(int32_t targetSpan, int32_t axis, $ints* offsets, $ints* spans) {
	$useLocalCurrentObjectStackCache();
	int32_t n = getViewCount();
	for (int32_t i = 0; i < n; ++i) {
		$var($View, v, getView(i));
		int32_t max = $cast(int32_t, $nc(v)->getMaximumSpan(axis));
		if (max < targetSpan) {
			float align = v->getAlignment(axis);
			$nc(offsets)->set(i, $cast(int32_t, ((targetSpan - max) * align)));
			$nc(spans)->set(i, max);
		} else {
			int32_t min = $cast(int32_t, v->getMinimumSpan(axis));
			$nc(offsets)->set(i, 0);
			$nc(spans)->set(i, $Math::max(min, targetSpan));
		}
	}
}

$SizeRequirements* BoxView::calculateMajorAxisRequirements(int32_t axis, $SizeRequirements* r$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($SizeRequirements, r, r$renamed);
	float min = (float)0;
	float pref = (float)0;
	float max = (float)0;
	int32_t n = getViewCount();
	for (int32_t i = 0; i < n; ++i) {
		$var($View, v, getView(i));
		min += $nc(v)->getMinimumSpan(axis);
		pref += v->getPreferredSpan(axis);
		max += v->getMaximumSpan(axis);
	}
	if (r == nullptr) {
		$assign(r, $new($SizeRequirements));
	}
	$nc(r)->alignment = 0.5f;
	r->minimum = $cast(int32_t, min);
	r->preferred = $cast(int32_t, pref);
	r->maximum = $cast(int32_t, max);
	return r;
}

$SizeRequirements* BoxView::calculateMinorAxisRequirements(int32_t axis, $SizeRequirements* r$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($SizeRequirements, r, r$renamed);
	int32_t min = 0;
	int64_t pref = 0;
	int32_t max = $Integer::MAX_VALUE;
	int32_t n = getViewCount();
	for (int32_t i = 0; i < n; ++i) {
		$var($View, v, getView(i));
		min = $Math::max($cast(int32_t, $nc(v)->getMinimumSpan(axis)), min);
		pref = $Math::max((int64_t)$cast(int32_t, $nc(v)->getPreferredSpan(axis)), pref);
		max = $Math::max($cast(int32_t, $nc(v)->getMaximumSpan(axis)), max);
	}
	if (r == nullptr) {
		$assign(r, $new($SizeRequirements));
		r->alignment = 0.5f;
	}
	$nc(r)->preferred = (int32_t)pref;
	r->minimum = min;
	r->maximum = max;
	return r;
}

void BoxView::checkRequests(int32_t axis) {
	$useLocalCurrentObjectStackCache();
	if ((axis != $View::X_AXIS) && (axis != $View::Y_AXIS)) {
		$throwNew($IllegalArgumentException, $$str({"Invalid axis: "_s, $$str(axis)}));
	}
	if (axis == this->majorAxis) {
		if (!this->majorReqValid) {
			$set(this, majorRequest, calculateMajorAxisRequirements(axis, this->majorRequest));
			this->majorReqValid = true;
		}
	} else if (!this->minorReqValid) {
		$set(this, minorRequest, calculateMinorAxisRequirements(axis, this->minorRequest));
		this->minorReqValid = true;
	}
}

void BoxView::baselineLayout(int32_t targetSpan, int32_t axis, $ints* offsets, $ints* spans) {
	$useLocalCurrentObjectStackCache();
	int32_t totalAscent = $cast(int32_t, (targetSpan * getAlignment(axis)));
	int32_t totalDescent = targetSpan - totalAscent;
	int32_t n = getViewCount();
	for (int32_t i = 0; i < n; ++i) {
		$var($View, v, getView(i));
		float align = $nc(v)->getAlignment(axis);
		float viewSpan = 0.0;
		if (v->getResizeWeight(axis) > 0) {
			float minSpan = v->getMinimumSpan(axis);
			float maxSpan = v->getMaximumSpan(axis);
			if (align == 0.0f) {
				viewSpan = $Math::max($Math::min(maxSpan, (float)totalDescent), minSpan);
			} else if (align == 1.0f) {
				viewSpan = $Math::max($Math::min(maxSpan, (float)totalAscent), minSpan);
			} else {
				float fitSpan = $Math::min(totalAscent / align, totalDescent / (1.0f - align));
				viewSpan = $Math::max($Math::min(maxSpan, fitSpan), minSpan);
			}
		} else {
			viewSpan = v->getPreferredSpan(axis);
		}
		$nc(offsets)->set(i, totalAscent - $cast(int32_t, (viewSpan * align)));
		$nc(spans)->set(i, $cast(int32_t, viewSpan));
	}
}

$SizeRequirements* BoxView::baselineRequirements(int32_t axis, $SizeRequirements* r$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($SizeRequirements, r, r$renamed);
	$var($SizeRequirements, totalAscent, $new($SizeRequirements));
	$var($SizeRequirements, totalDescent, $new($SizeRequirements));
	if (r == nullptr) {
		$assign(r, $new($SizeRequirements));
	}
	$nc(r)->alignment = 0.5f;
	int32_t n = getViewCount();
	for (int32_t i = 0; i < n; ++i) {
		$var($View, v, getView(i));
		float align = $nc(v)->getAlignment(axis);
		float span = 0.0;
		int32_t ascent = 0;
		int32_t descent = 0;
		span = v->getPreferredSpan(axis);
		ascent = $cast(int32_t, (align * span));
		descent = $cast(int32_t, (span - ascent));
		totalAscent->preferred = $Math::max(ascent, totalAscent->preferred);
		totalDescent->preferred = $Math::max(descent, totalDescent->preferred);
		if (v->getResizeWeight(axis) > 0) {
			span = v->getMinimumSpan(axis);
			ascent = $cast(int32_t, (align * span));
			descent = $cast(int32_t, (span - ascent));
			totalAscent->minimum = $Math::max(ascent, totalAscent->minimum);
			totalDescent->minimum = $Math::max(descent, totalDescent->minimum);
			span = v->getMaximumSpan(axis);
			ascent = $cast(int32_t, (align * span));
			descent = $cast(int32_t, (span - ascent));
			totalAscent->maximum = $Math::max(ascent, totalAscent->maximum);
			totalDescent->maximum = $Math::max(descent, totalDescent->maximum);
		} else {
			totalAscent->minimum = $Math::max(ascent, totalAscent->minimum);
			totalDescent->minimum = $Math::max(descent, totalDescent->minimum);
			totalAscent->maximum = $Math::max(ascent, totalAscent->maximum);
			totalDescent->maximum = $Math::max(descent, totalDescent->maximum);
		}
	}
	r->preferred = (int32_t)$Math::min((int64_t)totalAscent->preferred + (int64_t)totalDescent->preferred, (int64_t)$Integer::MAX_VALUE);
	if (r->preferred > 0) {
		r->alignment = (float)totalAscent->preferred / r->preferred;
	}
	if (r->alignment == 0.0f) {
		r->minimum = totalDescent->minimum;
		r->maximum = totalDescent->maximum;
	} else if (r->alignment == 1.0f) {
		r->minimum = totalAscent->minimum;
		r->maximum = totalAscent->maximum;
	} else {
		r->minimum = $Math::round($Math::max(totalAscent->minimum / r->alignment, totalDescent->minimum / (1.0f - r->alignment)));
		r->maximum = $Math::round($Math::min(totalAscent->maximum / r->alignment, totalDescent->maximum / (1.0f - r->alignment)));
	}
	return r;
}

int32_t BoxView::getOffset(int32_t axis, int32_t childIndex) {
	$var($ints, offsets, (axis == this->majorAxis) ? this->majorOffsets : this->minorOffsets);
	return $nc(offsets)->get(childIndex);
}

int32_t BoxView::getSpan(int32_t axis, int32_t childIndex) {
	$var($ints, spans, (axis == this->majorAxis) ? this->majorSpans : this->minorSpans);
	return $nc(spans)->get(childIndex);
}

bool BoxView::flipEastAndWestAtEnds(int32_t position, $Position$Bias* bias) {
	if (this->majorAxis == $View::Y_AXIS) {
		$init($Position$Bias);
		int32_t testPos = (bias == $Position$Bias::Backward) ? $Math::max(0, position - 1) : position;
		int32_t index = getViewIndexAtPosition(testPos);
		if (index != -1) {
			$var($View, v, getView(index));
			if (v != nullptr && $instanceOf($CompositeView, v)) {
				return $nc(($cast($CompositeView, v)))->flipEastAndWestAtEnds(position, bias);
			}
		}
	}
	return false;
}

BoxView::BoxView() {
}

$Class* BoxView::load$($String* name, bool initialize) {
	$loadClass(BoxView, name, initialize, &_BoxView_ClassInfo_, allocate$BoxView);
	return class$;
}

$Class* BoxView::class$ = nullptr;

		} // text
	} // swing
} // javax