#include <javax/swing/text/DefaultEditorKit$NextWordAction.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
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
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $TextAction = ::javax::swing::text::TextAction;
using $Utilities = ::javax::swing::text::Utilities;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _DefaultEditorKit$NextWordAction_FieldInfo_[] = {
	{"select", "Z", nullptr, $PRIVATE, $field(DefaultEditorKit$NextWordAction, select)},
	{}
};

$MethodInfo _DefaultEditorKit$NextWordAction_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Z)V", nullptr, 0, $method(static_cast<void(DefaultEditorKit$NextWordAction::*)($String*,bool)>(&DefaultEditorKit$NextWordAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultEditorKit$NextWordAction_InnerClassesInfo_[] = {
	{"javax.swing.text.DefaultEditorKit$NextWordAction", "javax.swing.text.DefaultEditorKit", "NextWordAction", $STATIC},
	{}
};

$ClassInfo _DefaultEditorKit$NextWordAction_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.DefaultEditorKit$NextWordAction",
	"javax.swing.text.TextAction",
	nullptr,
	_DefaultEditorKit$NextWordAction_FieldInfo_,
	_DefaultEditorKit$NextWordAction_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultEditorKit$NextWordAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.DefaultEditorKit"
};

$Object* allocate$DefaultEditorKit$NextWordAction($Class* clazz) {
	return $of($alloc(DefaultEditorKit$NextWordAction));
}

void DefaultEditorKit$NextWordAction::init$($String* nm, bool select) {
	$TextAction::init$(nm);
	this->select = select;
}

void DefaultEditorKit$NextWordAction::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JTextComponent, target, getTextComponent(e));
	if (target != nullptr) {
		int32_t offs = target->getCaretPosition();
		bool failed = false;
		int32_t oldOffs = offs;
		$var($Element, curPara, $Utilities::getParagraphElement(target, offs));
		try {
			offs = $Utilities::getNextWord(target, offs);
			bool var$0 = offs >= $nc(curPara)->getEndOffset();
			if (var$0 && oldOffs != curPara->getEndOffset() - 1) {
				offs = curPara->getEndOffset() - 1;
			}
		} catch ($BadLocationException& bl) {
			int32_t end = $nc($(target->getDocument()))->getLength();
			if (offs != end) {
				if (oldOffs != $nc(curPara)->getEndOffset() - 1) {
					offs = curPara->getEndOffset() - 1;
				} else {
					offs = end;
				}
			} else {
				failed = true;
			}
		}
		if (!failed) {
			if (this->select) {
				target->moveCaretPosition(offs);
			} else {
				target->setCaretPosition(offs);
			}
		} else {
			$nc($($UIManager::getLookAndFeel()))->provideErrorFeedback(target);
		}
	}
}

DefaultEditorKit$NextWordAction::DefaultEditorKit$NextWordAction() {
}

$Class* DefaultEditorKit$NextWordAction::load$($String* name, bool initialize) {
	$loadClass(DefaultEditorKit$NextWordAction, name, initialize, &_DefaultEditorKit$NextWordAction_ClassInfo_, allocate$DefaultEditorKit$NextWordAction);
	return class$;
}

$Class* DefaultEditorKit$NextWordAction::class$ = nullptr;

		} // text
	} // swing
} // javax