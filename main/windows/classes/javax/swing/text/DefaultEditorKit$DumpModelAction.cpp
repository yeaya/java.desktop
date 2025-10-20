#include <javax/swing/text/DefaultEditorKit$DumpModelAction.h>

#include <java/awt/event/ActionEvent.h>
#include <java/io/PrintStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/TextAction.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $DefaultEditorKit = ::javax::swing::text::DefaultEditorKit;
using $Document = ::javax::swing::text::Document;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $TextAction = ::javax::swing::text::TextAction;

namespace javax {
	namespace swing {
		namespace text {

$MethodInfo _DefaultEditorKit$DumpModelAction_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(DefaultEditorKit$DumpModelAction::*)()>(&DefaultEditorKit$DumpModelAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultEditorKit$DumpModelAction_InnerClassesInfo_[] = {
	{"javax.swing.text.DefaultEditorKit$DumpModelAction", "javax.swing.text.DefaultEditorKit", "DumpModelAction", $STATIC},
	{}
};

$ClassInfo _DefaultEditorKit$DumpModelAction_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.DefaultEditorKit$DumpModelAction",
	"javax.swing.text.TextAction",
	nullptr,
	nullptr,
	_DefaultEditorKit$DumpModelAction_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultEditorKit$DumpModelAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.DefaultEditorKit"
};

$Object* allocate$DefaultEditorKit$DumpModelAction($Class* clazz) {
	return $of($alloc(DefaultEditorKit$DumpModelAction));
}

void DefaultEditorKit$DumpModelAction::init$() {
	$TextAction::init$("dump-model"_s);
}

void DefaultEditorKit$DumpModelAction::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JTextComponent, target, getTextComponent(e));
	if (target != nullptr) {
		$var($Document, d, target->getDocument());
		if ($instanceOf($AbstractDocument, d)) {
			$init($System);
			$nc(($cast($AbstractDocument, d)))->dump($System::err);
		}
	}
}

DefaultEditorKit$DumpModelAction::DefaultEditorKit$DumpModelAction() {
}

$Class* DefaultEditorKit$DumpModelAction::load$($String* name, bool initialize) {
	$loadClass(DefaultEditorKit$DumpModelAction, name, initialize, &_DefaultEditorKit$DumpModelAction_ClassInfo_, allocate$DefaultEditorKit$DumpModelAction);
	return class$;
}

$Class* DefaultEditorKit$DumpModelAction::class$ = nullptr;

		} // text
	} // swing
} // javax