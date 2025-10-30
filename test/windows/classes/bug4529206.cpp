#include <bug4529206.h>

#include <bug4529206$1.h>
#include <bug4529206$2.h>
#include <bug4529206$3.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Frame.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/lang/Runnable.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/JToolBar.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/WindowConstants.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/ToolBarUI.h>
#include <javax/swing/plaf/basic/BasicToolBarUI.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE
#undef NORTH

using $bug4529206$1 = ::bug4529206$1;
using $bug4529206$2 = ::bug4529206$2;
using $bug4529206$3 = ::bug4529206$3;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Frame = ::java::awt::Frame;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JTextField = ::javax::swing::JTextField;
using $JToolBar = ::javax::swing::JToolBar;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $WindowConstants = ::javax::swing::WindowConstants;
using $ToolBarUI = ::javax::swing::plaf::ToolBarUI;
using $BasicToolBarUI = ::javax::swing::plaf::basic::BasicToolBarUI;
using $JTextComponent = ::javax::swing::text::JTextComponent;

$FieldInfo _bug4529206_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, $STATIC, $staticField(bug4529206, frame)},
	{"jToolBar1", "Ljavax/swing/JToolBar;", nullptr, $STATIC, $staticField(bug4529206, jToolBar1)},
	{}
};

$MethodInfo _bug4529206_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4529206::*)()>(&bug4529206::init$))},
	{"buttonPressed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(bug4529206::*)($ActionEvent*)>(&bug4529206::buttonPressed))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug4529206::main)), "java.lang.Exception"},
	{"makeToolbarFloat", "()V", nullptr, $PRIVATE, $method(static_cast<void(bug4529206::*)()>(&bug4529206::makeToolbarFloat))},
	{}
};

$InnerClassInfo _bug4529206_InnerClassesInfo_[] = {
	{"bug4529206$3", nullptr, nullptr, 0},
	{"bug4529206$2", nullptr, nullptr, 0},
	{"bug4529206$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4529206_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug4529206",
	"javax.swing.JFrame",
	nullptr,
	_bug4529206_FieldInfo_,
	_bug4529206_MethodInfo_,
	nullptr,
	nullptr,
	_bug4529206_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug4529206$3,bug4529206$2,bug4529206$1"
};

$Object* allocate$bug4529206($Class* clazz) {
	return $of($alloc(bug4529206));
}

$JFrame* bug4529206::frame = nullptr;
$JToolBar* bug4529206::jToolBar1 = nullptr;

void bug4529206::init$() {
	$useLocalCurrentObjectStackCache();
	$JFrame::init$();
	setDefaultCloseOperation($WindowConstants::EXIT_ON_CLOSE);
	$var($JPanel, jPanFrame, $cast($JPanel, this->getContentPane()));
	$nc(jPanFrame)->setLayout($$new($BorderLayout));
	this->setSize($$new($Dimension, 200, 100));
	this->setLocation(125, 75);
	this->setTitle("Test Floating Toolbar"_s);
	$assignStatic(bug4529206::jToolBar1, $new($JToolBar));
	$var($JButton, jButton1, $new($JButton, "Float"_s));
	$init($BorderLayout);
	jPanFrame->add(static_cast<$Component*>(bug4529206::jToolBar1), $of($BorderLayout::NORTH));
	$var($JTextField, tf, $new($JTextField, "click here"_s));
	jPanFrame->add(static_cast<$Component*>(tf));
	$nc(bug4529206::jToolBar1)->add(static_cast<$Component*>(jButton1), ($Object*)nullptr);
	jButton1->addActionListener($$new($bug4529206$1, this));
	makeToolbarFloat();
	setVisible(true);
}

void bug4529206::makeToolbarFloat() {
	$useLocalCurrentObjectStackCache();
	$var($BasicToolBarUI, ui, $cast($BasicToolBarUI, $cast($ToolBarUI, $nc(bug4529206::jToolBar1)->getUI())));
	if (!$nc(ui)->isFloating()) {
		ui->setFloatingLocation(100, 100);
		ui->setFloating(true, $($nc(bug4529206::jToolBar1)->getLocation()));
	}
}

void bug4529206::buttonPressed($ActionEvent* e) {
	makeToolbarFloat();
}

void bug4529206::main($StringArray* args) {
	$init(bug4529206);
	$useLocalCurrentObjectStackCache();
	$SwingUtilities::invokeAndWait($$new($bug4529206$2));
	$var($Robot, robot, $new($Robot));
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait($$new($bug4529206$3));
}

bug4529206::bug4529206() {
}

$Class* bug4529206::load$($String* name, bool initialize) {
	$loadClass(bug4529206, name, initialize, &_bug4529206_ClassInfo_, allocate$bug4529206);
	return class$;
}

$Class* bug4529206::class$ = nullptr;