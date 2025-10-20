#include <bug4514858.h>

#include <bug4514858$1.h>
#include <bug4514858$Test.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Frame.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JSplitPane.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/TitledBorder.h>
#include <jcpp.h>

#undef HORIZONTAL_SPLIT
#undef SOUTH
#undef VERTICAL_SPLIT

using $bug4514858$1 = ::bug4514858$1;
using $bug4514858$Test = ::bug4514858$Test;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Frame = ::java::awt::Frame;
using $Window = ::java::awt::Window;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JSplitPane = ::javax::swing::JSplitPane;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $TitledBorder = ::javax::swing::border::TitledBorder;

$FieldInfo _bug4514858_FieldInfo_[] = {
	{"intructions", "Ljava/lang/String;", nullptr, $STATIC, $staticField(bug4514858, intructions)},
	{"test", "Lbug4514858$Test;", nullptr, $STATIC, $staticField(bug4514858, test)},
	{"fr", "Ljavax/swing/JFrame;", nullptr, 0, $field(bug4514858, fr)},
	{}
};

$MethodInfo _bug4514858_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4514858::*)()>(&bug4514858::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"createAndShowGUI", "()V", nullptr, $PUBLIC},
	{"isSupportedLAF", "(Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(static_cast<bool(bug4514858::*)($String*)>(&bug4514858::isSupportedLAF))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug4514858::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug4514858_InnerClassesInfo_[] = {
	{"bug4514858$Test", "bug4514858", "Test", $STATIC},
	{"bug4514858$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4514858_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug4514858",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	_bug4514858_FieldInfo_,
	_bug4514858_MethodInfo_,
	nullptr,
	nullptr,
	_bug4514858_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug4514858$Test,bug4514858$Test$1,bug4514858$1"
};

$Object* allocate$bug4514858($Class* clazz) {
	return $of($alloc(bug4514858));
}

$String* bug4514858::intructions = nullptr;
$bug4514858$Test* bug4514858::test = nullptr;

void bug4514858::init$() {
}

void bug4514858::main($StringArray* argv) {
	$init(bug4514858);
	$useLocalCurrentObjectStackCache();
	$UIManager::setLookAndFeel($($UIManager::getCrossPlatformLookAndFeelClassName()));
	$SwingUtilities::invokeAndWait($$new($bug4514858$1));
	$nc(bug4514858::test)->waitTestResult();
}

void bug4514858::createAndShowGUI() {
	$useLocalCurrentObjectStackCache();
	$set(this, fr, $new($JFrame, "Test"_s));
	$var($JButton, left2, $new($JButton, "Button 1"_s));
	$var($JButton, left3, $new($JButton, "Button 2"_s));
	$var($JButton, right3, $new($JButton, "Button 3"_s));
	$var($JSplitPane, right2, $new($JSplitPane, $JSplitPane::VERTICAL_SPLIT, left3, right3));
	right2->setBorder($$new($TitledBorder, "JSplitPane 3"_s));
	$var($JSplitPane, left1, $new($JSplitPane, $JSplitPane::HORIZONTAL_SPLIT, left2, right2));
	left1->setBorder($$new($TitledBorder, "JSplitPane 2"_s));
	$var($JButton, left4, $new($JButton, "Button 4"_s));
	$var($JButton, right4, $new($JButton, "Button 5"_s));
	$var($JSplitPane, right1, $new($JSplitPane, $JSplitPane::HORIZONTAL_SPLIT, left4, right4));
	right1->setBorder($$new($TitledBorder, "JSplitPane 4"_s));
	$var($JSplitPane, sp, $new($JSplitPane, $JSplitPane::VERTICAL_SPLIT, left1, right1));
	sp->setBorder($$new($TitledBorder, "JSplitPane 1"_s));
	$nc($($nc(this->fr)->getContentPane()))->add(static_cast<$Component*>(sp));
	$var($JPanel, p, $new($JPanel));
	$var($JButton, metal, $new($JButton, "Metal"_s));
	metal->setActionCommand("Metal"_s);
	metal->setEnabled(isSupportedLAF("javax.swing.plaf.metal.MetalLookAndFeel"_s));
	metal->addActionListener(this);
	p->add(static_cast<$Component*>(metal));
	$var($JButton, motif, $new($JButton, "Motif"_s));
	motif->setActionCommand("Motif"_s);
	motif->setEnabled(isSupportedLAF("com.sun.java.swing.plaf.motif.MotifLookAndFeel"_s));
	motif->addActionListener(this);
	p->add(static_cast<$Component*>(motif));
	$var($JButton, windows, $new($JButton, "Windows"_s));
	windows->setActionCommand("Windows"_s);
	windows->setEnabled(isSupportedLAF("com.sun.java.swing.plaf.windows.WindowsLookAndFeel"_s));
	windows->addActionListener(this);
	p->add(static_cast<$Component*>(windows));
	$init($BorderLayout);
	$nc($($nc(this->fr)->getContentPane()))->add(static_cast<$Component*>(p), $of($BorderLayout::SOUTH));
	$nc(this->fr)->pack();
	$nc(this->fr)->setVisible(true);
	$var($JFrame, instrFrame, $nc(bug4514858::test)->createTestFrame("bug4514858 instructions"_s, nullptr, bug4514858::intructions, 250));
	int32_t var$0 = $nc(this->fr)->getWidth() + 50;
	$nc(instrFrame)->setBounds(var$0, $nc(this->fr)->getHeight(), 600, 400);
	instrFrame->setVisible(true);
}

bool bug4514858::isSupportedLAF($String* str) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		$Class* c = $Class::forName(str);
		$var($LookAndFeel, laf, $cast($LookAndFeel, $nc(c)->newInstance()));
		return $nc(laf)->isSupportedLookAndFeel();
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		return false;
	}
	$shouldNotReachHere();
}

