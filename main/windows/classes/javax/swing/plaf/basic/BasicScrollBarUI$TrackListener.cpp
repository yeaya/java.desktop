#include <javax/swing/plaf/basic/BasicScrollBarUI$TrackListener.h>

#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/BoundedRangeModel.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JList.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JViewport.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/Timer.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/ListUI.h>
#include <javax/swing/plaf/basic/BasicScrollBarUI$ScrollListener.h>
#include <javax/swing/plaf/basic/BasicScrollBarUI.h>
#include <sun/swing/DefaultLookup.h>
#include <jcpp.h>

#undef HORIZONTAL
#undef HORIZONTAL_WRAP
#undef VERTICAL
#undef VERTICAL_WRAP

using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $BoundedRangeModel = ::javax::swing::BoundedRangeModel;
using $JComponent = ::javax::swing::JComponent;
using $JList = ::javax::swing::JList;
using $JScrollBar = ::javax::swing::JScrollBar;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JViewport = ::javax::swing::JViewport;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $Timer = ::javax::swing::Timer;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $ListUI = ::javax::swing::plaf::ListUI;
using $BasicScrollBarUI = ::javax::swing::plaf::basic::BasicScrollBarUI;
using $BasicScrollBarUI$ScrollListener = ::javax::swing::plaf::basic::BasicScrollBarUI$ScrollListener;
using $DefaultLookup = ::sun::swing::DefaultLookup;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicScrollBarUI$TrackListener_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicScrollBarUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicScrollBarUI$TrackListener, this$0)},
	{"offset", "I", nullptr, $PROTECTED | $TRANSIENT, $field(BasicScrollBarUI$TrackListener, offset)},
	{"currentMouseX", "I", nullptr, $PROTECTED | $TRANSIENT, $field(BasicScrollBarUI$TrackListener, currentMouseX)},
	{"currentMouseY", "I", nullptr, $PROTECTED | $TRANSIENT, $field(BasicScrollBarUI$TrackListener, currentMouseY)},
	{"direction", "I", nullptr, $PRIVATE | $TRANSIENT, $field(BasicScrollBarUI$TrackListener, direction)},
	{}
};

$MethodInfo _BasicScrollBarUI$TrackListener_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicScrollBarUI;)V", nullptr, $PROTECTED, $method(static_cast<void(BasicScrollBarUI$TrackListener::*)($BasicScrollBarUI*)>(&BasicScrollBarUI$TrackListener::init$))},
	{"adjustValueIfNecessary", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(BasicScrollBarUI$TrackListener::*)(int32_t)>(&BasicScrollBarUI$TrackListener::adjustValueIfNecessary))},
	{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"setValueFrom", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicScrollBarUI$TrackListener::*)($MouseEvent*)>(&BasicScrollBarUI$TrackListener::setValueFrom))},
	{"startScrollTimerIfNecessary", "()V", nullptr, $PRIVATE, $method(static_cast<void(BasicScrollBarUI$TrackListener::*)()>(&BasicScrollBarUI$TrackListener::startScrollTimerIfNecessary))},
	{}
};

$InnerClassInfo _BasicScrollBarUI$TrackListener_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicScrollBarUI$TrackListener", "javax.swing.plaf.basic.BasicScrollBarUI", "TrackListener", $PROTECTED},
	{}
};

$ClassInfo _BasicScrollBarUI$TrackListener_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicScrollBarUI$TrackListener",
	"java.awt.event.MouseAdapter",
	nullptr,
	_BasicScrollBarUI$TrackListener_FieldInfo_,
	_BasicScrollBarUI$TrackListener_MethodInfo_,
	nullptr,
	nullptr,
	_BasicScrollBarUI$TrackListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicScrollBarUI"
};

$Object* allocate$BasicScrollBarUI$TrackListener($Class* clazz) {
	return $of($alloc(BasicScrollBarUI$TrackListener));
}

void BasicScrollBarUI$TrackListener::init$($BasicScrollBarUI* this$0) {
	$set(this, this$0, this$0);
	$MouseAdapter::init$();
	this->direction = +1;
}

