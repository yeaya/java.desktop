#include <javax/swing/plaf/synth/SynthSliderUI$SynthTrackListener.h>

#include <java/awt/Component.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/MouseEvent.h>
#include <java/lang/Math.h>
#include <javax/swing/JSlider.h>
#include <javax/swing/plaf/basic/BasicSliderUI$TrackListener.h>
#include <javax/swing/plaf/basic/BasicSliderUI.h>
#include <javax/swing/plaf/synth/SynthSliderUI.h>
#include <jcpp.h>

#undef HORIZONTAL
#undef VERTICAL

using $Component = ::java::awt::Component;
using $Rectangle = ::java::awt::Rectangle;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $JSlider = ::javax::swing::JSlider;
using $BasicSliderUI = ::javax::swing::plaf::basic::BasicSliderUI;
using $BasicSliderUI$TrackListener = ::javax::swing::plaf::basic::BasicSliderUI$TrackListener;
using $SynthSliderUI = ::javax::swing::plaf::synth::SynthSliderUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthSliderUI$SynthTrackListener_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/synth/SynthSliderUI;", nullptr, $FINAL | $SYNTHETIC, $field(SynthSliderUI$SynthTrackListener, this$0)},
	{}
};

$MethodInfo _SynthSliderUI$SynthTrackListener_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/synth/SynthSliderUI;)V", nullptr, $PRIVATE, $method(static_cast<void(SynthSliderUI$SynthTrackListener::*)($SynthSliderUI*)>(&SynthSliderUI$SynthTrackListener::init$))},
	{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SynthSliderUI$SynthTrackListener_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.SynthSliderUI$SynthTrackListener", "javax.swing.plaf.synth.SynthSliderUI", "SynthTrackListener", $PRIVATE},
	{"javax.swing.plaf.basic.BasicSliderUI$TrackListener", "javax.swing.plaf.basic.BasicSliderUI", "TrackListener", $PUBLIC},
	{}
};

$ClassInfo _SynthSliderUI$SynthTrackListener_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.synth.SynthSliderUI$SynthTrackListener",
	"javax.swing.plaf.basic.BasicSliderUI$TrackListener",
	nullptr,
	_SynthSliderUI$SynthTrackListener_FieldInfo_,
	_SynthSliderUI$SynthTrackListener_MethodInfo_,
	nullptr,
	nullptr,
	_SynthSliderUI$SynthTrackListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.SynthSliderUI"
};

$Object* allocate$SynthSliderUI$SynthTrackListener($Class* clazz) {
	return $of($alloc(SynthSliderUI$SynthTrackListener));
}

void SynthSliderUI$SynthTrackListener::init$($SynthSliderUI* this$0) {
	$set(this, this$0, this$0);
	$BasicSliderUI$TrackListener::init$(this$0);
}

void SynthSliderUI$SynthTrackListener::mouseExited($MouseEvent* e) {
	this->this$0->setThumbActive(false);
}

void SynthSliderUI$SynthTrackListener::mousePressed($MouseEvent* e) {
	$BasicSliderUI$TrackListener::mousePressed(e);
	int32_t var$0 = $nc(e)->getX();
	this->this$0->setThumbPressed($nc($($SynthSliderUI::access$000(this->this$0)))->contains(var$0, e->getY()));
}

void SynthSliderUI$SynthTrackListener::mouseReleased($MouseEvent* e) {
	$BasicSliderUI$TrackListener::mouseReleased(e);
	int32_t var$0 = $nc(e)->getX();
	this->this$0->updateThumbState(var$0, e->getY(), false);
}

