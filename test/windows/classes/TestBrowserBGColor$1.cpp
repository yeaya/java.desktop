#include <TestBrowserBGColor$1.h>

#include <TestBrowserBGColor.h>
#include <java/awt/Window.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $TestBrowserBGColor = ::TestBrowserBGColor;
using $Window = ::java::awt::Window;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _TestBrowserBGColor$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TestBrowserBGColor$1::*)()>(&TestBrowserBGColor$1::init$))},
	{"windowClosing", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TestBrowserBGColor$1_EnclosingMethodInfo_ = {
	"TestBrowserBGColor",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _TestBrowserBGColor$1_InnerClassesInfo_[] = {
	{"TestBrowserBGColor$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestBrowserBGColor$1_ClassInfo_ = {
	$ACC_SUPER,
	"TestBrowserBGColor$1",
	"java.awt.event.WindowAdapter",
	nullptr,
	nullptr,
	_TestBrowserBGColor$1_MethodInfo_,
	nullptr,
	&_TestBrowserBGColor$1_EnclosingMethodInfo_,
	_TestBrowserBGColor$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestBrowserBGColor"
};

$Object* allocate$TestBrowserBGColor$1($Class* clazz) {
	return $of($alloc(TestBrowserBGColor$1));
}

void TestBrowserBGColor$1::init$() {
	$WindowAdapter::init$();
}

void TestBrowserBGColor$1::windowClosing($WindowEvent* e) {
	$init($TestBrowserBGColor);
	$nc($TestBrowserBGColor::b)->dispose();
	$assignStatic($TestBrowserBGColor::b, nullptr);
}

TestBrowserBGColor$1::TestBrowserBGColor$1() {
}

$Class* TestBrowserBGColor$1::load$($String* name, bool initialize) {
	$loadClass(TestBrowserBGColor$1, name, initialize, &_TestBrowserBGColor$1_ClassInfo_, allocate$TestBrowserBGColor$1);
	return class$;
}

$Class* TestBrowserBGColor$1::class$ = nullptr;