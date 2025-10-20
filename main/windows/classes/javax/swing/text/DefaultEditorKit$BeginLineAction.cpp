#include <javax/swing/text/DefaultEditorKit$BeginLineAction.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/event/ActionEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/TextAction.h>
#include <javax/swing/text/Utilities.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $UIManager = ::javax::swing::UIManager;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $DefaultEditorKit = ::javax::swing::text::DefaultEditorKit;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $TextAction = ::javax::swing::text::TextAction;
using $Utilities = ::javax::swing::text::Utilities;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _DefaultEditorKit$BeginLineAction_FieldInfo_[] = {
	{"select", "Z", nullptr, $PRIVATE, $field(DefaultEditorKit$BeginLineAction, select)},
	{}
};

$MethodInfo _DefaultEditorKit$BeginLineAction_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Z)V", nullptr, 0, $method(static_cast<void(DefaultEditorKit$BeginLineAction::*)($String*,bool)>(&DefaultEditorKit$BeginLineAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultEditorKit$BeginLineAction_InnerClassesInfo_[] = {
	{"javax.swing.text.DefaultEditorKit$BeginLineAction", "javax.swing.text.DefaultEditorKit", "BeginLineAction", $STATIC},
	{}
};

$ClassInfo _DefaultEditorKit$BeginLineAction_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.DefaultEditorKit$BeginLineAction",
	"javax.swing.text.TextAction",
	nullptr,
	_DefaultEditorKit$BeginLineAction_FieldInfo_,
	_DefaultEditorKit$BeginLineAction_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultEditorKit$BeginLineAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.DefaultEditorKit"
};

$Object* allocate$DefaultEditorKit$BeginLineAction($Class* clazz) {
	return $of($alloc(DefaultEditorKit$BeginLineAction));
}

void DefaultEditorKit$BeginLineAction::init$($String* nm, bool select) {
	$TextAction::init$(nm);
	this->select = select;
}

void DefaultEditorKit$BeginLineAction::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JTextComponent, target, getTextComponent(e));
	if (target != nullptr) {
		try {
			int32_t offs = target->getCaretPosition();
			int32_t begOffs = $Utilities::getRowStart(target, offs);
			if (this->select) {
				target->moveCaretPosition(begOffs);
			} else {
				target->setCaretPosition(begOffs);
			}
		} catch ($BadLocationException&) {
			$var($BadLocationException, bl, $catch());
			$nc($($UIManager::getLookAndFeel()))->provideErrorFeedback(target);
		}
	}
}

DefaultEditorKit$BeginLineAction::DefaultEditorKit$BeginLineAction() {
}

$Class* DefaultEditorKit$BeginLineAction::load$($String* name, bool initialize) {
	$loadClass(DefaultEditorKit$BeginLineAction, name, initialize, &_DefaultEditorKit$BeginLineAction_ClassInfo_, allocate$DefaultEditorKit$BeginLineAction);
	return class$;
}

$Class* DefaultEditorKit$BeginLineAction::class$ = nullptr;

		} // text
	} // swing
} // javax