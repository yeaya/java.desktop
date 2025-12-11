#include <javax/swing/text/StyledEditorKit$FontSizeAction.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/event/ActionEvent.h>
#include <java/lang/NumberFormatException.h>
#include <java/util/EventObject.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/SimpleAttributeSet.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/StyledEditorKit$StyledTextAction.h>
#include <javax/swing/text/StyledEditorKit.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $JComponent = ::javax::swing::JComponent;
using $JEditorPane = ::javax::swing::JEditorPane;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $UIManager = ::javax::swing::UIManager;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $SimpleAttributeSet = ::javax::swing::text::SimpleAttributeSet;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $StyledEditorKit$StyledTextAction = ::javax::swing::text::StyledEditorKit$StyledTextAction;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _StyledEditorKit$FontSizeAction_FieldInfo_[] = {
	{"size", "I", nullptr, $PRIVATE, $field(StyledEditorKit$FontSizeAction, size)},
	{}
};

$MethodInfo _StyledEditorKit$FontSizeAction_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(StyledEditorKit$FontSizeAction::*)($String*,int32_t)>(&StyledEditorKit$FontSizeAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _StyledEditorKit$FontSizeAction_InnerClassesInfo_[] = {
	{"javax.swing.text.StyledEditorKit$FontSizeAction", "javax.swing.text.StyledEditorKit", "FontSizeAction", $PUBLIC | $STATIC},
	{"javax.swing.text.StyledEditorKit$StyledTextAction", "javax.swing.text.StyledEditorKit", "StyledTextAction", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _StyledEditorKit$FontSizeAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.StyledEditorKit$FontSizeAction",
	"javax.swing.text.StyledEditorKit$StyledTextAction",
	nullptr,
	_StyledEditorKit$FontSizeAction_FieldInfo_,
	_StyledEditorKit$FontSizeAction_MethodInfo_,
	nullptr,
	nullptr,
	_StyledEditorKit$FontSizeAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.StyledEditorKit"
};

$Object* allocate$StyledEditorKit$FontSizeAction($Class* clazz) {
	return $of($alloc(StyledEditorKit$FontSizeAction));
}

void StyledEditorKit$FontSizeAction::init$($String* nm, int32_t size) {
	$StyledEditorKit$StyledTextAction::init$(nm);
	this->size = size;
}

void StyledEditorKit$FontSizeAction::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JEditorPane, editor, getEditor(e));
	if (editor != nullptr) {
		int32_t size = this->size;
		if ((e != nullptr) && ($equals(e->getSource(), editor))) {
			$var($String, s, e->getActionCommand());
			try {
				size = $Integer::parseInt(s, 10);
			} catch ($NumberFormatException& nfe) {
			}
		}
		if (size != 0) {
			$var($MutableAttributeSet, attr, $new($SimpleAttributeSet));
			$StyleConstants::setFontSize(attr, size);
			setCharacterAttributes(editor, attr, false);
		} else {
			$nc($($UIManager::getLookAndFeel()))->provideErrorFeedback(editor);
		}
	}
}

StyledEditorKit$FontSizeAction::StyledEditorKit$FontSizeAction() {
}

$Class* StyledEditorKit$FontSizeAction::load$($String* name, bool initialize) {
	$loadClass(StyledEditorKit$FontSizeAction, name, initialize, &_StyledEditorKit$FontSizeAction_ClassInfo_, allocate$StyledEditorKit$FontSizeAction);
	return class$;
}

$Class* StyledEditorKit$FontSizeAction::class$ = nullptr;

		} // text
	} // swing
} // javax