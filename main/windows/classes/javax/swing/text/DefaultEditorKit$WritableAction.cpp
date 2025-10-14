#include <javax/swing/text/DefaultEditorKit$WritableAction.h>

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

$MethodInfo _DefaultEditorKit$WritableAction_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(DefaultEditorKit$WritableAction::*)()>(&DefaultEditorKit$WritableAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultEditorKit$WritableAction_InnerClassesInfo_[] = {
	{"javax.swing.text.DefaultEditorKit$WritableAction", "javax.swing.text.DefaultEditorKit", "WritableAction", $STATIC},
	{}
};

$ClassInfo _DefaultEditorKit$WritableAction_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.DefaultEditorKit$WritableAction",
	"javax.swing.text.TextAction",
	nullptr,
	nullptr,
	_DefaultEditorKit$WritableAction_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultEditorKit$WritableAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.DefaultEditorKit"
};

$Object* allocate$DefaultEditorKit$WritableAction($Class* clazz) {
	return $of($alloc(DefaultEditorKit$WritableAction));
}

void DefaultEditorKit$WritableAction::init$() {
	$TextAction::init$("set-writable"_s);
}

void DefaultEditorKit$WritableAction::actionPerformed($ActionEvent* e) {
	$var($JTextComponent, target, getTextComponent(e));
	if (target != nullptr) {
		target->setEditable(true);
	}
}

DefaultEditorKit$WritableAction::DefaultEditorKit$WritableAction() {
}

$Class* DefaultEditorKit$WritableAction::load$($String* name, bool initialize) {
	$loadClass(DefaultEditorKit$WritableAction, name, initialize, &_DefaultEditorKit$WritableAction_ClassInfo_, allocate$DefaultEditorKit$WritableAction);
	return class$;
}

$Class* DefaultEditorKit$WritableAction::class$ = nullptr;

		} // text
	} // swing
} // javax