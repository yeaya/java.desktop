#include <Test8013370$2.h>

#include <Test8013370.h>
#include <java/awt/Component.h>
#include <java/awt/event/ActionEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/Action.h>
#include <javax/swing/JOptionPane.h>
#include <jcpp.h>

#undef NAME

using $Test8013370 = ::Test8013370;
using $Component = ::java::awt::Component;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $Action = ::javax::swing::Action;
using $JOptionPane = ::javax::swing::JOptionPane;

$FieldInfo _Test8013370$2_FieldInfo_[] = {
	{"this$0", "LTest8013370;", nullptr, $FINAL | $SYNTHETIC, $field(Test8013370$2, this$0)},
	{}
};

$MethodInfo _Test8013370$2_MethodInfo_[] = {
	{"<init>", "(LTest8013370;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(Test8013370$2::*)($Test8013370*,$String*)>(&Test8013370$2::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Test8013370$2_EnclosingMethodInfo_ = {
	"Test8013370",
	"run",
	"()V"
};

$InnerClassInfo _Test8013370$2_InnerClassesInfo_[] = {
	{"Test8013370$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Test8013370$2_ClassInfo_ = {
	$ACC_SUPER,
	"Test8013370$2",
	"javax.swing.AbstractAction",
	nullptr,
	_Test8013370$2_FieldInfo_,
	_Test8013370$2_MethodInfo_,
	nullptr,
	&_Test8013370$2_EnclosingMethodInfo_,
	_Test8013370$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Test8013370"
};

$Object* allocate$Test8013370$2($Class* clazz) {
	return $of($alloc(Test8013370$2));
}

void Test8013370$2::init$($Test8013370* this$0, $String* arg0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$(arg0);
}

void Test8013370$2::actionPerformed($ActionEvent* event) {
	$init($Action);
	$JOptionPane::showMessageDialog(nullptr, $(getValue($Action::NAME)));
}

Test8013370$2::Test8013370$2() {
}

$Class* Test8013370$2::load$($String* name, bool initialize) {
	$loadClass(Test8013370$2, name, initialize, &_Test8013370$2_ClassInfo_, allocate$Test8013370$2);
	return class$;
}

$Class* Test8013370$2::class$ = nullptr;