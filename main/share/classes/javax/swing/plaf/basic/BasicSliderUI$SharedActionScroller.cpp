#include <javax/swing/plaf/basic/BasicSliderUI$SharedActionScroller.h>

#include <java/awt/event/ActionEvent.h>
#include <java/util/EventObject.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/JSlider.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/basic/BasicSliderUI$Actions.h>
#include <javax/swing/plaf/basic/BasicSliderUI.h>
#include <jcpp.h>

#undef SHARED_ACTION

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $AbstractAction = ::javax::swing::AbstractAction;
using $JSlider = ::javax::swing::JSlider;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $SliderUI = ::javax::swing::plaf::SliderUI;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $BasicSliderUI = ::javax::swing::plaf::basic::BasicSliderUI;
using $BasicSliderUI$Actions = ::javax::swing::plaf::basic::BasicSliderUI$Actions;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicSliderUI$SharedActionScroller_FieldInfo_[] = {
	{"dir", "I", nullptr, 0, $field(BasicSliderUI$SharedActionScroller, dir)},
	{"block", "Z", nullptr, 0, $field(BasicSliderUI$SharedActionScroller, block)},
	{}
};

$MethodInfo _BasicSliderUI$SharedActionScroller_MethodInfo_[] = {
	{"<init>", "(IZ)V", nullptr, $PUBLIC, $method(static_cast<void(BasicSliderUI$SharedActionScroller::*)(int32_t,bool)>(&BasicSliderUI$SharedActionScroller::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicSliderUI$SharedActionScroller_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicSliderUI$SharedActionScroller", "javax.swing.plaf.basic.BasicSliderUI", "SharedActionScroller", $STATIC},
	{}
};

$ClassInfo _BasicSliderUI$SharedActionScroller_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicSliderUI$SharedActionScroller",
	"javax.swing.AbstractAction",
	nullptr,
	_BasicSliderUI$SharedActionScroller_FieldInfo_,
	_BasicSliderUI$SharedActionScroller_MethodInfo_,
	nullptr,
	nullptr,
	_BasicSliderUI$SharedActionScroller_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicSliderUI"
};

$Object* allocate$BasicSliderUI$SharedActionScroller($Class* clazz) {
	return $of($alloc(BasicSliderUI$SharedActionScroller));
}

void BasicSliderUI$SharedActionScroller::init$(int32_t dir, bool block) {
	$AbstractAction::init$();
	this->dir = dir;
	this->block = block;
}

void BasicSliderUI$SharedActionScroller::actionPerformed($ActionEvent* evt) {
	$useLocalCurrentObjectStackCache();
	$var($JSlider, slider, $cast($JSlider, $nc(evt)->getSource()));
	$load($BasicSliderUI);
	$var($BasicSliderUI, ui, $cast($BasicSliderUI, $BasicLookAndFeel::getUIOfType($($nc(slider)->getUI()), $BasicSliderUI::class$)));
	if (ui == nullptr) {
		return;
	}
	$init($BasicSliderUI);
	$nc($BasicSliderUI::SHARED_ACTION)->scroll(slider, ui, this->dir, this->block);
}

BasicSliderUI$SharedActionScroller::BasicSliderUI$SharedActionScroller() {
}

$Class* BasicSliderUI$SharedActionScroller::load$($String* name, bool initialize) {
	$loadClass(BasicSliderUI$SharedActionScroller, name, initialize, &_BasicSliderUI$SharedActionScroller_ClassInfo_, allocate$BasicSliderUI$SharedActionScroller);
	return class$;
}

$Class* BasicSliderUI$SharedActionScroller::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax