#include <javax/swing/text/StyledEditorKit$AlignmentAction.h>

#include <java/awt/event/ActionEvent.h>
#include <java/lang/NumberFormatException.h>
#include <java/util/EventObject.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/SimpleAttributeSet.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/StyledEditorKit$StyledTextAction.h>
#include <javax/swing/text/StyledEditorKit.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $EventObject = ::java::util::EventObject;
using $JEditorPane = ::javax::swing::JEditorPane;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $SimpleAttributeSet = ::javax::swing::text::SimpleAttributeSet;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $StyledEditorKit = ::javax::swing::text::StyledEditorKit;
using $StyledEditorKit$StyledTextAction = ::javax::swing::text::StyledEditorKit$StyledTextAction;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _StyledEditorKit$AlignmentAction_FieldInfo_[] = {
	{"a", "I", nullptr, $PRIVATE, $field(StyledEditorKit$AlignmentAction, a)},
	{}
};

$MethodInfo _StyledEditorKit$AlignmentAction_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(StyledEditorKit$AlignmentAction::*)($String*,int32_t)>(&StyledEditorKit$AlignmentAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _StyledEditorKit$AlignmentAction_InnerClassesInfo_[] = {
	{"javax.swing.text.StyledEditorKit$AlignmentAction", "javax.swing.text.StyledEditorKit", "AlignmentAction", $PUBLIC | $STATIC},
	{"javax.swing.text.StyledEditorKit$StyledTextAction", "javax.swing.text.StyledEditorKit", "StyledTextAction", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _StyledEditorKit$AlignmentAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.StyledEditorKit$AlignmentAction",
	"javax.swing.text.StyledEditorKit$StyledTextAction",
	nullptr,
	_StyledEditorKit$AlignmentAction_FieldInfo_,
	_StyledEditorKit$AlignmentAction_MethodInfo_,
	nullptr,
	nullptr,
	_StyledEditorKit$AlignmentAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.StyledEditorKit"
};

$Object* allocate$StyledEditorKit$AlignmentAction($Class* clazz) {
	return $of($alloc(StyledEditorKit$AlignmentAction));
}

void StyledEditorKit$AlignmentAction::init$($String* nm, int32_t a) {
	$StyledEditorKit$StyledTextAction::init$(nm);
	this->a = a;
}

void StyledEditorKit$AlignmentAction::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JEditorPane, editor, getEditor(e));
	if (editor != nullptr) {
		int32_t a = this->a;
		if ((e != nullptr) && ($equals(e->getSource(), editor))) {
			$var($String, s, e->getActionCommand());
			try {
				a = $Integer::parseInt(s, 10);
			} catch ($NumberFormatException& nfe) {
			}
		}
		$var($MutableAttributeSet, attr, $new($SimpleAttributeSet));
		$StyleConstants::setAlignment(attr, a);
		setParagraphAttributes(editor, attr, false);
	}
}

StyledEditorKit$AlignmentAction::StyledEditorKit$AlignmentAction() {
}

$Class* StyledEditorKit$AlignmentAction::load$($String* name, bool initialize) {
	$loadClass(StyledEditorKit$AlignmentAction, name, initialize, &_StyledEditorKit$AlignmentAction_ClassInfo_, allocate$StyledEditorKit$AlignmentAction);
	return class$;
}

$Class* StyledEditorKit$AlignmentAction::class$ = nullptr;

		} // text
	} // swing
} // javax