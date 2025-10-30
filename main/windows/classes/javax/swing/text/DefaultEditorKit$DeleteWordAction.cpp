#include <javax/swing/text/DefaultEditorKit$DeleteWordAction.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/event/ActionEvent.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Math.h>
#include <java/text/BreakIterator.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/Action.h>
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

#undef DONE
#undef NAME

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $BreakIterator = ::java::text::BreakIterator;
using $AbstractAction = ::javax::swing::AbstractAction;
using $Action = ::javax::swing::Action;
using $JComponent = ::javax::swing::JComponent;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $UIManager = ::javax::swing::UIManager;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $DefaultEditorKit = ::javax::swing::text::DefaultEditorKit;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $TextAction = ::javax::swing::text::TextAction;
using $Utilities = ::javax::swing::text::Utilities;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _DefaultEditorKit$DeleteWordAction_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DefaultEditorKit$DeleteWordAction, $assertionsDisabled)},
	{}
};

$MethodInfo _DefaultEditorKit$DeleteWordAction_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(DefaultEditorKit$DeleteWordAction::*)($String*)>(&DefaultEditorKit$DeleteWordAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultEditorKit$DeleteWordAction_InnerClassesInfo_[] = {
	{"javax.swing.text.DefaultEditorKit$DeleteWordAction", "javax.swing.text.DefaultEditorKit", "DeleteWordAction", $STATIC},
	{}
};

$ClassInfo _DefaultEditorKit$DeleteWordAction_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.DefaultEditorKit$DeleteWordAction",
	"javax.swing.text.TextAction",
	nullptr,
	_DefaultEditorKit$DeleteWordAction_FieldInfo_,
	_DefaultEditorKit$DeleteWordAction_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultEditorKit$DeleteWordAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.DefaultEditorKit"
};

$Object* allocate$DefaultEditorKit$DeleteWordAction($Class* clazz) {
	return $of($alloc(DefaultEditorKit$DeleteWordAction));
}

bool DefaultEditorKit$DeleteWordAction::$assertionsDisabled = false;

void DefaultEditorKit$DeleteWordAction::init$($String* name) {
	$TextAction::init$(name);
	if (!DefaultEditorKit$DeleteWordAction::$assertionsDisabled && !((name == "delete-previous-word"_s) || (name == "delete-next-word"_s))) {
		$throwNew($AssertionError);
	}
}

void DefaultEditorKit$DeleteWordAction::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JTextComponent, target, getTextComponent(e));
	if ((target != nullptr) && (e != nullptr)) {
		bool var$0 = (!target->isEditable());
		if (var$0 || (!target->isEnabled())) {
			$nc($($UIManager::getLookAndFeel()))->provideErrorFeedback(target);
			return;
		}
		bool beep = true;
		try {
			int32_t start = target->getSelectionStart();
			$var($Element, line, $Utilities::getParagraphElement(target, start));
			int32_t end = 0;
			$init($Action);
			if ($equals("delete-next-word"_s, getValue($Action::NAME))) {
				end = $Utilities::getNextWordInParagraph(target, line, start, false);
				if (end == $BreakIterator::DONE) {
					int32_t endOfLine = $nc(line)->getEndOffset();
					if (start == endOfLine - 1) {
						end = endOfLine;
					} else {
						end = endOfLine - 1;
					}
				}
			} else {
				end = $Utilities::getPrevWordInParagraph(target, line, start);
				if (end == $BreakIterator::DONE) {
					int32_t startOfLine = $nc(line)->getStartOffset();
					if (start == startOfLine) {
						end = startOfLine - 1;
					} else {
						end = startOfLine;
					}
				}
			}
			int32_t offs = $Math::min(start, end);
			int32_t len = $Math::abs(end - start);
			if (offs >= 0) {
				$nc($(target->getDocument()))->remove(offs, len);
				beep = false;
			}
		} catch ($BadLocationException& ignore) {
		}
		if (beep) {
			$nc($($UIManager::getLookAndFeel()))->provideErrorFeedback(target);
		}
	}
}

void clinit$DefaultEditorKit$DeleteWordAction($Class* class$) {
	$load($DefaultEditorKit);
	DefaultEditorKit$DeleteWordAction::$assertionsDisabled = !$DefaultEditorKit::class$->desiredAssertionStatus();
}

DefaultEditorKit$DeleteWordAction::DefaultEditorKit$DeleteWordAction() {
}

$Class* DefaultEditorKit$DeleteWordAction::load$($String* name, bool initialize) {
	$loadClass(DefaultEditorKit$DeleteWordAction, name, initialize, &_DefaultEditorKit$DeleteWordAction_ClassInfo_, clinit$DefaultEditorKit$DeleteWordAction, allocate$DefaultEditorKit$DeleteWordAction);
	return class$;
}

$Class* DefaultEditorKit$DeleteWordAction::class$ = nullptr;

		} // text
	} // swing
} // javax