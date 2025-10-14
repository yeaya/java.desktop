#include <javax/swing/text/StyledEditorKit$StyledInsertBreakAction.h>

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
#include <javax/swing/JEditorPane.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/SimpleAttributeSet.h>
#include <javax/swing/text/StyledEditorKit$StyledTextAction.h>
#include <javax/swing/text/StyledEditorKit.h>
#include <javax/swing/text/TextAction.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JEditorPane = ::javax::swing::JEditorPane;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $UIManager = ::javax::swing::UIManager;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $SimpleAttributeSet = ::javax::swing::text::SimpleAttributeSet;
using $StyledEditorKit = ::javax::swing::text::StyledEditorKit;
using $StyledEditorKit$StyledTextAction = ::javax::swing::text::StyledEditorKit$StyledTextAction;
using $TextAction = ::javax::swing::text::TextAction;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _StyledEditorKit$StyledInsertBreakAction_FieldInfo_[] = {
	{"tempSet", "Ljavax/swing/text/SimpleAttributeSet;", nullptr, $PRIVATE, $field(StyledEditorKit$StyledInsertBreakAction, tempSet)},
	{}
};

$MethodInfo _StyledEditorKit$StyledInsertBreakAction_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(StyledEditorKit$StyledInsertBreakAction::*)()>(&StyledEditorKit$StyledInsertBreakAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _StyledEditorKit$StyledInsertBreakAction_InnerClassesInfo_[] = {
	{"javax.swing.text.StyledEditorKit$StyledInsertBreakAction", "javax.swing.text.StyledEditorKit", "StyledInsertBreakAction", $STATIC},
	{"javax.swing.text.StyledEditorKit$StyledTextAction", "javax.swing.text.StyledEditorKit", "StyledTextAction", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _StyledEditorKit$StyledInsertBreakAction_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.StyledEditorKit$StyledInsertBreakAction",
	"javax.swing.text.StyledEditorKit$StyledTextAction",
	nullptr,
	_StyledEditorKit$StyledInsertBreakAction_FieldInfo_,
	_StyledEditorKit$StyledInsertBreakAction_MethodInfo_,
	nullptr,
	nullptr,
	_StyledEditorKit$StyledInsertBreakAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.StyledEditorKit"
};

$Object* allocate$StyledEditorKit$StyledInsertBreakAction($Class* clazz) {
	return $of($alloc(StyledEditorKit$StyledInsertBreakAction));
}

void StyledEditorKit$StyledInsertBreakAction::init$() {
	$StyledEditorKit$StyledTextAction::init$("insert-break"_s);
}

void StyledEditorKit$StyledInsertBreakAction::actionPerformed($ActionEvent* e) {
	$var($JEditorPane, target, getEditor(e));
	if (target != nullptr) {
		bool var$0 = (!target->isEditable());
		if (var$0 || (!target->isEnabled())) {
			$nc($($UIManager::getLookAndFeel()))->provideErrorFeedback(target);
			return;
		}
		$var($StyledEditorKit, sek, getStyledEditorKit(target));
		if (this->tempSet != nullptr) {
			$nc(this->tempSet)->removeAttributes(static_cast<$AttributeSet*>(this->tempSet));
		} else {
			$set(this, tempSet, $new($SimpleAttributeSet));
		}
		$nc(this->tempSet)->addAttributes($($nc(sek)->getInputAttributes()));
		target->replaceSelection("\n"_s);
		$var($MutableAttributeSet, ia, $nc(sek)->getInputAttributes());
		$nc(ia)->removeAttributes(static_cast<$AttributeSet*>(ia));
		ia->addAttributes(this->tempSet);
		$nc(this->tempSet)->removeAttributes(static_cast<$AttributeSet*>(this->tempSet));
	} else {
		$var($JTextComponent, text, getTextComponent(e));
		if (text != nullptr) {
			bool var$1 = (!text->isEditable());
			if (var$1 || (!text->isEnabled())) {
				$nc($($UIManager::getLookAndFeel()))->provideErrorFeedback(target);
				return;
			}
			text->replaceSelection("\n"_s);
		}
	}
}

StyledEditorKit$StyledInsertBreakAction::StyledEditorKit$StyledInsertBreakAction() {
}

$Class* StyledEditorKit$StyledInsertBreakAction::load$($String* name, bool initialize) {
	$loadClass(StyledEditorKit$StyledInsertBreakAction, name, initialize, &_StyledEditorKit$StyledInsertBreakAction_ClassInfo_, allocate$StyledEditorKit$StyledInsertBreakAction);
	return class$;
}

$Class* StyledEditorKit$StyledInsertBreakAction::class$ = nullptr;

		} // text
	} // swing
} // javax