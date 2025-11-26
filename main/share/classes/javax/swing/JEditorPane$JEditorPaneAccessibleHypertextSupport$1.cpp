#include <javax/swing/JEditorPane$JEditorPaneAccessibleHypertextSupport$1.h>

#include <javax/swing/JEditorPane$JEditorPaneAccessibleHypertextSupport.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/event/DocumentEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JEditorPane$JEditorPaneAccessibleHypertextSupport = ::javax::swing::JEditorPane$JEditorPaneAccessibleHypertextSupport;
using $DocumentEvent = ::javax::swing::event::DocumentEvent;
using $DocumentListener = ::javax::swing::event::DocumentListener;

namespace javax {
	namespace swing {

$FieldInfo _JEditorPane$JEditorPaneAccessibleHypertextSupport$1_FieldInfo_[] = {
	{"this$1", "Ljavax/swing/JEditorPane$JEditorPaneAccessibleHypertextSupport;", nullptr, $FINAL | $SYNTHETIC, $field(JEditorPane$JEditorPaneAccessibleHypertextSupport$1, this$1)},
	{"val$this$0", "Ljavax/swing/JEditorPane;", nullptr, $FINAL | $SYNTHETIC, $field(JEditorPane$JEditorPaneAccessibleHypertextSupport$1, val$this$0)},
	{}
};

$MethodInfo _JEditorPane$JEditorPaneAccessibleHypertextSupport$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JEditorPane$JEditorPaneAccessibleHypertextSupport;Ljavax/swing/JEditorPane;)V", "()V", 0, $method(static_cast<void(JEditorPane$JEditorPaneAccessibleHypertextSupport$1::*)($JEditorPane$JEditorPaneAccessibleHypertextSupport*,$JEditorPane*)>(&JEditorPane$JEditorPaneAccessibleHypertextSupport$1::init$))},
	{"changedUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC},
	{"insertUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC},
	{"removeUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JEditorPane$JEditorPaneAccessibleHypertextSupport$1_EnclosingMethodInfo_ = {
	"javax.swing.JEditorPane$JEditorPaneAccessibleHypertextSupport",
	"<init>",
	"(Ljavax/swing/JEditorPane;)V"
};

$InnerClassInfo _JEditorPane$JEditorPaneAccessibleHypertextSupport$1_InnerClassesInfo_[] = {
	{"javax.swing.JEditorPane$JEditorPaneAccessibleHypertextSupport", "javax.swing.JEditorPane", "JEditorPaneAccessibleHypertextSupport", $PROTECTED},
	{"javax.swing.JEditorPane$JEditorPaneAccessibleHypertextSupport$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JEditorPane$JEditorPaneAccessibleHypertextSupport$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JEditorPane$JEditorPaneAccessibleHypertextSupport$1",
	"java.lang.Object",
	"javax.swing.event.DocumentListener",
	_JEditorPane$JEditorPaneAccessibleHypertextSupport$1_FieldInfo_,
	_JEditorPane$JEditorPaneAccessibleHypertextSupport$1_MethodInfo_,
	nullptr,
	&_JEditorPane$JEditorPaneAccessibleHypertextSupport$1_EnclosingMethodInfo_,
	_JEditorPane$JEditorPaneAccessibleHypertextSupport$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JEditorPane"
};

$Object* allocate$JEditorPane$JEditorPaneAccessibleHypertextSupport$1($Class* clazz) {
	return $of($alloc(JEditorPane$JEditorPaneAccessibleHypertextSupport$1));
}

void JEditorPane$JEditorPaneAccessibleHypertextSupport$1::init$($JEditorPane$JEditorPaneAccessibleHypertextSupport* this$1, $JEditorPane* val$this$0) {
	$set(this, this$1, this$1);
	$set(this, val$this$0, val$this$0);
}

void JEditorPane$JEditorPaneAccessibleHypertextSupport$1::changedUpdate($DocumentEvent* theEvent) {
	this->this$1->linksValid = false;
}

void JEditorPane$JEditorPaneAccessibleHypertextSupport$1::insertUpdate($DocumentEvent* theEvent) {
	this->this$1->linksValid = false;
}

void JEditorPane$JEditorPaneAccessibleHypertextSupport$1::removeUpdate($DocumentEvent* theEvent) {
	this->this$1->linksValid = false;
}

JEditorPane$JEditorPaneAccessibleHypertextSupport$1::JEditorPane$JEditorPaneAccessibleHypertextSupport$1() {
}

$Class* JEditorPane$JEditorPaneAccessibleHypertextSupport$1::load$($String* name, bool initialize) {
	$loadClass(JEditorPane$JEditorPaneAccessibleHypertextSupport$1, name, initialize, &_JEditorPane$JEditorPaneAccessibleHypertextSupport$1_ClassInfo_, allocate$JEditorPane$JEditorPaneAccessibleHypertextSupport$1);
	return class$;
}

$Class* JEditorPane$JEditorPaneAccessibleHypertextSupport$1::class$ = nullptr;

	} // swing
} // javax