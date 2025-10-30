#include <javax/swing/text/DefaultEditorKit$ReadOnlyAction.h>

#include <java/awt/event/ActionEvent.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/TextAction.h>
#include <jcpp.h>

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

$MethodInfo _DefaultEditorKit$ReadOnlyAction_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(DefaultEditorKit$ReadOnlyAction::*)()>(&DefaultEditorKit$ReadOnlyAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultEditorKit$ReadOnlyAction_InnerClassesInfo_[] = {
	{"javax.swing.text.DefaultEditorKit$ReadOnlyAction", "javax.swing.text.DefaultEditorKit", "ReadOnlyAction", $STATIC},
	{}
};

$ClassInfo _DefaultEditorKit$ReadOnlyAction_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.DefaultEditorKit$ReadOnlyAction",
	"javax.swing.text.TextAction",
	nullptr,
	nullptr,
	_DefaultEditorKit$ReadOnlyAction_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultEditorKit$ReadOnlyAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.DefaultEditorKit"
};

$Object* allocate$DefaultEditorKit$ReadOnlyAction($Class* clazz) {
	return $of($alloc(DefaultEditorKit$ReadOnlyAction));
}

void DefaultEditorKit$ReadOnlyAction::init$() {
	$TextAction::init$("set-read-only"_s);
}

void DefaultEditorKit$ReadOnlyAction::actionPerformed($ActionEvent* e) {
	$var($JTextComponent, target, getTextComponent(e));
	if (target != nullptr) {
		target->setEditable(false);
	}
}

DefaultEditorKit$ReadOnlyAction::DefaultEditorKit$ReadOnlyAction() {
}

$Class* DefaultEditorKit$ReadOnlyAction::load$($String* name, bool initialize) {
	$loadClass(DefaultEditorKit$ReadOnlyAction, name, initialize, &_DefaultEditorKit$ReadOnlyAction_ClassInfo_, allocate$DefaultEditorKit$ReadOnlyAction);
	return class$;
}

$Class* DefaultEditorKit$ReadOnlyAction::class$ = nullptr;

		} // text
	} // swing
} // javax