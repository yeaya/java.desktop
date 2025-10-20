#include <bug8034955$1.h>

#include <bug8034955.h>
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

using $bug8034955 = ::bug8034955;
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

$MethodInfo _bug8034955$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug8034955$1::*)()>(&bug8034955$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug8034955$1_EnclosingMethodInfo_ = {
	"bug8034955",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug8034955$1_InnerClassesInfo_[] = {
	{"bug8034955$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8034955$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug8034955$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug8034955$1_MethodInfo_,
	nullptr,
	&_bug8034955$1_EnclosingMethodInfo_,
	_bug8034955$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8034955"
};

$Object* allocate$bug8034955$1($Class* clazz) {
	return $of($alloc(bug8034955$1));
}

void bug8034955$1::init$() {
}

void bug8034955$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($JFrame, frame, $new($JFrame));
	$nc($(frame->getContentPane()))->add(static_cast<$Component*>($$new($JLabel, "<html>a<title>"_s)));
	frame->pack();
	frame->setVisible(true);
}

bug8034955$1::bug8034955$1() {
}

$Class* bug8034955$1::load$($String* name, bool initialize) {
	$loadClass(bug8034955$1, name, initialize, &_bug8034955$1_ClassInfo_, allocate$bug8034955$1);
	return class$;
}

$Class* bug8034955$1::class$ = nullptr;