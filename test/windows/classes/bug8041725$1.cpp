#include <bug8041725$1.h>

#include <bug8041725.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JList.h>
#include <jcpp.h>

using $bug8041725 = ::bug8041725;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Window = ::java::awt::Window;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JList = ::javax::swing::JList;

$MethodInfo _bug8041725$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug8041725$1::*)()>(&bug8041725$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug8041725$1_EnclosingMethodInfo_ = {
	"bug8041725",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug8041725$1_InnerClassesInfo_[] = {
	{"bug8041725$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8041725$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug8041725$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug8041725$1_MethodInfo_,
	nullptr,
	&_bug8041725$1_EnclosingMethodInfo_,
	_bug8041725$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8041725"
};

$Object* allocate$bug8041725$1($Class* clazz) {
	return $of($alloc(bug8041725$1));
}

void bug8041725$1::init$() {
}

void bug8041725$1::run() {
	$var($JFrame, frame, $new($JFrame, "bug8041725"_s));
	frame->setSize(200, 200);
	$var($JList, list, $new($JList, $$new($StringArray, {
		"Item1"_s,
		"Item2"_s,
		"Item3"_s
	})));
	$nc($(frame->getContentPane()))->add(static_cast<$Component*>(list));
	frame->pack();
	frame->setVisible(true);
	$init($System);
	$nc($System::err)->println("Test #1: No items are selected, list is enabled."_s);
	$bug8041725::testSelectionColors(list);
	$nc($System::err)->println("Test #2: No items are selected, list is disabled."_s);
	list->setEnabled(false);
	$bug8041725::testSelectionColors(list);
	$nc($System::err)->println("Test #3: One item is selected, list is disabled."_s);
	list->setSelectedIndex(0);
	$bug8041725::testSelectionColors(list);
	$nc($System::err)->println("Test #4: One item is selected, list is enabled."_s);
	list->setEnabled(true);
	$bug8041725::testSelectionColors(list);
	frame->dispose();
}

bug8041725$1::bug8041725$1() {
}

$Class* bug8041725$1::load$($String* name, bool initialize) {
	$loadClass(bug8041725$1, name, initialize, &_bug8041725$1_ClassInfo_, allocate$bug8041725$1);
	return class$;
}

$Class* bug8041725$1::class$ = nullptr;