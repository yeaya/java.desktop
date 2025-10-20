#include <javax/swing/plaf/basic/BasicButtonListener$Actions.h>

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
#include <java/util/EventObject.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/plaf/basic/BasicButtonListener.h>
#include <sun/swing/UIAction.h>
#include <jcpp.h>

#undef PRESS
#undef RELEASE

using $Component = ::java::awt::Component;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $JComponent = ::javax::swing::JComponent;
using $BasicButtonListener = ::javax::swing::plaf::basic::BasicButtonListener;
using $UIAction = ::sun::swing::UIAction;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicButtonListener$Actions_FieldInfo_[] = {
	{"PRESS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicButtonListener$Actions, PRESS)},
	{"RELEASE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicButtonListener$Actions, RELEASE)},
	{}
};

$MethodInfo _BasicButtonListener$Actions_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(BasicButtonListener$Actions::*)($String*)>(&BasicButtonListener$Actions::init$))},
	{"accept", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicButtonListener$Actions_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicButtonListener$Actions", "javax.swing.plaf.basic.BasicButtonListener", "Actions", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _BasicButtonListener$Actions_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicButtonListener$Actions",
	"sun.swing.UIAction",
	nullptr,
	_BasicButtonListener$Actions_FieldInfo_,
	_BasicButtonListener$Actions_MethodInfo_,
	nullptr,
	nullptr,
	_BasicButtonListener$Actions_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicButtonListener"
};

$Object* allocate$BasicButtonListener$Actions($Class* clazz) {
	return $of($alloc(BasicButtonListener$Actions));
}

$String* BasicButtonListener$Actions::PRESS = nullptr;
$String* BasicButtonListener$Actions::RELEASE = nullptr;

void BasicButtonListener$Actions::init$($String* name) {
	$UIAction::init$(name);
}

void BasicButtonListener$Actions::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($AbstractButton, b, $cast($AbstractButton, $nc(e)->getSource()));
	$var($String, key, getName());
	if (key == BasicButtonListener$Actions::PRESS) {
		$var($ButtonModel, model, $nc(b)->getModel());
		$nc(model)->setArmed(true);
		model->setPressed(true);
		if (!b->hasFocus()) {
			b->requestFocus();
		}
	} else if (key == BasicButtonListener$Actions::RELEASE) {
		$var($ButtonModel, model, $nc(b)->getModel());
		$nc(model)->setPressed(false);
		model->setArmed(false);
	}
}

bool BasicButtonListener$Actions::accept(Object$* sender) {
	return !(($instanceOf($AbstractButton, sender)) && !$nc($($nc(($cast($AbstractButton, sender)))->getModel()))->isEnabled());
}

BasicButtonListener$Actions::BasicButtonListener$Actions() {
}

void clinit$BasicButtonListener$Actions($Class* class$) {
	$assignStatic(BasicButtonListener$Actions::PRESS, "pressed"_s);
	$assignStatic(BasicButtonListener$Actions::RELEASE, "released"_s);
}

$Class* BasicButtonListener$Actions::load$($String* name, bool initialize) {
	$loadClass(BasicButtonListener$Actions, name, initialize, &_BasicButtonListener$Actions_ClassInfo_, clinit$BasicButtonListener$Actions, allocate$BasicButtonListener$Actions);
	return class$;
}

$Class* BasicButtonListener$Actions::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax