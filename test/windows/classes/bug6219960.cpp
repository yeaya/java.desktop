#include <bug6219960.h>

#include <java/awt/AWTException.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Frame.h>
#include <java/awt/GridLayout.h>
#include <java/awt/IllegalComponentStateException.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/InputEvent.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JLayeredPane.h>
#include <javax/swing/JOptionPane.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTable.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/ToolTipManager.h>
#include <javax/swing/table/AbstractTableModel.h>
#include <javax/swing/table/DefaultTableModel.h>
#include <javax/swing/table/TableModel.h>
#include <jcpp.h>

#undef BUTTON1_MASK
#undef DISPOSE_ON_CLOSE
#undef EXIT_ON_CLOSE
#undef PLAIN_MESSAGE
#undef QUESTION

using $AWTException = ::java::awt::AWTException;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Frame = ::java::awt::Frame;
using $GridLayout = ::java::awt::GridLayout;
using $IllegalComponentStateException = ::java::awt::IllegalComponentStateException;
using $LayoutManager = ::java::awt::LayoutManager;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $InputEvent = ::java::awt::event::InputEvent;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JDesktopPane = ::javax::swing::JDesktopPane;
using $JFrame = ::javax::swing::JFrame;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JLayeredPane = ::javax::swing::JLayeredPane;
using $JOptionPane = ::javax::swing::JOptionPane;
using $JPanel = ::javax::swing::JPanel;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTable = ::javax::swing::JTable;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $ToolTipManager = ::javax::swing::ToolTipManager;
using $AbstractTableModel = ::javax::swing::table::AbstractTableModel;
using $DefaultTableModel = ::javax::swing::table::DefaultTableModel;
using $TableModel = ::javax::swing::table::TableModel;

