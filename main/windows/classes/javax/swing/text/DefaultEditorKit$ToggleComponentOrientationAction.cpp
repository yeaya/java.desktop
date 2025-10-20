#include <javax/swing/text/DefaultEditorKit$ToggleComponentOrientationAction.h>

#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/event/ActionEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/TextAction.h>
#include <jcpp.h>

#undef LEFT_TO_RIGHT
#undef RIGHT_TO_LEFT

using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultEditorKit = ::javax::swing::text::DefaultEditorKit;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $TextAction = ::javax::swing::text::TextAction;

namespace javax {
	namespace swing {
		namespace text {

$MethodInfo _DefaultEditorKit$ToggleComponentOrientationAction_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(DefaultEditorKit$ToggleComponentOrientationAction::*)()>(&DefaultEditorKit$ToggleComponentOrientationAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultEditorKit$ToggleComponentOrientationAction_InnerClassesInfo_[] = {
	{"javax.swing.text.DefaultEditorKit$ToggleComponentOrientationAction", "javax.swing.text.DefaultEditorKit", "ToggleComponentOrientationAction", $STATIC},
	{}
};

$ClassInfo _DefaultEditorKit$ToggleComponentOrientationAction_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.DefaultEditorKit$ToggleComponentOrientationAction",
	"javax.swing.text.TextAction",
	nullptr,
	nullptr,
	_DefaultEditorKit$ToggleComponentOrientationAction_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultEditorKit$ToggleComponentOrientationAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.DefaultEditorKit"
};

$Object* allocate$DefaultEditorKit$ToggleComponentOrientationAction($Class* clazz) {
	return $of($alloc(DefaultEditorKit$ToggleComponentOrientationAction));
}

void DefaultEditorKit$ToggleComponentOrientationAction::init$() {
	$TextAction::init$("toggle-componentOrientation"_s);
}

void DefaultEditorKit$ToggleComponentOrientationAction::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JTextComponent, target, getTextComponent(e));
	if (target != nullptr) {
		$var($ComponentOrientation, last, target->getComponentOrientation());
		$var($ComponentOrientation, next, nullptr);
		$init($ComponentOrientation);
		if (last == $ComponentOrientation::RIGHT_TO_LEFT) {
			$assign(next, $ComponentOrientation::LEFT_TO_RIGHT);
		} else {
			$assign(next, $ComponentOrientation::RIGHT_TO_LEFT);
		}
		target->setComponentOrientation(next);
		target->repaint();
	}
}

DefaultEditorKit$ToggleComponentOrientationAction::DefaultEditorKit$ToggleComponentOrientationAction() {
}

$Class* DefaultEditorKit$ToggleComponentOrientationAction::load$($String* name, bool initialize) {
	$loadClass(DefaultEditorKit$ToggleComponentOrientationAction, name, initialize, &_DefaultEditorKit$ToggleComponentOrientationAction_ClassInfo_, allocate$DefaultEditorKit$ToggleComponentOrientationAction);
	return class$;
}

$Class* DefaultEditorKit$ToggleComponentOrientationAction::class$ = nullptr;

		} // text
	} // swing
} // javax