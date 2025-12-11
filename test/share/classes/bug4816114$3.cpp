#include <bug4816114$3.h>

#include <bug4816114.h>
#include <java/awt/Dimension.h>
#include <java/awt/Window.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JSplitPane.h>
#include <jcpp.h>

using $bug4816114 = ::bug4816114;
using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;
using $JSplitPane = ::javax::swing::JSplitPane;

$FieldInfo _bug4816114$3_FieldInfo_[] = {
	{"this$0", "Lbug4816114;", nullptr, $FINAL | $SYNTHETIC, $field(bug4816114$3, this$0)},
	{"val$height", "I", nullptr, $FINAL | $SYNTHETIC, $field(bug4816114$3, val$height)},
	{"val$width", "I", nullptr, $FINAL | $SYNTHETIC, $field(bug4816114$3, val$width)},
	{}
};

$MethodInfo _bug4816114$3_MethodInfo_[] = {
	{"<init>", "(Lbug4816114;II)V", "()V", 0, $method(static_cast<void(bug4816114$3::*)($bug4816114*,int32_t,int32_t)>(&bug4816114$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4816114$3_EnclosingMethodInfo_ = {
	"bug4816114",
	"doTest",
	"(II)V"
};

$InnerClassInfo _bug4816114$3_InnerClassesInfo_[] = {
	{"bug4816114$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4816114$3_ClassInfo_ = {
	$ACC_SUPER,
	"bug4816114$3",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug4816114$3_FieldInfo_,
	_bug4816114$3_MethodInfo_,
	nullptr,
	&_bug4816114$3_EnclosingMethodInfo_,
	_bug4816114$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4816114"
};

$Object* allocate$bug4816114$3($Class* clazz) {
	return $of($alloc(bug4816114$3));
}

void bug4816114$3::init$($bug4816114* this$0, int32_t val$width, int32_t val$height) {
	$set(this, this$0, this$0);
	this->val$width = val$width;
	this->val$height = val$height;
}

void bug4816114$3::run() {
	$nc(this->this$0->splitPane)->setPreferredSize($$new($Dimension, this->val$width, this->val$height));
	$init($bug4816114);
	$nc($bug4816114::fr)->pack();
}

bug4816114$3::bug4816114$3() {
}

$Class* bug4816114$3::load$($String* name, bool initialize) {
	$loadClass(bug4816114$3, name, initialize, &_bug4816114$3_ClassInfo_, allocate$bug4816114$3);
	return class$;
}

$Class* bug4816114$3::class$ = nullptr;