#include <com/sun/java/swing/plaf/windows/AnimationController$AnimationState.h>

#include <com/sun/java/swing/plaf/windows/AnimationController.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$State.h>
#include <com/sun/java/swing/plaf/windows/XPStyle$Skin.h>
#include <java/awt/AlphaComposite.h>
#include <java/awt/Composite.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Math.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $AnimationController = ::com::sun::java::swing::plaf::windows::AnimationController;
using $TMSchema$State = ::com::sun::java::swing::plaf::windows::TMSchema$State;
using $XPStyle$Skin = ::com::sun::java::swing::plaf::windows::XPStyle$Skin;
using $AlphaComposite = ::java::awt::AlphaComposite;
using $Composite = ::java::awt::Composite;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingUtilities = ::javax::swing::SwingUtilities;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _AnimationController$AnimationState_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(AnimationController$AnimationState, $assertionsDisabled)},
	{"startState", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PRIVATE | $FINAL, $field(AnimationController$AnimationState, startState)},
	{"duration", "J", nullptr, $PRIVATE | $FINAL, $field(AnimationController$AnimationState, duration)},
	{"startTime", "J", nullptr, $PRIVATE, $field(AnimationController$AnimationState, startTime)},
	{"isForward", "Z", nullptr, $PRIVATE, $field(AnimationController$AnimationState, isForward)},
	{"isForwardAndReverse", "Z", nullptr, $PRIVATE, $field(AnimationController$AnimationState, isForwardAndReverse)},
	{"progress", "F", nullptr, $PRIVATE, $field(AnimationController$AnimationState, progress)},
	{}
};

$MethodInfo _AnimationController$AnimationState_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/windows/TMSchema$State;JZ)V", nullptr, 0, $method(static_cast<void(AnimationController$AnimationState::*)($TMSchema$State*,int64_t,bool)>(&AnimationController$AnimationState::init$))},
	{"isDone", "()Z", nullptr, 0},
	{"paintSkin", "(Lcom/sun/java/swing/plaf/windows/XPStyle$Skin;Ljava/awt/Graphics;IIIILcom/sun/java/swing/plaf/windows/TMSchema$State;)V", nullptr, 0},
	{"updateProgress", "()V", nullptr, $PRIVATE, $method(static_cast<void(AnimationController$AnimationState::*)()>(&AnimationController$AnimationState::updateProgress))},
	{}
};

$InnerClassInfo _AnimationController$AnimationState_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.AnimationController$AnimationState", "com.sun.java.swing.plaf.windows.AnimationController", "AnimationState", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _AnimationController$AnimationState_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.AnimationController$AnimationState",
	"java.lang.Object",
	nullptr,
	_AnimationController$AnimationState_FieldInfo_,
	_AnimationController$AnimationState_MethodInfo_,
	nullptr,
	nullptr,
	_AnimationController$AnimationState_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.AnimationController"
};

$Object* allocate$AnimationController$AnimationState($Class* clazz) {
	return $of($alloc(AnimationController$AnimationState));
}

bool AnimationController$AnimationState::$assertionsDisabled = false;

void AnimationController$AnimationState::init$($TMSchema$State* startState, int64_t milliseconds, bool isForwardAndReverse) {
	this->isForward = true;
	if (!AnimationController$AnimationState::$assertionsDisabled && !(startState != nullptr && milliseconds > 0)) {
		$throwNew($AssertionError);
	}
	if (!AnimationController$AnimationState::$assertionsDisabled && !$SwingUtilities::isEventDispatchThread()) {
		$throwNew($AssertionError);
	}
	$set(this, startState, startState);
	this->duration = milliseconds * 0x000F4240;
	this->startTime = $System::nanoTime();
	this->isForwardAndReverse = isForwardAndReverse;
	this->progress = 0.0f;
}

void AnimationController$AnimationState::updateProgress() {
	if (!AnimationController$AnimationState::$assertionsDisabled && !$SwingUtilities::isEventDispatchThread()) {
		$throwNew($AssertionError);
	}
	if (isDone()) {
		return;
	}
	int64_t currentTime = $System::nanoTime();
	this->progress = ((float)(currentTime - this->startTime)) / this->duration;
	this->progress = $Math::max(this->progress, (float)0);
	if (this->progress >= 1) {
		this->progress = (float)1;
		if (this->isForwardAndReverse) {
			this->startTime = currentTime;
			this->progress = (float)0;
			this->isForward = !this->isForward;
		}
	}
}

void AnimationController$AnimationState::paintSkin($XPStyle$Skin* skin, $Graphics* _g, int32_t dx, int32_t dy, int32_t dw, int32_t dh, $TMSchema$State* state) {
	$useLocalCurrentObjectStackCache();
	if (!AnimationController$AnimationState::$assertionsDisabled && !$SwingUtilities::isEventDispatchThread()) {
		$throwNew($AssertionError);
	}
	updateProgress();
	if (!isDone()) {
		$var($Graphics2D, g, $cast($Graphics2D, $nc(_g)->create()));
		if ($nc(skin)->haveToSwitchStates()) {
			skin->paintSkinRaw(g, dx, dy, dw, dh, state);
			$init($AlphaComposite);
			$nc(g)->setComposite($($nc($AlphaComposite::SrcOver)->derive(1 - this->progress)));
			skin->paintSkinRaw(g, dx, dy, dw, dh, this->startState);
		} else {
			skin->paintSkinRaw(g, dx, dy, dw, dh, this->startState);
			float alpha = 0.0;
			if (this->isForward) {
				alpha = this->progress;
			} else {
				alpha = 1 - this->progress;
			}
			$init($AlphaComposite);
			$nc(g)->setComposite($($nc($AlphaComposite::SrcOver)->derive(alpha)));
			skin->paintSkinRaw(g, dx, dy, dw, dh, state);
		}
		$nc(g)->dispose();
	} else {
		$nc(skin)->paintSkinRaw(_g, dx, dy, dw, dh, state);
		skin->switchStates(false);
	}
}

bool AnimationController$AnimationState::isDone() {
	if (!AnimationController$AnimationState::$assertionsDisabled && !$SwingUtilities::isEventDispatchThread()) {
		$throwNew($AssertionError);
	}
	return this->progress >= 1;
}

void clinit$AnimationController$AnimationState($Class* class$) {
	$load($AnimationController);
	AnimationController$AnimationState::$assertionsDisabled = !$AnimationController::class$->desiredAssertionStatus();
}

AnimationController$AnimationState::AnimationController$AnimationState() {
}

$Class* AnimationController$AnimationState::load$($String* name, bool initialize) {
	$loadClass(AnimationController$AnimationState, name, initialize, &_AnimationController$AnimationState_ClassInfo_, clinit$AnimationController$AnimationState, allocate$AnimationController$AnimationState);
	return class$;
}

$Class* AnimationController$AnimationState::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com