void BasicScrollBarUI$TrackListener::mouseReleased($MouseEvent* e) {
	if (this->this$0->isDragging) {
		int32_t var$0 = $nc(e)->getX();
		this->this$0->updateThumbState(var$0, e->getY());
	}
	bool var$1 = $SwingUtilities::isRightMouseButton(e);
	if (!var$1) {
		bool var$2 = !this->this$0->getSupportsAbsolutePositioning();
		var$1 = (var$2 && $SwingUtilities::isMiddleMouseButton(e));
	}
	if (var$1) {
		return;
	}
	if (!$nc(this->this$0->scrollbar)->isEnabled()) {
		return;
	}
	$var($Rectangle, r, this->this$0->getTrackBounds());
	$nc(this->this$0->scrollbar)->repaint($nc(r)->x, r->y, r->width, r->height);
	this->this$0->trackHighlight = 0;
	this->this$0->setDragging(false);
	this->offset = 0;
	$nc(this->this$0->scrollTimer)->stop();
	this->this$0->useCachedValue = true;
	$nc(this->this$0->scrollbar)->setValueIsAdjusting(false);
}

void BasicScrollBarUI$TrackListener::mousePressed($MouseEvent* e) {
	bool var$0 = $SwingUtilities::isRightMouseButton(e);
	if (!var$0) {
		bool var$1 = !this->this$0->getSupportsAbsolutePositioning();
		var$0 = (var$1 && $SwingUtilities::isMiddleMouseButton(e));
	}
	if (var$0) {
		return;
	}
	if (!$nc(this->this$0->scrollbar)->isEnabled()) {
		return;
	}
	bool var$2 = !$nc(this->this$0->scrollbar)->hasFocus();
	if (var$2 && $nc(this->this$0->scrollbar)->isRequestFocusEnabled()) {
		$nc(this->this$0->scrollbar)->requestFocus();
	}
	this->this$0->useCachedValue = true;
	$nc(this->this$0->scrollbar)->setValueIsAdjusting(true);
	this->currentMouseX = $nc(e)->getX();
	this->currentMouseY = e->getY();
	if ($nc($(this->this$0->getThumbBounds()))->contains(this->currentMouseX, this->currentMouseY)) {
		switch ($nc(this->this$0->scrollbar)->getOrientation()) {
		case $JScrollBar::VERTICAL:
			{
				this->offset = this->currentMouseY - $nc($(this->this$0->getThumbBounds()))->y;
				break;
			}
		case $JScrollBar::HORIZONTAL:
			{
				this->offset = this->currentMouseX - $nc($(this->this$0->getThumbBounds()))->x;
				break;
			}
		}
		this->this$0->setDragging(true);
		return;
	} else {
		bool var$4 = this->this$0->getSupportsAbsolutePositioning();
		if (var$4 && $SwingUtilities::isMiddleMouseButton(e)) {
			switch ($nc(this->this$0->scrollbar)->getOrientation()) {
			case $JScrollBar::VERTICAL:
				{
					this->offset = $nc($(this->this$0->getThumbBounds()))->height / 2;
					break;
				}
			case $JScrollBar::HORIZONTAL:
				{
					this->offset = $nc($(this->this$0->getThumbBounds()))->width / 2;
					break;
				}
			}
			this->this$0->setDragging(true);
			setValueFrom(e);
			return;
		}
	}
	this->this$0->setDragging(false);
	$var($Dimension, sbSize, $nc(this->this$0->scrollbar)->getSize());
	this->direction = +1;
	switch ($nc(this->this$0->scrollbar)->getOrientation()) {
	case $JScrollBar::VERTICAL:
		{
			if ($nc($(this->this$0->getThumbBounds()))->isEmpty()) {
				int32_t scrollbarCenter = $nc(sbSize)->height / 2;
				this->direction = (this->currentMouseY < scrollbarCenter) ? -1 : +1;
			} else {
				int32_t thumbY = $nc($(this->this$0->getThumbBounds()))->y;
				this->direction = (this->currentMouseY < thumbY) ? -1 : +1;
			}
			break;
		}
	case $JScrollBar::HORIZONTAL:
		{
			if ($nc($(this->this$0->getThumbBounds()))->isEmpty()) {
				int32_t scrollbarCenter = $nc(sbSize)->width / 2;
				this->direction = (this->currentMouseX < scrollbarCenter) ? -1 : +1;
			} else {
				int32_t thumbX = $nc($(this->this$0->getThumbBounds()))->x;
				this->direction = (this->currentMouseX < thumbX) ? -1 : +1;
			}
			if (!$nc($($nc(this->this$0->scrollbar)->getComponentOrientation()))->isLeftToRight()) {
				this->direction = -this->direction;
			}
			break;
		}
	}
	this->this$0->scrollByBlock(this->direction);
	$nc(this->this$0->scrollTimer)->stop();
	$nc(this->this$0->scrollListener)->setDirection(this->direction);
	$nc(this->this$0->scrollListener)->setScrollByBlock(true);
	startScrollTimerIfNecessary();
}

