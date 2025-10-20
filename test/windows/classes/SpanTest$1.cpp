#include <SpanTest$1.h>

#include <SpanTest.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLabel.h>
#include <jcpp.h>

#undef CENTER

using $SpanTest = ::SpanTest;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JLabel = ::javax::swing::JLabel;

$MethodInfo _SpanTest$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SpanTest$1::*)()>(&SpanTest$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SpanTest$1_EnclosingMethodInfo_ = {
	"SpanTest",
	"spanTest",
	"()V"
};

$InnerClassInfo _SpanTest$1_InnerClassesInfo_[] = {
	{"SpanTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SpanTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"SpanTest$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_SpanTest$1_MethodInfo_,
	nullptr,
	&_SpanTest$1_EnclosingMethodInfo_,
	_SpanTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"SpanTest"
};

$Object* allocate$SpanTest$1($Class* clazz) {
	return $of($alloc(SpanTest$1));
}

void SpanTest$1::init$() {
}

void SpanTest$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($JLabel, label, $new($JLabel, "<html><span>A few words to get started before the bug</span><span>overlapping text</span></html>"_s));
	$init($SpanTest);
	$assignStatic($SpanTest::f, $new($JFrame, ""_s));
	$init($BorderLayout);
	$nc($($nc($SpanTest::f)->getContentPane()))->add(static_cast<$Component*>(label), $of($BorderLayout::CENTER));
	$nc($SpanTest::f)->setSize(500, 500);
	$nc($SpanTest::f)->setVisible(true);
}

SpanTest$1::SpanTest$1() {
}

$Class* SpanTest$1::load$($String* name, bool initialize) {
	$loadClass(SpanTest$1, name, initialize, &_SpanTest$1_ClassInfo_, allocate$SpanTest$1);
	return class$;
}

$Class* SpanTest$1::class$ = nullptr;