void SynthSliderUI$SynthTrackListener::mouseDragged($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	int32_t thumbMiddle = 0;
	if (!$nc($($SynthSliderUI::access$100(this->this$0)))->isEnabled()) {
		return;
	}
	this->currentMouseX = $nc(e)->getX();
	this->currentMouseY = e->getY();
	if (!$SynthSliderUI::access$200(this->this$0)) {
		return;
	}
	$nc($($SynthSliderUI::access$300(this->this$0)))->setValueIsAdjusting(true);
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
		switch ($nc($($SynthSliderUI::access$400(this->this$0)))->getOrientation()) {
		case $JSlider::VERTICAL:
			{
				halfThumbHeight = $nc($($SynthSliderUI::access$500(this->this$0)))->height / 2;
				thumbTop = e->getY() - this->offset;
				trackTop = $nc($($SynthSliderUI::access$600(this->this$0)))->y;
				int32_t var$0 = $nc($($SynthSliderUI::access$700(this->this$0)))->y;
				trackBottom = var$0 + $nc($($SynthSliderUI::access$800(this->this$0)))->height - halfThumbHeight - this->this$0->trackBorder;
				int32_t var$1 = $nc($($SynthSliderUI::access$900(this->this$0)))->getMaximum();
				vMax = $SynthSliderUI::access$1100(this->this$0, var$1 - $nc($($SynthSliderUI::access$1000(this->this$0)))->getExtent());
				if ($SynthSliderUI::access$1200(this->this$0)) {
					trackBottom = vMax;
					trackTop = trackTop + halfThumbHeight;
				} else {
					trackTop = vMax;
				}
				thumbTop = $Math::max(thumbTop, trackTop - halfThumbHeight);
				thumbTop = $Math::min(thumbTop, trackBottom - halfThumbHeight);
				this->this$0->setThumbLocation($nc($($SynthSliderUI::access$1300(this->this$0)))->x, thumbTop);
				thumbMiddle = thumbTop + halfThumbHeight;
				$nc($($SynthSliderUI::access$1400(this->this$0)))->setValue(this->this$0->valueForYPosition(thumbMiddle));
				break;
			}
		case $JSlider::HORIZONTAL:
			{
				halfThumbWidth = $nc($($SynthSliderUI::access$1500(this->this$0)))->width / 2;
				thumbLeft = e->getX() - this->offset;
				trackLeft = $nc($($SynthSliderUI::access$1600(this->this$0)))->x + halfThumbWidth + this->this$0->trackBorder;
				int32_t var$2 = $nc($($SynthSliderUI::access$1700(this->this$0)))->x;
				trackRight = var$2 + $nc($($SynthSliderUI::access$1800(this->this$0)))->width - halfThumbWidth - this->this$0->trackBorder;
				int32_t var$3 = $nc($($SynthSliderUI::access$1900(this->this$0)))->getMaximum();
				hMax = this->this$0->xPositionForValue(var$3 - $nc($($SynthSliderUI::access$2000(this->this$0)))->getExtent());
				if ($SynthSliderUI::access$2100(this->this$0)) {
					trackLeft = hMax;
				} else {
					trackRight = hMax;
				}
				thumbLeft = $Math::max(thumbLeft, trackLeft - halfThumbWidth);
				thumbLeft = $Math::min(thumbLeft, trackRight - halfThumbWidth);
				this->this$0->setThumbLocation(thumbLeft, $nc($($SynthSliderUI::access$2200(this->this$0)))->y);
				thumbMiddle = thumbLeft + halfThumbWidth;
				$nc($($SynthSliderUI::access$2300(this->this$0)))->setValue(this->this$0->valueForXPosition(thumbMiddle));
				break;
			}
		default:
			{
				return;
			}
		}
	}
	if ($nc($($SynthSliderUI::access$2400(this->this$0)))->getValueIsAdjusting()) {
		this->this$0->setThumbActive(true);
	}
}

void SynthSliderUI$SynthTrackListener::mouseMoved($MouseEvent* e) {
	int32_t var$0 = $nc(e)->getX();
	this->this$0->updateThumbState(var$0, e->getY());
}

SynthSliderUI$SynthTrackListener::SynthSliderUI$SynthTrackListener() {
}

$Class* SynthSliderUI$SynthTrackListener::load$($String* name, bool initialize) {
	$loadClass(SynthSliderUI$SynthTrackListener, name, initialize, &_SynthSliderUI$SynthTrackListener_ClassInfo_, allocate$SynthSliderUI$SynthTrackListener);
	return class$;
}

$Class* SynthSliderUI$SynthTrackListener::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax