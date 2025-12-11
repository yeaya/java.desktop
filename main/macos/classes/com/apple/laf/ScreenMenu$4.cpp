#include <com/apple/laf/ScreenMenu$4.h>

#include <com/apple/laf/ScreenMenu.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/JMenu.h>
#include <sun/lwawt/LWToolkit.h>
#include <jcpp.h>

#undef MOUSE_ENTERED
#undef MOUSE_EXITED

using $ScreenMenu = ::com::apple::laf::ScreenMenu;
using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $Rectangle = ::java::awt::Rectangle;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $InputEvent = ::java::awt::event::InputEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JMenu = ::javax::swing::JMenu;
using $LWToolkit = ::sun::lwawt::LWToolkit;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _ScreenMenu$4_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/ScreenMenu;", nullptr, $FINAL | $SYNTHETIC, $field(ScreenMenu$4, this$0)},
	{"val$kind", "I", nullptr, $FINAL | $SYNTHETIC, $field(ScreenMenu$4, val$kind)},
	{"val$modifiers", "I", nullptr, $FINAL | $SYNTHETIC, $field(ScreenMenu$4, val$modifiers)},
	{"val$when", "J", nullptr, $FINAL | $SYNTHETIC, $field(ScreenMenu$4, val$when)},
	{"val$y", "I", nullptr, $FINAL | $SYNTHETIC, $field(ScreenMenu$4, val$y)},
	{"val$x", "I", nullptr, $FINAL | $SYNTHETIC, $field(ScreenMenu$4, val$x)},
	{}
};

$MethodInfo _ScreenMenu$4_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/ScreenMenu;IIJII)V", "()V", 0, $method(static_cast<void(ScreenMenu$4::*)($ScreenMenu*,int32_t,int32_t,int64_t,int32_t,int32_t)>(&ScreenMenu$4::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ScreenMenu$4_EnclosingMethodInfo_ = {
	"com.apple.laf.ScreenMenu",
	"handleMouseEvent",
	"(IIIIJ)V"
};

$InnerClassInfo _ScreenMenu$4_InnerClassesInfo_[] = {
	{"com.apple.laf.ScreenMenu$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ScreenMenu$4_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.ScreenMenu$4",
	"java.lang.Object",
	"java.lang.Runnable",
	_ScreenMenu$4_FieldInfo_,
	_ScreenMenu$4_MethodInfo_,
	nullptr,
	&_ScreenMenu$4_EnclosingMethodInfo_,
	_ScreenMenu$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.ScreenMenu"
};

$Object* allocate$ScreenMenu$4($Class* clazz) {
	return $of($alloc(ScreenMenu$4));
}

void ScreenMenu$4::init$($ScreenMenu* this$0, int32_t val$x, int32_t val$y, int64_t val$when, int32_t val$modifiers, int32_t val$kind) {
	$set(this, this$0, this$0);
	this->val$x = val$x;
	this->val$y = val$y;
	this->val$when = val$when;
	this->val$modifiers = val$modifiers;
	this->val$kind = val$kind;
}

void ScreenMenu$4::run() {
	$useLocalCurrentObjectStackCache();
	$var($Component, target, nullptr);
	$var($Rectangle, targetRect, nullptr);
	for (int32_t i = 0; i < $nc(this->this$0->fItemBounds)->length; ++i) {
		$var($Rectangle, testRect, $nc(this->this$0->fItemBounds)->get(i));
		if (testRect != nullptr) {
			if (testRect->contains(this->val$x, this->val$y)) {
				$assign(target, $nc(this->this$0->fInvoker)->getMenuComponent(i));
				$assign(targetRect, testRect);
				break;
			}
		}
	}
	if (target == nullptr && this->this$0->fLastMouseEventTarget == nullptr) {
		return;
	}
	if (target != this->this$0->fLastMouseEventTarget) {
		if (this->this$0->fLastMouseEventTarget != nullptr) {
			$LWToolkit::postEvent($$new($MouseEvent, this->this$0->fLastMouseEventTarget, $MouseEvent::MOUSE_EXITED, this->val$when, this->val$modifiers, this->val$x - $nc(this->this$0->fLastTargetRect)->x, this->val$y - $nc(this->this$0->fLastTargetRect)->y, 0, false));
		}
		if (target != nullptr) {
			$LWToolkit::postEvent($$new($MouseEvent, target, $MouseEvent::MOUSE_ENTERED, this->val$when, this->val$modifiers, this->val$x - $nc(targetRect)->x, this->val$y - targetRect->y, 0, false));
		}
		$set(this->this$0, fLastMouseEventTarget, target);
		$set(this->this$0, fLastTargetRect, targetRect);
	}
	if (target == nullptr) {
		return;
	}
	$LWToolkit::postEvent($$new($MouseEvent, target, this->val$kind, this->val$when, this->val$modifiers, this->val$x - $nc(targetRect)->x, this->val$y - targetRect->y, 0, false));
}

ScreenMenu$4::ScreenMenu$4() {
}

$Class* ScreenMenu$4::load$($String* name, bool initialize) {
	$loadClass(ScreenMenu$4, name, initialize, &_ScreenMenu$4_ClassInfo_, allocate$ScreenMenu$4);
	return class$;
}

$Class* ScreenMenu$4::class$ = nullptr;

		} // laf
	} // apple
} // com