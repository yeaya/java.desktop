#include <bug4242228$1$1.h>

#include <bug4242228$1.h>
#include <bug4242228.h>
#include <java/awt/Component.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/JTextPane.h>
#include <javax/swing/event/ChangeEvent.h>
#include <jcpp.h>

using $bug4242228 = ::bug4242228;
using $bug4242228$1 = ::bug4242228$1;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $JTextPane = ::javax::swing::JTextPane;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;

$FieldInfo _bug4242228$1$1_FieldInfo_[] = {
	{"this$0", "Lbug4242228$1;", nullptr, $FINAL | $SYNTHETIC, $field(bug4242228$1$1, this$0)},
	{"val$sourceEditor", "Ljavax/swing/JTextPane;", nullptr, $FINAL | $SYNTHETIC, $field(bug4242228$1$1, val$sourceEditor)},
	{"val$htmlEditor", "Ljavax/swing/JTextPane;", nullptr, $FINAL | $SYNTHETIC, $field(bug4242228$1$1, val$htmlEditor)},
	{"val$editorPane", "Ljavax/swing/JScrollPane;", nullptr, $FINAL | $SYNTHETIC, $field(bug4242228$1$1, val$editorPane)},
	{}
};

$MethodInfo _bug4242228$1$1_MethodInfo_[] = {
	{"<init>", "(Lbug4242228$1;Ljavax/swing/JScrollPane;Ljavax/swing/JTextPane;Ljavax/swing/JTextPane;)V", "()V", 0, $method(static_cast<void(bug4242228$1$1::*)($bug4242228$1*,$JScrollPane*,$JTextPane*,$JTextPane*)>(&bug4242228$1$1::init$))},
	{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4242228$1$1_EnclosingMethodInfo_ = {
	"bug4242228$1",
	"run",
	"()V"
};

$InnerClassInfo _bug4242228$1$1_InnerClassesInfo_[] = {
	{"bug4242228$1", nullptr, nullptr, 0},
	{"bug4242228$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4242228$1$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug4242228$1$1",
	"java.lang.Object",
	"javax.swing.event.ChangeListener",
	_bug4242228$1$1_FieldInfo_,
	_bug4242228$1$1_MethodInfo_,
	nullptr,
	&_bug4242228$1$1_EnclosingMethodInfo_,
	_bug4242228$1$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4242228"
};

$Object* allocate$bug4242228$1$1($Class* clazz) {
	return $of($alloc(bug4242228$1$1));
}

void bug4242228$1$1::init$($bug4242228$1* this$0, $JScrollPane* val$editorPane, $JTextPane* val$htmlEditor, $JTextPane* val$sourceEditor) {
	$set(this, this$0, this$0);
	$set(this, val$editorPane, val$editorPane);
	$set(this, val$htmlEditor, val$htmlEditor);
	$set(this, val$sourceEditor, val$sourceEditor);
}

void bug4242228$1$1::stateChanged($ChangeEvent* e) {
	$init($bug4242228);
	if ($equals($nc($bug4242228::tabPane)->getSelectedComponent(), this->val$editorPane)) {
		$nc(this->val$htmlEditor)->setText($($nc(this->val$sourceEditor)->getText()));
	} else {
		$nc(this->val$sourceEditor)->setText($($nc(this->val$htmlEditor)->getText()));
	}
}

bug4242228$1$1::bug4242228$1$1() {
}

$Class* bug4242228$1$1::load$($String* name, bool initialize) {
	$loadClass(bug4242228$1$1, name, initialize, &_bug4242228$1$1_ClassInfo_, allocate$bug4242228$1$1);
	return class$;
}

$Class* bug4242228$1$1::class$ = nullptr;