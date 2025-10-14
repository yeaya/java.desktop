#include <bug4936917$1.h>

#include <bug4936917.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Insets.h>
#include <java/awt/Window.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $bug4936917 = ::bug4936917;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Insets = ::java::awt::Insets;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JComponent = ::javax::swing::JComponent;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JFrame = ::javax::swing::JFrame;
using $JTextComponent = ::javax::swing::text::JTextComponent;

$FieldInfo _bug4936917$1_FieldInfo_[] = {
	{"this$0", "Lbug4936917;", nullptr, $FINAL | $SYNTHETIC, $field(bug4936917$1, this$0)},
	{}
};

$MethodInfo _bug4936917$1_MethodInfo_[] = {
	{"<init>", "(Lbug4936917;)V", nullptr, 0, $method(static_cast<void(bug4936917$1::*)($bug4936917*)>(&bug4936917$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4936917$1_EnclosingMethodInfo_ = {
	"bug4936917",
	"init",
	"()V"
};

$InnerClassInfo _bug4936917$1_InnerClassesInfo_[] = {
	{"bug4936917$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4936917$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug4936917$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug4936917$1_FieldInfo_,
	_bug4936917$1_MethodInfo_,
	nullptr,
	&_bug4936917$1_EnclosingMethodInfo_,
	_bug4936917$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4936917"
};

$Object* allocate$bug4936917$1($Class* clazz) {
	return $of($alloc(bug4936917$1));
}

void bug4936917$1::init$($bug4936917* this$0) {
	$set(this, this$0, this$0);
}

void bug4936917$1::run() {
	$set(this->this$0, editorPane, $new($JEditorPane, "text/html"_s, ""_s));
	$nc(this->this$0->editorPane)->setEditable(false);
	$nc(this->this$0->editorPane)->setMargin($$new($Insets, 0, 0, 0, 0));
	$nc(this->this$0->editorPane)->setText(this->this$0->text);
	$init($bug4936917);
	$assignStatic($bug4936917::f, $new($JFrame));
	$nc($($nc($bug4936917::f)->getContentPane()))->add(static_cast<$Component*>(this->this$0->editorPane));
	$nc($bug4936917::f)->setSize(600, 400);
	$nc($bug4936917::f)->setVisible(true);
}

bug4936917$1::bug4936917$1() {
}

$Class* bug4936917$1::load$($String* name, bool initialize) {
	$loadClass(bug4936917$1, name, initialize, &_bug4936917$1_ClassInfo_, allocate$bug4936917$1);
	return class$;
}

$Class* bug4936917$1::class$ = nullptr;