void BasicScrollBarUI$TrackListener::mouseDragged($MouseEvent* e) {
	bool var$0 = $SwingUtilities::isRightMouseButton(e);
	if (!var$0) {
		bool var$1 = !this->this$0->getSupportsAbsolutePositioning();
		var$0 = (var$1 && $SwingUtilities::isMiddleMouseButton(e));
	}
	if (var$0) {
		return;
	}
	bool var$2 = !$nc(this->this$0->scrollbar)->isEnabled();
	if (var$2 || $nc($(this->this$0->getThumbBounds()))->isEmpty()) {
		return;
	}
	if (this->this$0->isDragging) {
		setValueFrom(e);
	} else {
		this->currentMouseX = $nc(e)->getX();
		this->currentMouseY = e->getY();
		this->this$0->updateThumbState(this->currentMouseX, this->currentMouseY);
		startScrollTimerIfNecessary();
	}
}

void BasicScrollBarUI$TrackListener::setValueFrom($MouseEvent* e) {
	bool active = this->this$0->isThumbRollover();
	$var($BoundedRangeModel, model, $nc(this->this$0->scrollbar)->getModel());
	$var($Rectangle, thumbR, this->this$0->getThumbBounds());
	float trackLength = 0.0;
	int32_t thumbMin = 0;
	int32_t thumbMax = 0;
	int32_t thumbPos = 0;
	if ($nc(this->this$0->scrollbar)->getOrientation() == $JScrollBar::VERTICAL) {
		thumbMin = $nc(this->this$0->trackRect)->y;
		thumbMax = $nc(this->this$0->trackRect)->y + $nc(this->this$0->trackRect)->height - $nc(thumbR)->height;
		thumbPos = $Math::min(thumbMax, $Math::max(thumbMin, ($nc(e)->getY() - this->offset)));
		this->this$0->setThumbBounds(thumbR->x, thumbPos, thumbR->width, thumbR->height);
		trackLength = (float)$nc($(this->this$0->getTrackBounds()))->height;
	} else {
		thumbMin = $nc(this->this$0->trackRect)->x;
		thumbMax = $nc(this->this$0->trackRect)->x + $nc(this->this$0->trackRect)->width - $nc(thumbR)->width;
		thumbPos = $Math::min(thumbMax, $Math::max(thumbMin, ($nc(e)->getX() - this->offset)));
		this->this$0->setThumbBounds(thumbPos, thumbR->y, thumbR->width, thumbR->height);
		trackLength = (float)$nc($(this->this$0->getTrackBounds()))->width;
	}
	if (thumbPos == thumbMax) {
		bool var$0 = $nc(this->this$0->scrollbar)->getOrientation() == $JScrollBar::VERTICAL;
		if (var$0 || $nc($($nc(this->this$0->scrollbar)->getComponentOrientation()))->isLeftToRight()) {
			int32_t var$1 = $nc(model)->getMaximum();
			$nc(this->this$0->scrollbar)->setValue(var$1 - model->getExtent());
		} else {
			$nc(this->this$0->scrollbar)->setValue($nc(model)->getMinimum());
		}
	} else {
		int32_t var$2 = $nc(model)->getMaximum();
		float valueMax = (float)(var$2 - model->getExtent());
		float valueRange = valueMax - model->getMinimum();
		float thumbValue = (float)(thumbPos - thumbMin);
		float thumbRange = (float)(thumbMax - thumbMin);
		int32_t value = 0;
		bool var$3 = $nc(this->this$0->scrollbar)->getOrientation() == $JScrollBar::VERTICAL;
		if (var$3 || $nc($($nc(this->this$0->scrollbar)->getComponentOrientation()))->isLeftToRight()) {
			value = $cast(int32_t, (0.5 + ((thumbValue / thumbRange) * valueRange)));
		} else {
			value = $cast(int32_t, (0.5 + (((thumbMax - thumbPos) / thumbRange) * valueRange)));
		}
		this->this$0->useCachedValue = true;
		this->this$0->scrollBarValue = value + model->getMinimum();
		$nc(this->this$0->scrollbar)->setValue(adjustValueIfNecessary(this->this$0->scrollBarValue));
	}
	this->this$0->setThumbRollover(active);
}

