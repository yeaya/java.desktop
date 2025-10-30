#include <javax/swing/text/html/HTMLEditorKit$BeginAction.h>

#include <java/awt/event/ActionEvent.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/TextAction.h>
#include <javax/swing/text/html/HTMLEditorKit.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $TextAction = ::javax::swing::text::TextAction;
using $HTMLEditorKit = ::javax::swing::text::html::HTMLEditorKit;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _HTMLEditorKit$BeginAction_FieldInfo_[] = {
	{"select", "Z", nullptr, $PRIVATE, $field(HTMLEditorKit$BeginAction, select)},
	{}
};

$MethodInfo _HTMLEditorKit$BeginAction_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Z)V", nullptr, 0, $method(static_cast<void(HTMLEditorKit$BeginAction::*)($String*,bool)>(&HTMLEditorKit$BeginAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _HTMLEditorKit$BeginAction_InnerClassesInfo_[] = {
	{"javax.swing.text.html.HTMLEditorKit$BeginAction", "javax.swing.text.html.HTMLEditorKit", "BeginAction", $STATIC},
	{}
};

$ClassInfo _HTMLEditorKit$BeginAction_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.HTMLEditorKit$BeginAction",
	"javax.swing.text.TextAction",
	nullptr,
	_HTMLEditorKit$BeginAction_FieldInfo_,
	_HTMLEditorKit$BeginAction_MethodInfo_,
	nullptr,
	nullptr,
	_HTMLEditorKit$BeginAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.HTMLEditorKit"
};

$Object* allocate$HTMLEditorKit$BeginAction($Class* clazz) {
	return $of($alloc(HTMLEditorKit$BeginAction));
}

void HTMLEditorKit$BeginAction::init$($String* nm, bool select) {
	$TextAction::init$(nm);
	this->select = select;
}

void HTMLEditorKit$BeginAction::actionPerformed($ActionEvent* e) {
	$var($JTextComponent, target, getTextComponent(e));
	int32_t bodyStart = $HTMLEditorKit::getBodyElementStart(target);
	if (target != nullptr) {
		if (this->select) {
			target->moveCaretPosition(bodyStart);
		} else {
			target->setCaretPosition(bodyStart);
		}
	}
}

HTMLEditorKit$BeginAction::HTMLEditorKit$BeginAction() {
}

$Class* HTMLEditorKit$BeginAction::load$($String* name, bool initialize) {
	$loadClass(HTMLEditorKit$BeginAction, name, initialize, &_HTMLEditorKit$BeginAction_ClassInfo_, allocate$HTMLEditorKit$BeginAction);
	return class$;
}

$Class* HTMLEditorKit$BeginAction::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax