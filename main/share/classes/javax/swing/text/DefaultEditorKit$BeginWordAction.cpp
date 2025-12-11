#include <javax/swing/text/DefaultEditorKit$BeginWordAction.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/event/ActionEvent.h>
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
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $TextAction = ::javax::swing::text::TextAction;
using $Utilities = ::javax::swing::text::Utilities;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _DefaultEditorKit$BeginWordAction_FieldInfo_[] = {
	{"select", "Z", nullptr, $PRIVATE, $field(DefaultEditorKit$BeginWordAction, select)},
	{}
};

$MethodInfo _DefaultEditorKit$BeginWordAction_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Z)V", nullptr, 0, $method(static_cast<void(DefaultEditorKit$BeginWordAction::*)($String*,bool)>(&DefaultEditorKit$BeginWordAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultEditorKit$BeginWordAction_InnerClassesInfo_[] = {
	{"javax.swing.text.DefaultEditorKit$BeginWordAction", "javax.swing.text.DefaultEditorKit", "BeginWordAction", $STATIC},
	{}
};

$ClassInfo _DefaultEditorKit$BeginWordAction_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.DefaultEditorKit$BeginWordAction",
	"javax.swing.text.TextAction",
	nullptr,
	_DefaultEditorKit$BeginWordAction_FieldInfo_,
	_DefaultEditorKit$BeginWordAction_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultEditorKit$BeginWordAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.DefaultEditorKit"
};

$Object* allocate$DefaultEditorKit$BeginWordAction($Class* clazz) {
	return $of($alloc(DefaultEditorKit$BeginWordAction));
}

void DefaultEditorKit$BeginWordAction::init$($String* nm, bool select) {
	$TextAction::init$(nm);
	this->select = select;
}

void DefaultEditorKit$BeginWordAction::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JTextComponent, target, getTextComponent(e));
	if (target != nullptr) {
		try {
			int32_t offs = target->getCaretPosition();
			int32_t begOffs = $Utilities::getWordStart(target, offs);
			if (this->select) {
				target->moveCaretPosition(begOffs);
			} else {
				target->setCaretPosition(begOffs);
			}
		} catch ($BadLocationException& bl) {
			$nc($($UIManager::getLookAndFeel()))->provideErrorFeedback(target);
		}
	}
}

DefaultEditorKit$BeginWordAction::DefaultEditorKit$BeginWordAction() {
}

$Class* DefaultEditorKit$BeginWordAction::load$($String* name, bool initialize) {
	$loadClass(DefaultEditorKit$BeginWordAction, name, initialize, &_DefaultEditorKit$BeginWordAction_ClassInfo_, allocate$DefaultEditorKit$BeginWordAction);
	return class$;
}

$Class* DefaultEditorKit$BeginWordAction::class$ = nullptr;

		} // text
	} // swing
} // javax