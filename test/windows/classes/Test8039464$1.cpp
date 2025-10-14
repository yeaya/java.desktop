#include <Test8039464$1.h>

#include <Test8039464.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Frame.h>
#include <java/awt/Window.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

#undef DISPOSE_ON_CLOSE

using $Test8039464 = ::Test8039464;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Frame = ::java::awt::Frame;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JFrame = ::javax::swing::JFrame;

$MethodInfo _Test8039464$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Test8039464$1::*)()>(&Test8039464$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Test8039464$1_EnclosingMethodInfo_ = {
	"Test8039464",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _Test8039464$1_InnerClassesInfo_[] = {
	{"Test8039464$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Test8039464$1_ClassInfo_ = {
	$ACC_SUPER,
	"Test8039464$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Test8039464$1_MethodInfo_,
	nullptr,
	&_Test8039464$1_EnclosingMethodInfo_,
	_Test8039464$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Test8039464"
};

$Object* allocate$Test8039464$1($Class* clazz) {
	return $of($alloc(Test8039464$1));
}

void Test8039464$1::init$() {
}

void Test8039464$1::run() {
	$var($JFrame, frame, $new($JFrame, "8039464"_s));
	$Test8039464::init(frame);
	frame->setDefaultCloseOperation($JFrame::DISPOSE_ON_CLOSE);
	frame->pack();
	frame->setLocationRelativeTo(nullptr);
	frame->setVisible(true);
}

Test8039464$1::Test8039464$1() {
}

$Class* Test8039464$1::load$($String* name, bool initialize) {
	$loadClass(Test8039464$1, name, initialize, &_Test8039464$1_ClassInfo_, allocate$Test8039464$1);
	return class$;
}

$Class* Test8039464$1::class$ = nullptr;