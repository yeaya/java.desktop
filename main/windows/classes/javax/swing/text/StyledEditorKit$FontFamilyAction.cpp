#include <javax/swing/text/StyledEditorKit$FontFamilyAction.h>

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
using $MethodInfo = ::java::lang::MethodInfo;
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

$FieldInfo _StyledEditorKit$FontFamilyAction_FieldInfo_[] = {
	{"family", "Ljava/lang/String;", nullptr, $PRIVATE, $field(StyledEditorKit$FontFamilyAction, family)},
	{}
};

$MethodInfo _StyledEditorKit$FontFamilyAction_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(StyledEditorKit$FontFamilyAction::*)($String*,$String*)>(&StyledEditorKit$FontFamilyAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _StyledEditorKit$FontFamilyAction_InnerClassesInfo_[] = {
	{"javax.swing.text.StyledEditorKit$FontFamilyAction", "javax.swing.text.StyledEditorKit", "FontFamilyAction", $PUBLIC | $STATIC},
	{"javax.swing.text.StyledEditorKit$StyledTextAction", "javax.swing.text.StyledEditorKit", "StyledTextAction", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _StyledEditorKit$FontFamilyAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.StyledEditorKit$FontFamilyAction",
	"javax.swing.text.StyledEditorKit$StyledTextAction",
	nullptr,
	_StyledEditorKit$FontFamilyAction_FieldInfo_,
	_StyledEditorKit$FontFamilyAction_MethodInfo_,
	nullptr,
	nullptr,
	_StyledEditorKit$FontFamilyAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.StyledEditorKit"
};

$Object* allocate$StyledEditorKit$FontFamilyAction($Class* clazz) {
	return $of($alloc(StyledEditorKit$FontFamilyAction));
}

void StyledEditorKit$FontFamilyAction::init$($String* nm, $String* family) {
	$StyledEditorKit$StyledTextAction::init$(nm);
	$set(this, family, family);
}

void StyledEditorKit$FontFamilyAction::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JEditorPane, editor, getEditor(e));
	if (editor != nullptr) {
		$var($String, family, this->family);
		if ((e != nullptr) && ($equals(e->getSource(), editor))) {
			$var($String, s, e->getActionCommand());
			if (s != nullptr) {
				$assign(family, s);
			}
		}
		if (family != nullptr) {
			$var($MutableAttributeSet, attr, $new($SimpleAttributeSet));
			$StyleConstants::setFontFamily(attr, family);
			setCharacterAttributes(editor, attr, false);
		} else {
			$nc($($UIManager::getLookAndFeel()))->provideErrorFeedback(editor);
		}
	}
}

StyledEditorKit$FontFamilyAction::StyledEditorKit$FontFamilyAction() {
}

$Class* StyledEditorKit$FontFamilyAction::load$($String* name, bool initialize) {
	$loadClass(StyledEditorKit$FontFamilyAction, name, initialize, &_StyledEditorKit$FontFamilyAction_ClassInfo_, allocate$StyledEditorKit$FontFamilyAction);
	return class$;
}

$Class* StyledEditorKit$FontFamilyAction::class$ = nullptr;

		} // text
	} // swing
} // javax