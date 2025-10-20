#include <javax/swing/text/View.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/event/DocumentEvent$ElementChange.h>
#include <javax/swing/event/DocumentEvent$EventType.h>
#include <javax/swing/event/DocumentEvent.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Caret.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/Position$Bias.h>
#include <javax/swing/text/Utilities.h>
#include <javax/swing/text/ViewFactory.h>
#include <jcpp.h>

#undef EAST
#undef INSERT
#undef MAX_VALUE
#undef NORTH
#undef REMOVE
#undef SOUTH
#undef WEST
#undef X_AXIS
#undef Y_AXIS

using $ElementArray = $Array<::javax::swing::text::Element>;
using $Position$BiasArray = $Array<::javax::swing::text::Position$Bias>;
using $ViewArray = $Array<::javax::swing::text::View>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingConstants = ::javax::swing::SwingConstants;
using $DocumentEvent = ::javax::swing::event::DocumentEvent;
using $DocumentEvent$ElementChange = ::javax::swing::event::DocumentEvent$ElementChange;
using $DocumentEvent$EventType = ::javax::swing::event::DocumentEvent$EventType;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Caret = ::javax::swing::text::Caret;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $Position$Bias = ::javax::swing::text::Position$Bias;
using $Utilities = ::javax::swing::text::Utilities;
using $ViewFactory = ::javax::swing::text::ViewFactory;