int32_t BasicScrollBarUI$TrackListener::adjustValueIfNecessary(int32_t value) {
	if ($instanceOf($JScrollPane, $($nc(this->this$0->scrollbar)->getParent()))) {
		$var($JScrollPane, scrollpane, $cast($JScrollPane, $nc(this->this$0->scrollbar)->getParent()));
		$var($JViewport, viewport, $nc(scrollpane)->getViewport());
		$var($Component, view, $nc(viewport)->getView());
		if ($instanceOf($JList, view)) {
			$var($JList, list, $cast($JList, view));
			if ($DefaultLookup::getBoolean(list, $($nc(list)->getUI()), "List.lockToPositionOnScroll"_s, false)) {
				int32_t adjustedValue = value;
				int32_t mode = $nc(list)->getLayoutOrientation();
				int32_t orientation = $nc(this->this$0->scrollbar)->getOrientation();
				if (orientation == $JScrollBar::VERTICAL && mode == $JList::VERTICAL) {
					int32_t index = list->locationToIndex($$new($Point, 0, value));
					$var($Rectangle, rect, list->getCellBounds(index, index));
					if (rect != nullptr) {
						adjustedValue = rect->y;
					}
				}
				if (orientation == $JScrollBar::HORIZONTAL && (mode == $JList::VERTICAL_WRAP || mode == $JList::HORIZONTAL_WRAP)) {
					if ($nc($(scrollpane->getComponentOrientation()))->isLeftToRight()) {
						int32_t index = list->locationToIndex($$new($Point, value, 0));
						$var($Rectangle, rect, list->getCellBounds(index, index));
						if (rect != nullptr) {
							adjustedValue = rect->x;
						}
					} else {
						$var($Point, loc, $new($Point, value, 0));
						int32_t extent = $nc($(viewport->getExtentSize()))->width;
						loc->x += extent - 1;
						int32_t index = list->locationToIndex(loc);
						$var($Rectangle, rect, list->getCellBounds(index, index));
						if (rect != nullptr) {
							adjustedValue = rect->x + rect->width - extent;
						}
					}
				}
				value = adjustedValue;
			}
		}
	}
	return value;
}

void BasicScrollBarUI$TrackListener::startScrollTimerIfNecessary() {
	if ($nc(this->this$0->scrollTimer)->isRunning()) {
		return;
	}
	$var($Rectangle, tb, this->this$0->getThumbBounds());
	switch ($nc(this->this$0->scrollbar)->getOrientation()) {
	case $JScrollBar::VERTICAL:
		{
			if (this->direction > 0) {
				if ($nc(tb)->y + tb->height < $nc(this->this$0->trackListener)->currentMouseY) {
					$nc(this->this$0->scrollTimer)->start();
				}
			} else if ($nc(tb)->y > $nc(this->this$0->trackListener)->currentMouseY) {
				$nc(this->this$0->scrollTimer)->start();
			}
			break;
		}
	case $JScrollBar::HORIZONTAL:
		{
			bool var$0 = (this->direction > 0 && this->this$0->isMouseAfterThumb());
			if (var$0 || (this->direction < 0 && this->this$0->isMouseBeforeThumb())) {
				$nc(this->this$0->scrollTimer)->start();
			}
			break;
		}
	}
}

void BasicScrollBarUI$TrackListener::mouseMoved($MouseEvent* e) {
	if (!this->this$0->isDragging) {
		int32_t var$0 = $nc(e)->getX();
		this->this$0->updateThumbState(var$0, e->getY());
	}
}

void BasicScrollBarUI$TrackListener::mouseExited($MouseEvent* e) {
	if (!this->this$0->isDragging) {
		this->this$0->setThumbRollover(false);
	}
}

BasicScrollBarUI$TrackListener::BasicScrollBarUI$TrackListener() {
}

$Class* BasicScrollBarUI$TrackListener::load$($String* name, bool initialize) {
	$loadClass(BasicScrollBarUI$TrackListener, name, initialize, &_BasicScrollBarUI$TrackListener_ClassInfo_, allocate$BasicScrollBarUI$TrackListener);
	return class$;
}

$Class* BasicScrollBarUI$TrackListener::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax