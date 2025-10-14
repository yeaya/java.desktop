#include <javax/swing/plaf/basic/BasicSliderUI$ScrollListener.h>

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
#include <javax/swing/Timer.h>
#include <javax/swing/plaf/basic/BasicSliderUI$TrackListener.h>
#include <javax/swing/plaf/basic/BasicSliderUI.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $Timer = ::javax::swing::Timer;
using $BasicSliderUI = ::javax::swing::plaf::basic::BasicSliderUI;
using $BasicSliderUI$TrackListener = ::javax::swing::plaf::basic::BasicSliderUI$TrackListener;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicSliderUI$ScrollListener_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicSliderUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicSliderUI$ScrollListener, this$0)},
	{"direction", "I", nullptr, 0, $field(BasicSliderUI$ScrollListener, direction)},
	{"useBlockIncrement", "Z", nullptr, 0, $field(BasicSliderUI$ScrollListener, useBlockIncrement)},
	{}
};

$MethodInfo _BasicSliderUI$ScrollListener_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicSliderUI;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicSliderUI$ScrollListener::*)($BasicSliderUI*)>(&BasicSliderUI$ScrollListener::init$))},
	{"<init>", "(Ljavax/swing/plaf/basic/BasicSliderUI;IZ)V", nullptr, $PUBLIC, $method(static_cast<void(BasicSliderUI$ScrollListener::*)($BasicSliderUI*,int32_t,bool)>(&BasicSliderUI$ScrollListener::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"setDirection", "(I)V", nullptr, $PUBLIC},
	{"setScrollByBlock", "(Z)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicSliderUI$ScrollListener_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicSliderUI$ScrollListener", "javax.swing.plaf.basic.BasicSliderUI", "ScrollListener", $PUBLIC},
	{}
};

$ClassInfo _BasicSliderUI$ScrollListener_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicSliderUI$ScrollListener",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	_BasicSliderUI$ScrollListener_FieldInfo_,
	_BasicSliderUI$ScrollListener_MethodInfo_,
	nullptr,
	nullptr,
	_BasicSliderUI$ScrollListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicSliderUI"
};

$Object* allocate$BasicSliderUI$ScrollListener($Class* clazz) {
	return $of($alloc(BasicSliderUI$ScrollListener));
}

void BasicSliderUI$ScrollListener::init$($BasicSliderUI* this$0) {
	$set(this, this$0, this$0);
	this->direction = 1;
	this->direction = 1;
	this->useBlockIncrement = true;
}

void BasicSliderUI$ScrollListener::init$($BasicSliderUI* this$0, int32_t dir, bool block) {
	$set(this, this$0, this$0);
	this->direction = 1;
	this->direction = dir;
	this->useBlockIncrement = block;
}

void BasicSliderUI$ScrollListener::setDirection(int32_t direction) {
	this->direction = direction;
}

void BasicSliderUI$ScrollListener::setScrollByBlock(bool block) {
	this->useBlockIncrement = block;
}

void BasicSliderUI$ScrollListener::actionPerformed($ActionEvent* e) {
	if (this->useBlockIncrement) {
		this->this$0->scrollByBlock(this->direction);
	} else {
		this->this$0->scrollByUnit(this->direction);
	}
	if (!$nc(this->this$0->trackListener)->shouldScroll(this->direction)) {
		$nc(($cast($Timer, $($nc(e)->getSource()))))->stop();
	}
}

BasicSliderUI$ScrollListener::BasicSliderUI$ScrollListener() {
}

$Class* BasicSliderUI$ScrollListener::load$($String* name, bool initialize) {
	$loadClass(BasicSliderUI$ScrollListener, name, initialize, &_BasicSliderUI$ScrollListener_ClassInfo_, allocate$BasicSliderUI$ScrollListener);
	return class$;
}

$Class* BasicSliderUI$ScrollListener::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax