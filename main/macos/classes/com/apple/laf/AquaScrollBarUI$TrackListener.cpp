#include <com/apple/laf/AquaScrollBarUI$TrackListener.h>

#include <apple/laf/JRSUIConstants$Hit.h>
#include <apple/laf/JRSUIConstants$ScrollBarHit.h>
#include <apple/laf/JRSUIControl.h>
#include <apple/laf/JRSUIUtils$ScrollBar.h>
#include <com/apple/laf/AquaPainter.h>
#include <com/apple/laf/AquaScrollBarUI$HitUtil.h>
#include <com/apple/laf/AquaScrollBarUI$ScrollListener.h>
#include <com/apple/laf/AquaScrollBarUI.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseEvent.h>
#include <java/lang/Math.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/Timer.h>
#include <jcpp.h>

#undef NONE
#undef THUMB
#undef TRACK_MAX
#undef TRACK_MIN

using $JRSUIConstants$Hit = ::apple::laf::JRSUIConstants$Hit;
using $JRSUIConstants$ScrollBarHit = ::apple::laf::JRSUIConstants$ScrollBarHit;
using $JRSUIControl = ::apple::laf::JRSUIControl;
using $JRSUIUtils$ScrollBar = ::apple::laf::JRSUIUtils$ScrollBar;
using $AquaPainter = ::com::apple::laf::AquaPainter;
using $AquaScrollBarUI = ::com::apple::laf::AquaScrollBarUI;
using $AquaScrollBarUI$HitUtil = ::com::apple::laf::AquaScrollBarUI$HitUtil;
using $AquaScrollBarUI$ScrollListener = ::com::apple::laf::AquaScrollBarUI$ScrollListener;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JScrollBar = ::javax::swing::JScrollBar;
using $Timer = ::javax::swing::Timer;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaScrollBarUI$TrackListener_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaScrollBarUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaScrollBarUI$TrackListener, this$0)},
	{"fCurrentMouseX", "I", nullptr, $PROTECTED | $TRANSIENT, $field(AquaScrollBarUI$TrackListener, fCurrentMouseX)},
	{"fCurrentMouseY", "I", nullptr, $PROTECTED | $TRANSIENT, $field(AquaScrollBarUI$TrackListener, fCurrentMouseY)},
	{"fInArrows", "Z", nullptr, $PROTECTED | $TRANSIENT, $field(AquaScrollBarUI$TrackListener, fInArrows)},
	{"fStillInArrow", "Z", nullptr, $PROTECTED | $TRANSIENT, $field(AquaScrollBarUI$TrackListener, fStillInArrow)},
	{"fStillInTrack", "Z", nullptr, $PROTECTED | $TRANSIENT, $field(AquaScrollBarUI$TrackListener, fStillInTrack)},
	{"fFirstMouseX", "I", nullptr, $PROTECTED | $TRANSIENT, $field(AquaScrollBarUI$TrackListener, fFirstMouseX)},
	{"fFirstMouseY", "I", nullptr, $PROTECTED | $TRANSIENT, $field(AquaScrollBarUI$TrackListener, fFirstMouseY)},
	{"fFirstValue", "I", nullptr, $PROTECTED | $TRANSIENT, $field(AquaScrollBarUI$TrackListener, fFirstValue)},
	{}
};

$MethodInfo _AquaScrollBarUI$TrackListener_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaScrollBarUI;)V", nullptr, $PROTECTED, $method(static_cast<void(AquaScrollBarUI$TrackListener::*)($AquaScrollBarUI*)>(&AquaScrollBarUI$TrackListener::init$))},
	{"getValueFromOffset", "(III)I", nullptr, 0},
	{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseDraggedInArrows", "(Ljava/awt/event/MouseEvent;)V", nullptr, 0},
	{"mouseDraggedInTrack", "(Ljava/awt/event/MouseEvent;)V", nullptr, 0},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mousePressedInArrows", "(Ljava/awt/event/MouseEvent;Lapple/laf/JRSUIConstants$Hit;)V", nullptr, 0},
	{"mousePressedInTrack", "(Ljava/awt/event/MouseEvent;Lapple/laf/JRSUIConstants$Hit;)V", nullptr, 0},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseReleasedInArrows", "(Ljava/awt/event/MouseEvent;)V", nullptr, 0},
	{"mouseReleasedInTrack", "(Ljava/awt/event/MouseEvent;)V", nullptr, 0},
	{"moveToMouse", "(Ljava/awt/event/MouseEvent;)V", nullptr, 0},
	{}
};

