#include <Test6919629$1.h>

#include <Test6919629.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/lang/ref/WeakReference.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/UIDefaults.h>
#include <jcpp.h>

#undef MAGENTA

using $Test6919629 = ::Test6919629;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $WeakReference = ::java::lang::ref::WeakReference;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JLabel = ::javax::swing::JLabel;
using $UIDefaults = ::javax::swing::UIDefaults;

$FieldInfo _Test6919629$1_FieldInfo_[] = {
	{"this$0", "LTest6919629;", nullptr, $FINAL | $SYNTHETIC, $field(Test6919629$1, this$0)},
	{}
};

$MethodInfo _Test6919629$1_MethodInfo_[] = {
	{"<init>", "(LTest6919629;)V", nullptr, 0, $method(static_cast<void(Test6919629$1::*)($Test6919629*)>(&Test6919629$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Test6919629$1_EnclosingMethodInfo_ = {
	"Test6919629",
	"test",
	"()V"
};

$InnerClassInfo _Test6919629$1_InnerClassesInfo_[] = {
	{"Test6919629$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Test6919629$1_ClassInfo_ = {
	$ACC_SUPER,
	"Test6919629$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_Test6919629$1_FieldInfo_,
	_Test6919629$1_MethodInfo_,
	nullptr,
	&_Test6919629$1_EnclosingMethodInfo_,
	_Test6919629$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Test6919629"
};

$Object* allocate$Test6919629$1($Class* clazz) {
	return $of($alloc(Test6919629$1));
}

void Test6919629$1::init$($Test6919629* this$0) {
	$set(this, this$0, this$0);
}

void Test6919629$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($UIDefaults, d, $new($UIDefaults));
	$init($Color);
	d->put("Label.textForeground"_s, $Color::MAGENTA);
	$var($JLabel, l, $new($JLabel));
	$set(this->this$0, ref, $new($WeakReference, l));
	l->putClientProperty("Nimbus.Overrides"_s, d);
	$set(this->this$0, f, $new($JFrame));
	$nc($($nc(this->this$0->f)->getContentPane()))->add(static_cast<$Component*>(l));
	$nc(this->this$0->f)->pack();
	$nc(this->this$0->f)->setVisible(true);
}

Test6919629$1::Test6919629$1() {
}

$Class* Test6919629$1::load$($String* name, bool initialize) {
	$loadClass(Test6919629$1, name, initialize, &_Test6919629$1_ClassInfo_, allocate$Test6919629$1);
	return class$;
}

$Class* Test6919629$1::class$ = nullptr;