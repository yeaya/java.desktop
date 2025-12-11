#include <javax/swing/text/DefaultEditorKit$SelectLineAction.h>

#include <java/awt/event/ActionEvent.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/Action.h>
#include <javax/swing/text/DefaultEditorKit$BeginLineAction.h>
#include <javax/swing/text/DefaultEditorKit$EndLineAction.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/TextAction.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $Action = ::javax::swing::Action;
using $DefaultEditorKit$BeginLineAction = ::javax::swing::text::DefaultEditorKit$BeginLineAction;
using $DefaultEditorKit$EndLineAction = ::javax::swing::text::DefaultEditorKit$EndLineAction;
using $TextAction = ::javax::swing::text::TextAction;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _DefaultEditorKit$SelectLineAction_FieldInfo_[] = {
	{"start", "Ljavax/swing/Action;", nullptr, $PRIVATE, $field(DefaultEditorKit$SelectLineAction, start)},
	{"end", "Ljavax/swing/Action;", nullptr, $PRIVATE, $field(DefaultEditorKit$SelectLineAction, end)},
	{}
};

$MethodInfo _DefaultEditorKit$SelectLineAction_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(DefaultEditorKit$SelectLineAction::*)()>(&DefaultEditorKit$SelectLineAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultEditorKit$SelectLineAction_InnerClassesInfo_[] = {
	{"javax.swing.text.DefaultEditorKit$SelectLineAction", "javax.swing.text.DefaultEditorKit", "SelectLineAction", $STATIC},
	{}
};

$ClassInfo _DefaultEditorKit$SelectLineAction_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.DefaultEditorKit$SelectLineAction",
	"javax.swing.text.TextAction",
	nullptr,
	_DefaultEditorKit$SelectLineAction_FieldInfo_,
	_DefaultEditorKit$SelectLineAction_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultEditorKit$SelectLineAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.DefaultEditorKit"
};

$Object* allocate$DefaultEditorKit$SelectLineAction($Class* clazz) {
	return $of($alloc(DefaultEditorKit$SelectLineAction));
}

void DefaultEditorKit$SelectLineAction::init$() {
	$TextAction::init$("select-line"_s);
	$set(this, start, $new($DefaultEditorKit$BeginLineAction, "pigdog"_s, false));
	$set(this, end, $new($DefaultEditorKit$EndLineAction, "pigdog"_s, true));
}

void DefaultEditorKit$SelectLineAction::actionPerformed($ActionEvent* e) {
	$nc(this->start)->actionPerformed(e);
	$nc(this->end)->actionPerformed(e);
}

DefaultEditorKit$SelectLineAction::DefaultEditorKit$SelectLineAction() {
}

$Class* DefaultEditorKit$SelectLineAction::load$($String* name, bool initialize) {
	$loadClass(DefaultEditorKit$SelectLineAction, name, initialize, &_DefaultEditorKit$SelectLineAction_ClassInfo_, allocate$DefaultEditorKit$SelectLineAction);
	return class$;
}

$Class* DefaultEditorKit$SelectLineAction::class$ = nullptr;

		} // text
	} // swing
} // javax