#include <bug4128979.h>

#include <bug4128979$1.h>
#include <java/applet/Applet.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Panel.h>
#include <java/awt/Window.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/BorderFactory.h>
#include <javax/swing/BoxLayout.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JApplet.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JOptionPane.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JToggleButton.h>
#include <javax/swing/JToolBar.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <javax/swing/WindowConstants.h>
#include <javax/swing/border/Border.h>
#include <jcpp.h>

#undef CENTER
#undef ERROR_MESSAGE
#undef EXIT_ON_CLOSE
#undef RIGHT_TO_LEFT
#undef Y_AXIS

using $bug4128979$1 = ::bug4128979$1;
using $Applet = ::java::applet::Applet;
using $BorderLayout = ::java::awt::BorderLayout;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $FlowLayout = ::java::awt::FlowLayout;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Panel = ::java::awt::Panel;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $AbstractButton = ::javax::swing::AbstractButton;
using $BorderFactory = ::javax::swing::BorderFactory;
using $BoxLayout = ::javax::swing::BoxLayout;
using $Icon = ::javax::swing::Icon;
using $JApplet = ::javax::swing::JApplet;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JLabel = ::javax::swing::JLabel;
using $JOptionPane = ::javax::swing::JOptionPane;
using $JPanel = ::javax::swing::JPanel;
using $JToggleButton = ::javax::swing::JToggleButton;
using $JToolBar = ::javax::swing::JToolBar;
using $UIManager = ::javax::swing::UIManager;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;
using $WindowConstants = ::javax::swing::WindowConstants;
using $Border = ::javax::swing::border::Border;

$MethodInfo _bug4128979_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4128979::*)()>(&bug4128979::init$))},
	{"addButtons", "(Ljava/awt/Container;)V", nullptr, $STATIC, $method(static_cast<void(*)($Container*)>(&bug4128979::addButtons))},
	{"init", "()V", nullptr, $PUBLIC},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug4128979::main))},
	{}
};

$InnerClassInfo _bug4128979_InnerClassesInfo_[] = {
	{"bug4128979$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4128979_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug4128979",
	"javax.swing.JApplet",
	nullptr,
	nullptr,
	_bug4128979_MethodInfo_,
	nullptr,
	nullptr,
	_bug4128979_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug4128979$1"
};

$Object* allocate$bug4128979($Class* clazz) {
	return $of($alloc(bug4128979));
}

void bug4128979::init$() {
	$JApplet::init$();
}

void bug4128979::main($StringArray* args) {
	$init(bug4128979);
	$useLocalCurrentObjectStackCache();
	$var($JApplet, applet, $new(bug4128979));
	applet->init();
	applet->start();
	$var($JFrame, frame, $new($JFrame, "Test window"_s));
	frame->setDefaultCloseOperation($WindowConstants::EXIT_ON_CLOSE);
	frame->setLayout($$new($BorderLayout));
	$init($BorderLayout);
	frame->add(static_cast<$Component*>(applet), $of($BorderLayout::CENTER));
	frame->setSize(600, 240);
	frame->setVisible(true);
}

void bug4128979::init() {
	$useLocalCurrentObjectStackCache();
	try {
		$UIManager::setLookAndFeel("com.sun.java.swing.plaf.windows.WindowsClassicLookAndFeel"_s);
	} catch ($UnsupportedLookAndFeelException& e) {
		$JOptionPane::showMessageDialog(this, "This test requires Windows look and feel, so just press Pass\n as  this look and feel is unsupported on this platform."_s, "Unsupported LF"_s, $JOptionPane::ERROR_MESSAGE);
		return;
	} catch ($Exception& e) {
		$throwNew($RuntimeException, "Couldn\'t set look and feel"_s);
	}
	setLayout($$new($FlowLayout));
	$var($JPanel, p, $new($JPanel));
	p->setLayout($$new($BoxLayout, p, $BoxLayout::Y_AXIS));
	$var($JPanel, p1, $new($JPanel));
	addButtons(p1);
	p->add(static_cast<$Component*>(p1));
	$var($JToolBar, tb1, $new($JToolBar));
	addButtons(tb1);
	p->add(static_cast<$Component*>(tb1));
	$var($JToolBar, tb2, $new($JToolBar));
	tb2->setRollover(true);
	addButtons(tb2);
	p->add(static_cast<$Component*>(tb2));
	$var($JLabel, label, $new($JLabel, "ToggleButton.highlight color: "_s));
	$init($ComponentOrientation);
	label->setComponentOrientation($ComponentOrientation::RIGHT_TO_LEFT);
	label->setIcon($$new($bug4128979$1, this));
	add(static_cast<$Component*>(p));
	add(static_cast<$Component*>(label));
}

void bug4128979::addButtons($Container* c) {
	$init(bug4128979);
	$useLocalCurrentObjectStackCache();
	$nc(c)->setLayout($$new($FlowLayout));
	c->add(static_cast<$Component*>($$new($JToggleButton, "DefaultBorder"_s)));
	$var($JToggleButton, cbut, $new($JToggleButton, "DefaultBorder"_s));
	$init($Color);
	cbut->setBackground($Color::red);
	c->add(static_cast<$Component*>(cbut));
	$assign(cbut, $new($JToggleButton, "DefaultBorder"_s));
	cbut->setBackground($Color::green);
	c->add(static_cast<$Component*>(cbut));
	$assign(cbut, $new($JToggleButton, "DefaultBorder"_s));
	cbut->setBackground($Color::blue);
	c->add(static_cast<$Component*>(cbut));
	$var($JToggleButton, but3, $new($JToggleButton, "LineBorder"_s));
	but3->setBorder($($BorderFactory::createLineBorder($Color::red)));
	c->add(static_cast<$Component*>(but3));
	$var($JToggleButton, but4, $new($JToggleButton, "null border"_s));
	but4->setBorder(nullptr);
	c->add(static_cast<$Component*>(but4));
}

bug4128979::bug4128979() {
}

$Class* bug4128979::load$($String* name, bool initialize) {
	$loadClass(bug4128979, name, initialize, &_bug4128979_ClassInfo_, allocate$bug4128979);
	return class$;
}

$Class* bug4128979::class$ = nullptr;