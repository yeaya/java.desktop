#include <Test8003400$2.h>

#include <Test8003400.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Window.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/Error.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTree.h>
#include <javax/swing/JViewport.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $Test8003400 = ::Test8003400;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Rectangle = ::java::awt::Rectangle;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Error = ::java::lang::Error;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JScrollBar = ::javax::swing::JScrollBar;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTree = ::javax::swing::JTree;
using $JViewport = ::javax::swing::JViewport;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$MethodInfo _Test8003400$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Test8003400$2::*)()>(&Test8003400$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Test8003400$2_EnclosingMethodInfo_ = {
	"Test8003400",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _Test8003400$2_InnerClassesInfo_[] = {
	{"Test8003400$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Test8003400$2_ClassInfo_ = {
	$ACC_SUPER,
	"Test8003400$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Test8003400$2_MethodInfo_,
	nullptr,
	&_Test8003400$2_EnclosingMethodInfo_,
	_Test8003400$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Test8003400"
};

$Object* allocate$Test8003400$2($Class* clazz) {
	return $of($alloc(Test8003400$2));
}

void Test8003400$2::init$() {
}

void Test8003400$2::run() {
	$init($Test8003400);
	$var($JTree, tree, $cast($JTree, $nc($($nc($Test8003400::pane)->getViewport()))->getView()));
	$var($Rectangle, inner, $nc(tree)->getRowBounds(tree->getRowCount() - 1));
	$var($Rectangle, outer, $SwingUtilities::convertRectangle(tree, inner, $Test8003400::pane));
	int32_t var$0 = $nc(outer)->y + tree->getRowHeight();
	int32_t heightDifference = var$0 - $nc($($nc($Test8003400::pane)->getVerticalScrollBar()))->getHeight();
	if (nullptr != $System::getProperty("test.src"_s, nullptr)) {
		$nc($Test8003400::frame)->dispose();
		if (heightDifference > 3) {
			$throwNew($Error, $$str({"TEST FAILED: "_s, $$str(heightDifference)}));
		}
	}
}

Test8003400$2::Test8003400$2() {
}

$Class* Test8003400$2::load$($String* name, bool initialize) {
	$loadClass(Test8003400$2, name, initialize, &_Test8003400$2_ClassInfo_, allocate$Test8003400$2);
	return class$;
}

$Class* Test8003400$2::class$ = nullptr;