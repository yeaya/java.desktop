#include <ComponentTest.h>

#include <ComponentTest$1.h>
#include <ComponentTest$2.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JCheckBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JRadioButton.h>
#include <javax/swing/JToggleButton.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE

using $ComponentTest$1 = ::ComponentTest$1;
using $ComponentTest$2 = ::ComponentTest$2;
using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $FlowLayout = ::java::awt::FlowLayout;
using $LayoutManager = ::java::awt::LayoutManager;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;
using $JCheckBox = ::javax::swing::JCheckBox;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JLabel = ::javax::swing::JLabel;
using $JRadioButton = ::javax::swing::JRadioButton;
using $JToggleButton = ::javax::swing::JToggleButton;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;

$FieldInfo _ComponentTest_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(ComponentTest, frame)},
	{}
};

$MethodInfo _ComponentTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ComponentTest::*)()>(&ComponentTest::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ComponentTest::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _ComponentTest_InnerClassesInfo_[] = {
	{"ComponentTest$2", nullptr, nullptr, 0},
	{"ComponentTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ComponentTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ComponentTest",
	"javax.swing.JFrame",
	nullptr,
	_ComponentTest_FieldInfo_,
	_ComponentTest_MethodInfo_,
	nullptr,
	nullptr,
	_ComponentTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"ComponentTest$2,ComponentTest$1"
};

$Object* allocate$ComponentTest($Class* clazz) {
	return $of($alloc(ComponentTest));
}

$JFrame* ComponentTest::frame = nullptr;

void ComponentTest::init$() {
	$JFrame::init$();
	setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	setLayout($$new($FlowLayout));
	add(static_cast<$Component*>($$new($JButton, "JButton"_s)));
	add(static_cast<$Component*>($$new($JToggleButton, "JToggleButton"_s)));
	add(static_cast<$Component*>($$new($JCheckBox, "JCheckBox"_s)));
	add(static_cast<$Component*>($$new($JRadioButton, "JRadioButton"_s)));
	add(static_cast<$Component*>($$new($JLabel, "JLabel"_s)));
	pack();
	setLocationRelativeTo(nullptr);
}

void ComponentTest::main($StringArray* args) {
	$init(ComponentTest);
	$var($Robot, robot, $new($Robot));
	$SwingUtilities::invokeAndWait($$new($ComponentTest$1));
	robot->waitForIdle();
	$var($UIManager$LookAndFeelInfoArray, lafs, $UIManager::getInstalledLookAndFeels());
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, lafs);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, laf, arr$->get(i$));
			{
				$SwingUtilities::invokeAndWait($$new($ComponentTest$2, laf));
				robot->waitForIdle();
			}
		}
	}
}

ComponentTest::ComponentTest() {
}

$Class* ComponentTest::load$($String* name, bool initialize) {
	$loadClass(ComponentTest, name, initialize, &_ComponentTest_ClassInfo_, allocate$ComponentTest);
	return class$;
}

$Class* ComponentTest::class$ = nullptr;