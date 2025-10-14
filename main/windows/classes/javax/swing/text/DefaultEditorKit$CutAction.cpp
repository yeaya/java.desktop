#include <javax/swing/text/DefaultEditorKit$CutAction.h>

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

$MethodInfo _DefaultEditorKit$CutAction_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultEditorKit$CutAction::*)()>(&DefaultEditorKit$CutAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultEditorKit$CutAction_InnerClassesInfo_[] = {
	{"javax.swing.text.DefaultEditorKit$CutAction", "javax.swing.text.DefaultEditorKit", "CutAction", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _DefaultEditorKit$CutAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.DefaultEditorKit$CutAction",
	"javax.swing.text.TextAction",
	nullptr,
	nullptr,
	_DefaultEditorKit$CutAction_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultEditorKit$CutAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.DefaultEditorKit"
};

$Object* allocate$DefaultEditorKit$CutAction($Class* clazz) {
	return $of($alloc(DefaultEditorKit$CutAction));
}

void DefaultEditorKit$CutAction::init$() {
	$TextAction::init$("cut-to-clipboard"_s);
}

void DefaultEditorKit$CutAction::actionPerformed($ActionEvent* e) {
	$var($JTextComponent, target, getTextComponent(e));
	if (target != nullptr) {
		target->cut();
	}
}

DefaultEditorKit$CutAction::DefaultEditorKit$CutAction() {
}

$Class* DefaultEditorKit$CutAction::load$($String* name, bool initialize) {
	$loadClass(DefaultEditorKit$CutAction, name, initialize, &_DefaultEditorKit$CutAction_ClassInfo_, allocate$DefaultEditorKit$CutAction);
	return class$;
}

$Class* DefaultEditorKit$CutAction::class$ = nullptr;

		} // text
	} // swing
} // javax