void bug4514858::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($String, s, $nc(e)->getActionCommand());
	if ($nc(s)->equals("Metal"_s)) {
		$assign(s, "javax.swing.plaf.metal.MetalLookAndFeel"_s);
	} else if (s->equals("Motif"_s)) {
		$assign(s, "com.sun.java.swing.plaf.motif.MotifLookAndFeel"_s);
	} else {
		$assign(s, "com.sun.java.swing.plaf.windows.WindowsLookAndFeel"_s);
	}
	try {
		$UIManager::setLookAndFeel(s);
		$SwingUtilities::updateComponentTreeUI(this->fr);
		$nc(this->fr)->pack();
	} catch ($Exception&) {
		$var($Exception, ex, $catch());
		ex->printStackTrace();
		$throwNew($RuntimeException, static_cast<$Throwable*>(ex));
	}
}

void clinit$bug4514858($Class* class$) {
	$assignStatic(bug4514858::intructions, "Test the F6, F8, Ctrl-TAB and Ctrl-Shift-TAB keybinding functionality in JSplitPane\nwith different LookAndFeels (switch LookAndFeel with the buttoms at the bottom of the\nframe \"Test\"):\n\n1. Move focus to the button \"Button 1\" in the frame \"Test\". Then press F6 several times.\nThe focus should cycle between five buttons in order from 1 to 5.\n\n2. Move focus to the button \"Button 2\" in the frame \"Test\". Then press F8 three times.\nThe splitters of the splitpanes should be highlited in order:\n\"JSplitPane 3\", \"JSplitPane 2\", \"JSplitPane 1\".\n\n3. Move focus to the button \"Button 2\" in the frame \"Test\". Press Ctrl-TAB.\nThe focus should go to the \"Button 4\". Then press Ctrl-TAB again.\nThe focus should go to the first enabled button at the bottom of frame.\n\n4. Move focus to the button \"Button 4\" in the frame \"Test\". Press Ctrl-Shift-TAB three times.\nThe focus should go through the button \"Button 3\", then \"Button 1\", then to the last\nenabled button at the bottom of frame."_s);
	$assignStatic(bug4514858::test, $new($bug4514858$Test));
}

bug4514858::bug4514858() {
}

$Class* bug4514858::load$($String* name, bool initialize) {
	$loadClass(bug4514858, name, initialize, &_bug4514858_ClassInfo_, clinit$bug4514858, allocate$bug4514858);
	return class$;
}

$Class* bug4514858::class$ = nullptr;