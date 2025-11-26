#include <ClearSelTest.h>

#include <ClearSelTest$1.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseListener.h>
#include <java/awt/event/MouseMotionListener.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDialog.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTable.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/table/AbstractTableModel.h>
#include <javax/swing/table/DefaultTableModel.h>
#include <javax/swing/table/TableModel.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef CENTER
#undef SOUTH

using $ClearSelTest$1 = ::ClearSelTest$1;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dialog = ::java::awt::Dialog;
using $FlowLayout = ::java::awt::FlowLayout;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Window = ::java::awt::Window;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseListener = ::java::awt::event::MouseListener;
using $MouseMotionListener = ::java::awt::event::MouseMotionListener;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JDialog = ::javax::swing::JDialog;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JTable = ::javax::swing::JTable;
using $JTextArea = ::javax::swing::JTextArea;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $AbstractTableModel = ::javax::swing::table::AbstractTableModel;
using $DefaultTableModel = ::javax::swing::table::DefaultTableModel;
using $TableModel = ::javax::swing::table::TableModel;
using $JTextComponent = ::javax::swing::text::JTextComponent;

class ClearSelTest$$Lambda$lambda$run$0 : public $Runnable {
	$class(ClearSelTest$$Lambda$lambda$run$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(ClearSelTest* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$run$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ClearSelTest$$Lambda$lambda$run$0>());
	}
	ClearSelTest* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ClearSelTest$$Lambda$lambda$run$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ClearSelTest$$Lambda$lambda$run$0, inst$)},
	{}
};
$MethodInfo ClearSelTest$$Lambda$lambda$run$0::methodInfos[3] = {
	{"<init>", "(LClearSelTest;)V", nullptr, $PUBLIC, $method(static_cast<void(ClearSelTest$$Lambda$lambda$run$0::*)(ClearSelTest*)>(&ClearSelTest$$Lambda$lambda$run$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo ClearSelTest$$Lambda$lambda$run$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"ClearSelTest$$Lambda$lambda$run$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* ClearSelTest$$Lambda$lambda$run$0::load$($String* name, bool initialize) {
	$loadClass(ClearSelTest$$Lambda$lambda$run$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ClearSelTest$$Lambda$lambda$run$0::class$ = nullptr;

class ClearSelTest$$Lambda$lambda$createUI$1$1 : public $ActionListener {
	$class(ClearSelTest$$Lambda$lambda$createUI$1$1, $NO_CLASS_INIT, $ActionListener)
public:
	void init$(ClearSelTest* inst) {
		$set(this, inst$, inst);
	}
	virtual void actionPerformed($ActionEvent* e) override {
		$nc(inst$)->lambda$createUI$1(e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ClearSelTest$$Lambda$lambda$createUI$1$1>());
	}
	ClearSelTest* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ClearSelTest$$Lambda$lambda$createUI$1$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ClearSelTest$$Lambda$lambda$createUI$1$1, inst$)},
	{}
};
$MethodInfo ClearSelTest$$Lambda$lambda$createUI$1$1::methodInfos[3] = {
	{"<init>", "(LClearSelTest;)V", nullptr, $PUBLIC, $method(static_cast<void(ClearSelTest$$Lambda$lambda$createUI$1$1::*)(ClearSelTest*)>(&ClearSelTest$$Lambda$lambda$createUI$1$1::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo ClearSelTest$$Lambda$lambda$createUI$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"ClearSelTest$$Lambda$lambda$createUI$1$1",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	fieldInfos,
	methodInfos
};
$Class* ClearSelTest$$Lambda$lambda$createUI$1$1::load$($String* name, bool initialize) {
	$loadClass(ClearSelTest$$Lambda$lambda$createUI$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ClearSelTest$$Lambda$lambda$createUI$1$1::class$ = nullptr;

class ClearSelTest$$Lambda$lambda$createUI$2$2 : public $ActionListener {
	$class(ClearSelTest$$Lambda$lambda$createUI$2$2, $NO_CLASS_INIT, $ActionListener)
public:
	void init$(ClearSelTest* inst) {
		$set(this, inst$, inst);
	}
	virtual void actionPerformed($ActionEvent* e) override {
		$nc(inst$)->lambda$createUI$2(e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ClearSelTest$$Lambda$lambda$createUI$2$2>());
	}
	ClearSelTest* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ClearSelTest$$Lambda$lambda$createUI$2$2::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ClearSelTest$$Lambda$lambda$createUI$2$2, inst$)},
	{}
};
$MethodInfo ClearSelTest$$Lambda$lambda$createUI$2$2::methodInfos[3] = {
	{"<init>", "(LClearSelTest;)V", nullptr, $PUBLIC, $method(static_cast<void(ClearSelTest$$Lambda$lambda$createUI$2$2::*)(ClearSelTest*)>(&ClearSelTest$$Lambda$lambda$createUI$2$2::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo ClearSelTest$$Lambda$lambda$createUI$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"ClearSelTest$$Lambda$lambda$createUI$2$2",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	fieldInfos,
	methodInfos
};
$Class* ClearSelTest$$Lambda$lambda$createUI$2$2::load$($String* name, bool initialize) {
	$loadClass(ClearSelTest$$Lambda$lambda$createUI$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ClearSelTest$$Lambda$lambda$createUI$2$2::class$ = nullptr;

$FieldInfo _ClearSelTest_FieldInfo_[] = {
	{"f", "Ljavax/swing/JFrame;", nullptr, $STATIC, $staticField(ClearSelTest, f)},
	{"dialog", "Ljavax/swing/JDialog;", nullptr, $STATIC, $staticField(ClearSelTest, dialog)},
	{"model", "Ljavax/swing/table/DefaultTableModel;", nullptr, $STATIC, $staticField(ClearSelTest, model)},
	{"testResult", "Z", nullptr, $PUBLIC, $field(ClearSelTest, testResult)},
	{"latch", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE | $FINAL, $field(ClearSelTest, latch)},
	{"rows", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(ClearSelTest, rows)},
	{}
};

$MethodInfo _ClearSelTest_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/CountDownLatch;)V", nullptr, $PUBLIC, $method(static_cast<void(ClearSelTest::*)($CountDownLatch*)>(&ClearSelTest::init$)), "java.lang.Exception"},
	{"clearSelTest", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&ClearSelTest::clearSelTest))},
	{"createUI", "()V", nullptr, $PRIVATE | $FINAL, $method(static_cast<void(ClearSelTest::*)()>(&ClearSelTest::createUI))},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"lambda$createUI$1", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(ClearSelTest::*)($ActionEvent*)>(&ClearSelTest::lambda$createUI$1))},
	{"lambda$createUI$2", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(ClearSelTest::*)($ActionEvent*)>(&ClearSelTest::lambda$createUI$2))},
	{"lambda$run$0", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(ClearSelTest::*)()>(&ClearSelTest::lambda$run$0))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ClearSelTest_InnerClassesInfo_[] = {
	{"ClearSelTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ClearSelTest_ClassInfo_ = {
	$ACC_SUPER,
	"ClearSelTest",
	"java.lang.Object",
	"java.lang.Runnable",
	_ClearSelTest_FieldInfo_,
	_ClearSelTest_MethodInfo_,
	nullptr,
	nullptr,
	_ClearSelTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"ClearSelTest$1"
};

$Object* allocate$ClearSelTest($Class* clazz) {
	return $of($alloc(ClearSelTest));
}

$JFrame* ClearSelTest::f = nullptr;
$JDialog* ClearSelTest::dialog = nullptr;
$DefaultTableModel* ClearSelTest::model = nullptr;
$StringArray* ClearSelTest::rows = nullptr;

void ClearSelTest::init$($CountDownLatch* latch) {
	this->testResult = false;
	$set(this, latch, latch);
}

void ClearSelTest::run() {
	$useLocalCurrentObjectStackCache();
	try {
		$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(ClearSelTest$$Lambda$lambda$run$0, this)));
	} catch ($Exception& ex) {
		if (ClearSelTest::f != nullptr) {
			$nc(ClearSelTest::f)->dispose();
		}
		$nc(this->latch)->countDown();
		$throwNew($RuntimeException, $$str({"createUI Failed: "_s, $(ex->getMessage())}));
	}
}

void ClearSelTest::dispose() {
	$nc(ClearSelTest::dialog)->dispose();
	$nc(ClearSelTest::f)->dispose();
}

void ClearSelTest::clearSelTest() {
	$init(ClearSelTest);
	$useLocalCurrentObjectStackCache();
	$var($DefaultTableModel, model, $new($DefaultTableModel));
	model->addColumn($of("Test"_s), ClearSelTest::rows);
	$var($JTable, table, $new($JTable, model));
	table->setRowHeight(25);
	$var($MouseAdapter, adapt, $new($ClearSelTest$1, table));
	table->addMouseListener(adapt);
	table->addMouseMotionListener(adapt);
	$assignStatic(ClearSelTest::f, $new($JFrame));
	$nc(ClearSelTest::f)->setSize(300, 300);
	$nc(ClearSelTest::f)->setLocationRelativeTo(nullptr);
	$nc(ClearSelTest::f)->add(static_cast<$Component*>(table));
	$nc(ClearSelTest::f)->setVisible(true);
}

void ClearSelTest::createUI() {
	$useLocalCurrentObjectStackCache();
	$var($String, description, " INSTRUCTIONS:\n A JTable will be shown.\n Move mouse over different row to select the row.\n  Please verify if row text disappear  if mouse is moved out of table.\n If any moment any part of the rows will not be\n  painted properly and if some text are missing in JTable,\n  then press fail else press pass"_s);
	$assignStatic(ClearSelTest::dialog, $new($JDialog));
	$nc(ClearSelTest::dialog)->setTitle("textselectionTest"_s);
	$var($JTextArea, textArea, $new($JTextArea, description));
	textArea->setEditable(false);
	$var($JButton, passButton, $new($JButton, "PASS"_s));
	passButton->addActionListener(static_cast<$ActionListener*>($$new(ClearSelTest$$Lambda$lambda$createUI$1$1, this)));
	$var($JButton, failButton, $new($JButton, "FAIL"_s));
	failButton->addActionListener(static_cast<$ActionListener*>($$new(ClearSelTest$$Lambda$lambda$createUI$2$2, this)));
	$var($JPanel, mainPanel, $new($JPanel, static_cast<$LayoutManager*>($$new($BorderLayout))));
	$init($BorderLayout);
	mainPanel->add(static_cast<$Component*>(textArea), $of($BorderLayout::CENTER));
	$var($JPanel, buttonPanel, $new($JPanel, static_cast<$LayoutManager*>($$new($FlowLayout))));
	buttonPanel->add(static_cast<$Component*>(passButton));
	buttonPanel->add(static_cast<$Component*>(failButton));
	mainPanel->add(static_cast<$Component*>(buttonPanel), $of($BorderLayout::SOUTH));
	$nc(ClearSelTest::dialog)->add(static_cast<$Component*>(mainPanel));
	$nc(ClearSelTest::dialog)->pack();
	$nc(ClearSelTest::dialog)->setVisible(true);
}

void ClearSelTest::lambda$createUI$2($ActionEvent* e) {
	this->testResult = false;
	dispose();
	$nc(this->latch)->countDown();
}

void ClearSelTest::lambda$createUI$1($ActionEvent* e) {
	this->testResult = true;
	dispose();
	$nc(this->latch)->countDown();
}

void ClearSelTest::lambda$run$0() {
	createUI();
	clearSelTest();
}

void clinit$ClearSelTest($Class* class$) {
	$assignStatic(ClearSelTest::rows, $new($StringArray, {
		"Row1"_s,
		"Row2"_s,
		"Row3"_s,
		"Row4"_s,
		"Row5"_s,
		"Row6"_s,
		"Row7"_s,
		"Row8"_s,
		"Row9"_s,
		"Row10"_s
	}));
}

ClearSelTest::ClearSelTest() {
}

$Class* ClearSelTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ClearSelTest$$Lambda$lambda$run$0::classInfo$.name)) {
			return ClearSelTest$$Lambda$lambda$run$0::load$(name, initialize);
		}
		if (name->equals(ClearSelTest$$Lambda$lambda$createUI$1$1::classInfo$.name)) {
			return ClearSelTest$$Lambda$lambda$createUI$1$1::load$(name, initialize);
		}
		if (name->equals(ClearSelTest$$Lambda$lambda$createUI$2$2::classInfo$.name)) {
			return ClearSelTest$$Lambda$lambda$createUI$2$2::load$(name, initialize);
		}
	}
	$loadClass(ClearSelTest, name, initialize, &_ClearSelTest_ClassInfo_, clinit$ClearSelTest, allocate$ClearSelTest);
	return class$;
}

$Class* ClearSelTest::class$ = nullptr;