class bug6219960$$Lambda$createAndShowGUI : public $Runnable {
	$class(bug6219960$$Lambda$createAndShowGUI, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug6219960::createAndShowGUI();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug6219960$$Lambda$createAndShowGUI>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug6219960$$Lambda$createAndShowGUI::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6219960$$Lambda$createAndShowGUI::*)()>(&bug6219960$$Lambda$createAndShowGUI::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug6219960$$Lambda$createAndShowGUI::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug6219960$$Lambda$createAndShowGUI",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug6219960$$Lambda$createAndShowGUI::load$($String* name, bool initialize) {
	$loadClass(bug6219960$$Lambda$createAndShowGUI, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug6219960$$Lambda$createAndShowGUI::class$ = nullptr;

class bug6219960$$Lambda$lambda$showModal$0$1 : public $Runnable {
	$class(bug6219960$$Lambda$lambda$showModal$0$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug6219960::lambda$showModal$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug6219960$$Lambda$lambda$showModal$0$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug6219960$$Lambda$lambda$showModal$0$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6219960$$Lambda$lambda$showModal$0$1::*)()>(&bug6219960$$Lambda$lambda$showModal$0$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug6219960$$Lambda$lambda$showModal$0$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug6219960$$Lambda$lambda$showModal$0$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug6219960$$Lambda$lambda$showModal$0$1::load$($String* name, bool initialize) {
	$loadClass(bug6219960$$Lambda$lambda$showModal$0$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug6219960$$Lambda$lambda$showModal$0$1::class$ = nullptr;

class bug6219960$$Lambda$lambda$showModal$1$2 : public $Runnable {
	$class(bug6219960$$Lambda$lambda$showModal$1$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$($String* msg) {
		$set(this, msg, msg);
	}
	virtual void run() override {
		bug6219960::lambda$showModal$1(msg);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug6219960$$Lambda$lambda$showModal$1$2>());
	}
	$String* msg = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo bug6219960$$Lambda$lambda$showModal$1$2::fieldInfos[2] = {
	{"msg", "Ljava/lang/String;", nullptr, $PUBLIC, $field(bug6219960$$Lambda$lambda$showModal$1$2, msg)},
	{}
};
$MethodInfo bug6219960$$Lambda$lambda$showModal$1$2::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(bug6219960$$Lambda$lambda$showModal$1$2::*)($String*)>(&bug6219960$$Lambda$lambda$showModal$1$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug6219960$$Lambda$lambda$showModal$1$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug6219960$$Lambda$lambda$showModal$1$2",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* bug6219960$$Lambda$lambda$showModal$1$2::load$($String* name, bool initialize) {
	$loadClass(bug6219960$$Lambda$lambda$showModal$1$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug6219960$$Lambda$lambda$showModal$1$2::class$ = nullptr;

$FieldInfo _bug6219960_FieldInfo_[] = {
	{"QUESTION", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug6219960, QUESTION)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $STATIC | $VOLATILE, $staticField(bug6219960, frame)},
	{"table", "Ljavax/swing/JTable;", nullptr, $STATIC, $staticField(bug6219960, table)},
	{}
};

$MethodInfo _bug6219960_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6219960::*)()>(&bug6219960::init$))},
	{"createAndShowGUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug6219960::createAndShowGUI))},
	{"createTable", "()Ljavax/swing/JTable;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$JTable*(*)()>(&bug6219960::createTable))},
	{"findButton", "(Ljava/awt/Component;)Ljavax/swing/JButton;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$JButton*(*)($Component*)>(&bug6219960::findButton))},
	{"findModalInternalFrame", "(Ljava/awt/Component;Ljava/lang/String;)Ljavax/swing/JInternalFrame;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$JInternalFrame*(*)($Component*,$String*)>(&bug6219960::findModalInternalFrame))},
	{"lambda$showModal$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&bug6219960::lambda$showModal$0))},
	{"lambda$showModal$1", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($String*)>(&bug6219960::lambda$showModal$1))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6219960::main)), "java.lang.Exception"},
	{"pressOK", "(Ljava/awt/Component;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($Component*)>(&bug6219960::pressOK))},
	{"showModal", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&bug6219960::showModal)), "java.lang.Exception"},
	{}
};

$ClassInfo _bug6219960_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6219960",
	"java.lang.Object",
	nullptr,
	_bug6219960_FieldInfo_,
	_bug6219960_MethodInfo_
};

$Object* allocate$bug6219960($Class* clazz) {
	return $of($alloc(bug6219960));
}

$String* bug6219960::QUESTION = nullptr;
$volatile($JFrame*) bug6219960::frame = nullptr;
$JTable* bug6219960::table = nullptr;

void bug6219960::init$() {
}

void bug6219960::main($StringArray* args) {
	$init(bug6219960);
	$useLocalCurrentObjectStackCache();
	$var($Robot, robot, $new($Robot));
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug6219960$$Lambda$createAndShowGUI)));
	robot->waitForIdle();
	showModal("The tooltip should be showing. Press ok with mouse. And don\'t move it."_s);
	robot->waitForIdle();
	showModal("Now press ok and move the mouse inside the table (don\'t leave it)."_s);
	robot->waitForIdle();
}

void bug6219960::createAndShowGUI() {
	$init(bug6219960);
	$useLocalCurrentObjectStackCache();
	$nc($($ToolTipManager::sharedInstance()))->setDismissDelay(10 * 60 * 1000);
	$assignStatic(bug6219960::frame, $new($JFrame));
	$nc(bug6219960::frame)->setLocation(20, 20);
	$nc(bug6219960::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$var($JDesktopPane, desk, $new($JDesktopPane));
	$var($JInternalFrame, iframe, $new($JInternalFrame));
	iframe->setDefaultCloseOperation($JInternalFrame::DISPOSE_ON_CLOSE);
	desk->add(static_cast<$Component*>(iframe));
	$var($JButton, save, $new($JButton));
	save->setToolTipText("Wait for dialog to show."_s);
	save->setText("Wait for the tooltip to show."_s);
	$var($JPanel, panel, $new($JPanel, static_cast<$LayoutManager*>($$new($GridLayout, 1, 2))));
	panel->add(static_cast<$Component*>(save));
	$assignStatic(bug6219960::table, createTable());
	panel->add(static_cast<$Component*>($$new($JScrollPane, bug6219960::table)));
	iframe->setContentPane(panel);
	$nc($($nc(bug6219960::frame)->getContentPane()))->add(static_cast<$Component*>(desk));
	$nc(bug6219960::frame)->setSize(800, 600);
	iframe->setSize(640, 480);
	iframe->validate();
	iframe->setVisible(true);
	$nc(bug6219960::frame)->validate();
	$nc(bug6219960::frame)->setVisible(true);
	try {
		iframe->setSelected(true);
	} catch ($Exception& e) {
		$throwNew($AssertionError, $of(e));
	}
	try {
		$var($Robot, robot, $new($Robot));
		$var($Rectangle, bounds, $nc(bug6219960::frame)->getBounds());
		double var$0 = $nc(bounds)->getX();
		int32_t centerX = $cast(int32_t, (var$0 + bounds->getWidth() / 6));
		double var$1 = bounds->getY();
		int32_t centerY = $cast(int32_t, (var$1 + bounds->getHeight() / 6));
		robot->mouseMove(centerX, centerY);
	} catch ($AWTException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
}

void bug6219960::showModal($String* msg) {
	$init(bug6219960);
	$useLocalCurrentObjectStackCache();
	$$new($Thread, static_cast<$Runnable*>($$new(bug6219960$$Lambda$lambda$showModal$0$1)))->start();
	$Thread::sleep(900);
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug6219960$$Lambda$lambda$showModal$1$2, msg)));
}

$JTable* bug6219960::createTable() {
	$init(bug6219960);
	$useLocalCurrentObjectStackCache();
	$var($DefaultTableModel, model, $new($DefaultTableModel));
	$var($JTable, table, $new($JTable, model));
	table->setFillsViewportHeight(true);
	return table;
}

bool bug6219960::pressOK($Component* comp) {
	$init(bug6219960);
	$useLocalCurrentObjectStackCache();
	$var($JInternalFrame, internalFrame, findModalInternalFrame(comp, bug6219960::QUESTION));
	if (internalFrame == nullptr) {
		return false;
	}
	$var($JButton, button, findButton(internalFrame));
	if (button == nullptr) {
		return false;
	}
	try {
		$var($Robot, robot, $new($Robot));
		$var($Point, location, $nc(button)->getLocationOnScreen());
		$var($Rectangle, bounds, button->getBounds());
		double var$0 = $nc(location)->getX();
		int32_t centerX = $cast(int32_t, (var$0 + $nc(bounds)->getWidth() / 2));
		double var$1 = location->getY();
		int32_t centerY = $cast(int32_t, (var$1 + bounds->getHeight() / 2));
		robot->mouseMove(centerX, centerY);
		robot->mousePress($InputEvent::BUTTON1_MASK);
		robot->mouseRelease($InputEvent::BUTTON1_MASK);
	} catch ($IllegalComponentStateException& ignore) {
		return false;
	} catch ($AWTException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
	return true;
}

$JInternalFrame* bug6219960::findModalInternalFrame($Component* comp, $String* title) {
	$init(bug6219960);
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($JInternalFrame, comp)) {
		$var($JInternalFrame, internalFrame, $cast($JInternalFrame, comp));
		if ($nc($($nc(internalFrame)->getTitle()))->equals(title)) {
			return $cast($JInternalFrame, comp);
		}
	}
	if ($instanceOf($Container, comp)) {
		$var($Container, cont, $cast($Container, comp));
		for (int32_t i = 0; i < $nc(cont)->getComponentCount(); ++i) {
			$var($JInternalFrame, result, findModalInternalFrame($(cont->getComponent(i)), title));
			if (result != nullptr) {
				return result;
			}
		}
	}
	return nullptr;
}

$JButton* bug6219960::findButton($Component* comp) {
	$init(bug6219960);
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($JButton, comp)) {
		return $cast($JButton, comp);
	}
	if ($instanceOf($Container, comp)) {
		$var($Container, cont, $cast($Container, comp));
		for (int32_t i = 0; i < $nc(cont)->getComponentCount(); ++i) {
			$var($JButton, result, findButton($(cont->getComponent(i))));
			if (result != nullptr) {
				return result;
			}
		}
	}
	return nullptr;
}

