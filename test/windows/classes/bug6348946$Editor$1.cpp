#include <bug6348946$Editor$1.h>

#include <bug6348946$Editor.h>
#include <bug6348946.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JSlider.h>
#include <javax/swing/event/ChangeEvent.h>
#include <jcpp.h>

using $bug6348946 = ::bug6348946;
using $bug6348946$Editor = ::bug6348946$Editor;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JSlider = ::javax::swing::JSlider;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;

$FieldInfo _bug6348946$Editor$1_FieldInfo_[] = {
	{"this$0", "Lbug6348946$Editor;", nullptr, $FINAL | $SYNTHETIC, $field(bug6348946$Editor$1, this$0)},
	{}
};

$MethodInfo _bug6348946$Editor$1_MethodInfo_[] = {
	{"<init>", "(Lbug6348946$Editor;)V", nullptr, 0, $method(static_cast<void(bug6348946$Editor$1::*)($bug6348946$Editor*)>(&bug6348946$Editor$1::init$))},
	{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6348946$Editor$1_EnclosingMethodInfo_ = {
	"bug6348946$Editor",
	"<init>",
	"()V"
};

$InnerClassInfo _bug6348946$Editor$1_InnerClassesInfo_[] = {
	{"bug6348946$Editor", "bug6348946", "Editor", $PRIVATE | $STATIC},
	{"bug6348946$Editor$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6348946$Editor$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6348946$Editor$1",
	"java.lang.Object",
	"javax.swing.event.ChangeListener",
	_bug6348946$Editor$1_FieldInfo_,
	_bug6348946$Editor$1_MethodInfo_,
	nullptr,
	&_bug6348946$Editor$1_EnclosingMethodInfo_,
	_bug6348946$Editor$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6348946"
};

$Object* allocate$bug6348946$Editor$1($Class* clazz) {
	return $of($alloc(bug6348946$Editor$1));
}

void bug6348946$Editor$1::init$($bug6348946$Editor* this$0) {
	$set(this, this$0, this$0);
}

void bug6348946$Editor$1::stateChanged($ChangeEvent* e) {
	if (!$nc(this->this$0->slider)->getValueIsAdjusting()) {
		$init($bug6348946);
		$bug6348946::passed = $nc(this->this$0->slider)->getValue() <= 5;
	}
}

bug6348946$Editor$1::bug6348946$Editor$1() {
}

$Class* bug6348946$Editor$1::load$($String* name, bool initialize) {
	$loadClass(bug6348946$Editor$1, name, initialize, &_bug6348946$Editor$1_ClassInfo_, allocate$bug6348946$Editor$1);
	return class$;
}

$Class* bug6348946$Editor$1::class$ = nullptr;