#include <NimbusGlueTest$2.h>

#include <NimbusGlueTest.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Box.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JToolBar.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE
#undef NORTH

using $NimbusGlueTest = ::NimbusGlueTest;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AbstractButton = ::javax::swing::AbstractButton;
using $Box = ::javax::swing::Box;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JToolBar = ::javax::swing::JToolBar;

$MethodInfo _NimbusGlueTest$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(NimbusGlueTest$2::*)()>(&NimbusGlueTest$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _NimbusGlueTest$2_EnclosingMethodInfo_ = {
	"NimbusGlueTest",
	"createUI",
	"()V"
};

$InnerClassInfo _NimbusGlueTest$2_InnerClassesInfo_[] = {
	{"NimbusGlueTest$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _NimbusGlueTest$2_ClassInfo_ = {
	$ACC_SUPER,
	"NimbusGlueTest$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_NimbusGlueTest$2_MethodInfo_,
	nullptr,
	&_NimbusGlueTest$2_EnclosingMethodInfo_,
	_NimbusGlueTest$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"NimbusGlueTest"
};

$Object* allocate$NimbusGlueTest$2($Class* clazz) {
	return $of($alloc(NimbusGlueTest$2));
}

void NimbusGlueTest$2::init$() {
}

void NimbusGlueTest$2::run() {
	$useLocalCurrentObjectStackCache();
	$init($NimbusGlueTest);
	$assignStatic($NimbusGlueTest::frame, $new($JFrame));
	$assignStatic($NimbusGlueTest::bar, $new($JToolBar));
	$nc($NimbusGlueTest::bar)->add($(static_cast<$Component*>($NimbusGlueTest::createButton(1))));
	$nc($NimbusGlueTest::bar)->add($(static_cast<$Component*>($NimbusGlueTest::createButton(2))));
	$nc($NimbusGlueTest::bar)->add($($Box::createHorizontalGlue()));
	$nc($NimbusGlueTest::bar)->add($(static_cast<$Component*>($NimbusGlueTest::createButton(3))));
	$init($BorderLayout);
	$nc($NimbusGlueTest::frame)->add(static_cast<$Component*>($NimbusGlueTest::bar), $of($BorderLayout::NORTH));
	$nc($NimbusGlueTest::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$nc($NimbusGlueTest::frame)->setSize(600, 400);
	$nc($NimbusGlueTest::frame)->setVisible(true);
}

NimbusGlueTest$2::NimbusGlueTest$2() {
}

$Class* NimbusGlueTest$2::load$($String* name, bool initialize) {
	$loadClass(NimbusGlueTest$2, name, initialize, &_NimbusGlueTest$2_ClassInfo_, allocate$NimbusGlueTest$2);
	return class$;
}

$Class* NimbusGlueTest$2::class$ = nullptr;