#include <com/apple/laf/AquaScrollBarUI$ScrollListener.h>

#include <apple/laf/JRSUIConstants$Hit.h>
#include <apple/laf/JRSUIConstants$ScrollBarHit.h>
#include <com/apple/laf/AquaScrollBarUI$TrackListener.h>
#include <com/apple/laf/AquaScrollBarUI.h>
#include <java/awt/event/ActionEvent.h>
#include <java/util/EventObject.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/Timer.h>
#include <jcpp.h>

#undef THUMB
#undef TRACK_MAX
#undef TRACK_MIN

using $JRSUIConstants$Hit = ::apple::laf::JRSUIConstants$Hit;
using $JRSUIConstants$ScrollBarHit = ::apple::laf::JRSUIConstants$ScrollBarHit;
using $AquaScrollBarUI = ::com::apple::laf::AquaScrollBarUI;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JScrollBar = ::javax::swing::JScrollBar;
using $Timer = ::javax::swing::Timer;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaScrollBarUI$ScrollListener_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaScrollBarUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaScrollBarUI$ScrollListener, this$0)},
	{"fUseBlockIncrement", "Z", nullptr, 0, $field(AquaScrollBarUI$ScrollListener, fUseBlockIncrement)},
	{"fDirection", "I", nullptr, 0, $field(AquaScrollBarUI$ScrollListener, fDirection)},
	{}
};

$MethodInfo _AquaScrollBarUI$ScrollListener_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaScrollBarUI;)V", nullptr, $PROTECTED, $method(static_cast<void(AquaScrollBarUI$ScrollListener::*)($AquaScrollBarUI*)>(&AquaScrollBarUI$ScrollListener::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"setDirection", "(I)V", nullptr, 0},
	{"setScrollByBlock", "(Z)V", nullptr, 0},
	{}
};

$InnerClassInfo _AquaScrollBarUI$ScrollListener_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaScrollBarUI$ScrollListener", "com.apple.laf.AquaScrollBarUI", "ScrollListener", $PROTECTED},
	{}
};

$ClassInfo _AquaScrollBarUI$ScrollListener_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaScrollBarUI$ScrollListener",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	_AquaScrollBarUI$ScrollListener_FieldInfo_,
	_AquaScrollBarUI$ScrollListener_MethodInfo_,
	nullptr,
	nullptr,
	_AquaScrollBarUI$ScrollListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaScrollBarUI"
};

$Object* allocate$AquaScrollBarUI$ScrollListener($Class* clazz) {
	return $of($alloc(AquaScrollBarUI$ScrollListener));
}

void AquaScrollBarUI$ScrollListener::init$($AquaScrollBarUI* this$0) {
	$set(this, this$0, this$0);
	this->fDirection = 1;
}

void AquaScrollBarUI$ScrollListener::setDirection(int32_t direction) {
	this->fDirection = direction;
}

void AquaScrollBarUI$ScrollListener::setScrollByBlock(bool block) {
	this->fUseBlockIncrement = block;
}

void AquaScrollBarUI$ScrollListener::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	if (this->fUseBlockIncrement) {
		$var($JRSUIConstants$Hit, newPart, this->this$0->getPartHit($nc(this->this$0->fTrackListener)->fCurrentMouseX, $nc(this->this$0->fTrackListener)->fCurrentMouseY));
		$init($JRSUIConstants$ScrollBarHit);
		if ($equals(newPart, $JRSUIConstants$ScrollBarHit::TRACK_MIN) || $equals(newPart, $JRSUIConstants$ScrollBarHit::TRACK_MAX)) {
			int32_t newDirection = ($equals(newPart, $JRSUIConstants$ScrollBarHit::TRACK_MAX) ? 1 : -1);
			if (this->fDirection != newDirection) {
				this->fDirection = newDirection;
			}
		}
		this->this$0->scrollByBlock(this->fDirection);
		$assign(newPart, this->this$0->getPartHit($nc(this->this$0->fTrackListener)->fCurrentMouseX, $nc(this->this$0->fTrackListener)->fCurrentMouseY));
		if ($equals(newPart, $JRSUIConstants$ScrollBarHit::THUMB)) {
			$nc(($cast($Timer, $($nc(e)->getSource()))))->stop();
		}
	} else {
		this->this$0->scrollByUnit(this->fDirection);
	}
	bool var$0 = this->fDirection > 0;
	if (var$0) {
		int32_t var$2 = $nc(this->this$0->fScrollBar)->getValue();
		int32_t var$1 = var$2 + $nc(this->this$0->fScrollBar)->getVisibleAmount();
		var$0 = var$1 >= $nc(this->this$0->fScrollBar)->getMaximum();
	}
	if (var$0) {
		$nc(($cast($Timer, $($nc(e)->getSource()))))->stop();
	} else {
		bool var$5 = this->fDirection < 0;
		if (var$5) {
			int32_t var$6 = $nc(this->this$0->fScrollBar)->getValue();
			var$5 = var$6 <= $nc(this->this$0->fScrollBar)->getMinimum();
		}
		if (var$5) {
			$nc(($cast($Timer, $($nc(e)->getSource()))))->stop();
		}
	}
}

AquaScrollBarUI$ScrollListener::AquaScrollBarUI$ScrollListener() {
}

$Class* AquaScrollBarUI$ScrollListener::load$($String* name, bool initialize) {
	$loadClass(AquaScrollBarUI$ScrollListener, name, initialize, &_AquaScrollBarUI$ScrollListener_ClassInfo_, allocate$AquaScrollBarUI$ScrollListener);
	return class$;
}

$Class* AquaScrollBarUI$ScrollListener::class$ = nullptr;

		} // laf
	} // apple
} // com