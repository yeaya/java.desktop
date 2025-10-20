#include <javax/swing/text/DefaultEditorKit$DeletePrevCharAction.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/event/ActionEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$MethodInfo _DefaultEditorKit$DeletePrevCharAction_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(DefaultEditorKit$DeletePrevCharAction::*)()>(&DefaultEditorKit$DeletePrevCharAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultEditorKit$DeletePrevCharAction_InnerClassesInfo_[] = {
	{"javax.swing.text.DefaultEditorKit$DeletePrevCharAction", "javax.swing.text.DefaultEditorKit", "DeletePrevCharAction", $STATIC},
	{}
};

$ClassInfo _DefaultEditorKit$DeletePrevCharAction_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.DefaultEditorKit$DeletePrevCharAction",
	"javax.swing.text.TextAction",
	nullptr,
	nullptr,
	_DefaultEditorKit$DeletePrevCharAction_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultEditorKit$DeletePrevCharAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.DefaultEditorKit"
};

$Object* allocate$DefaultEditorKit$DeletePrevCharAction($Class* clazz) {
	return $of($alloc(DefaultEditorKit$DeletePrevCharAction));
}

void DefaultEditorKit$DeletePrevCharAction::init$() {
	$TextAction::init$("delete-previous"_s);
}

void DefaultEditorKit$DeletePrevCharAction::actionPerformed($ActionEvent* e) {
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
			} else if (dot > 0) {
				int32_t delChars = 1;
				if (dot > 1) {
					$var($String, dotChars, $nc(doc)->getText(dot - 2, 2));
					char16_t c0 = $nc(dotChars)->charAt(0);
					char16_t c1 = dotChars->charAt(1);
					if (c0 >= (char16_t)0xD800 && c0 <= (char16_t)0xDBFF && c1 >= (char16_t)0xDC00 && c1 <= (char16_t)0xDFFF) {
						delChars = 2;
					}
				}
				$nc(doc)->remove(dot - delChars, delChars);
				beep = false;
			}
		} catch ($BadLocationException&) {
			$catch();
		}
	}
	if (beep) {
		$nc($($UIManager::getLookAndFeel()))->provideErrorFeedback(target);
	}
}

DefaultEditorKit$DeletePrevCharAction::DefaultEditorKit$DeletePrevCharAction() {
}

$Class* DefaultEditorKit$DeletePrevCharAction::load$($String* name, bool initialize) {
	$loadClass(DefaultEditorKit$DeletePrevCharAction, name, initialize, &_DefaultEditorKit$DeletePrevCharAction_ClassInfo_, allocate$DefaultEditorKit$DeletePrevCharAction);
	return class$;
}

$Class* DefaultEditorKit$DeletePrevCharAction::class$ = nullptr;

		} // text
	} // swing
} // javax