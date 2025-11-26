#include <javax/swing/text/DefaultEditorKit$CopyAction.h>

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

$MethodInfo _DefaultEditorKit$CopyAction_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultEditorKit$CopyAction::*)()>(&DefaultEditorKit$CopyAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultEditorKit$CopyAction_InnerClassesInfo_[] = {
	{"javax.swing.text.DefaultEditorKit$CopyAction", "javax.swing.text.DefaultEditorKit", "CopyAction", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _DefaultEditorKit$CopyAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.DefaultEditorKit$CopyAction",
	"javax.swing.text.TextAction",
	nullptr,
	nullptr,
	_DefaultEditorKit$CopyAction_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultEditorKit$CopyAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.DefaultEditorKit"
};

$Object* allocate$DefaultEditorKit$CopyAction($Class* clazz) {
	return $of($alloc(DefaultEditorKit$CopyAction));
}

void DefaultEditorKit$CopyAction::init$() {
	$TextAction::init$("copy-to-clipboard"_s);
}

void DefaultEditorKit$CopyAction::actionPerformed($ActionEvent* e) {
	$var($JTextComponent, target, getTextComponent(e));
	if (target != nullptr) {
		target->copy();
	}
}

DefaultEditorKit$CopyAction::DefaultEditorKit$CopyAction() {
}

$Class* DefaultEditorKit$CopyAction::load$($String* name, bool initialize) {
	$loadClass(DefaultEditorKit$CopyAction, name, initialize, &_DefaultEditorKit$CopyAction_ClassInfo_, allocate$DefaultEditorKit$CopyAction);
	return class$;
}

$Class* DefaultEditorKit$CopyAction::class$ = nullptr;

		} // text
	} // swing
} // javax