$InnerClassInfo _AquaScrollBarUI$TrackListener_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaScrollBarUI$TrackListener", "com.apple.laf.AquaScrollBarUI", "TrackListener", $PROTECTED},
	{}
};

$ClassInfo _AquaScrollBarUI$TrackListener_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaScrollBarUI$TrackListener",
	"java.awt.event.MouseAdapter",
	nullptr,
	_AquaScrollBarUI$TrackListener_FieldInfo_,
	_AquaScrollBarUI$TrackListener_MethodInfo_,
	nullptr,
	nullptr,
	_AquaScrollBarUI$TrackListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaScrollBarUI"
};

$Object* allocate$AquaScrollBarUI$TrackListener($Class* clazz) {
	return $of($alloc(AquaScrollBarUI$TrackListener));
}

void AquaScrollBarUI$TrackListener::init$($AquaScrollBarUI* this$0) {
	$set(this, this$0, this$0);
	$MouseAdapter::init$();
	this->fStillInArrow = false;
	this->fStillInTrack = false;
}

void AquaScrollBarUI$TrackListener::mouseReleased($MouseEvent* e) {
	if (!$nc(this->this$0->fScrollBar)->isEnabled()) {
		return;
	}
	if (this->fInArrows) {
		mouseReleasedInArrows(e);
	} else {
		mouseReleasedInTrack(e);
	}
	this->fInArrows = false;
	this->fStillInArrow = false;
	this->fStillInTrack = false;
	$nc(this->this$0->fScrollBar)->repaint();
	$nc(this->this$0->fScrollBar)->revalidate();
}

void AquaScrollBarUI$TrackListener::mousePressed($MouseEvent* e) {
	if (!$nc(this->this$0->fScrollBar)->isEnabled()) {
		return;
	}
	int32_t var$0 = $nc(e)->getX();
	$var($JRSUIConstants$Hit, part, this->this$0->getPartHit(var$0, e->getY()));
	this->fInArrows = $AquaScrollBarUI$HitUtil::isArrow(part);
	if (this->fInArrows) {
		mousePressedInArrows(e, part);
	} else {
		$init($JRSUIConstants$Hit);
		if (part == $JRSUIConstants$Hit::NONE) {
			$set(this->this$0, fTrackHighlight, $JRSUIConstants$Hit::NONE);
		} else {
			mousePressedInTrack(e, part);
		}
	}
}

void AquaScrollBarUI$TrackListener::mouseDragged($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	if (!$nc(this->this$0->fScrollBar)->isEnabled()) {
		return;
	}
	if (this->fInArrows) {
		mouseDraggedInArrows(e);
	} else if (this->this$0->fIsDragging) {
		mouseDraggedInTrack(e);
	} else {
		$var($JRSUIConstants$Hit, previousPart, this->this$0->getPartHit(this->fCurrentMouseX, this->fCurrentMouseY));
		if (!$AquaScrollBarUI$HitUtil::isTrack(previousPart)) {
			this->fStillInTrack = false;
		}
		this->fCurrentMouseX = $nc(e)->getX();
		this->fCurrentMouseY = e->getY();
		int32_t var$0 = e->getX();
		$var($JRSUIConstants$Hit, part, this->this$0->getPartHit(var$0, e->getY()));
		bool temp = $AquaScrollBarUI$HitUtil::isTrack(part);
		if (temp == this->fStillInTrack) {
			return;
		}
		this->fStillInTrack = temp;
		if (!this->fStillInTrack) {
			$nc(this->this$0->fScrollTimer)->stop();
		} else {
			$nc(this->this$0->fScrollListener)->actionPerformed($$new($ActionEvent, this->this$0->fScrollTimer, 0, ""_s));
			this->this$0->startTimer(false);
		}
	}
}

