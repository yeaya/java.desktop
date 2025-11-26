#include <javax/swing/text/DefaultEditorKit$BeginAction.h>

#include <java/awt/event/ActionEvent.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/TextAction.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultEditorKit = ::javax::swing::text::DefaultEditorKit;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $TextAction = ::javax::swing::text::TextAction;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _DefaultEditorKit$BeginAction_FieldInfo_[] = {
	{"select", "Z", nullptr, $PRIVATE, $field(DefaultEditorKit$BeginAction, select)},
	{}
};

$MethodInfo _DefaultEditorKit$BeginAction_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Z)V", nullptr, 0, $method(static_cast<void(DefaultEditorKit$BeginAction::*)($String*,bool)>(&DefaultEditorKit$BeginAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultEditorKit$BeginAction_InnerClassesInfo_[] = {
	{"javax.swing.text.DefaultEditorKit$BeginAction", "javax.swing.text.DefaultEditorKit", "BeginAction", $STATIC},
	{}
};

$ClassInfo _DefaultEditorKit$BeginAction_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.DefaultEditorKit$BeginAction",
	"javax.swing.text.TextAction",
	nullptr,
	_DefaultEditorKit$BeginAction_FieldInfo_,
	_DefaultEditorKit$BeginAction_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultEditorKit$BeginAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.DefaultEditorKit"
};

$Object* allocate$DefaultEditorKit$BeginAction($Class* clazz) {
	return $of($alloc(DefaultEditorKit$BeginAction));
}

void DefaultEditorKit$BeginAction::init$($String* nm, bool select) {
	$TextAction::init$(nm);
	this->select = select;
}

void DefaultEditorKit$BeginAction::actionPerformed($ActionEvent* e) {
	$var($JTextComponent, target, getTextComponent(e));
	if (target != nullptr) {
		if (this->select) {
			target->moveCaretPosition(0);
		} else {
			target->setCaretPosition(0);
		}
	}
}

DefaultEditorKit$BeginAction::DefaultEditorKit$BeginAction() {
}

$Class* DefaultEditorKit$BeginAction::load$($String* name, bool initialize) {
	$loadClass(DefaultEditorKit$BeginAction, name, initialize, &_DefaultEditorKit$BeginAction_ClassInfo_, allocate$DefaultEditorKit$BeginAction);
	return class$;
}

$Class* DefaultEditorKit$BeginAction::class$ = nullptr;

		} // text
	} // swing
} // javax