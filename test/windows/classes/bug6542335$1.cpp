#include <bug6542335$1.h>

#include <bug6542335$MyScrollBarUI.h>
#include <bug6542335.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Window.h>
#include <javax/swing/BoundedRangeModel.h>
#include <javax/swing/DefaultBoundedRangeModel.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/plaf/ScrollBarUI.h>
#include <javax/swing/plaf/basic/BasicScrollBarUI.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE
#undef NORTH

using $bug6542335 = ::bug6542335;
using $bug6542335$MyScrollBarUI = ::bug6542335$MyScrollBarUI;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
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
using $JScrollBar = ::javax::swing::JScrollBar;
using $ScrollBarUI = ::javax::swing::plaf::ScrollBarUI;
using $BasicScrollBarUI = ::javax::swing::plaf::basic::BasicScrollBarUI;

$MethodInfo _bug6542335$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6542335$1::*)()>(&bug6542335$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6542335$1_EnclosingMethodInfo_ = {
	"bug6542335",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6542335$1_InnerClassesInfo_[] = {
	{"bug6542335$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6542335$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6542335$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6542335$1_MethodInfo_,
	nullptr,
	&_bug6542335$1_EnclosingMethodInfo_,
	_bug6542335$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6542335"
};

$Object* allocate$bug6542335$1($Class* clazz) {
	return $of($alloc(bug6542335$1));
}

void bug6542335$1::init$() {
}

void bug6542335$1::run() {
	$useLocalCurrentObjectStackCache();
	$init($bug6542335);
	$assignStatic($bug6542335::frame, $new($JFrame, "bug6542335"_s));
	$nc($bug6542335::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$assignStatic($bug6542335::sb, $new($JScrollBar, 0, 0, 1, 0, 1));
	$assignStatic($bug6542335::ui, $new($bug6542335$MyScrollBarUI));
	$nc($bug6542335::sb)->setUI(static_cast<$ScrollBarUI*>($bug6542335::ui));
	$nc($bug6542335::sb)->setPreferredSize($$new($Dimension, 200, 17));
	$var($DefaultBoundedRangeModel, rangeModel, $new($DefaultBoundedRangeModel));
	rangeModel->setMaximum(100);
	rangeModel->setMinimum(0);
	rangeModel->setExtent(50);
	rangeModel->setValue(50);
	$nc($bug6542335::sb)->setModel(rangeModel);
	$init($BorderLayout);
	$nc($bug6542335::frame)->add(static_cast<$Component*>($bug6542335::sb), $of($BorderLayout::NORTH));
	$nc($bug6542335::frame)->setSize(200, 100);
	$nc($bug6542335::frame)->setVisible(true);
}

bug6542335$1::bug6542335$1() {
}

$Class* bug6542335$1::load$($String* name, bool initialize) {
	$loadClass(bug6542335$1, name, initialize, &_bug6542335$1_ClassInfo_, allocate$bug6542335$1);
	return class$;
}

$Class* bug6542335$1::class$ = nullptr;