int32_t AquaScrollBarUI$TrackListener::getValueFromOffset(int32_t xOffset, int32_t yOffset, int32_t firstValue) {
	bool isHoriz = this->this$0->isHorizontal();
	int32_t offsetWeCareAbout = isHoriz ? xOffset : yOffset;
	int32_t visibleAmt = $nc(this->this$0->fScrollBar)->getVisibleAmount();
	int32_t max = $nc(this->this$0->fScrollBar)->getMaximum();
	int32_t min = $nc(this->this$0->fScrollBar)->getMinimum();
	int32_t extent = max - min;
	this->this$0->syncState(this->this$0->fScrollBar);
	$var($JRSUIControl, var$0, $nc(this->this$0->painter)->getControl());
	int32_t var$1 = $nc(this->this$0->fScrollBar)->getWidth();
	double offsetChange = $JRSUIUtils$ScrollBar::getNativeOffsetChange(var$0, 0, 0, var$1, $nc(this->this$0->fScrollBar)->getHeight(), offsetWeCareAbout, visibleAmt, extent);
	int32_t scrollableArea = extent - visibleAmt;
	int32_t changeByValue = $cast(int32_t, (offsetChange * scrollableArea));
	int32_t newValue = firstValue + changeByValue;
	newValue = $Math::max(min, newValue);
	newValue = $Math::min((max - visibleAmt), newValue);
	return newValue;
}

void AquaScrollBarUI$TrackListener::mousePressedInArrows($MouseEvent* e, $JRSUIConstants$Hit* part) {
	int32_t direction = $AquaScrollBarUI$HitUtil::isIncrement(part) ? 1 : -1;
	this->fStillInArrow = true;
	this->this$0->scrollByUnit(direction);
	$nc(this->this$0->fScrollTimer)->stop();
	$nc(this->this$0->fScrollListener)->setDirection(direction);
	$nc(this->this$0->fScrollListener)->setScrollByBlock(false);
	$set(this->this$0, fMousePart, part);
	this->this$0->startTimer(true);
}

void AquaScrollBarUI$TrackListener::mouseReleasedInArrows($MouseEvent* e) {
	$nc(this->this$0->fScrollTimer)->stop();
	$init($JRSUIConstants$Hit);
	$set(this->this$0, fMousePart, $JRSUIConstants$Hit::NONE);
	$nc(this->this$0->fScrollBar)->setValueIsAdjusting(false);
}

void AquaScrollBarUI$TrackListener::mouseDraggedInArrows($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = $nc(e)->getX();
	$var($JRSUIConstants$Hit, whichPart, this->this$0->getPartHit(var$0, e->getY()));
	if ((this->this$0->fMousePart == whichPart) && this->fStillInArrow) {
		return;
	}
	if (this->this$0->fMousePart != whichPart && !$AquaScrollBarUI$HitUtil::isArrow(whichPart)) {
		$nc(this->this$0->fScrollTimer)->stop();
		this->fStillInArrow = false;
		$nc(this->this$0->fScrollBar)->repaint();
	} else {
		$set(this->this$0, fMousePart, whichPart);
		$nc(this->this$0->fScrollListener)->setDirection($AquaScrollBarUI$HitUtil::isIncrement(whichPart) ? 1 : -1);
		this->fStillInArrow = true;
		$nc(this->this$0->fScrollListener)->actionPerformed($$new($ActionEvent, this->this$0->fScrollTimer, 0, ""_s));
		this->this$0->startTimer(false);
	}
	$nc(this->this$0->fScrollBar)->repaint();
}

void AquaScrollBarUI$TrackListener::mouseReleasedInTrack($MouseEvent* e) {
	$init($JRSUIConstants$Hit);
	if (this->this$0->fTrackHighlight != $JRSUIConstants$Hit::NONE) {
		$nc(this->this$0->fScrollBar)->repaint();
	}
	$set(this->this$0, fTrackHighlight, $JRSUIConstants$Hit::NONE);
	this->this$0->fIsDragging = false;
	$nc(this->this$0->fScrollTimer)->stop();
	$nc(this->this$0->fScrollBar)->setValueIsAdjusting(false);
}

