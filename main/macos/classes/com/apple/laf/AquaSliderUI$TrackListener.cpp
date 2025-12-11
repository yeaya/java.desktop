#include <com/apple/laf/AquaSliderUI$TrackListener.h>

#include <com/apple/laf/AquaSliderUI.h>
#include <java/awt/Component.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/MouseEvent.h>
#include <java/lang/Math.h>
#include <javax/swing/JSlider.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/Timer.h>
#include <javax/swing/plaf/basic/BasicSliderUI$TrackListener.h>
#include <javax/swing/plaf/basic/BasicSliderUI.h>
#include <jcpp.h>

#undef HORIZONTAL
#undef VERTICAL

using $AquaSliderUI = ::com::apple::laf::AquaSliderUI;
using $Rectangle = ::java::awt::Rectangle;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $JSlider = ::javax::swing::JSlider;
using $SwingConstants = ::javax::swing::SwingConstants;
using $Timer = ::javax::swing::Timer;
using $BasicSliderUI = ::javax::swing::plaf::basic::BasicSliderUI;
using $BasicSliderUI$TrackListener = ::javax::swing::plaf::basic::BasicSliderUI$TrackListener;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaSliderUI$TrackListener_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaSliderUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaSliderUI$TrackListener, this$0)},
	{"offset", "I", nullptr, $PROTECTED | $TRANSIENT, $field(AquaSliderUI$TrackListener, offset)},
	{"currentMouseX", "I", nullptr, $PROTECTED | $TRANSIENT, $field(AquaSliderUI$TrackListener, currentMouseX)},
	{"currentMouseY", "I", nullptr, $PROTECTED | $TRANSIENT, $field(AquaSliderUI$TrackListener, currentMouseY)},
	{}
};

$MethodInfo _AquaSliderUI$TrackListener_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaSliderUI;)V", nullptr, 0, $method(static_cast<void(AquaSliderUI$TrackListener::*)($AquaSliderUI*)>(&AquaSliderUI$TrackListener::init$))},
	{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"shouldScroll", "(I)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaSliderUI$TrackListener_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaSliderUI$TrackListener", "com.apple.laf.AquaSliderUI", "TrackListener", 0},
	{"javax.swing.plaf.basic.BasicSliderUI$TrackListener", "javax.swing.plaf.basic.BasicSliderUI", "TrackListener", $PUBLIC},
	{}
};

$ClassInfo _AquaSliderUI$TrackListener_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaSliderUI$TrackListener",
	"javax.swing.plaf.basic.BasicSliderUI$TrackListener",
	nullptr,
	_AquaSliderUI$TrackListener_FieldInfo_,
	_AquaSliderUI$TrackListener_MethodInfo_,
	nullptr,
	nullptr,
	_AquaSliderUI$TrackListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaSliderUI"
};

$Object* allocate$AquaSliderUI$TrackListener($Class* clazz) {
	return $of($alloc(AquaSliderUI$TrackListener));
}

void AquaSliderUI$TrackListener::init$($AquaSliderUI* this$0) {
	$set(this, this$0, this$0);
	$BasicSliderUI$TrackListener::init$(this$0);
	this->currentMouseX = -1;
	this->currentMouseY = -1;
}

void AquaSliderUI$TrackListener::mouseReleased($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	if (!$nc($($AquaSliderUI::access$100(this->this$0)))->isEnabled()) {
		return;
	}
	this->currentMouseX = -1;
	this->currentMouseY = -1;
	this->offset = 0;
	$nc($($AquaSliderUI::access$200(this->this$0)))->stop();
	if ($nc($($AquaSliderUI::access$300(this->this$0)))->getSnapToTicks()) {
		this->this$0->fIsDragging = false;
		$nc($($AquaSliderUI::access$400(this->this$0)))->setValueIsAdjusting(false);
	} else {
		$nc($($AquaSliderUI::access$500(this->this$0)))->setValueIsAdjusting(false);
		this->this$0->fIsDragging = false;
	}
	$nc($($AquaSliderUI::access$600(this->this$0)))->repaint();
}

