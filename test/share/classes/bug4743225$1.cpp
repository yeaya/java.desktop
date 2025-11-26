#include <bug4743225$1.h>

#include <bug4743225.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/event/PopupMenuEvent.h>
#include <jcpp.h>

using $bug4743225 = ::bug4743225;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComboBox = ::javax::swing::JComboBox;
using $PopupMenuEvent = ::javax::swing::event::PopupMenuEvent;
using $PopupMenuListener = ::javax::swing::event::PopupMenuListener;

$FieldInfo _bug4743225$1_FieldInfo_[] = {
	{"this$0", "Lbug4743225;", nullptr, $FINAL | $SYNTHETIC, $field(bug4743225$1, this$0)},
	{}
};

$MethodInfo _bug4743225$1_MethodInfo_[] = {
	{"<init>", "(Lbug4743225;)V", nullptr, 0, $method(static_cast<void(bug4743225$1::*)($bug4743225*)>(&bug4743225$1::init$))},
	{"popupMenuCanceled", "(Ljavax/swing/event/PopupMenuEvent;)V", nullptr, $PUBLIC},
	{"popupMenuWillBecomeInvisible", "(Ljavax/swing/event/PopupMenuEvent;)V", nullptr, $PUBLIC},
	{"popupMenuWillBecomeVisible", "(Ljavax/swing/event/PopupMenuEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4743225$1_EnclosingMethodInfo_ = {
	"bug4743225",
	"<init>",
	"()V"
};

$InnerClassInfo _bug4743225$1_InnerClassesInfo_[] = {
	{"bug4743225$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4743225$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug4743225$1",
	"java.lang.Object",
	"javax.swing.event.PopupMenuListener",
	_bug4743225$1_FieldInfo_,
	_bug4743225$1_MethodInfo_,
	nullptr,
	&_bug4743225$1_EnclosingMethodInfo_,
	_bug4743225$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4743225"
};

$Object* allocate$bug4743225$1($Class* clazz) {
	return $of($alloc(bug4743225$1));
}

void bug4743225$1::init$($bug4743225* this$0) {
	$set(this, this$0, this$0);
}

void bug4743225$1::popupMenuWillBecomeVisible($PopupMenuEvent* e) {
	$init($bug4743225);
	$nc($bug4743225::cb)->addItem("Test"_s);
}

void bug4743225$1::popupMenuWillBecomeInvisible($PopupMenuEvent* e) {
}

void bug4743225$1::popupMenuCanceled($PopupMenuEvent* e) {
}

bug4743225$1::bug4743225$1() {
}

$Class* bug4743225$1::load$($String* name, bool initialize) {
	$loadClass(bug4743225$1, name, initialize, &_bug4743225$1_ClassInfo_, allocate$bug4743225$1);
	return class$;
}

$Class* bug4743225$1::class$ = nullptr;