void AquaScrollBarUI$TrackListener::mousePressedInTrack($MouseEvent* e, $JRSUIConstants$Hit* part) {
	$useLocalCurrentObjectStackCache();
	$nc(this->this$0->fScrollBar)->setValueIsAdjusting(true);
	$init($JRSUIConstants$ScrollBarHit);
	bool shouldScrollToHere = (!$equals(part, $JRSUIConstants$ScrollBarHit::THUMB)) && $JRSUIUtils$ScrollBar::useScrollToClick();
	if ($nc(e)->isAltDown()) {
		shouldScrollToHere = !shouldScrollToHere;
	}
	if (shouldScrollToHere) {
		int32_t var$0 = $nc(e)->getX();
		$var($Point, p, this->this$0->getScrollToHereStartPoint(var$0, e->getY()));
		this->fFirstMouseX = $nc(p)->x;
		this->fFirstMouseY = p->y;
		this->fFirstValue = $nc(this->this$0->fScrollBar)->getValue();
		moveToMouse(e);
		$set(this->this$0, fTrackHighlight, $JRSUIConstants$ScrollBarHit::THUMB);
		this->this$0->fIsDragging = true;
		return;
	}
	this->fCurrentMouseX = $nc(e)->getX();
	this->fCurrentMouseY = e->getY();
	int32_t direction = 0;
	if ($equals(part, $JRSUIConstants$ScrollBarHit::TRACK_MIN)) {
		$set(this->this$0, fTrackHighlight, $JRSUIConstants$ScrollBarHit::TRACK_MIN);
		direction = -1;
	} else {
		if ($equals(part, $JRSUIConstants$ScrollBarHit::TRACK_MAX)) {
			$set(this->this$0, fTrackHighlight, $JRSUIConstants$ScrollBarHit::TRACK_MAX);
			direction = 1;
		} else {
			this->fFirstValue = $nc(this->this$0->fScrollBar)->getValue();
			this->fFirstMouseX = this->fCurrentMouseX;
			this->fFirstMouseY = this->fCurrentMouseY;
			$set(this->this$0, fTrackHighlight, $JRSUIConstants$ScrollBarHit::THUMB);
			this->this$0->fIsDragging = true;
			return;
		}
	}
	this->this$0->fIsDragging = false;
	this->fStillInTrack = true;
	this->this$0->scrollByBlock(direction);
	$var($JRSUIConstants$Hit, newPart, this->this$0->getPartHit(this->fCurrentMouseX, this->fCurrentMouseY));
	if ($equals(newPart, $JRSUIConstants$ScrollBarHit::TRACK_MIN) || $equals(newPart, $JRSUIConstants$ScrollBarHit::TRACK_MAX)) {
		$nc(this->this$0->fScrollTimer)->stop();
		$nc(this->this$0->fScrollListener)->setDirection((($equals(newPart, $JRSUIConstants$ScrollBarHit::TRACK_MAX)) ? 1 : -1));
		$nc(this->this$0->fScrollListener)->setScrollByBlock(true);
		this->this$0->startTimer(true);
	}
}

void AquaScrollBarUI$TrackListener::mouseDraggedInTrack($MouseEvent* e) {
	moveToMouse(e);
}

void AquaScrollBarUI$TrackListener::moveToMouse($MouseEvent* e) {
	this->fCurrentMouseX = $nc(e)->getX();
	this->fCurrentMouseY = e->getY();
	int32_t oldValue = $nc(this->this$0->fScrollBar)->getValue();
	int32_t newValue = getValueFromOffset(this->fCurrentMouseX - this->fFirstMouseX, this->fCurrentMouseY - this->fFirstMouseY, this->fFirstValue);
	if (newValue == oldValue) {
		return;
	}
	$nc(this->this$0->fScrollBar)->setValue(newValue);
	$var($Rectangle, dirtyRect, this->this$0->getTrackBounds());
	$nc(this->this$0->fScrollBar)->repaint($nc(dirtyRect)->x, dirtyRect->y, dirtyRect->width, dirtyRect->height);
}

AquaScrollBarUI$TrackListener::AquaScrollBarUI$TrackListener() {
}

$Class* AquaScrollBarUI$TrackListener::load$($String* name, bool initialize) {
	$loadClass(AquaScrollBarUI$TrackListener, name, initialize, &_AquaScrollBarUI$TrackListener_ClassInfo_, allocate$AquaScrollBarUI$TrackListener);
	return class$;
}

$Class* AquaScrollBarUI$TrackListener::class$ = nullptr;

		} // laf
	} // apple
} // com