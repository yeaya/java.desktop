#include <javax/swing/text/DefaultEditorKit$InsertTabAction.h>

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

$MethodInfo _DefaultEditorKit$InsertTabAction_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultEditorKit$InsertTabAction::*)()>(&DefaultEditorKit$InsertTabAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultEditorKit$InsertTabAction_InnerClassesInfo_[] = {
	{"javax.swing.text.DefaultEditorKit$InsertTabAction", "javax.swing.text.DefaultEditorKit", "InsertTabAction", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _DefaultEditorKit$InsertTabAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.DefaultEditorKit$InsertTabAction",
	"javax.swing.text.TextAction",
	nullptr,
	nullptr,
	_DefaultEditorKit$InsertTabAction_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultEditorKit$InsertTabAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.DefaultEditorKit"
};

$Object* allocate$DefaultEditorKit$InsertTabAction($Class* clazz) {
	return $of($alloc(DefaultEditorKit$InsertTabAction));
}

void DefaultEditorKit$InsertTabAction::init$() {
	$TextAction::init$("insert-tab"_s);
}

void DefaultEditorKit$InsertTabAction::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JTextComponent, target, getTextComponent(e));
	if (target != nullptr) {
		bool var$0 = (!target->isEditable());
		if (var$0 || (!target->isEnabled())) {
			$nc($($UIManager::getLookAndFeel()))->provideErrorFeedback(target);
			return;
		}
		target->replaceSelection("\t"_s);
	}
}

DefaultEditorKit$InsertTabAction::DefaultEditorKit$InsertTabAction() {
}

$Class* DefaultEditorKit$InsertTabAction::load$($String* name, bool initialize) {
	$loadClass(DefaultEditorKit$InsertTabAction, name, initialize, &_DefaultEditorKit$InsertTabAction_ClassInfo_, allocate$DefaultEditorKit$InsertTabAction);
	return class$;
}

$Class* DefaultEditorKit$InsertTabAction::class$ = nullptr;

		} // text
	} // swing
} // javax