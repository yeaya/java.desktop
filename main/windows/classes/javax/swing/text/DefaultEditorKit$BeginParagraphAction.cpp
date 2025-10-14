#include <javax/swing/text/DefaultEditorKit$BeginParagraphAction.h>

#include <java/awt/event/ActionEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/TextAction.h>
#include <javax/swing/text/Utilities.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultEditorKit = ::javax::swing::text::DefaultEditorKit;
using $Element = ::javax::swing::text::Element;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $TextAction = ::javax::swing::text::TextAction;
using $Utilities = ::javax::swing::text::Utilities;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _DefaultEditorKit$BeginParagraphAction_FieldInfo_[] = {
	{"select", "Z", nullptr, $PRIVATE, $field(DefaultEditorKit$BeginParagraphAction, select)},
	{}
};

$MethodInfo _DefaultEditorKit$BeginParagraphAction_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Z)V", nullptr, 0, $method(static_cast<void(DefaultEditorKit$BeginParagraphAction::*)($String*,bool)>(&DefaultEditorKit$BeginParagraphAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultEditorKit$BeginParagraphAction_InnerClassesInfo_[] = {
	{"javax.swing.text.DefaultEditorKit$BeginParagraphAction", "javax.swing.text.DefaultEditorKit", "BeginParagraphAction", $STATIC},
	{}
};

$ClassInfo _DefaultEditorKit$BeginParagraphAction_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.DefaultEditorKit$BeginParagraphAction",
	"javax.swing.text.TextAction",
	nullptr,
	_DefaultEditorKit$BeginParagraphAction_FieldInfo_,
	_DefaultEditorKit$BeginParagraphAction_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultEditorKit$BeginParagraphAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.DefaultEditorKit"
};

$Object* allocate$DefaultEditorKit$BeginParagraphAction($Class* clazz) {
	return $of($alloc(DefaultEditorKit$BeginParagraphAction));
}

void DefaultEditorKit$BeginParagraphAction::init$($String* nm, bool select) {
	$TextAction::init$(nm);
	this->select = select;
}

void DefaultEditorKit$BeginParagraphAction::actionPerformed($ActionEvent* e) {
	$var($JTextComponent, target, getTextComponent(e));
	if (target != nullptr) {
		int32_t offs = target->getCaretPosition();
		$var($Element, elem, $Utilities::getParagraphElement(target, offs));
		offs = $nc(elem)->getStartOffset();
		if (this->select) {
			target->moveCaretPosition(offs);
		} else {
			target->setCaretPosition(offs);
		}
	}
}

DefaultEditorKit$BeginParagraphAction::DefaultEditorKit$BeginParagraphAction() {
}

$Class* DefaultEditorKit$BeginParagraphAction::load$($String* name, bool initialize) {
	$loadClass(DefaultEditorKit$BeginParagraphAction, name, initialize, &_DefaultEditorKit$BeginParagraphAction_ClassInfo_, allocate$DefaultEditorKit$BeginParagraphAction);
	return class$;
}

$Class* DefaultEditorKit$BeginParagraphAction::class$ = nullptr;

		} // text
	} // swing
} // javax