void bug6219960::lambda$showModal$1($String* msg) {
	$init(bug6219960);
	$JOptionPane::showInternalMessageDialog(bug6219960::table, msg, bug6219960::QUESTION, $JOptionPane::PLAIN_MESSAGE);
}

void bug6219960::lambda$showModal$0() {
	$init(bug6219960);
	int32_t timeout = 3000;
	int64_t endTime = $System::currentTimeMillis() + timeout;
	while ($System::currentTimeMillis() <= endTime) {
		if (pressOK(bug6219960::frame)) {
			return;
		}
	}
	$throwNew($RuntimeException, "Internal frame has not been found!"_s);
}

bug6219960::bug6219960() {
}

void clinit$bug6219960($Class* class$) {
	$assignStatic(bug6219960::QUESTION, "Question"_s);
}

$Class* bug6219960::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(bug6219960$$Lambda$createAndShowGUI::classInfo$.name)) {
			return bug6219960$$Lambda$createAndShowGUI::load$(name, initialize);
		}
		if (name->equals(bug6219960$$Lambda$lambda$showModal$0$1::classInfo$.name)) {
			return bug6219960$$Lambda$lambda$showModal$0$1::load$(name, initialize);
		}
		if (name->equals(bug6219960$$Lambda$lambda$showModal$1$2::classInfo$.name)) {
			return bug6219960$$Lambda$lambda$showModal$1$2::load$(name, initialize);
		}
	}
	$loadClass(bug6219960, name, initialize, &_bug6219960_ClassInfo_, clinit$bug6219960, allocate$bug6219960);
	return class$;
}

$Class* bug6219960::class$ = nullptr;