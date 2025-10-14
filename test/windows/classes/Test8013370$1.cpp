#include <Test8013370$1.h>

#include <Test8013370.h>
#include <java/awt/event/KeyEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/KeyStroke.h>
#include <jcpp.h>

using $Test8013370 = ::Test8013370;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JMenuBar = ::javax::swing::JMenuBar;
using $KeyStroke = ::javax::swing::KeyStroke;

$FieldInfo _Test8013370$1_FieldInfo_[] = {
	{"this$0", "LTest8013370;", nullptr, $FINAL | $SYNTHETIC, $field(Test8013370$1, this$0)},
	{}
};

$MethodInfo _Test8013370$1_MethodInfo_[] = {
	{"<init>", "(LTest8013370;)V", nullptr, 0, $method(static_cast<void(Test8013370$1::*)($Test8013370*)>(&Test8013370$1::init$))},
	{"processKeyBinding", "(Ljavax/swing/KeyStroke;Ljava/awt/event/KeyEvent;IZ)Z", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _Test8013370$1_EnclosingMethodInfo_ = {
	"Test8013370",
	"run",
	"()V"
};

$InnerClassInfo _Test8013370$1_InnerClassesInfo_[] = {
	{"Test8013370$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Test8013370$1_ClassInfo_ = {
	$ACC_SUPER,
	"Test8013370$1",
	"javax.swing.JMenuBar",
	nullptr,
	_Test8013370$1_FieldInfo_,
	_Test8013370$1_MethodInfo_,
	nullptr,
	&_Test8013370$1_EnclosingMethodInfo_,
	_Test8013370$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Test8013370"
};

$Object* allocate$Test8013370$1($Class* clazz) {
	return $of($alloc(Test8013370$1));
}

void Test8013370$1::init$($Test8013370* this$0) {
	$set(this, this$0, this$0);
	$JMenuBar::init$();
}

bool Test8013370$1::processKeyBinding($KeyStroke* stroke, $KeyEvent* event, int32_t condition, bool pressed) {
	if (stroke == nullptr) {
		this->this$0->error = true;
		return false;
	}
	return $JMenuBar::processKeyBinding(stroke, event, condition, pressed);
}

Test8013370$1::Test8013370$1() {
}

$Class* Test8013370$1::load$($String* name, bool initialize) {
	$loadClass(Test8013370$1, name, initialize, &_Test8013370$1_ClassInfo_, allocate$Test8013370$1);
	return class$;
}

$Class* Test8013370$1::class$ = nullptr;