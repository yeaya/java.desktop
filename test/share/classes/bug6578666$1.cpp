#include <bug6578666$1.h>

#include <bug6578666.h>
#include <java/awt/event/KeyAdapter.h>
#include <java/awt/event/KeyEvent.h>
#include <javax/swing/JTree.h>
#include <jcpp.h>

using $bug6578666 = ::bug6578666;
using $KeyAdapter = ::java::awt::event::KeyAdapter;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTree = ::javax::swing::JTree;

$MethodInfo _bug6578666$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6578666$1::*)()>(&bug6578666$1::init$))},
	{"keyPressed", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6578666$1_EnclosingMethodInfo_ = {
	"bug6578666",
	"createGui",
	"()V"
};

$InnerClassInfo _bug6578666$1_InnerClassesInfo_[] = {
	{"bug6578666$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6578666$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6578666$1",
	"java.awt.event.KeyAdapter",
	nullptr,
	nullptr,
	_bug6578666$1_MethodInfo_,
	nullptr,
	&_bug6578666$1_EnclosingMethodInfo_,
	_bug6578666$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6578666"
};

$Object* allocate$bug6578666$1($Class* clazz) {
	return $of($alloc(bug6578666$1));
}

void bug6578666$1::init$() {
	$KeyAdapter::init$();
}

void bug6578666$1::keyPressed($KeyEvent* e) {
	$init($bug6578666);
	$nc($bug6578666::tree)->updateUI();
}

bug6578666$1::bug6578666$1() {
}

$Class* bug6578666$1::load$($String* name, bool initialize) {
	$loadClass(bug6578666$1, name, initialize, &_bug6578666$1_ClassInfo_, allocate$bug6578666$1);
	return class$;
}

$Class* bug6578666$1::class$ = nullptr;