#include <javax/swing/text/DefaultEditorKit$BeepAction.h>

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
using $DefaultEditorKit = ::javax::swing::text::DefaultEditorKit;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $TextAction = ::javax::swing::text::TextAction;

namespace javax {
	namespace swing {
		namespace text {

$MethodInfo _DefaultEditorKit$BeepAction_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultEditorKit$BeepAction::*)()>(&DefaultEditorKit$BeepAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultEditorKit$BeepAction_InnerClassesInfo_[] = {
	{"javax.swing.text.DefaultEditorKit$BeepAction", "javax.swing.text.DefaultEditorKit", "BeepAction", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _DefaultEditorKit$BeepAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.DefaultEditorKit$BeepAction",
	"javax.swing.text.TextAction",
	nullptr,
	nullptr,
	_DefaultEditorKit$BeepAction_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultEditorKit$BeepAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.DefaultEditorKit"
};

$Object* allocate$DefaultEditorKit$BeepAction($Class* clazz) {
	return $of($alloc(DefaultEditorKit$BeepAction));
}

void DefaultEditorKit$BeepAction::init$() {
	$TextAction::init$("beep"_s);
}

void DefaultEditorKit$BeepAction::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JTextComponent, target, getTextComponent(e));
	$nc($($UIManager::getLookAndFeel()))->provideErrorFeedback(target);
}

DefaultEditorKit$BeepAction::DefaultEditorKit$BeepAction() {
}

$Class* DefaultEditorKit$BeepAction::load$($String* name, bool initialize) {
	$loadClass(DefaultEditorKit$BeepAction, name, initialize, &_DefaultEditorKit$BeepAction_ClassInfo_, allocate$DefaultEditorKit$BeepAction);
	return class$;
}

$Class* DefaultEditorKit$BeepAction::class$ = nullptr;

		} // text
	} // swing
} // javax