namespace javax {
	namespace swing {
		namespace text {

$CompoundAttribute _View_MethodAnnotations_modelToView35[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _View_MethodAnnotations_viewToModel48[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _View_FieldInfo_[] = {
	{"BadBreakWeight", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(View, BadBreakWeight)},
	{"GoodBreakWeight", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(View, GoodBreakWeight)},
	{"ExcellentBreakWeight", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(View, ExcellentBreakWeight)},
	{"ForcedBreakWeight", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(View, ForcedBreakWeight)},
	{"X_AXIS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(View, X_AXIS)},
	{"Y_AXIS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(View, Y_AXIS)},
	{"sharedBiasReturn", "[Ljavax/swing/text/Position$Bias;", nullptr, $STATIC | $FINAL, $staticField(View, sharedBiasReturn)},
	{"parent", "Ljavax/swing/text/View;", nullptr, $PRIVATE, $field(View, parent)},
	{"elem", "Ljavax/swing/text/Element;", nullptr, $PRIVATE, $field(View, elem)},
	{"firstUpdateIndex", "I", nullptr, 0, $field(View, firstUpdateIndex)},
	{"lastUpdateIndex", "I", nullptr, 0, $field(View, lastUpdateIndex)},
	{}
};

$MethodInfo _View_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/Element;)V", nullptr, $PUBLIC, $method(static_cast<void(View::*)($Element*)>(&View::init$))},
	{"append", "(Ljavax/swing/text/View;)V", nullptr, $PUBLIC},
	{"breakView", "(IIFF)Ljavax/swing/text/View;", nullptr, $PUBLIC},
	{"calculateUpdateIndexes", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, 0},
	{"changedUpdate", "(Ljavax/swing/event/DocumentEvent;Ljava/awt/Shape;Ljavax/swing/text/ViewFactory;)V", nullptr, $PUBLIC},
	{"createFragment", "(II)Ljavax/swing/text/View;", nullptr, $PUBLIC},
	{"forwardUpdate", "(Ljavax/swing/event/DocumentEvent$ElementChange;Ljavax/swing/event/DocumentEvent;Ljava/awt/Shape;Ljavax/swing/text/ViewFactory;)V", nullptr, $PROTECTED},
	{"forwardUpdateToView", "(Ljavax/swing/text/View;Ljavax/swing/event/DocumentEvent;Ljava/awt/Shape;Ljavax/swing/text/ViewFactory;)V", nullptr, $PROTECTED},
	{"getAlignment", "(I)F", nullptr, $PUBLIC},
	{"getAttributes", "()Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC},
	{"getBreakWeight", "(IFF)I", nullptr, $PUBLIC},
	{"getChildAllocation", "(ILjava/awt/Shape;)Ljava/awt/Shape;", nullptr, $PUBLIC},
	{"getContainer", "()Ljava/awt/Container;", nullptr, $PUBLIC},
	{"getDocument", "()Ljavax/swing/text/Document;", nullptr, $PUBLIC},
	{"getElement", "()Ljavax/swing/text/Element;", nullptr, $PUBLIC},
	{"getEndOffset", "()I", nullptr, $PUBLIC},
	{"getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC},
	{"getMaximumSpan", "(I)F", nullptr, $PUBLIC},
	{"getMinimumSpan", "(I)F", nullptr, $PUBLIC},
	{"getNextVisualPositionFrom", "(ILjavax/swing/text/Position$Bias;Ljava/awt/Shape;I[Ljavax/swing/text/Position$Bias;)I", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{"getParent", "()Ljavax/swing/text/View;", nullptr, $PUBLIC},
	{"getPreferredSpan", "(I)F", nullptr, $PUBLIC | $ABSTRACT},
	{"getResizeWeight", "(I)I", nullptr, $PUBLIC},
	{"getStartOffset", "()I", nullptr, $PUBLIC},
	{"getToolTipText", "(FFLjava/awt/Shape;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getView", "(I)Ljavax/swing/text/View;", nullptr, $PUBLIC},
	{"getViewCount", "()I", nullptr, $PUBLIC},
	{"getViewFactory", "()Ljavax/swing/text/ViewFactory;", nullptr, $PUBLIC},
	{"getViewIndex", "(ILjavax/swing/text/Position$Bias;)I", nullptr, $PUBLIC},
	{"getViewIndex", "(FFLjava/awt/Shape;)I", nullptr, $PUBLIC},
	{"insert", "(ILjavax/swing/text/View;)V", nullptr, $PUBLIC},
	{"insertUpdate", "(Ljavax/swing/event/DocumentEvent;Ljava/awt/Shape;Ljavax/swing/text/ViewFactory;)V", nullptr, $PUBLIC},
	{"isVisible", "()Z", nullptr, $PUBLIC},
	{"modelToView", "(ILjava/awt/Shape;Ljavax/swing/text/Position$Bias;)Ljava/awt/Shape;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.swing.text.BadLocationException"},
	{"modelToView", "(ILjavax/swing/text/Position$Bias;ILjavax/swing/text/Position$Bias;Ljava/awt/Shape;)Ljava/awt/Shape;", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{"modelToView", "(ILjava/awt/Shape;)Ljava/awt/Shape;", nullptr, $PUBLIC | $DEPRECATED, nullptr, "javax.swing.text.BadLocationException", nullptr, _View_MethodAnnotations_modelToView35},
	{"paint", "(Ljava/awt/Graphics;Ljava/awt/Shape;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"preferenceChanged", "(Ljavax/swing/text/View;ZZ)V", nullptr, $PUBLIC},
	{"remove", "(I)V", nullptr, $PUBLIC},
	{"removeAll", "()V", nullptr, $PUBLIC},
	{"removeUpdate", "(Ljavax/swing/event/DocumentEvent;Ljava/awt/Shape;Ljavax/swing/text/ViewFactory;)V", nullptr, $PUBLIC},
	{"replace", "(II[Ljavax/swing/text/View;)V", nullptr, $PUBLIC},
	{"setParent", "(Ljavax/swing/text/View;)V", nullptr, $PUBLIC},
	{"setSize", "(FF)V", nullptr, $PUBLIC},
	{"updateAfterChange", "()V", nullptr, 0},
	{"updateChildren", "(Ljavax/swing/event/DocumentEvent$ElementChange;Ljavax/swing/event/DocumentEvent;Ljavax/swing/text/ViewFactory;)Z", nullptr, $PROTECTED},
	{"updateLayout", "(Ljavax/swing/event/DocumentEvent$ElementChange;Ljavax/swing/event/DocumentEvent;Ljava/awt/Shape;)V", nullptr, $PROTECTED},
	{"viewToModel", "(FFLjava/awt/Shape;[Ljavax/swing/text/Position$Bias;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"viewToModel", "(FFLjava/awt/Shape;)I", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _View_MethodAnnotations_viewToModel48},
	{}
};

$ClassInfo _View_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.text.View",
	"java.lang.Object",
	"javax.swing.SwingConstants",
	_View_FieldInfo_,
	_View_MethodInfo_
};

$Object* allocate$View($Class* clazz) {
	return $of($alloc(View));
}

$Position$BiasArray* View::sharedBiasReturn = nullptr;

void View::init$($Element* elem) {
	$set(this, elem, elem);
}

View* View::getParent() {
	return this->parent;
}

bool View::isVisible() {
	return true;
}

float View::getMinimumSpan(int32_t axis) {
	int32_t w = getResizeWeight(axis);
	if (w == 0) {
		return getPreferredSpan(axis);
	}
	return (float)0;
}

float View::getMaximumSpan(int32_t axis) {
	int32_t w = getResizeWeight(axis);
	if (w == 0) {
		return getPreferredSpan(axis);
	}
	return (float)$Integer::MAX_VALUE;
}

void View::preferenceChanged(View* child, bool width, bool height) {
	$var(View, parent, getParent());
	if (parent != nullptr) {
		parent->preferenceChanged(this, width, height);
	}
}

float View::getAlignment(int32_t axis) {
	return 0.5f;
}

void View::setParent(View* parent) {
	$useLocalCurrentObjectStackCache();
	if (parent == nullptr) {
		for (int32_t i = 0; i < getViewCount(); ++i) {
			if ($nc($(getView(i)))->getParent() == this) {
				$nc($(getView(i)))->setParent(nullptr);
			}
		}
	}
	$set(this, parent, parent);
}

int32_t View::getViewCount() {
	return 0;
}

View* View::getView(int32_t n) {
	return nullptr;
}

void View::removeAll() {
	replace(0, getViewCount(), nullptr);
}

void View::remove(int32_t i) {
	replace(i, 1, nullptr);
}

void View::insert(int32_t offs, View* v) {
	$var($ViewArray, one, $new($ViewArray, 1));
	one->set(0, v);
	replace(offs, 0, one);
}

void View::append(View* v) {
	$var($ViewArray, one, $new($ViewArray, 1));
	one->set(0, v);
	replace(getViewCount(), 0, one);
}

void View::replace(int32_t offset, int32_t length, $ViewArray* views) {
}

int32_t View::getViewIndex(int32_t pos, $Position$Bias* b) {
	return -1;
}

$Shape* View::getChildAllocation(int32_t index, $Shape* a) {
	return nullptr;
}

int32_t View::getNextVisualPositionFrom(int32_t pos, $Position$Bias* b, $Shape* a, int32_t direction, $Position$BiasArray* biasRet) {
	$useLocalCurrentObjectStackCache();
	if (pos < -1 || pos > $nc($(getDocument()))->getLength()) {
		$throwNew($BadLocationException, "Invalid position"_s, pos);
	}
	$init($Position$Bias);
	$nc(biasRet)->set(0, $Position$Bias::Forward);
	switch (direction) {
	case $SwingConstants::NORTH:
		{}
	case $SwingConstants::SOUTH:
		{
			{
				if (pos == -1) {
					pos = (direction == $SwingConstants::NORTH) ? $Math::max(0, getEndOffset() - 1) : getStartOffset();
					break;
				}
				$var($JTextComponent, target, $cast($JTextComponent, getContainer()));
				$var($Caret, c, (target != nullptr) ? $nc(target)->getCaret() : ($Caret*)nullptr);
				$var($Point, mcp, nullptr);
				if (c != nullptr) {
					$assign(mcp, c->getMagicCaretPosition());
				} else {
					$assign(mcp, nullptr);
				}
				int32_t x = 0;
				if (mcp == nullptr) {
					$var($Rectangle, loc, target->modelToView(pos));
					x = (loc == nullptr) ? 0 : $nc(loc)->x;
				} else {
					x = $nc(mcp)->x;
				}
				if (direction == $SwingConstants::NORTH) {
					pos = $Utilities::getPositionAbove(target, pos, x);
				} else {
					pos = $Utilities::getPositionBelow(target, pos, x);
				}
			}
			break;
		}
	case $SwingConstants::WEST:
		{
			if (pos == -1) {
				pos = $Math::max(0, getEndOffset() - 1);
			} else {
				pos = $Math::max(0, pos - 1);
			}
			break;
		}
	case $SwingConstants::EAST:
		{
			if (pos == -1) {
				pos = getStartOffset();
			} else {
				pos = $Math::min(pos + 1, $nc($(getDocument()))->getLength());
			}
			break;
		}
	default:
		{
			$throwNew($IllegalArgumentException, $$str({"Bad direction: "_s, $$str(direction)}));
		}
	}
	return pos;
}

$Shape* View::modelToView(int32_t p0, $Position$Bias* b0, int32_t p1, $Position$Bias* b1, $Shape* a) {
	$useLocalCurrentObjectStackCache();
	$var($Shape, s0, modelToView(p0, a, b0));
	$var($Shape, s1, nullptr);
	if (p1 == getEndOffset()) {
		try {
			$assign(s1, modelToView(p1, a, b1));
		} catch ($BadLocationException&) {
			$var($BadLocationException, ble, $catch());
			$assign(s1, nullptr);
		}
		if (s1 == nullptr) {
			$var($Rectangle, alloc, ($instanceOf($Rectangle, a)) ? $cast($Rectangle, a) : $nc(a)->getBounds());
			$assign(s1, $new($Rectangle, $nc(alloc)->x + alloc->width - 1, alloc->y, 1, alloc->height));
		}
	} else {
		$assign(s1, modelToView(p1, a, b1));
	}
	$var($Rectangle, r0, $nc(s0)->getBounds());
	$var($Rectangle, r1, ($instanceOf($Rectangle, s1)) ? $cast($Rectangle, s1) : $nc(s1)->getBounds());
	if ($nc(r0)->y != $nc(r1)->y) {
		$var($Rectangle, alloc, ($instanceOf($Rectangle, a)) ? $cast($Rectangle, a) : $nc(a)->getBounds());
		r0->x = $nc(alloc)->x;
		r0->width = alloc->width;
	}
	$nc(r0)->add(r1);
	return r0;
}

void View::insertUpdate($DocumentEvent* e, $Shape* a, $ViewFactory* f) {
	$useLocalCurrentObjectStackCache();
	if (getViewCount() > 0) {
		$var($Element, elem, getElement());
		$var($DocumentEvent$ElementChange, ec, $nc(e)->getChange(elem));
		if (ec != nullptr) {
			if (!updateChildren(ec, e, f)) {
				$assign(ec, nullptr);
			}
		}
		forwardUpdate(ec, e, a, f);
		updateLayout(ec, e, a);
	}
}

void View::removeUpdate($DocumentEvent* e, $Shape* a, $ViewFactory* f) {
	$useLocalCurrentObjectStackCache();
	if (getViewCount() > 0) {
		$var($Element, elem, getElement());
		$var($DocumentEvent$ElementChange, ec, $nc(e)->getChange(elem));
		if (ec != nullptr) {
			if (!updateChildren(ec, e, f)) {
				$assign(ec, nullptr);
			}
		}
		forwardUpdate(ec, e, a, f);
		updateLayout(ec, e, a);
	}
}

void View::changedUpdate($DocumentEvent* e, $Shape* a, $ViewFactory* f) {
	$useLocalCurrentObjectStackCache();
	if (getViewCount() > 0) {
		$var($Element, elem, getElement());
		$var($DocumentEvent$ElementChange, ec, $nc(e)->getChange(elem));
		if (ec != nullptr) {
			if (!updateChildren(ec, e, f)) {
				$assign(ec, nullptr);
			}
		}
		forwardUpdate(ec, e, a, f);
		updateLayout(ec, e, a);
	}
}

$Document* View::getDocument() {
	return $nc(this->elem)->getDocument();
}

int32_t View::getStartOffset() {
	return $nc(this->elem)->getStartOffset();
}

int32_t View::getEndOffset() {
	return $nc(this->elem)->getEndOffset();
}

$Element* View::getElement() {
	return this->elem;
}

$Graphics* View::getGraphics() {
	$var($Component, c, getContainer());
	return $nc(c)->getGraphics();
}

$AttributeSet* View::getAttributes() {
	return $nc(this->elem)->getAttributes();
}

View* View::breakView(int32_t axis, int32_t offset, float pos, float len) {
	return this;
}

View* View::createFragment(int32_t p0, int32_t p1) {
	return this;
}

int32_t View::getBreakWeight(int32_t axis, float pos, float len) {
	if (len > getPreferredSpan(axis)) {
		return View::GoodBreakWeight;
	}
	return View::BadBreakWeight;
}

int32_t View::getResizeWeight(int32_t axis) {
	return 0;
}

void View::setSize(float width, float height) {
}

$Container* View::getContainer() {
	$var(View, v, getParent());
	return (v != nullptr) ? $nc(v)->getContainer() : ($Container*)nullptr;
}

$ViewFactory* View::getViewFactory() {
	$var(View, v, getParent());
	return (v != nullptr) ? $nc(v)->getViewFactory() : ($ViewFactory*)nullptr;
}

$String* View::getToolTipText(float x, float y, $Shape* allocation$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Shape, allocation, allocation$renamed);
	int32_t viewIndex = getViewIndex(x, y, allocation);
	if (viewIndex >= 0) {
		$assign(allocation, getChildAllocation(viewIndex, allocation));
		$var($Rectangle, rect, ($instanceOf($Rectangle, allocation)) ? $cast($Rectangle, allocation) : $nc(allocation)->getBounds());
		if ($nc(rect)->contains(x, y)) {
			return $nc($(getView(viewIndex)))->getToolTipText(x, y, allocation);
		}
	}
	return nullptr;
}

int32_t View::getViewIndex(float x, float y, $Shape* allocation) {
	$useLocalCurrentObjectStackCache();
	for (int32_t counter = getViewCount() - 1; counter >= 0; --counter) {
		$var($Shape, childAllocation, getChildAllocation(counter, allocation));
		if (childAllocation != nullptr) {
			$var($Rectangle, rect, ($instanceOf($Rectangle, childAllocation)) ? $cast($Rectangle, childAllocation) : childAllocation->getBounds());
			if ($nc(rect)->contains(x, y)) {
				return counter;
			}
		}
	}
	return -1;
}

bool View::updateChildren($DocumentEvent$ElementChange* ec, $DocumentEvent* e, $ViewFactory* f) {
	$useLocalCurrentObjectStackCache();
	$var($ElementArray, removedElems, $nc(ec)->getChildrenRemoved());
	$var($ElementArray, addedElems, ec->getChildrenAdded());
	$var($ViewArray, added, nullptr);
	if (addedElems != nullptr) {
		$assign(added, $new($ViewArray, addedElems->length));
		for (int32_t i = 0; i < addedElems->length; ++i) {
			added->set(i, $($nc(f)->create(addedElems->get(i))));
		}
	}
	int32_t nremoved = 0;
	int32_t index = ec->getIndex();
	if (removedElems != nullptr) {
		nremoved = removedElems->length;
	}
	replace(index, nremoved, added);
	return true;
}

void View::forwardUpdate($DocumentEvent$ElementChange* ec, $DocumentEvent* e, $Shape* a, $ViewFactory* f) {
	$useLocalCurrentObjectStackCache();
	calculateUpdateIndexes(e);
	int32_t hole0 = this->lastUpdateIndex + 1;
	int32_t hole1 = hole0;
	$var($ElementArray, addedElems, (ec != nullptr) ? $nc(ec)->getChildrenAdded() : ($ElementArray*)nullptr);
	if ((addedElems != nullptr) && (addedElems->length > 0)) {
		hole0 = ec->getIndex();
		hole1 = hole0 + addedElems->length - 1;
	}
	for (int32_t i = this->firstUpdateIndex; i <= this->lastUpdateIndex; ++i) {
		if (!((i >= hole0) && (i <= hole1))) {
			$var(View, v, getView(i));
			if (v != nullptr) {
				$var($Shape, childAlloc, getChildAllocation(i, a));
				forwardUpdateToView(v, e, childAlloc, f);
			}
		}
	}
}

void View::calculateUpdateIndexes($DocumentEvent* e) {
	int32_t pos = $nc(e)->getOffset();
	$init($Position$Bias);
	this->firstUpdateIndex = getViewIndex(pos, $Position$Bias::Forward);
	$init($DocumentEvent$EventType);
	bool var$0 = this->firstUpdateIndex == -1 && e->getType() == $DocumentEvent$EventType::REMOVE;
	if (var$0 && pos >= getEndOffset()) {
		this->firstUpdateIndex = getViewCount() - 1;
	}
	this->lastUpdateIndex = this->firstUpdateIndex;
	$var(View, v, (this->firstUpdateIndex >= 0) ? getView(this->firstUpdateIndex) : (View*)nullptr);
	if (v != nullptr) {
		if ((v->getStartOffset() == pos) && (pos > 0)) {
			this->firstUpdateIndex = $Math::max(this->firstUpdateIndex - 1, 0);
		}
	}
	if (e->getType() != $DocumentEvent$EventType::REMOVE) {
		this->lastUpdateIndex = getViewIndex(pos + e->getLength(), $Position$Bias::Forward);
		if (this->lastUpdateIndex < 0) {
			this->lastUpdateIndex = getViewCount() - 1;
		}
	}
	this->firstUpdateIndex = $Math::max(this->firstUpdateIndex, 0);
}

void View::updateAfterChange() {
}

void View::forwardUpdateToView(View* v, $DocumentEvent* e, $Shape* a, $ViewFactory* f) {
	$var($DocumentEvent$EventType, type, $nc(e)->getType());
	$init($DocumentEvent$EventType);
	if (type == $DocumentEvent$EventType::INSERT) {
		$nc(v)->insertUpdate(e, a, f);
	} else {
		if (type == $DocumentEvent$EventType::REMOVE) {
			$nc(v)->removeUpdate(e, a, f);
		} else {
			$nc(v)->changedUpdate(e, a, f);
		}
	}
}

void View::updateLayout($DocumentEvent$ElementChange* ec, $DocumentEvent* e, $Shape* a) {
	if ((ec != nullptr) && (a != nullptr)) {
		preferenceChanged(nullptr, true, true);
		$var($Container, host, getContainer());
		if (host != nullptr) {
			host->repaint();
		}
	}
}

$Shape* View::modelToView(int32_t pos, $Shape* a) {
	$init($Position$Bias);
	return modelToView(pos, a, $Position$Bias::Forward);
}

int32_t View::viewToModel(float x, float y, $Shape* a) {
	$init($Position$Bias);
	$nc(View::sharedBiasReturn)->set(0, $Position$Bias::Forward);
	return viewToModel(x, y, a, View::sharedBiasReturn);
}

void clinit$View($Class* class$) {
	$assignStatic(View::sharedBiasReturn, $new($Position$BiasArray, 1));
}

View::View() {
}

$Class* View::load$($String* name, bool initialize) {
	$loadClass(View, name, initialize, &_View_ClassInfo_, clinit$View, allocate$View);
	return class$;
}

$Class* View::class$ = nullptr;

		} // text
	} // swing
} // javax