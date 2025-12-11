#include <TestPopupMenu$TestInternalFrame.h>

#include <TestPopupMenu.h>
#include <java/awt/Color.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JInternalFrame.h>
#include <jcpp.h>

#undef GRAY

using $TestPopupMenu = ::TestPopupMenu;
using $Color = ::java::awt::Color;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JInternalFrame = ::javax::swing::JInternalFrame;

$FieldInfo _TestPopupMenu$TestInternalFrame_FieldInfo_[] = {
	{"this$0", "LTestPopupMenu;", nullptr, $FINAL | $SYNTHETIC, $field(TestPopupMenu$TestInternalFrame, this$0)},
	{}
};

$MethodInfo _TestPopupMenu$TestInternalFrame_MethodInfo_[] = {
	{"<init>", "(LTestPopupMenu;)V", nullptr, $PUBLIC, $method(static_cast<void(TestPopupMenu$TestInternalFrame::*)($TestPopupMenu*)>(&TestPopupMenu$TestInternalFrame::init$))},
	{"jbInit", "()V", nullptr, $PRIVATE, $method(static_cast<void(TestPopupMenu$TestInternalFrame::*)()>(&TestPopupMenu$TestInternalFrame::jbInit))},
	{}
};

$InnerClassInfo _TestPopupMenu$TestInternalFrame_InnerClassesInfo_[] = {
	{"TestPopupMenu$TestInternalFrame", "TestPopupMenu", "TestInternalFrame", 0},
	{}
};

$ClassInfo _TestPopupMenu$TestInternalFrame_ClassInfo_ = {
	$ACC_SUPER,
	"TestPopupMenu$TestInternalFrame",
	"javax.swing.JInternalFrame",
	nullptr,
	_TestPopupMenu$TestInternalFrame_FieldInfo_,
	_TestPopupMenu$TestInternalFrame_MethodInfo_,
	nullptr,
	nullptr,
	_TestPopupMenu$TestInternalFrame_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestPopupMenu"
};

$Object* allocate$TestPopupMenu$TestInternalFrame($Class* clazz) {
	return $of($alloc(TestPopupMenu$TestInternalFrame));
}

void TestPopupMenu$TestInternalFrame::init$($TestPopupMenu* this$0) {
	$set(this, this$0, this$0);
	$JInternalFrame::init$();
	jbInit();
}

void TestPopupMenu$TestInternalFrame::jbInit() {
	$useLocalCurrentObjectStackCache();
	setTitle("Test Internal Frame"_s);
	$init($Color);
	$nc($(getContentPane()))->setBackground($Color::GRAY);
	setMaximizable(true);
	setClosable(true);
	setMinimumSize($$new($Dimension, 500, 300));
	setSize(500, 300);
}

TestPopupMenu$TestInternalFrame::TestPopupMenu$TestInternalFrame() {
}

$Class* TestPopupMenu$TestInternalFrame::load$($String* name, bool initialize) {
	$loadClass(TestPopupMenu$TestInternalFrame, name, initialize, &_TestPopupMenu$TestInternalFrame_ClassInfo_, allocate$TestPopupMenu$TestInternalFrame);
	return class$;
}

$Class* TestPopupMenu$TestInternalFrame::class$ = nullptr;