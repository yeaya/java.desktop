#include <bug7027139$1$1.h>

#include <bug7027139$1.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/event/ListSelectionEvent.h>
#include <jcpp.h>

using $bug7027139$1 = ::bug7027139$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ListSelectionEvent = ::javax::swing::event::ListSelectionEvent;
using $ListSelectionListener = ::javax::swing::event::ListSelectionListener;

$FieldInfo _bug7027139$1$1_FieldInfo_[] = {
	{"this$0", "Lbug7027139$1;", nullptr, $FINAL | $SYNTHETIC, $field(bug7027139$1$1, this$0)},
	{}
};

$MethodInfo _bug7027139$1$1_MethodInfo_[] = {
	{"<init>", "(Lbug7027139$1;)V", nullptr, 0, $method(static_cast<void(bug7027139$1$1::*)($bug7027139$1*)>(&bug7027139$1$1::init$))},
	{"valueChanged", "(Ljavax/swing/event/ListSelectionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug7027139$1$1_EnclosingMethodInfo_ = {
	"bug7027139$1",
	"run",
	"()V"
};

$InnerClassInfo _bug7027139$1$1_InnerClassesInfo_[] = {
	{"bug7027139$1", nullptr, nullptr, 0},
	{"bug7027139$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7027139$1$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug7027139$1$1",
	"java.lang.Object",
	"javax.swing.event.ListSelectionListener",
	_bug7027139$1$1_FieldInfo_,
	_bug7027139$1$1_MethodInfo_,
	nullptr,
	&_bug7027139$1$1_EnclosingMethodInfo_,
	_bug7027139$1$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug7027139"
};

$Object* allocate$bug7027139$1$1($Class* clazz) {
	return $of($alloc(bug7027139$1$1));
}

void bug7027139$1$1::init$($bug7027139$1* this$0) {
	$set(this, this$0, this$0);
}

void bug7027139$1$1::valueChanged($ListSelectionEvent* e) {
	if ($nc(e)->getValueIsAdjusting()) {
		return;
	}
	if ($nc(e)->getFirstIndex() < 0) {
		$throwNew($RuntimeException, "Test bug7027139 failed"_s);
	}
}

bug7027139$1$1::bug7027139$1$1() {
}

$Class* bug7027139$1$1::load$($String* name, bool initialize) {
	$loadClass(bug7027139$1$1, name, initialize, &_bug7027139$1$1_ClassInfo_, allocate$bug7027139$1$1);
	return class$;
}

$Class* bug7027139$1$1::class$ = nullptr;