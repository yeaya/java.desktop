#include <bug6848475$1.h>

#include <bug6848475$1$1.h>
#include <bug6848475.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <javax/swing/BoundedRangeModel.h>
#include <javax/swing/DefaultBoundedRangeModel.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JSlider.h>
#include <jcpp.h>

using $bug6848475 = ::bug6848475;
using $bug6848475$1$1 = ::bug6848475$1$1;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $BoundedRangeModel = ::javax::swing::BoundedRangeModel;
using $DefaultBoundedRangeModel = ::javax::swing::DefaultBoundedRangeModel;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JSlider = ::javax::swing::JSlider;

$MethodInfo _bug6848475$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6848475$1::*)()>(&bug6848475$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6848475$1_EnclosingMethodInfo_ = {
	"bug6848475",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6848475$1_InnerClassesInfo_[] = {
	{"bug6848475$1", nullptr, nullptr, 0},
	{"bug6848475$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6848475$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6848475$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6848475$1_MethodInfo_,
	nullptr,
	&_bug6848475$1_EnclosingMethodInfo_,
	_bug6848475$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6848475"
};

$Object* allocate$bug6848475$1($Class* clazz) {
	return $of($alloc(bug6848475$1));
}

void bug6848475$1::init$() {
}

void bug6848475$1::run() {
	$useLocalCurrentObjectStackCache();
	$init($bug6848475);
	$assignStatic($bug6848475::frame, $new($JFrame));
	$var($DefaultBoundedRangeModel, sliderModel, $new($bug6848475$1$1, this));
	$assignStatic($bug6848475::slider, $new($JSlider, static_cast<$BoundedRangeModel*>(sliderModel)));
	$nc($($nc($bug6848475::frame)->getContentPane()))->add(static_cast<$Component*>($bug6848475::slider));
	$nc($bug6848475::frame)->pack();
	$nc($bug6848475::frame)->setVisible(true);
}

bug6848475$1::bug6848475$1() {
}

$Class* bug6848475$1::load$($String* name, bool initialize) {
	$loadClass(bug6848475$1, name, initialize, &_bug6848475$1_ClassInfo_, allocate$bug6848475$1);
	return class$;
}

$Class* bug6848475$1::class$ = nullptr;