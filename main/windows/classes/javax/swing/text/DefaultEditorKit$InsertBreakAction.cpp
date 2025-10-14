#include <javax/swing/text/DefaultEditorKit$InsertBreakAction.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/event/ActionEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $DefaultEditorKit = ::javax::swing::text::DefaultEditorKit;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $TextAction = ::javax::swing::text::TextAction;

namespace javax {
	namespace swing {
		namespace text {

$MethodInfo _DefaultEditorKit$InsertBreakAction_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultEditorKit$InsertBreakAction::*)()>(&DefaultEditorKit$InsertBreakAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultEditorKit$InsertBreakAction_InnerClassesInfo_[] = {
	{"javax.swing.text.DefaultEditorKit$InsertBreakAction", "javax.swing.text.DefaultEditorKit", "InsertBreakAction", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _DefaultEditorKit$InsertBreakAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.DefaultEditorKit$InsertBreakAction",
	"javax.swing.text.TextAction",
	nullptr,
	nullptr,
	_DefaultEditorKit$InsertBreakAction_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultEditorKit$InsertBreakAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.DefaultEditorKit"
};

$Object* allocate$DefaultEditorKit$InsertBreakAction($Class* clazz) {
	return $of($alloc(DefaultEditorKit$InsertBreakAction));
}

void DefaultEditorKit$InsertBreakAction::init$() {
	$TextAction::init$("insert-break"_s);
}

void DefaultEditorKit$InsertBreakAction::actionPerformed($ActionEvent* e) {
	$var($JTextComponent, target, getTextComponent(e));
	if (target != nullptr) {
		bool var$0 = (!target->isEditable());
		if (var$0 || (!target->isEnabled())) {
			$nc($($UIManager::getLookAndFeel()))->provideErrorFeedback(target);
			return;
		}
		target->replaceSelection("\n"_s);
	}
}

DefaultEditorKit$InsertBreakAction::DefaultEditorKit$InsertBreakAction() {
}

$Class* DefaultEditorKit$InsertBreakAction::load$($String* name, bool initialize) {
	$loadClass(DefaultEditorKit$InsertBreakAction, name, initialize, &_DefaultEditorKit$InsertBreakAction_ClassInfo_, allocate$DefaultEditorKit$InsertBreakAction);
	return class$;
}

$Class* DefaultEditorKit$InsertBreakAction::class$ = nullptr;

		} // text
	} // swing
} // javax