#include <LastNodeLowerHalfDrop$1.h>

#include <LastNodeLowerHalfDrop.h>
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
#include <javax/swing/JScrollPane.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE

using $LastNodeLowerHalfDrop = ::LastNodeLowerHalfDrop;
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
using $JScrollPane = ::javax::swing::JScrollPane;

$MethodInfo _LastNodeLowerHalfDrop$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(LastNodeLowerHalfDrop$1::*)()>(&LastNodeLowerHalfDrop$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _LastNodeLowerHalfDrop$1_EnclosingMethodInfo_ = {
	"LastNodeLowerHalfDrop",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _LastNodeLowerHalfDrop$1_InnerClassesInfo_[] = {
	{"LastNodeLowerHalfDrop$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _LastNodeLowerHalfDrop$1_ClassInfo_ = {
	$ACC_SUPER,
	"LastNodeLowerHalfDrop$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_LastNodeLowerHalfDrop$1_MethodInfo_,
	nullptr,
	&_LastNodeLowerHalfDrop$1_EnclosingMethodInfo_,
	_LastNodeLowerHalfDrop$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"LastNodeLowerHalfDrop"
};

$Object* allocate$LastNodeLowerHalfDrop$1($Class* clazz) {
	return $of($alloc(LastNodeLowerHalfDrop$1));
}

void LastNodeLowerHalfDrop$1::init$() {
}

void LastNodeLowerHalfDrop$1::run() {
	$init($LastNodeLowerHalfDrop);
	$assignStatic($LastNodeLowerHalfDrop::f, $new($JFrame));
	$nc($LastNodeLowerHalfDrop::f)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$nc($LastNodeLowerHalfDrop::f)->add($(static_cast<$Component*>($$new($LastNodeLowerHalfDrop)->getContent())));
	$nc($LastNodeLowerHalfDrop::f)->setSize(400, 400);
	$nc($LastNodeLowerHalfDrop::f)->setLocationRelativeTo(nullptr);
	$nc($LastNodeLowerHalfDrop::f)->setVisible(true);
}

LastNodeLowerHalfDrop$1::LastNodeLowerHalfDrop$1() {
}

$Class* LastNodeLowerHalfDrop$1::load$($String* name, bool initialize) {
	$loadClass(LastNodeLowerHalfDrop$1, name, initialize, &_LastNodeLowerHalfDrop$1_ClassInfo_, allocate$LastNodeLowerHalfDrop$1);
	return class$;
}

$Class* LastNodeLowerHalfDrop$1::class$ = nullptr;