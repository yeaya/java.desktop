#include <javax/swing/text/DefaultEditorKit$PasteAction.h>

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

$MethodInfo _DefaultEditorKit$PasteAction_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultEditorKit$PasteAction::*)()>(&DefaultEditorKit$PasteAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultEditorKit$PasteAction_InnerClassesInfo_[] = {
	{"javax.swing.text.DefaultEditorKit$PasteAction", "javax.swing.text.DefaultEditorKit", "PasteAction", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _DefaultEditorKit$PasteAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.DefaultEditorKit$PasteAction",
	"javax.swing.text.TextAction",
	nullptr,
	nullptr,
	_DefaultEditorKit$PasteAction_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultEditorKit$PasteAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.DefaultEditorKit"
};

$Object* allocate$DefaultEditorKit$PasteAction($Class* clazz) {
	return $of($alloc(DefaultEditorKit$PasteAction));
}

void DefaultEditorKit$PasteAction::init$() {
	$TextAction::init$("paste-from-clipboard"_s);
}

void DefaultEditorKit$PasteAction::actionPerformed($ActionEvent* e) {
	$var($JTextComponent, target, getTextComponent(e));
	if (target != nullptr) {
		target->paste();
	}
}

DefaultEditorKit$PasteAction::DefaultEditorKit$PasteAction() {
}

$Class* DefaultEditorKit$PasteAction::load$($String* name, bool initialize) {
	$loadClass(DefaultEditorKit$PasteAction, name, initialize, &_DefaultEditorKit$PasteAction_ClassInfo_, allocate$DefaultEditorKit$PasteAction);
	return class$;
}

$Class* DefaultEditorKit$PasteAction::class$ = nullptr;

		} // text
	} // swing
} // javax