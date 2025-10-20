#include <bug7068740.h>

#include <bug7068740$1.h>
#include <bug7068740$2.h>
#include <bug7068740$3.h>
#include <java/awt/AWTException.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/KeyEvent.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLayer.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTable.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <javax/swing/WindowConstants.h>
#include <javax/swing/plaf/LayerUI.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <javax/swing/table/AbstractTableModel.h>
#include <javax/swing/table/DefaultTableModel.h>
#include <javax/swing/table/TableModel.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE
#undef VK_PAGE_DOWN
#undef VK_PAGE_UP

using $bug7068740$1 = ::bug7068740$1;
using $bug7068740$2 = ::bug7068740$2;
using $bug7068740$3 = ::bug7068740$3;
using $AWTException = ::java::awt::AWTException;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JLayer = ::javax::swing::JLayer;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTable = ::javax::swing::JTable;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;
using $WindowConstants = ::javax::swing::WindowConstants;
using $LayerUI = ::javax::swing::plaf::LayerUI;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;
using $AbstractTableModel = ::javax::swing::table::AbstractTableModel;
using $DefaultTableModel = ::javax::swing::table::DefaultTableModel;
using $TableModel = ::javax::swing::table::TableModel;

$FieldInfo _bug7068740_FieldInfo_[] = {
	{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(bug7068740, robot)},
	{"table", "Ljavax/swing/JTable;", nullptr, $PRIVATE | $STATIC, $staticField(bug7068740, table)},
	{}
};

$MethodInfo _bug7068740_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug7068740::*)()>(&bug7068740::init$))},
	{"doTest", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug7068740::doTest)), "java.lang.Exception"},
	{"getSelectedRow", "()I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)()>(&bug7068740::getSelectedRow)), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug7068740::main)), "java.lang.Exception"},
	{"setUp", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug7068740::setUp))},
	{}
};

$InnerClassInfo _bug7068740_InnerClassesInfo_[] = {
	{"bug7068740$3", nullptr, nullptr, 0},
	{"bug7068740$2", nullptr, nullptr, 0},
	{"bug7068740$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7068740_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug7068740",
	"javax.swing.JFrame",
	nullptr,
	_bug7068740_FieldInfo_,
	_bug7068740_MethodInfo_,
	nullptr,
	nullptr,
	_bug7068740_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug7068740$3,bug7068740$2,bug7068740$1"
};

$Object* allocate$bug7068740($Class* clazz) {
	return $of($alloc(bug7068740));
}

$Robot* bug7068740::robot = nullptr;
$JTable* bug7068740::table = nullptr;

void bug7068740::init$() {
	$useLocalCurrentObjectStackCache();
	$JFrame::init$();
	setDefaultCloseOperation($WindowConstants::EXIT_ON_CLOSE);
	$var($DefaultTableModel, model, $new($bug7068740$1, this));
	$assignStatic(bug7068740::table, $new($JTable, model));
	$nc(bug7068740::table)->setRowSelectionInterval(0, 0);
	$var($LayerUI, layerUI, $new($LayerUI));
	$var($JLayer, layer, $new($JLayer, bug7068740::table, layerUI));
	$var($JScrollPane, scrollPane, $new($JScrollPane, layer));
	add(static_cast<$Component*>(scrollPane));
	pack();
	setLocationRelativeTo(nullptr);
}

void bug7068740::setUp() {
	$init(bug7068740);
	$useLocalCurrentObjectStackCache();
	try {
		if (bug7068740::robot == nullptr) {
			$assignStatic(bug7068740::robot, $new($Robot));
			$nc(bug7068740::robot)->setAutoDelay(50);
		}
		$SwingUtilities::invokeAndWait($$new($bug7068740$2));
	} catch ($InterruptedException&) {
		$var($InterruptedException, e, $catch());
		e->printStackTrace();
		$throwNew($RuntimeException, "Test failed"_s);
	} catch ($InvocationTargetException&) {
		$var($InvocationTargetException, e, $catch());
		e->printStackTrace();
		$throwNew($RuntimeException, "Test failed"_s);
	} catch ($AWTException&) {
		$var($AWTException, e, $catch());
		e->printStackTrace();
		$throwNew($RuntimeException, "Test failed"_s);
	}
}

int32_t bug7068740::getSelectedRow() {
	$init(bug7068740);
	$useLocalCurrentObjectStackCache();
	$var($AtomicInteger, row, $new($AtomicInteger, -1));
	$SwingUtilities::invokeAndWait($$new($bug7068740$3, row));
	return row->intValue();
}

void bug7068740::doTest() {
	$init(bug7068740);
	$nc(bug7068740::robot)->waitForIdle();
	$nc(bug7068740::robot)->keyPress($KeyEvent::VK_PAGE_DOWN);
	$nc(bug7068740::robot)->keyRelease($KeyEvent::VK_PAGE_DOWN);
	$nc(bug7068740::robot)->waitForIdle();
	if (getSelectedRow() != 19) {
		$throwNew($RuntimeException, "Test failed"_s);
	}
	$nc(bug7068740::robot)->keyPress($KeyEvent::VK_PAGE_UP);
	$nc(bug7068740::robot)->keyRelease($KeyEvent::VK_PAGE_UP);
	$nc(bug7068740::robot)->waitForIdle();
	if (getSelectedRow() != 0) {
		$throwNew($RuntimeException, "Test failed"_s);
	}
}

void bug7068740::main($StringArray* args) {
	$init(bug7068740);
	$useLocalCurrentObjectStackCache();
	try {
		$UIManager::setLookAndFeel(static_cast<$LookAndFeel*>($$new($MetalLookAndFeel)));
		setUp();
		doTest();
	} catch ($UnsupportedLookAndFeelException&) {
		$var($UnsupportedLookAndFeelException, e, $catch());
		e->printStackTrace();
		$throwNew($RuntimeException, "Test failed"_s);
	}
}

void clinit$bug7068740($Class* class$) {
	$assignStatic(bug7068740::robot, nullptr);
	$assignStatic(bug7068740::table, nullptr);
}

bug7068740::bug7068740() {
}

$Class* bug7068740::load$($String* name, bool initialize) {
	$loadClass(bug7068740, name, initialize, &_bug7068740_ClassInfo_, clinit$bug7068740, allocate$bug7068740);
	return class$;
}

$Class* bug7068740::class$ = nullptr;