#include <javax/swing/text/DefaultEditorKit$UnselectAction.h>

#include <java/awt/event/ActionEvent.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/TextAction.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $TextAction = ::javax::swing::text::TextAction;

namespace javax {
	namespace swing {
		namespace text {

$MethodInfo _DefaultEditorKit$UnselectAction_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(DefaultEditorKit$UnselectAction::*)()>(&DefaultEditorKit$UnselectAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultEditorKit$UnselectAction_InnerClassesInfo_[] = {
	{"javax.swing.text.DefaultEditorKit$UnselectAction", "javax.swing.text.DefaultEditorKit", "UnselectAction", $STATIC},
	{}
};

$ClassInfo _DefaultEditorKit$UnselectAction_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.DefaultEditorKit$UnselectAction",
	"javax.swing.text.TextAction",
	nullptr,
	nullptr,
	_DefaultEditorKit$UnselectAction_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultEditorKit$UnselectAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.DefaultEditorKit"
};

$Object* allocate$DefaultEditorKit$UnselectAction($Class* clazz) {
	return $of($alloc(DefaultEditorKit$UnselectAction));
}

void DefaultEditorKit$UnselectAction::init$() {
	$TextAction::init$("unselect"_s);
}

void DefaultEditorKit$UnselectAction::actionPerformed($ActionEvent* e) {
	$var($JTextComponent, target, getTextComponent(e));
	if (target != nullptr) {
		target->setCaretPosition(target->getCaretPosition());
	}
}

DefaultEditorKit$UnselectAction::DefaultEditorKit$UnselectAction() {
}

$Class* DefaultEditorKit$UnselectAction::load$($String* name, bool initialize) {
	$loadClass(DefaultEditorKit$UnselectAction, name, initialize, &_DefaultEditorKit$UnselectAction_ClassInfo_, allocate$DefaultEditorKit$UnselectAction);
	return class$;
}

$Class* DefaultEditorKit$UnselectAction::class$ = nullptr;

		} // text
	} // swing
} // javax