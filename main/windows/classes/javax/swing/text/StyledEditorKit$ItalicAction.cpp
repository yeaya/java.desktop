#include <javax/swing/text/StyledEditorKit$ItalicAction.h>

#include <java/awt/event/ActionEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$MethodInfo _StyledEditorKit$ItalicAction_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StyledEditorKit$ItalicAction::*)()>(&StyledEditorKit$ItalicAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _StyledEditorKit$ItalicAction_InnerClassesInfo_[] = {
	{"javax.swing.text.StyledEditorKit$ItalicAction", "javax.swing.text.StyledEditorKit", "ItalicAction", $PUBLIC | $STATIC},
	{"javax.swing.text.StyledEditorKit$StyledTextAction", "javax.swing.text.StyledEditorKit", "StyledTextAction", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _StyledEditorKit$ItalicAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.StyledEditorKit$ItalicAction",
	"javax.swing.text.StyledEditorKit$StyledTextAction",
	nullptr,
	nullptr,
	_StyledEditorKit$ItalicAction_MethodInfo_,
	nullptr,
	nullptr,
	_StyledEditorKit$ItalicAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.StyledEditorKit"
};

$Object* allocate$StyledEditorKit$ItalicAction($Class* clazz) {
	return $of($alloc(StyledEditorKit$ItalicAction));
}

void StyledEditorKit$ItalicAction::init$() {
	$StyledEditorKit$StyledTextAction::init$("font-italic"_s);
}

void StyledEditorKit$ItalicAction::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JEditorPane, editor, getEditor(e));
	if (editor != nullptr) {
		$var($StyledEditorKit, kit, getStyledEditorKit(editor));
		$var($MutableAttributeSet, attr, $nc(kit)->getInputAttributes());
		bool italic = ($StyleConstants::isItalic(attr)) ? false : true;
		$var($SimpleAttributeSet, sas, $new($SimpleAttributeSet));
		$StyleConstants::setItalic(sas, italic);
		setCharacterAttributes(editor, sas, false);
	}
}

StyledEditorKit$ItalicAction::StyledEditorKit$ItalicAction() {
}

$Class* StyledEditorKit$ItalicAction::load$($String* name, bool initialize) {
	$loadClass(StyledEditorKit$ItalicAction, name, initialize, &_StyledEditorKit$ItalicAction_ClassInfo_, allocate$StyledEditorKit$ItalicAction);
	return class$;
}

$Class* StyledEditorKit$ItalicAction::class$ = nullptr;

		} // text
	} // swing
} // javax