#include <javax/swing/text/DefaultEditorKit$SelectParagraphAction.h>

#include <java/awt/event/ActionEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/Action.h>
#include <javax/swing/text/DefaultEditorKit$BeginParagraphAction.h>
#include <javax/swing/text/DefaultEditorKit$EndParagraphAction.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/TextAction.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $Action = ::javax::swing::Action;
using $DefaultEditorKit = ::javax::swing::text::DefaultEditorKit;
using $DefaultEditorKit$BeginParagraphAction = ::javax::swing::text::DefaultEditorKit$BeginParagraphAction;
using $DefaultEditorKit$EndParagraphAction = ::javax::swing::text::DefaultEditorKit$EndParagraphAction;
using $TextAction = ::javax::swing::text::TextAction;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _DefaultEditorKit$SelectParagraphAction_FieldInfo_[] = {
	{"start", "Ljavax/swing/Action;", nullptr, $PRIVATE, $field(DefaultEditorKit$SelectParagraphAction, start)},
	{"end", "Ljavax/swing/Action;", nullptr, $PRIVATE, $field(DefaultEditorKit$SelectParagraphAction, end)},
	{}
};

$MethodInfo _DefaultEditorKit$SelectParagraphAction_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(DefaultEditorKit$SelectParagraphAction::*)()>(&DefaultEditorKit$SelectParagraphAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultEditorKit$SelectParagraphAction_InnerClassesInfo_[] = {
	{"javax.swing.text.DefaultEditorKit$SelectParagraphAction", "javax.swing.text.DefaultEditorKit", "SelectParagraphAction", $STATIC},
	{}
};

$ClassInfo _DefaultEditorKit$SelectParagraphAction_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.DefaultEditorKit$SelectParagraphAction",
	"javax.swing.text.TextAction",
	nullptr,
	_DefaultEditorKit$SelectParagraphAction_FieldInfo_,
	_DefaultEditorKit$SelectParagraphAction_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultEditorKit$SelectParagraphAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.DefaultEditorKit"
};

$Object* allocate$DefaultEditorKit$SelectParagraphAction($Class* clazz) {
	return $of($alloc(DefaultEditorKit$SelectParagraphAction));
}

void DefaultEditorKit$SelectParagraphAction::init$() {
	$TextAction::init$("select-paragraph"_s);
	$set(this, start, $new($DefaultEditorKit$BeginParagraphAction, "pigdog"_s, false));
	$set(this, end, $new($DefaultEditorKit$EndParagraphAction, "pigdog"_s, true));
}

void DefaultEditorKit$SelectParagraphAction::actionPerformed($ActionEvent* e) {
	$nc(this->start)->actionPerformed(e);
	$nc(this->end)->actionPerformed(e);
}

DefaultEditorKit$SelectParagraphAction::DefaultEditorKit$SelectParagraphAction() {
}

$Class* DefaultEditorKit$SelectParagraphAction::load$($String* name, bool initialize) {
	$loadClass(DefaultEditorKit$SelectParagraphAction, name, initialize, &_DefaultEditorKit$SelectParagraphAction_ClassInfo_, allocate$DefaultEditorKit$SelectParagraphAction);
	return class$;
}

$Class* DefaultEditorKit$SelectParagraphAction::class$ = nullptr;

		} // text
	} // swing
} // javax