void AquaSliderUI$TrackListener::mousePressed($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	if (!$nc($($AquaSliderUI::access$700(this->this$0)))->isEnabled()) {
		return;
	}
	$AquaSliderUI::access$800(this->this$0);
	bool firstClick = (this->currentMouseX == -1) && (this->currentMouseY == -1);
	this->currentMouseX = $nc(e)->getX();
	this->currentMouseY = e->getY();
	if ($nc($($AquaSliderUI::access$900(this->this$0)))->isRequestFocusEnabled()) {
		$nc($($AquaSliderUI::access$1000(this->this$0)))->requestFocus();
	}
	bool isMouseEventInThumb = $nc($($AquaSliderUI::access$1100(this->this$0)))->contains(this->currentMouseX, this->currentMouseY);
	if (!firstClick || !isMouseEventInThumb) {
		$nc($($AquaSliderUI::access$1200(this->this$0)))->setValueIsAdjusting(true);
		switch ($nc($($AquaSliderUI::access$1300(this->this$0)))->getOrientation()) {
		case $SwingConstants::VERTICAL:
			{
				$nc($($AquaSliderUI::access$1400(this->this$0)))->setValue(this->this$0->valueForYPosition(this->currentMouseY));
				break;
			}
		case $SwingConstants::HORIZONTAL:
			{
				$nc($($AquaSliderUI::access$1500(this->this$0)))->setValue(this->this$0->valueForXPosition(this->currentMouseX));
				break;
			}
		}
		$nc($($AquaSliderUI::access$1600(this->this$0)))->setValueIsAdjusting(false);
		isMouseEventInThumb = true;
	}
	if (isMouseEventInThumb) {
		switch ($nc($($AquaSliderUI::access$1700(this->this$0)))->getOrientation()) {
		case $SwingConstants::VERTICAL:
			{
				this->offset = this->currentMouseY - $nc($($AquaSliderUI::access$1800(this->this$0)))->y;
				break;
			}
		case $SwingConstants::HORIZONTAL:
			{
				this->offset = this->currentMouseX - $nc($($AquaSliderUI::access$1900(this->this$0)))->x;
				break;
			}
		}
		this->this$0->fIsDragging = true;
		return;
	}
	this->this$0->fIsDragging = false;
}

bool AquaSliderUI$TrackListener::shouldScroll(int32_t direction) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, r, $AquaSliderUI::access$2000(this->this$0));
	if ($nc($($AquaSliderUI::access$2100(this->this$0)))->getOrientation() == $SwingConstants::VERTICAL) {
		if ($AquaSliderUI::access$2200(this->this$0) ? direction < 0 : direction > 0) {
			if ($nc(r)->y + r->height <= this->currentMouseY) {
				return false;
			}
		} else if ($nc(r)->y >= this->currentMouseY) {
			return false;
		}
	} else if ($AquaSliderUI::access$2300(this->this$0) ? direction < 0 : direction > 0) {
		if ($nc(r)->x + r->width >= this->currentMouseX) {
			return false;
		}
	} else if ($nc(r)->x <= this->currentMouseX) {
		return false;
	}
	bool var$0 = direction > 0;
	if (var$0) {
		int32_t var$2 = $nc($($AquaSliderUI::access$2400(this->this$0)))->getValue();
		int32_t var$1 = var$2 + $nc($($AquaSliderUI::access$2500(this->this$0)))->getExtent();
		var$0 = var$1 >= $nc($($AquaSliderUI::access$2600(this->this$0)))->getMaximum();
	}
	if (var$0) {
		return false;
	}
	bool var$3 = direction < 0;
	if (var$3) {
		int32_t var$4 = $nc($($AquaSliderUI::access$2700(this->this$0)))->getValue();
		var$3 = var$4 <= $nc($($AquaSliderUI::access$2800(this->this$0)))->getMinimum();
	}
	if (var$3) {
		return false;
	}
	return true;
}

