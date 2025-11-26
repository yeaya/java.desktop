#include <javax/swing/text/DefaultEditorKit$DeleteNextCharAction.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/event/ActionEvent.h>
#include <java/lang/Math.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Caret.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/TextAction.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $UIManager = ::javax::swing::UIManager;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Caret = ::javax::swing::text::Caret;
using $DefaultEditorKit = ::javax::swing::text::DefaultEditorKit;
using $Document = ::javax::swing::text::Document;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $TextAction = ::javax::swing::text::TextAction;

namespace javax {
	namespace swing {
		namespace text {

$MethodInfo _DefaultEditorKit$DeleteNextCharAction_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(DefaultEditorKit$DeleteNextCharAction::*)()>(&DefaultEditorKit$DeleteNextCharAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultEditorKit$DeleteNextCharAction_InnerClassesInfo_[] = {
	{"javax.swing.text.DefaultEditorKit$DeleteNextCharAction", "javax.swing.text.DefaultEditorKit", "DeleteNextCharAction", $STATIC},
	{}
};

$ClassInfo _DefaultEditorKit$DeleteNextCharAction_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.DefaultEditorKit$DeleteNextCharAction",
	"javax.swing.text.TextAction",
	nullptr,
	nullptr,
	_DefaultEditorKit$DeleteNextCharAction_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultEditorKit$DeleteNextCharAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.DefaultEditorKit"
};

$Object* allocate$DefaultEditorKit$DeleteNextCharAction($Class* clazz) {
	return $of($alloc(DefaultEditorKit$DeleteNextCharAction));
}

void DefaultEditorKit$DeleteNextCharAction::init$() {
	$TextAction::init$("delete-next"_s);
}

void DefaultEditorKit$DeleteNextCharAction::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JTextComponent, target, getTextComponent(e));
	bool beep = true;
	if ((target != nullptr) && (target->isEditable())) {
		try {
			$var($Document, doc, target->getDocument());
			$var($Caret, caret, target->getCaret());
			int32_t dot = $nc(caret)->getDot();
			int32_t mark = caret->getMark();
			if (dot != mark) {
				int32_t var$0 = $Math::min(dot, mark);
				$nc(doc)->remove(var$0, $Math::abs(dot - mark));
				beep = false;
			} else if (dot < $nc(doc)->getLength()) {
				int32_t delChars = 1;
				if (dot < doc->getLength() - 1) {
					$var($String, dotChars, doc->getText(dot, 2));
					char16_t c0 = $nc(dotChars)->charAt(0);
					char16_t c1 = dotChars->charAt(1);
					if (c0 >= (char16_t)0xD800 && c0 <= (char16_t)0xDBFF && c1 >= (char16_t)0xDC00 && c1 <= (char16_t)0xDFFF) {
						delChars = 2;
					}
				}
				doc->remove(dot, delChars);
				beep = false;
			}
		} catch ($BadLocationException& bl) {
		}
	}
	if (beep) {
		$nc($($UIManager::getLookAndFeel()))->provideErrorFeedback(target);
	}
}

DefaultEditorKit$DeleteNextCharAction::DefaultEditorKit$DeleteNextCharAction() {
}

$Class* DefaultEditorKit$DeleteNextCharAction::load$($String* name, bool initialize) {
	$loadClass(DefaultEditorKit$DeleteNextCharAction, name, initialize, &_DefaultEditorKit$DeleteNextCharAction_ClassInfo_, allocate$DefaultEditorKit$DeleteNextCharAction);
	return class$;
}

$Class* DefaultEditorKit$DeleteNextCharAction::class$ = nullptr;

		} // text
	} // swing
} // javax