#include <javax/swing/JToggleButton$ToggleButtonModel.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/EventQueue.h>
#include <java/awt/ItemSelectable.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/ItemEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/ButtonGroup.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/DefaultButtonModel.h>
#include <javax/swing/JToggleButton.h>
#include <jcpp.h>

#undef ACTION_PERFORMED
#undef DESELECTED
#undef ITEM_STATE_CHANGED
#undef PRESSED
#undef SELECTED

using $AWTEvent = ::java::awt::AWTEvent;
using $EventQueue = ::java::awt::EventQueue;
using $ItemSelectable = ::java::awt::ItemSelectable;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $InputEvent = ::java::awt::event::InputEvent;
using $ItemEvent = ::java::awt::event::ItemEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ButtonGroup = ::javax::swing::ButtonGroup;
using $ButtonModel = ::javax::swing::ButtonModel;
using $DefaultButtonModel = ::javax::swing::DefaultButtonModel;
using $JToggleButton = ::javax::swing::JToggleButton;

namespace javax {
	namespace swing {

$MethodInfo _JToggleButton$ToggleButtonModel_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JToggleButton$ToggleButtonModel::*)()>(&JToggleButton$ToggleButtonModel::init$))},
	{"isSelected", "()Z", nullptr, $PUBLIC},
	{"setPressed", "(Z)V", nullptr, $PUBLIC},
	{"setSelected", "(Z)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JToggleButton$ToggleButtonModel_InnerClassesInfo_[] = {
	{"javax.swing.JToggleButton$ToggleButtonModel", "javax.swing.JToggleButton", "ToggleButtonModel", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _JToggleButton$ToggleButtonModel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JToggleButton$ToggleButtonModel",
	"javax.swing.DefaultButtonModel",
	nullptr,
	nullptr,
	_JToggleButton$ToggleButtonModel_MethodInfo_,
	nullptr,
	nullptr,
	_JToggleButton$ToggleButtonModel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JToggleButton"
};

$Object* allocate$JToggleButton$ToggleButtonModel($Class* clazz) {
	return $of($alloc(JToggleButton$ToggleButtonModel));
}

void JToggleButton$ToggleButtonModel::init$() {
	$DefaultButtonModel::init$();
}

bool JToggleButton$ToggleButtonModel::isSelected() {
	return ((int32_t)(this->stateMask & (uint32_t)$DefaultButtonModel::SELECTED)) != 0;
}

void JToggleButton$ToggleButtonModel::setSelected(bool b) {
	$var($ButtonGroup, group, getGroup());
	if (group != nullptr) {
		group->setSelected(this, b);
		b = group->isSelected(this);
	}
	if (isSelected() == b) {
		return;
	}
	if (b) {
		this->stateMask |= $DefaultButtonModel::SELECTED;
	} else {
		this->stateMask &= (uint32_t)~$DefaultButtonModel::SELECTED;
	}
	fireStateChanged();
	fireItemStateChanged($$new($ItemEvent, this, $ItemEvent::ITEM_STATE_CHANGED, this, this->isSelected() ? $ItemEvent::SELECTED : $ItemEvent::DESELECTED));
}

void JToggleButton$ToggleButtonModel::setPressed(bool b) {
	bool var$0 = (isPressed() == b);
	if (var$0 || !isEnabled()) {
		return;
	}
	if (b == false && isArmed()) {
		setSelected(!this->isSelected());
	}
	if (b) {
		this->stateMask |= $DefaultButtonModel::PRESSED;
	} else {
		this->stateMask &= (uint32_t)~$DefaultButtonModel::PRESSED;
	}
	fireStateChanged();
	bool var$1 = !isPressed();
	if (var$1 && isArmed()) {
		int32_t modifiers = 0;
		$var($AWTEvent, currentEvent, $EventQueue::getCurrentEvent());
		if ($instanceOf($InputEvent, currentEvent)) {
			modifiers = $nc(($cast($InputEvent, currentEvent)))->getModifiers();
		} else if ($instanceOf($ActionEvent, currentEvent)) {
			modifiers = $nc(($cast($ActionEvent, currentEvent)))->getModifiers();
		}
		$var($String, var$2, getActionCommand());
		fireActionPerformed($$new($ActionEvent, this, $ActionEvent::ACTION_PERFORMED, var$2, $EventQueue::getMostRecentEventTime(), modifiers));
	}
}

JToggleButton$ToggleButtonModel::JToggleButton$ToggleButtonModel() {
}

$Class* JToggleButton$ToggleButtonModel::load$($String* name, bool initialize) {
	$loadClass(JToggleButton$ToggleButtonModel, name, initialize, &_JToggleButton$ToggleButtonModel_ClassInfo_, allocate$JToggleButton$ToggleButtonModel);
	return class$;
}

$Class* JToggleButton$ToggleButtonModel::class$ = nullptr;

	} // swing
} // javax