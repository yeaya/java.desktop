#include <bug6520101$1.h>

#include <bug6520101.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/JFileChooser.h>
#include <jcpp.h>

using $bug6520101 = ::bug6520101;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFileChooser = ::javax::swing::JFileChooser;

$FieldInfo _bug6520101$1_FieldInfo_[] = {
	{"this$0", "Lbug6520101;", nullptr, $FINAL | $SYNTHETIC, $field(bug6520101$1, this$0)},
	{}
};

$MethodInfo _bug6520101$1_MethodInfo_[] = {
	{"<init>", "(Lbug6520101;)V", nullptr, 0, $method(static_cast<void(bug6520101$1::*)($bug6520101*)>(&bug6520101$1::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6520101$1_EnclosingMethodInfo_ = {
	"bug6520101",
	"run",
	"()V"
};

$InnerClassInfo _bug6520101$1_InnerClassesInfo_[] = {
	{"bug6520101$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6520101$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6520101$1",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	_bug6520101$1_FieldInfo_,
	_bug6520101$1_MethodInfo_,
	nullptr,
	&_bug6520101$1_EnclosingMethodInfo_,
	_bug6520101$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6520101"
};

$Object* allocate$bug6520101$1($Class* clazz) {
	return $of($alloc(bug6520101$1));
}

void bug6520101$1::init$($bug6520101* this$0) {
	$set(this, this$0, this$0);
}

void bug6520101$1::actionPerformed($ActionEvent* e) {
	$nc(this->this$0->chooser)->cancelSelection();
}

bug6520101$1::bug6520101$1() {
}

$Class* bug6520101$1::load$($String* name, bool initialize) {
	$loadClass(bug6520101$1, name, initialize, &_bug6520101$1_ClassInfo_, allocate$bug6520101$1);
	return class$;
}

$Class* bug6520101$1::class$ = nullptr;