void AquaSliderUI$TrackListener::mouseDragged($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	int32_t thumbMiddle = 0;
	if (!$nc($($AquaSliderUI::access$2900(this->this$0)))->isEnabled()) {
		return;
	}
	this->currentMouseX = $nc(e)->getX();
	this->currentMouseY = e->getY();
	if (!this->this$0->fIsDragging) {
		return;
	}
	$nc($($AquaSliderUI::access$3000(this->this$0)))->setValueIsAdjusting(true);
	{
		int32_t halfThumbHeight = 0;
		int32_t thumbTop = 0;
		int32_t trackTop = 0;
		int32_t trackBottom = 0;
		int32_t vMax = 0;
		int32_t halfThumbWidth = 0;
		int32_t thumbLeft = 0;
		int32_t trackLeft = 0;
		int32_t trackRight = 0;
		int32_t hMax = 0;
		switch ($nc($($AquaSliderUI::access$3100(this->this$0)))->getOrientation()) {
		case $SwingConstants::VERTICAL:
			{
				halfThumbHeight = $nc($($AquaSliderUI::access$3200(this->this$0)))->height / 2;
				thumbTop = e->getY() - this->offset;
				trackTop = $nc($($AquaSliderUI::access$3300(this->this$0)))->y;
				int32_t var$0 = $nc($($AquaSliderUI::access$3400(this->this$0)))->y;
				trackBottom = var$0 + ($nc($($AquaSliderUI::access$3500(this->this$0)))->height - 1);
				int32_t var$1 = $nc($($AquaSliderUI::access$3600(this->this$0)))->getMaximum();
				vMax = $AquaSliderUI::access$3800(this->this$0, var$1 - $nc($($AquaSliderUI::access$3700(this->this$0)))->getExtent());
				if ($AquaSliderUI::access$3900(this->this$0)) {
					trackBottom = vMax;
				} else {
					trackTop = vMax;
				}
				thumbTop = $Math::max(thumbTop, trackTop - halfThumbHeight);
				thumbTop = $Math::min(thumbTop, trackBottom - halfThumbHeight);
				this->this$0->setThumbLocation($nc($($AquaSliderUI::access$4000(this->this$0)))->x, thumbTop);
				thumbMiddle = thumbTop + halfThumbHeight;
				$nc($($AquaSliderUI::access$4100(this->this$0)))->setValue(this->this$0->valueForYPosition(thumbMiddle));
				break;
			}
		case $SwingConstants::HORIZONTAL:
			{
				halfThumbWidth = $nc($($AquaSliderUI::access$4200(this->this$0)))->width / 2;
				thumbLeft = e->getX() - this->offset;
				trackLeft = $nc($($AquaSliderUI::access$4300(this->this$0)))->x;
				int32_t var$2 = $nc($($AquaSliderUI::access$4400(this->this$0)))->x;
				trackRight = var$2 + ($nc($($AquaSliderUI::access$4500(this->this$0)))->width - 1);
				int32_t var$3 = $nc($($AquaSliderUI::access$4600(this->this$0)))->getMaximum();
				hMax = $AquaSliderUI::access$4800(this->this$0, var$3 - $nc($($AquaSliderUI::access$4700(this->this$0)))->getExtent());
				if ($AquaSliderUI::access$4900(this->this$0)) {
					trackLeft = hMax;
				} else {
					trackRight = hMax;
				}
				thumbLeft = $Math::max(thumbLeft, trackLeft - halfThumbWidth);
				thumbLeft = $Math::min(thumbLeft, trackRight - halfThumbWidth);
				this->this$0->setThumbLocation(thumbLeft, $nc($($AquaSliderUI::access$5000(this->this$0)))->y);
				thumbMiddle = thumbLeft + halfThumbWidth;
				$nc($($AquaSliderUI::access$5100(this->this$0)))->setValue(this->this$0->valueForXPosition(thumbMiddle));
				break;
			}
		default:
			{
				return;
			}
		}
	}
	if ($nc($($AquaSliderUI::access$5200(this->this$0)))->getSnapToTicks()) {
		this->this$0->calculateThumbLocation();
		int32_t var$4 = $nc($($AquaSliderUI::access$5300(this->this$0)))->x;
		this->this$0->setThumbLocation(var$4, $nc($($AquaSliderUI::access$5400(this->this$0)))->y);
	}
}

void AquaSliderUI$TrackListener::mouseMoved($MouseEvent* e) {
}

AquaSliderUI$TrackListener::AquaSliderUI$TrackListener() {
}

$Class* AquaSliderUI$TrackListener::load$($String* name, bool initialize) {
	$loadClass(AquaSliderUI$TrackListener, name, initialize, &_AquaSliderUI$TrackListener_ClassInfo_, allocate$AquaSliderUI$TrackListener);
	return class$;
}

$Class* AquaSliderUI$TrackListener::class$ = nullptr;

		} // laf
	} // apple
} // com