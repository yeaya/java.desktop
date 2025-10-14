#include <javax/swing/plaf/basic/BasicScrollBarUI$ScrollListener.h>

#include <java/awt/Rectangle.h>
#include <java/awt/event/ActionEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventObject.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/Timer.h>
#include <javax/swing/plaf/basic/BasicScrollBarUI$TrackListener.h>
#include <javax/swing/plaf/basic/BasicScrollBarUI.h>
#include <jcpp.h>

#undef VERTICAL

using $Rectangle = ::java::awt::Rectangle;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $JScrollBar = ::javax::swing::JScrollBar;
using $Timer = ::javax::swing::Timer;
using $BasicScrollBarUI = ::javax::swing::plaf::basic::BasicScrollBarUI;
using $BasicScrollBarUI$TrackListener = ::javax::swing::plaf::basic::BasicScrollBarUI$TrackListener;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicScrollBarUI$ScrollListener_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicScrollBarUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicScrollBarUI$ScrollListener, this$0)},
	{"direction", "I", nullptr, 0, $field(BasicScrollBarUI$ScrollListener, direction)},
	{"useBlockIncrement", "Z", nullptr, 0, $field(BasicScrollBarUI$ScrollListener, useBlockIncrement)},
	{}
};

$MethodInfo _BasicScrollBarUI$ScrollListener_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicScrollBarUI;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicScrollBarUI$ScrollListener::*)($BasicScrollBarUI*)>(&BasicScrollBarUI$ScrollListener::init$))},
	{"<init>", "(Ljavax/swing/plaf/basic/BasicScrollBarUI;IZ)V", nullptr, $PUBLIC, $method(static_cast<void(BasicScrollBarUI$ScrollListener::*)($BasicScrollBarUI*,int32_t,bool)>(&BasicScrollBarUI$ScrollListener::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"setDirection", "(I)V", nullptr, $PUBLIC},
	{"setScrollByBlock", "(Z)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicScrollBarUI$ScrollListener_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicScrollBarUI$ScrollListener", "javax.swing.plaf.basic.BasicScrollBarUI", "ScrollListener", $PROTECTED},
	{}
};

$ClassInfo _BasicScrollBarUI$ScrollListener_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicScrollBarUI$ScrollListener",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	_BasicScrollBarUI$ScrollListener_FieldInfo_,
	_BasicScrollBarUI$ScrollListener_MethodInfo_,
	nullptr,
	nullptr,
	_BasicScrollBarUI$ScrollListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicScrollBarUI"
};

$Object* allocate$BasicScrollBarUI$ScrollListener($Class* clazz) {
	return $of($alloc(BasicScrollBarUI$ScrollListener));
}

void BasicScrollBarUI$ScrollListener::init$($BasicScrollBarUI* this$0) {
	$set(this, this$0, this$0);
	this->direction = +1;
	this->direction = +1;
	this->useBlockIncrement = false;
}

void BasicScrollBarUI$ScrollListener::init$($BasicScrollBarUI* this$0, int32_t dir, bool block) {
	$set(this, this$0, this$0);
	this->direction = +1;
	this->direction = dir;
	this->useBlockIncrement = block;
}

void BasicScrollBarUI$ScrollListener::setDirection(int32_t direction) {
	this->direction = direction;
}

void BasicScrollBarUI$ScrollListener::setScrollByBlock(bool block) {
	this->useBlockIncrement = block;
}

void BasicScrollBarUI$ScrollListener::actionPerformed($ActionEvent* e) {
	if (this->useBlockIncrement) {
		this->this$0->scrollByBlock(this->direction);
		if ($nc(this->this$0->scrollbar)->getOrientation() == $JScrollBar::VERTICAL) {
			if (this->direction > 0) {
				int32_t var$0 = $nc($(this->this$0->getThumbBounds()))->y;
				if (var$0 + $nc($(this->this$0->getThumbBounds()))->height >= $nc(this->this$0->trackListener)->currentMouseY) {
					$nc(($cast($Timer, $($nc(e)->getSource()))))->stop();
				}
			} else if ($nc($(this->this$0->getThumbBounds()))->y <= $nc(this->this$0->trackListener)->currentMouseY) {
				$nc(($cast($Timer, $($nc(e)->getSource()))))->stop();
			}
		} else {
			bool var$2 = (this->direction > 0 && !this->this$0->isMouseAfterThumb());
			if (var$2 || (this->direction < 0 && !this->this$0->isMouseBeforeThumb())) {
				$nc(($cast($Timer, $($nc(e)->getSource()))))->stop();
			}
		}
	} else {
		this->this$0->scrollByUnit(this->direction);
	}
	bool var$3 = this->direction > 0;
	if (var$3) {
		int32_t var$5 = $nc(this->this$0->scrollbar)->getValue();
		int32_t var$4 = var$5 + $nc(this->this$0->scrollbar)->getVisibleAmount();
		var$3 = var$4 >= $nc(this->this$0->scrollbar)->getMaximum();
	}
	if (var$3) {
		$nc(($cast($Timer, $($nc(e)->getSource()))))->stop();
	} else {
		bool var$8 = this->direction < 0;
		if (var$8) {
			int32_t var$9 = $nc(this->this$0->scrollbar)->getValue();
			var$8 = var$9 <= $nc(this->this$0->scrollbar)->getMinimum();
		}
		if (var$8) {
			$nc(($cast($Timer, $($nc(e)->getSource()))))->stop();
		}
	}
}

BasicScrollBarUI$ScrollListener::BasicScrollBarUI$ScrollListener() {
}

$Class* BasicScrollBarUI$ScrollListener::load$($String* name, bool initialize) {
	$loadClass(BasicScrollBarUI$ScrollListener, name, initialize, &_BasicScrollBarUI$ScrollListener_ClassInfo_, allocate$BasicScrollBarUI$ScrollListener);
	return class$;
}

$Class* BasicScrollBarUI$ScrollListener::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax