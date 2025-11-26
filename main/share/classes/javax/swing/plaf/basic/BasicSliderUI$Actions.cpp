#include <javax/swing/plaf/basic/BasicSliderUI$Actions.h>

#include <java/awt/event/ActionEvent.h>
#include <java/util/EventObject.h>
#include <javax/swing/JSlider.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/basic/BasicSliderUI.h>
#include <sun/swing/UIAction.h>
#include <jcpp.h>

#undef MAX_SCROLL_INCREMENT
#undef MIN_SCROLL_INCREMENT
#undef NEGATIVE_BLOCK_INCREMENT
#undef NEGATIVE_UNIT_INCREMENT
#undef POSITIVE_BLOCK_INCREMENT
#undef POSITIVE_UNIT_INCREMENT

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $JSlider = ::javax::swing::JSlider;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $SliderUI = ::javax::swing::plaf::SliderUI;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $BasicSliderUI = ::javax::swing::plaf::basic::BasicSliderUI;
using $UIAction = ::sun::swing::UIAction;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicSliderUI$Actions_FieldInfo_[] = {
	{"POSITIVE_UNIT_INCREMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BasicSliderUI$Actions, POSITIVE_UNIT_INCREMENT)},
	{"POSITIVE_BLOCK_INCREMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BasicSliderUI$Actions, POSITIVE_BLOCK_INCREMENT)},
	{"NEGATIVE_UNIT_INCREMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BasicSliderUI$Actions, NEGATIVE_UNIT_INCREMENT)},
	{"NEGATIVE_BLOCK_INCREMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BasicSliderUI$Actions, NEGATIVE_BLOCK_INCREMENT)},
	{"MIN_SCROLL_INCREMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BasicSliderUI$Actions, MIN_SCROLL_INCREMENT)},
	{"MAX_SCROLL_INCREMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BasicSliderUI$Actions, MAX_SCROLL_INCREMENT)},
	{}
};

$MethodInfo _BasicSliderUI$Actions_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(BasicSliderUI$Actions::*)()>(&BasicSliderUI$Actions::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicSliderUI$Actions::*)($String*)>(&BasicSliderUI$Actions::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"scroll", "(Ljavax/swing/JSlider;Ljavax/swing/plaf/basic/BasicSliderUI;IZ)V", nullptr, $PRIVATE, $method(static_cast<void(BasicSliderUI$Actions::*)($JSlider*,$BasicSliderUI*,int32_t,bool)>(&BasicSliderUI$Actions::scroll))},
	{}
};

$InnerClassInfo _BasicSliderUI$Actions_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicSliderUI$Actions", "javax.swing.plaf.basic.BasicSliderUI", "Actions", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _BasicSliderUI$Actions_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicSliderUI$Actions",
	"sun.swing.UIAction",
	nullptr,
	_BasicSliderUI$Actions_FieldInfo_,
	_BasicSliderUI$Actions_MethodInfo_,
	nullptr,
	nullptr,
	_BasicSliderUI$Actions_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicSliderUI"
};

$Object* allocate$BasicSliderUI$Actions($Class* clazz) {
	return $of($alloc(BasicSliderUI$Actions));
}

$String* BasicSliderUI$Actions::POSITIVE_UNIT_INCREMENT = nullptr;
$String* BasicSliderUI$Actions::POSITIVE_BLOCK_INCREMENT = nullptr;
$String* BasicSliderUI$Actions::NEGATIVE_UNIT_INCREMENT = nullptr;
$String* BasicSliderUI$Actions::NEGATIVE_BLOCK_INCREMENT = nullptr;
$String* BasicSliderUI$Actions::MIN_SCROLL_INCREMENT = nullptr;
$String* BasicSliderUI$Actions::MAX_SCROLL_INCREMENT = nullptr;

void BasicSliderUI$Actions::init$() {
	$UIAction::init$(nullptr);
}

void BasicSliderUI$Actions::init$($String* name) {
	$UIAction::init$(name);
}

void BasicSliderUI$Actions::actionPerformed($ActionEvent* evt) {
	$useLocalCurrentObjectStackCache();
	$var($JSlider, slider, $cast($JSlider, $nc(evt)->getSource()));
	$load($BasicSliderUI);
	$var($BasicSliderUI, ui, $cast($BasicSliderUI, $BasicLookAndFeel::getUIOfType($($nc(slider)->getUI()), $BasicSliderUI::class$)));
	$var($String, name, getName());
	if (ui == nullptr) {
		return;
	}
	if (BasicSliderUI$Actions::POSITIVE_UNIT_INCREMENT == name) {
		scroll(slider, ui, 1, false);
	} else if (BasicSliderUI$Actions::NEGATIVE_UNIT_INCREMENT == name) {
		scroll(slider, ui, -1, false);
	} else if (BasicSliderUI$Actions::POSITIVE_BLOCK_INCREMENT == name) {
		scroll(slider, ui, 1, true);
	} else if (BasicSliderUI$Actions::NEGATIVE_BLOCK_INCREMENT == name) {
		scroll(slider, ui, -1, true);
	} else if (BasicSliderUI$Actions::MIN_SCROLL_INCREMENT == name) {
		scroll(slider, ui, -2, false);
	} else if (BasicSliderUI$Actions::MAX_SCROLL_INCREMENT == name) {
		scroll(slider, ui, 2, false);
	}
}

void BasicSliderUI$Actions::scroll($JSlider* slider, $BasicSliderUI* ui, int32_t direction, bool isBlock) {
	bool invert = $nc(slider)->getInverted();
	if (direction == -1 || direction == 1) {
		if (invert) {
			direction = (direction == 1) ? -1 : 1;
		}
		if (isBlock) {
			$nc(ui)->scrollByBlock(direction);
		} else {
			$nc(ui)->scrollByUnit(direction);
		}
	} else {
		if (invert) {
			direction = (direction == -2) ? 2 : -2;
		}
		slider->setValue((direction == -2) ? slider->getMinimum() : slider->getMaximum());
	}
}

BasicSliderUI$Actions::BasicSliderUI$Actions() {
}

void clinit$BasicSliderUI$Actions($Class* class$) {
	$assignStatic(BasicSliderUI$Actions::POSITIVE_UNIT_INCREMENT, "positiveUnitIncrement"_s);
	$assignStatic(BasicSliderUI$Actions::POSITIVE_BLOCK_INCREMENT, "positiveBlockIncrement"_s);
	$assignStatic(BasicSliderUI$Actions::NEGATIVE_UNIT_INCREMENT, "negativeUnitIncrement"_s);
	$assignStatic(BasicSliderUI$Actions::NEGATIVE_BLOCK_INCREMENT, "negativeBlockIncrement"_s);
	$assignStatic(BasicSliderUI$Actions::MIN_SCROLL_INCREMENT, "minScroll"_s);
	$assignStatic(BasicSliderUI$Actions::MAX_SCROLL_INCREMENT, "maxScroll"_s);
}

$Class* BasicSliderUI$Actions::load$($String* name, bool initialize) {
	$loadClass(BasicSliderUI$Actions, name, initialize, &_BasicSliderUI$Actions_ClassInfo_, clinit$BasicSliderUI$Actions, allocate$BasicSliderUI$Actions);
	return class$;
}

$Class* BasicSliderUI$Actions::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax