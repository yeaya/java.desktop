#include <javax/swing/text/StyledEditorKit$BoldAction.h>

#include <java/awt/event/ActionEvent.h>
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
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
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

$MethodInfo _StyledEditorKit$BoldAction_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StyledEditorKit$BoldAction::*)()>(&StyledEditorKit$BoldAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _StyledEditorKit$BoldAction_InnerClassesInfo_[] = {
	{"javax.swing.text.StyledEditorKit$BoldAction", "javax.swing.text.StyledEditorKit", "BoldAction", $PUBLIC | $STATIC},
	{"javax.swing.text.StyledEditorKit$StyledTextAction", "javax.swing.text.StyledEditorKit", "StyledTextAction", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _StyledEditorKit$BoldAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.StyledEditorKit$BoldAction",
	"javax.swing.text.StyledEditorKit$StyledTextAction",
	nullptr,
	nullptr,
	_StyledEditorKit$BoldAction_MethodInfo_,
	nullptr,
	nullptr,
	_StyledEditorKit$BoldAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.StyledEditorKit"
};

$Object* allocate$StyledEditorKit$BoldAction($Class* clazz) {
	return $of($alloc(StyledEditorKit$BoldAction));
}

void StyledEditorKit$BoldAction::init$() {
	$StyledEditorKit$StyledTextAction::init$("font-bold"_s);
}

void StyledEditorKit$BoldAction::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JEditorPane, editor, getEditor(e));
	if (editor != nullptr) {
		$var($StyledEditorKit, kit, getStyledEditorKit(editor));
		$var($MutableAttributeSet, attr, $nc(kit)->getInputAttributes());
		bool bold = ($StyleConstants::isBold(attr)) ? false : true;
		$var($SimpleAttributeSet, sas, $new($SimpleAttributeSet));
		$StyleConstants::setBold(sas, bold);
		setCharacterAttributes(editor, sas, false);
	}
}

StyledEditorKit$BoldAction::StyledEditorKit$BoldAction() {
}

$Class* StyledEditorKit$BoldAction::load$($String* name, bool initialize) {
	$loadClass(StyledEditorKit$BoldAction, name, initialize, &_StyledEditorKit$BoldAction_ClassInfo_, allocate$StyledEditorKit$BoldAction);
	return class$;
}

$Class* StyledEditorKit$BoldAction::class$ = nullptr;

		} // text
	} // swing
} // javax