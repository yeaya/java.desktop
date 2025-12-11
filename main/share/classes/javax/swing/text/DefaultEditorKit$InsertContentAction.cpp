#include <javax/swing/text/DefaultEditorKit$InsertContentAction.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/TextAction.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $UIManager = ::javax::swing::UIManager;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $TextAction = ::javax::swing::text::TextAction;

namespace javax {
	namespace swing {
		namespace text {

$MethodInfo _DefaultEditorKit$InsertContentAction_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultEditorKit$InsertContentAction::*)()>(&DefaultEditorKit$InsertContentAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultEditorKit$InsertContentAction_InnerClassesInfo_[] = {
	{"javax.swing.text.DefaultEditorKit$InsertContentAction", "javax.swing.text.DefaultEditorKit", "InsertContentAction", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _DefaultEditorKit$InsertContentAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.DefaultEditorKit$InsertContentAction",
	"javax.swing.text.TextAction",
	nullptr,
	nullptr,
	_DefaultEditorKit$InsertContentAction_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultEditorKit$InsertContentAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.DefaultEditorKit"
};

$Object* allocate$DefaultEditorKit$InsertContentAction($Class* clazz) {
	return $of($alloc(DefaultEditorKit$InsertContentAction));
}

void DefaultEditorKit$InsertContentAction::init$() {
	$TextAction::init$("insert-content"_s);
}

void DefaultEditorKit$InsertContentAction::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JTextComponent, target, getTextComponent(e));
	if ((target != nullptr) && (e != nullptr)) {
		bool var$0 = (!target->isEditable());
		if (var$0 || (!target->isEnabled())) {
			$nc($($UIManager::getLookAndFeel()))->provideErrorFeedback(target);
			return;
		}
		$var($String, content, e->getActionCommand());
		if (content != nullptr) {
			target->replaceSelection(content);
		} else {
			$nc($($UIManager::getLookAndFeel()))->provideErrorFeedback(target);
		}
	}
}

DefaultEditorKit$InsertContentAction::DefaultEditorKit$InsertContentAction() {
}

$Class* DefaultEditorKit$InsertContentAction::load$($String* name, bool initialize) {
	$loadClass(DefaultEditorKit$InsertContentAction, name, initialize, &_DefaultEditorKit$InsertContentAction_ClassInfo_, allocate$DefaultEditorKit$InsertContentAction);
	return class$;
}

$Class* DefaultEditorKit$InsertContentAction::class$ = nullptr;

		} // text
	} // swing
} // javax