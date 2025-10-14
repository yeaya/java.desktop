#include <javax/swing/plaf/basic/BasicSliderUI$ActionScroller.h>

#include <java/awt/Component.h>
#include <java/awt/event/ActionEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/JSlider.h>
#include <javax/swing/plaf/basic/BasicSliderUI$Actions.h>
#include <javax/swing/plaf/basic/BasicSliderUI.h>
#include <jcpp.h>

#undef SHARED_ACTION

using $Component = ::java::awt::Component;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $JSlider = ::javax::swing::JSlider;
using $BasicSliderUI = ::javax::swing::plaf::basic::BasicSliderUI;
using $BasicSliderUI$Actions = ::javax::swing::plaf::basic::BasicSliderUI$Actions;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicSliderUI$ActionScroller_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicSliderUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicSliderUI$ActionScroller, this$0)},
	{"dir", "I", nullptr, 0, $field(BasicSliderUI$ActionScroller, dir)},
	{"block", "Z", nullptr, 0, $field(BasicSliderUI$ActionScroller, block)},
	{"slider", "Ljavax/swing/JSlider;", nullptr, 0, $field(BasicSliderUI$ActionScroller, slider)},
	{}
};

$MethodInfo _BasicSliderUI$ActionScroller_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicSliderUI;Ljavax/swing/JSlider;IZ)V", nullptr, $PUBLIC, $method(static_cast<void(BasicSliderUI$ActionScroller::*)($BasicSliderUI*,$JSlider*,int32_t,bool)>(&BasicSliderUI$ActionScroller::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"isEnabled", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicSliderUI$ActionScroller_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicSliderUI$ActionScroller", "javax.swing.plaf.basic.BasicSliderUI", "ActionScroller", $PUBLIC},
	{}
};

$ClassInfo _BasicSliderUI$ActionScroller_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicSliderUI$ActionScroller",
	"javax.swing.AbstractAction",
	nullptr,
	_BasicSliderUI$ActionScroller_FieldInfo_,
	_BasicSliderUI$ActionScroller_MethodInfo_,
	nullptr,
	nullptr,
	_BasicSliderUI$ActionScroller_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicSliderUI"
};

$Object* allocate$BasicSliderUI$ActionScroller($Class* clazz) {
	return $of($alloc(BasicSliderUI$ActionScroller));
}

void BasicSliderUI$ActionScroller::init$($BasicSliderUI* this$0, $JSlider* slider, int32_t dir, bool block) {
	$set(this, this$0, this$0);
	$AbstractAction::init$();
	this->dir = dir;
	this->block = block;
	$set(this, slider, slider);
}

void BasicSliderUI$ActionScroller::actionPerformed($ActionEvent* e) {
	$init($BasicSliderUI);
	$nc($BasicSliderUI::SHARED_ACTION)->scroll(this->slider, this->this$0, this->dir, this->block);
}

bool BasicSliderUI$ActionScroller::isEnabled() {
	bool b = true;
	if (this->slider != nullptr) {
		b = $nc(this->slider)->isEnabled();
	}
	return b;
}

BasicSliderUI$ActionScroller::BasicSliderUI$ActionScroller() {
}

$Class* BasicSliderUI$ActionScroller::load$($String* name, bool initialize) {
	$loadClass(BasicSliderUI$ActionScroller, name, initialize, &_BasicSliderUI$ActionScroller_ClassInfo_, allocate$BasicSliderUI$ActionScroller);
	return class$;
}

$Class* BasicSliderUI$ActionScroller::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax