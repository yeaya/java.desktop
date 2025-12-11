#include <bug4506788$3.h>

#include <bug4506788.h>
#include <javax/swing/event/CaretEvent.h>
#include <jcpp.h>

using $bug4506788 = ::bug4506788;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CaretEvent = ::javax::swing::event::CaretEvent;

$FieldInfo _bug4506788$3_FieldInfo_[] = {
	{"this$0", "Lbug4506788;", nullptr, $FINAL | $SYNTHETIC, $field(bug4506788$3, this$0)},
	{}
};

$MethodInfo _bug4506788$3_MethodInfo_[] = {
	{"<init>", "(Lbug4506788;)V", nullptr, 0, $method(static_cast<void(bug4506788$3::*)($bug4506788*)>(&bug4506788$3::init$))},
	{"caretUpdate", "(Ljavax/swing/event/CaretEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4506788$3_EnclosingMethodInfo_ = {
	"bug4506788",
	"createAndShowGUI",
	"()V"
};

$InnerClassInfo _bug4506788$3_InnerClassesInfo_[] = {
	{"bug4506788$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4506788$3_ClassInfo_ = {
	$ACC_SUPER,
	"bug4506788$3",
	"java.lang.Object",
	"javax.swing.event.CaretListener",
	_bug4506788$3_FieldInfo_,
	_bug4506788$3_MethodInfo_,
	nullptr,
	&_bug4506788$3_EnclosingMethodInfo_,
	_bug4506788$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4506788"
};

$Object* allocate$bug4506788$3($Class* clazz) {
	return $of($alloc(bug4506788$3));
}

void bug4506788$3::init$($bug4506788* this$0) {
	$set(this, this$0, this$0);
}

void bug4506788$3::caretUpdate($CaretEvent* e) {
	this->this$0->passed = ($nc(e)->getDot() == 3);
}

bug4506788$3::bug4506788$3() {
}

$Class* bug4506788$3::load$($String* name, bool initialize) {
	$loadClass(bug4506788$3, name, initialize, &_bug4506788$3_ClassInfo_, allocate$bug4506788$3);
	return class$;
}

$Class* bug4506788$3::class$ = nullptr;