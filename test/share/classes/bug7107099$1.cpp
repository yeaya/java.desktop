#include <bug7107099$1.h>

#include <bug7107099.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Window.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef SOUTH

using $bug7107099 = ::bug7107099;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTextArea = ::javax::swing::JTextArea;
using $JTextComponent = ::javax::swing::text::JTextComponent;

$MethodInfo _bug7107099$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug7107099$1::*)()>(&bug7107099$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug7107099$1_EnclosingMethodInfo_ = {
	"bug7107099",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug7107099$1_InnerClassesInfo_[] = {
	{"bug7107099$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7107099$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug7107099$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug7107099$1_MethodInfo_,
	nullptr,
	&_bug7107099$1_EnclosingMethodInfo_,
	_bug7107099$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug7107099"
};

$Object* allocate$bug7107099$1($Class* clazz) {
	return $of($alloc(bug7107099$1));
}

void bug7107099$1::init$() {
}

void bug7107099$1::run() {
	$useLocalCurrentObjectStackCache();
	$init($bug7107099);
	$assignStatic($bug7107099::textarea, $new($JTextArea, "before###1###\nbefore###2###\nbefore###3###\nbefore###4###\nbefore###5###\n"_s));
	$assignStatic($bug7107099::scrollPane, $new($JScrollPane, $bug7107099::textarea));
	$nc($bug7107099::scrollPane)->setPreferredSize($$new($Dimension, 100, 50));
	$assignStatic($bug7107099::frame, $new($JFrame));
	$nc($bug7107099::frame)->setLayout($$new($BorderLayout));
	$nc($bug7107099::frame)->setSize(200, 200);
	$init($BorderLayout);
	$nc($bug7107099::frame)->add(static_cast<$Component*>($bug7107099::scrollPane), $of($BorderLayout::SOUTH));
	$nc($bug7107099::frame)->setVisible(true);
}

bug7107099$1::bug7107099$1() {
}

$Class* bug7107099$1::load$($String* name, bool initialize) {
	$loadClass(bug7107099$1, name, initialize, &_bug7107099$1_ClassInfo_, allocate$bug7107099$1);
	return class$;
}

$Class* bug7107099$1::class$ = nullptr;