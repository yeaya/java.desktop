#include <javax/swing/text/DefaultEditorKit$EndAction.h>

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
#include <javax/swing/text/Document.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/TextAction.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultEditorKit = ::javax::swing::text::DefaultEditorKit;
using $Document = ::javax::swing::text::Document;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $TextAction = ::javax::swing::text::TextAction;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _DefaultEditorKit$EndAction_FieldInfo_[] = {
	{"select", "Z", nullptr, $PRIVATE, $field(DefaultEditorKit$EndAction, select)},
	{}
};

$MethodInfo _DefaultEditorKit$EndAction_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Z)V", nullptr, 0, $method(static_cast<void(DefaultEditorKit$EndAction::*)($String*,bool)>(&DefaultEditorKit$EndAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultEditorKit$EndAction_InnerClassesInfo_[] = {
	{"javax.swing.text.DefaultEditorKit$EndAction", "javax.swing.text.DefaultEditorKit", "EndAction", $STATIC},
	{}
};

$ClassInfo _DefaultEditorKit$EndAction_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.DefaultEditorKit$EndAction",
	"javax.swing.text.TextAction",
	nullptr,
	_DefaultEditorKit$EndAction_FieldInfo_,
	_DefaultEditorKit$EndAction_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultEditorKit$EndAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.DefaultEditorKit"
};

$Object* allocate$DefaultEditorKit$EndAction($Class* clazz) {
	return $of($alloc(DefaultEditorKit$EndAction));
}

void DefaultEditorKit$EndAction::init$($String* nm, bool select) {
	$TextAction::init$(nm);
	this->select = select;
}

void DefaultEditorKit$EndAction::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JTextComponent, target, getTextComponent(e));
	if (target != nullptr) {
		$var($Document, doc, target->getDocument());
		int32_t dot = $nc(doc)->getLength();
		if (this->select) {
			target->moveCaretPosition(dot);
		} else {
			target->setCaretPosition(dot);
		}
	}
}

DefaultEditorKit$EndAction::DefaultEditorKit$EndAction() {
}

$Class* DefaultEditorKit$EndAction::load$($String* name, bool initialize) {
	$loadClass(DefaultEditorKit$EndAction, name, initialize, &_DefaultEditorKit$EndAction_ClassInfo_, allocate$DefaultEditorKit$EndAction);
	return class$;
}

$Class* DefaultEditorKit$EndAction::class$ = nullptr;

		} // text
	} // swing
} // javax