#include <com/apple/laf/AquaProgressBarUI$Animator.h>

#include <com/apple/laf/AquaProgressBarUI.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <javax/swing/Timer.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

#undef MINIMUM_DELAY

using $AquaProgressBarUI = ::com::apple::laf::AquaProgressBarUI;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Timer = ::javax::swing::Timer;
using $UIManager = ::javax::swing::UIManager;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaProgressBarUI$Animator_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaProgressBarUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaProgressBarUI$Animator, this$0)},
	{"MINIMUM_DELAY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AquaProgressBarUI$Animator, MINIMUM_DELAY)},
	{"timer", "Ljavax/swing/Timer;", nullptr, $PRIVATE, $field(AquaProgressBarUI$Animator, timer)},
	{"previousDelay", "J", nullptr, $PRIVATE, $field(AquaProgressBarUI$Animator, previousDelay)},
	{"lastCall", "J", nullptr, $PRIVATE, $field(AquaProgressBarUI$Animator, lastCall)},
	{"repaintInterval", "I", nullptr, $PRIVATE, $field(AquaProgressBarUI$Animator, repaintInterval)},
	{}
};

$MethodInfo _AquaProgressBarUI$Animator_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaProgressBarUI;)V", nullptr, $PUBLIC, $method(static_cast<void(AquaProgressBarUI$Animator::*)($AquaProgressBarUI*)>(&AquaProgressBarUI$Animator::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"start", "()V", nullptr, $PROTECTED},
	{"stop", "()V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _AquaProgressBarUI$Animator_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaProgressBarUI$Animator", "com.apple.laf.AquaProgressBarUI", "Animator", $PROTECTED},
	{}
};

$ClassInfo _AquaProgressBarUI$Animator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaProgressBarUI$Animator",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	_AquaProgressBarUI$Animator_FieldInfo_,
	_AquaProgressBarUI$Animator_MethodInfo_,
	nullptr,
	nullptr,
	_AquaProgressBarUI$Animator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaProgressBarUI"
};

$Object* allocate$AquaProgressBarUI$Animator($Class* clazz) {
	return $of($alloc(AquaProgressBarUI$Animator));
}

void AquaProgressBarUI$Animator::init$($AquaProgressBarUI* this$0) {
	$set(this, this$0, this$0);
	this->repaintInterval = $UIManager::getInt("ProgressBar.repaintInterval"_s);
	if (this->repaintInterval <= 0) {
		this->repaintInterval = 100;
	}
}

void AquaProgressBarUI$Animator::start() {
	this->previousDelay = this->repaintInterval;
	this->lastCall = 0;
	if (this->timer == nullptr) {
		$set(this, timer, $new($Timer, this->repaintInterval, this));
	} else {
		$nc(this->timer)->setDelay(this->repaintInterval);
	}
	{
		$nc(this->timer)->setRepeats(false);
		$nc(this->timer)->setCoalesce(false);
	}
	$nc(this->timer)->start();
}

void AquaProgressBarUI$Animator::stop() {
	$nc(this->timer)->stop();
}

void AquaProgressBarUI$Animator::actionPerformed($ActionEvent* e) {
	int64_t time = $System::currentTimeMillis();
	if (this->lastCall > 0) {
		int32_t nextDelay = (int32_t)(this->previousDelay - time + this->lastCall + this->repaintInterval);
		if (nextDelay < AquaProgressBarUI$Animator::MINIMUM_DELAY) {
			nextDelay = AquaProgressBarUI$Animator::MINIMUM_DELAY;
		}
		$nc(this->timer)->setInitialDelay(nextDelay);
		this->previousDelay = nextDelay;
	}
	$nc(this->timer)->start();
	this->lastCall = time;
	this->this$0->repaint();
}

AquaProgressBarUI$Animator::AquaProgressBarUI$Animator() {
}

$Class* AquaProgressBarUI$Animator::load$($String* name, bool initialize) {
	$loadClass(AquaProgressBarUI$Animator, name, initialize, &_AquaProgressBarUI$Animator_ClassInfo_, allocate$AquaProgressBarUI$Animator);
	return class$;
}

$Class* AquaProgressBarUI$Animator::class$ = nullptr;

		} // laf
	} // apple
} // com