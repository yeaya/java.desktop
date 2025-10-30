#include <javax/swing/plaf/basic/BasicProgressBarUI$Animator.h>

#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <javax/swing/Timer.h>
#include <javax/swing/plaf/basic/BasicProgressBarUI.h>
#include <jcpp.h>

#undef ADJUSTTIMER
#undef MINIMUM_DELAY

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Timer = ::javax::swing::Timer;
using $BasicProgressBarUI = ::javax::swing::plaf::basic::BasicProgressBarUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicProgressBarUI$Animator_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicProgressBarUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicProgressBarUI$Animator, this$0)},
	{"timer", "Ljavax/swing/Timer;", nullptr, $PRIVATE, $field(BasicProgressBarUI$Animator, timer)},
	{"previousDelay", "J", nullptr, $PRIVATE, $field(BasicProgressBarUI$Animator, previousDelay)},
	{"interval", "I", nullptr, $PRIVATE, $field(BasicProgressBarUI$Animator, interval)},
	{"lastCall", "J", nullptr, $PRIVATE, $field(BasicProgressBarUI$Animator, lastCall)},
	{"MINIMUM_DELAY", "I", nullptr, $PRIVATE, $field(BasicProgressBarUI$Animator, MINIMUM_DELAY)},
	{}
};

$MethodInfo _BasicProgressBarUI$Animator_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicProgressBarUI;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicProgressBarUI$Animator::*)($BasicProgressBarUI*)>(&BasicProgressBarUI$Animator::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"start", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(BasicProgressBarUI$Animator::*)(int32_t)>(&BasicProgressBarUI$Animator::start))},
	{"stop", "()V", nullptr, $PRIVATE, $method(static_cast<void(BasicProgressBarUI$Animator::*)()>(&BasicProgressBarUI$Animator::stop))},
	{}
};

$InnerClassInfo _BasicProgressBarUI$Animator_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicProgressBarUI$Animator", "javax.swing.plaf.basic.BasicProgressBarUI", "Animator", $PRIVATE},
	{}
};

$ClassInfo _BasicProgressBarUI$Animator_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicProgressBarUI$Animator",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	_BasicProgressBarUI$Animator_FieldInfo_,
	_BasicProgressBarUI$Animator_MethodInfo_,
	nullptr,
	nullptr,
	_BasicProgressBarUI$Animator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicProgressBarUI"
};

$Object* allocate$BasicProgressBarUI$Animator($Class* clazz) {
	return $of($alloc(BasicProgressBarUI$Animator));
}

void BasicProgressBarUI$Animator::init$($BasicProgressBarUI* this$0) {
	$set(this, this$0, this$0);
	this->MINIMUM_DELAY = 5;
}

void BasicProgressBarUI$Animator::start(int32_t interval) {
	this->previousDelay = interval;
	this->lastCall = 0;
	if (this->timer == nullptr) {
		$set(this, timer, $new($Timer, interval, this));
	} else {
		$nc(this->timer)->setDelay(interval);
	}
	$init($BasicProgressBarUI);
	if ($BasicProgressBarUI::ADJUSTTIMER) {
		$nc(this->timer)->setRepeats(false);
		$nc(this->timer)->setCoalesce(false);
	}
	$nc(this->timer)->start();
}

void BasicProgressBarUI$Animator::stop() {
	$nc(this->timer)->stop();
}

void BasicProgressBarUI$Animator::actionPerformed($ActionEvent* e) {
	$init($BasicProgressBarUI);
	if ($BasicProgressBarUI::ADJUSTTIMER) {
		int64_t time = $System::currentTimeMillis();
		if (this->lastCall > 0) {
			int32_t nextDelay = (int32_t)(this->previousDelay - time + this->lastCall + this->this$0->getRepaintInterval());
			if (nextDelay < this->MINIMUM_DELAY) {
				nextDelay = this->MINIMUM_DELAY;
			}
			$nc(this->timer)->setInitialDelay(nextDelay);
			this->previousDelay = nextDelay;
		}
		$nc(this->timer)->start();
		this->lastCall = time;
	}
	this->this$0->incrementAnimationIndex();
}

BasicProgressBarUI$Animator::BasicProgressBarUI$Animator() {
}

$Class* BasicProgressBarUI$Animator::load$($String* name, bool initialize) {
	$loadClass(BasicProgressBarUI$Animator, name, initialize, &_BasicProgressBarUI$Animator_ClassInfo_, allocate$BasicProgressBarUI$Animator);
	return class$;
}

$Class* BasicProgressBarUI$Animator::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax