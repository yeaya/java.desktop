#include <javax/swing/text/StyledEditorKit$ForegroundAction.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/event/ActionEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $EventObject = ::java::util::EventObject;
using $JComponent = ::javax::swing::JComponent;
using $JEditorPane = ::javax::swing::JEditorPane;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $UIManager = ::javax::swing::UIManager;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $SimpleAttributeSet = ::javax::swing::text::SimpleAttributeSet;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $StyledEditorKit = ::javax::swing::text::StyledEditorKit;
using $StyledEditorKit$StyledTextAction = ::javax::swing::text::StyledEditorKit$StyledTextAction;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _StyledEditorKit$ForegroundAction_FieldInfo_[] = {
	{"fg", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(StyledEditorKit$ForegroundAction, fg)},
	{}
};

$MethodInfo _StyledEditorKit$ForegroundAction_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(static_cast<void(StyledEditorKit$ForegroundAction::*)($String*,$Color*)>(&StyledEditorKit$ForegroundAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _StyledEditorKit$ForegroundAction_InnerClassesInfo_[] = {
	{"javax.swing.text.StyledEditorKit$ForegroundAction", "javax.swing.text.StyledEditorKit", "ForegroundAction", $PUBLIC | $STATIC},
	{"javax.swing.text.StyledEditorKit$StyledTextAction", "javax.swing.text.StyledEditorKit", "StyledTextAction", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _StyledEditorKit$ForegroundAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.StyledEditorKit$ForegroundAction",
	"javax.swing.text.StyledEditorKit$StyledTextAction",
	nullptr,
	_StyledEditorKit$ForegroundAction_FieldInfo_,
	_StyledEditorKit$ForegroundAction_MethodInfo_,
	nullptr,
	nullptr,
	_StyledEditorKit$ForegroundAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.StyledEditorKit"
};

$Object* allocate$StyledEditorKit$ForegroundAction($Class* clazz) {
	return $of($alloc(StyledEditorKit$ForegroundAction));
}

void StyledEditorKit$ForegroundAction::init$($String* nm, $Color* fg) {
	$StyledEditorKit$StyledTextAction::init$(nm);
	$set(this, fg, fg);
}

void StyledEditorKit$ForegroundAction::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JEditorPane, editor, getEditor(e));
	if (editor != nullptr) {
		$var($Color, fg, this->fg);
		if ((e != nullptr) && ($equals(e->getSource(), editor))) {
			$var($String, s, e->getActionCommand());
			try {
				$assign(fg, $Color::decode(s));
			} catch ($NumberFormatException&) {
				$catch();
			}
		}
		if (fg != nullptr) {
			$var($MutableAttributeSet, attr, $new($SimpleAttributeSet));
			$StyleConstants::setForeground(attr, fg);
			setCharacterAttributes(editor, attr, false);
		} else {
			$nc($($UIManager::getLookAndFeel()))->provideErrorFeedback(editor);
		}
	}
}

StyledEditorKit$ForegroundAction::StyledEditorKit$ForegroundAction() {
}

$Class* StyledEditorKit$ForegroundAction::load$($String* name, bool initialize) {
	$loadClass(StyledEditorKit$ForegroundAction, name, initialize, &_StyledEditorKit$ForegroundAction_ClassInfo_, allocate$StyledEditorKit$ForegroundAction);
	return class$;
}

$Class* StyledEditorKit$ForegroundAction::class$ = nullptr;

		} // text
	} // swing
} // javax