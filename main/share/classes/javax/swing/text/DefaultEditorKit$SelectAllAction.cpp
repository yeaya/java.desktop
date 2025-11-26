#include <javax/swing/text/DefaultEditorKit$SelectAllAction.h>

#include <java/awt/event/ActionEvent.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/TextAction.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultEditorKit = ::javax::swing::text::DefaultEditorKit;
using $Document = ::javax::swing::text::Document;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $TextAction = ::javax::swing::text::TextAction;

namespace javax {
	namespace swing {
		namespace text {

$MethodInfo _DefaultEditorKit$SelectAllAction_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(DefaultEditorKit$SelectAllAction::*)()>(&DefaultEditorKit$SelectAllAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultEditorKit$SelectAllAction_InnerClassesInfo_[] = {
	{"javax.swing.text.DefaultEditorKit$SelectAllAction", "javax.swing.text.DefaultEditorKit", "SelectAllAction", $STATIC},
	{}
};

$ClassInfo _DefaultEditorKit$SelectAllAction_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.DefaultEditorKit$SelectAllAction",
	"javax.swing.text.TextAction",
	nullptr,
	nullptr,
	_DefaultEditorKit$SelectAllAction_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultEditorKit$SelectAllAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.DefaultEditorKit"
};

$Object* allocate$DefaultEditorKit$SelectAllAction($Class* clazz) {
	return $of($alloc(DefaultEditorKit$SelectAllAction));
}

void DefaultEditorKit$SelectAllAction::init$() {
	$TextAction::init$("select-all"_s);
}

void DefaultEditorKit$SelectAllAction::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JTextComponent, target, getTextComponent(e));
	if (target != nullptr) {
		$var($Document, doc, target->getDocument());
		target->setCaretPosition(0);
		target->moveCaretPosition($nc(doc)->getLength());
	}
}

DefaultEditorKit$SelectAllAction::DefaultEditorKit$SelectAllAction() {
}

$Class* DefaultEditorKit$SelectAllAction::load$($String* name, bool initialize) {
	$loadClass(DefaultEditorKit$SelectAllAction, name, initialize, &_DefaultEditorKit$SelectAllAction_ClassInfo_, allocate$DefaultEditorKit$SelectAllAction);
	return class$;
}

$Class* DefaultEditorKit$SelectAllAction::class$ = nullptr;

		} // text
	} // swing
} // javax