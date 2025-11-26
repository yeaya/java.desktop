#include <JTableScrollTest.h>

#include <JTableScrollTest$1.h>
#include <JTableScrollTest$2.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDialog.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTable.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/table/AbstractTableModel.h>
#include <javax/swing/table/TableModel.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef BLACK
#undef CENTER
#undef SOUTH
#undef WHITE

using $JTableScrollTest$1 = ::JTableScrollTest$1;
using $JTableScrollTest$2 = ::JTableScrollTest$2;
using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $BorderLayout = ::java::awt::BorderLayout;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dialog = ::java::awt::Dialog;
using $FlowLayout = ::java::awt::FlowLayout;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Window = ::java::awt::Window;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
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
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JDialog = ::javax::swing::JDialog;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTable = ::javax::swing::JTable;
using $JTextArea = ::javax::swing::JTextArea;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $AbstractTableModel = ::javax::swing::table::AbstractTableModel;
using $TableModel = ::javax::swing::table::TableModel;
using $JTextComponent = ::javax::swing::text::JTextComponent;

class JTableScrollTest$$Lambda$lambda$doTest$0 : public $ActionListener {
	$class(JTableScrollTest$$Lambda$lambda$doTest$0, $NO_CLASS_INIT, $ActionListener)
public:
	void init$($JDialog* dialog) {
		$set(this, dialog, dialog);
	}
	virtual void actionPerformed($ActionEvent* e) override {
		JTableScrollTest::lambda$doTest$0(dialog, e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JTableScrollTest$$Lambda$lambda$doTest$0>());
	}
	$JDialog* dialog = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo JTableScrollTest$$Lambda$lambda$doTest$0::fieldInfos[2] = {
	{"dialog", "Ljavax/swing/JDialog;", nullptr, $PUBLIC, $field(JTableScrollTest$$Lambda$lambda$doTest$0, dialog)},
	{}
};
$MethodInfo JTableScrollTest$$Lambda$lambda$doTest$0::methodInfos[3] = {
	{"<init>", "(Ljavax/swing/JDialog;)V", nullptr, $PUBLIC, $method(static_cast<void(JTableScrollTest$$Lambda$lambda$doTest$0::*)($JDialog*)>(&JTableScrollTest$$Lambda$lambda$doTest$0::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo JTableScrollTest$$Lambda$lambda$doTest$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"JTableScrollTest$$Lambda$lambda$doTest$0",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	fieldInfos,
	methodInfos
};
$Class* JTableScrollTest$$Lambda$lambda$doTest$0::load$($String* name, bool initialize) {
	$loadClass(JTableScrollTest$$Lambda$lambda$doTest$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JTableScrollTest$$Lambda$lambda$doTest$0::class$ = nullptr;

class JTableScrollTest$$Lambda$lambda$doTest$1$1 : public $ActionListener {
	$class(JTableScrollTest$$Lambda$lambda$doTest$1$1, $NO_CLASS_INIT, $ActionListener)
public:
	void init$($JDialog* dialog) {
		$set(this, dialog, dialog);
	}
	virtual void actionPerformed($ActionEvent* e) override {
		JTableScrollTest::lambda$doTest$1(dialog, e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JTableScrollTest$$Lambda$lambda$doTest$1$1>());
	}
	$JDialog* dialog = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo JTableScrollTest$$Lambda$lambda$doTest$1$1::fieldInfos[2] = {
	{"dialog", "Ljavax/swing/JDialog;", nullptr, $PUBLIC, $field(JTableScrollTest$$Lambda$lambda$doTest$1$1, dialog)},
	{}
};
$MethodInfo JTableScrollTest$$Lambda$lambda$doTest$1$1::methodInfos[3] = {
	{"<init>", "(Ljavax/swing/JDialog;)V", nullptr, $PUBLIC, $method(static_cast<void(JTableScrollTest$$Lambda$lambda$doTest$1$1::*)($JDialog*)>(&JTableScrollTest$$Lambda$lambda$doTest$1$1::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo JTableScrollTest$$Lambda$lambda$doTest$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"JTableScrollTest$$Lambda$lambda$doTest$1$1",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	fieldInfos,
	methodInfos
};
$Class* JTableScrollTest$$Lambda$lambda$doTest$1$1::load$($String* name, bool initialize) {
	$loadClass(JTableScrollTest$$Lambda$lambda$doTest$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JTableScrollTest$$Lambda$lambda$doTest$1$1::class$ = nullptr;

class JTableScrollTest$$Lambda$lambda$doTest$2$2 : public $ActionListener {
	$class(JTableScrollTest$$Lambda$lambda$doTest$2$2, $NO_CLASS_INIT, $ActionListener)
public:
	void init$($JButton* testButton, $Runnable* action, $JButton* passButton, $JButton* failButton) {
		$set(this, testButton, testButton);
		$set(this, action, action);
		$set(this, passButton, passButton);
		$set(this, failButton, failButton);
	}
	virtual void actionPerformed($ActionEvent* e) override {
		JTableScrollTest::lambda$doTest$2(testButton, action, passButton, failButton, e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JTableScrollTest$$Lambda$lambda$doTest$2$2>());
	}
	$JButton* testButton = nullptr;
	$Runnable* action = nullptr;
	$JButton* passButton = nullptr;
	$JButton* failButton = nullptr;
	static $FieldInfo fieldInfos[5];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo JTableScrollTest$$Lambda$lambda$doTest$2$2::fieldInfos[5] = {
	{"testButton", "Ljavax/swing/JButton;", nullptr, $PUBLIC, $field(JTableScrollTest$$Lambda$lambda$doTest$2$2, testButton)},
	{"action", "Ljava/lang/Runnable;", nullptr, $PUBLIC, $field(JTableScrollTest$$Lambda$lambda$doTest$2$2, action)},
	{"passButton", "Ljavax/swing/JButton;", nullptr, $PUBLIC, $field(JTableScrollTest$$Lambda$lambda$doTest$2$2, passButton)},
	{"failButton", "Ljavax/swing/JButton;", nullptr, $PUBLIC, $field(JTableScrollTest$$Lambda$lambda$doTest$2$2, failButton)},
	{}
};
$MethodInfo JTableScrollTest$$Lambda$lambda$doTest$2$2::methodInfos[3] = {
	{"<init>", "(Ljavax/swing/JButton;Ljava/lang/Runnable;Ljavax/swing/JButton;Ljavax/swing/JButton;)V", nullptr, $PUBLIC, $method(static_cast<void(JTableScrollTest$$Lambda$lambda$doTest$2$2::*)($JButton*,$Runnable*,$JButton*,$JButton*)>(&JTableScrollTest$$Lambda$lambda$doTest$2$2::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo JTableScrollTest$$Lambda$lambda$doTest$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"JTableScrollTest$$Lambda$lambda$doTest$2$2",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	fieldInfos,
	methodInfos
};
$Class* JTableScrollTest$$Lambda$lambda$doTest$2$2::load$($String* name, bool initialize) {
	$loadClass(JTableScrollTest$$Lambda$lambda$doTest$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JTableScrollTest$$Lambda$lambda$doTest$2$2::class$ = nullptr;

$FieldInfo _JTableScrollTest_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, $STATIC, $staticField(JTableScrollTest, frame)},
	{}
};

$MethodInfo _JTableScrollTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JTableScrollTest::*)()>(&JTableScrollTest::init$))},
	{"createTable", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&JTableScrollTest::createTable))},
	{"doTest", "(Ljava/lang/Runnable;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Runnable*)>(&JTableScrollTest::doTest))},
	{"lambda$doTest$0", "(Ljavax/swing/JDialog;Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($JDialog*,$ActionEvent*)>(&JTableScrollTest::lambda$doTest$0))},
	{"lambda$doTest$1", "(Ljavax/swing/JDialog;Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($JDialog*,$ActionEvent*)>(&JTableScrollTest::lambda$doTest$1))},
	{"lambda$doTest$2", "(Ljavax/swing/JButton;Ljava/lang/Runnable;Ljavax/swing/JButton;Ljavax/swing/JButton;Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($JButton*,$Runnable*,$JButton*,$JButton*,$ActionEvent*)>(&JTableScrollTest::lambda$doTest$2))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&JTableScrollTest::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _JTableScrollTest_InnerClassesInfo_[] = {
	{"JTableScrollTest$2", nullptr, nullptr, 0},
	{"JTableScrollTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JTableScrollTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"JTableScrollTest",
	"java.lang.Object",
	nullptr,
	_JTableScrollTest_FieldInfo_,
	_JTableScrollTest_MethodInfo_,
	nullptr,
	nullptr,
	_JTableScrollTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"JTableScrollTest$2,JTableScrollTest$1"
};

$Object* allocate$JTableScrollTest($Class* clazz) {
	return $of($alloc(JTableScrollTest));
}

$JFrame* JTableScrollTest::frame = nullptr;

void JTableScrollTest::init$() {
}

void JTableScrollTest::main($StringArray* args) {
	$init(JTableScrollTest);
	$SwingUtilities::invokeAndWait($$new($JTableScrollTest$1));
}

void JTableScrollTest::createTable() {
	$init(JTableScrollTest);
	$useLocalCurrentObjectStackCache();
	$var($StringArray, names, $new($StringArray, {
		$$new($String, "first_name"_s),
		$$new($String, "last_name"_s),
		$$new($String, "favorite_color"_s),
		$$new($String, "favorite_food"_s)
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("Mike"_s),
			$of("Albers"_s),
			$of("green"_s),
			$of("strawberry"_s)
		}),
		$$new($ObjectArray, {
			$of("Mark"_s),
			$of("Andrews"_s),
			$of("blue"_s),
			$of("grapes"_s)
		}),
		$$new($ObjectArray, {
			$of("Brian"_s),
			$of("Beck"_s),
			$of("black"_s),
			$of("raspberry"_s)
		}),
		$$new($ObjectArray, {
			$of("Lara"_s),
			$of("Bunni"_s),
			$of("red"_s),
			$of("strawberry"_s)
		}),
		$$new($ObjectArray, {
			$of("Roger"_s),
			$of("Brinkley"_s),
			$of("blue"_s),
			$of("peach"_s)
		}),
		$$new($ObjectArray, {
			$of("Brent"_s),
			$of("Christian"_s),
			$of("black"_s),
			$of("broccoli"_s)
		}),
		$$new($ObjectArray, {
			$of("Mark"_s),
			$of("Davidson"_s),
			$of("darkgreen"_s),
			$of("asparagus"_s)
		}),
		$$new($ObjectArray, {
			$of("Jeff"_s),
			$of("Dinkins"_s),
			$of("blue"_s),
			$of("kiwi"_s)
		}),
		$$new($ObjectArray, {
			$of("Ewan"_s),
			$of("Dinkins"_s),
			$of("yellow"_s),
			$of("strawberry"_s)
		}),
		$$new($ObjectArray, {
			$of("Amy"_s),
			$of("Fowler"_s),
			$of("violet"_s),
			$of("raspberry"_s)
		}),
		$$new($ObjectArray, {
			$of("Hania"_s),
			$of("Gajewska"_s),
			$of("purple"_s),
			$of("raspberry"_s)
		}),
		$$new($ObjectArray, {
			$of("David"_s),
			$of("Geary"_s),
			$of("blue"_s),
			$of("watermelon"_s)
		}),
		$$new($ObjectArray, {
			$of("Ryan"_s),
			$of("Gosling"_s),
			$of("pink"_s),
			$of("donut"_s)
		}),
		$$new($ObjectArray, {
			$of("Eric"_s),
			$of("Hawkes"_s),
			$of("blue"_s),
			$of("pickle"_s)
		}),
		$$new($ObjectArray, {
			$of("Shannon"_s),
			$of("Hickey"_s),
			$of("green"_s),
			$of("grapes"_s)
		}),
		$$new($ObjectArray, {
			$of("Earl"_s),
			$of("Johnson"_s),
			$of("green"_s),
			$of("carrot"_s)
		}),
		$$new($ObjectArray, {
			$of("Robi"_s),
			$of("Khan"_s),
			$of("green"_s),
			$of("apple"_s)
		}),
		$$new($ObjectArray, {
			$of("Robert"_s),
			$of("Kim"_s),
			$of("blue"_s),
			$of("strawberry"_s)
		}),
		$$new($ObjectArray, {
			$of("Janet"_s),
			$of("Koenig"_s),
			$of("turquoise"_s),
			$of("peach"_s)
		}),
		$$new($ObjectArray, {
			$of("Jeff"_s),
			$of("Kesselman"_s),
			$of("blue"_s),
			$of("pineapple"_s)
		}),
		$$new($ObjectArray, {
			$of("Onno"_s),
			$of("Kluyt"_s),
			$of("orange"_s),
			$of("broccoli"_s)
		}),
		$$new($ObjectArray, {
			$of("Peter"_s),
			$of("Korn"_s),
			$of("sunpurple"_s),
			$of("sparegrass"_s)
		}),
		$$new($ObjectArray, {
			$of("Rick"_s),
			$of("Levenson"_s),
			$of("black"_s),
			$of("raspberry"_s)
		}),
		$$new($ObjectArray, {
			$of("Brian"_s),
			$of("Lichtenwalter"_s),
			$of("blue"_s),
			$of("pear"_s)
		}),
		$$new($ObjectArray, {
			$of("Malini"_s),
			$of("Minasandram"_s),
			$of("beige"_s),
			$of("corn"_s)
		}),
		$$new($ObjectArray, {
			$of("Michael"_s),
			$of("Martak"_s),
			$of("green"_s),
			$of("strawberry"_s)
		}),
		$$new($ObjectArray, {
			$of("David"_s),
			$of("Mendenhall"_s),
			$of("forestgreen"_s),
			$of("peach"_s)
		}),
		$$new($ObjectArray, {
			$of("Phil"_s),
			$of("Milne"_s),
			$of("pink"_s),
			$of("banana"_s)
		}),
		$$new($ObjectArray, {
			$of("Lynn"_s),
			$of("Monsanto"_s),
			$of("cybergreen"_s),
			$of("peach"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of("Muller"_s),
			$of("rustred"_s),
			$of("pineapple"_s)
		}),
		$$new($ObjectArray, {
			$of("Joshua"_s),
			$of("Outwater"_s),
			$of("blue"_s),
			$of("pineapple"_s)
		}),
		$$new($ObjectArray, {
			$of("Tim"_s),
			$of("Prinzing"_s),
			$of("blue"_s),
			$of("pepper"_s)
		}),
		$$new($ObjectArray, {
			$of("Raj"_s),
			$of("Premkumar"_s),
			$of("blue"_s),
			$of("broccoli"_s)
		}),
		$$new($ObjectArray, {
			$of("Howard"_s),
			$of("Rosen"_s),
			$of("green"_s),
			$of("strawberry"_s)
		}),
		$$new($ObjectArray, {
			$of("Ray"_s),
			$of("Ryan"_s),
			$of("black"_s),
			$of("banana"_s)
		}),
		$$new($ObjectArray, {
			$of("Georges"_s),
			$of("Saab"_s),
			$of("aqua"_s),
			$of("cantaloupe"_s)
		}),
		$$new($ObjectArray, {
			$of("Tom"_s),
			$of("Santos"_s),
			$of("blue"_s),
			$of("pepper"_s)
		}),
		$$new($ObjectArray, {
			$of("Rich"_s),
			$of("Schiavi"_s),
			$of("blue"_s),
			$of("pepper"_s)
		}),
		$$new($ObjectArray, {
			$of("Nancy"_s),
			$of("Schorr"_s),
			$of("green"_s),
			$of("watermelon"_s)
		}),
		$$new($ObjectArray, {
			$of("Keith"_s),
			$of("Sprochi"_s),
			$of("darkgreen"_s),
			$of("watermelon"_s)
		}),
		$$new($ObjectArray, {
			$of("Matt"_s),
			$of("Tucker"_s),
			$of("eblue"_s),
			$of("broccoli"_s)
		}),
		$$new($ObjectArray, {
			$of("Dmitri"_s),
			$of("Trembovetski"_s),
			$of("red"_s),
			$of("tomato"_s)
		}),
		$$new($ObjectArray, {
			$of("Scott"_s),
			$of("Violet"_s),
			$of("violet"_s),
			$of("banana"_s)
		}),
		$$new($ObjectArray, {
			$of("Kathy"_s),
			$of("Walrath"_s),
			$of("darkgreen"_s),
			$of("pear"_s)
		})
	}));
	$var($TableModel, dataModel, $new($JTableScrollTest$2, names, data));
	$var($JTable, tableView, $new($JTable, dataModel));
	$init($Color);
	tableView->setBackground($Color::WHITE);
	tableView->setForeground($Color::BLACK);
	tableView->setSize(600, 800);
	$var($JScrollPane, scrollpane, $new($JScrollPane, tableView));
	$nc(JTableScrollTest::frame)->add(static_cast<$Component*>(scrollpane));
	$nc(JTableScrollTest::frame)->pack();
	$nc(JTableScrollTest::frame)->setVisible(true);
}

void JTableScrollTest::doTest($Runnable* action) {
	$init(JTableScrollTest);
	$useLocalCurrentObjectStackCache();
	$var($String, description, "JTable with rows will be displayed along with scrollbar.\nScroll the table. Verify no arifacts are shown and rows.\n are correctly displayed."_s);
	$var($JDialog, dialog, $new($JDialog));
	dialog->setTitle("ScrollArtifactTest "_s);
	$var($JTextArea, textArea, $new($JTextArea, description));
	textArea->setEditable(false);
	$var($JButton, testButton, $new($JButton, "Create Table"_s));
	$var($JButton, passButton, $new($JButton, "PASS"_s));
	passButton->setEnabled(false);
	passButton->addActionListener(static_cast<$ActionListener*>($$new(JTableScrollTest$$Lambda$lambda$doTest$0, dialog)));
	$var($JButton, failButton, $new($JButton, "FAIL"_s));
	failButton->setEnabled(false);
	failButton->addActionListener(static_cast<$ActionListener*>($$new(JTableScrollTest$$Lambda$lambda$doTest$1$1, dialog)));
	testButton->addActionListener(static_cast<$ActionListener*>($$new(JTableScrollTest$$Lambda$lambda$doTest$2$2, testButton, action, passButton, failButton)));
	$var($JPanel, mainPanel, $new($JPanel, static_cast<$LayoutManager*>($$new($BorderLayout))));
	$init($BorderLayout);
	mainPanel->add(static_cast<$Component*>(textArea), $of($BorderLayout::CENTER));
	$var($JPanel, buttonPanel, $new($JPanel, static_cast<$LayoutManager*>($$new($FlowLayout))));
	buttonPanel->add(static_cast<$Component*>(testButton));
	buttonPanel->add(static_cast<$Component*>(passButton));
	buttonPanel->add(static_cast<$Component*>(failButton));
	mainPanel->add(static_cast<$Component*>(buttonPanel), $of($BorderLayout::SOUTH));
	dialog->add(static_cast<$Component*>(mainPanel));
	dialog->pack();
	dialog->setVisible(true);
}

void JTableScrollTest::lambda$doTest$2($JButton* testButton, $Runnable* action, $JButton* passButton, $JButton* failButton, $ActionEvent* e) {
	$init(JTableScrollTest);
	$nc(testButton)->setEnabled(false);
	$nc(action)->run();
	$nc(passButton)->setEnabled(true);
	$nc(failButton)->setEnabled(true);
}

void JTableScrollTest::lambda$doTest$1($JDialog* dialog, $ActionEvent* e) {
	$init(JTableScrollTest);
	$nc(dialog)->dispose();
	if (JTableScrollTest::frame != nullptr) {
		$nc(JTableScrollTest::frame)->setVisible(false);
		$nc(JTableScrollTest::frame)->dispose();
	}
	$throwNew($RuntimeException, "Scrollbar artifact shown"_s);
}

void JTableScrollTest::lambda$doTest$0($JDialog* dialog, $ActionEvent* e) {
	$init(JTableScrollTest);
	$nc(dialog)->dispose();
	if (JTableScrollTest::frame != nullptr) {
		$nc(JTableScrollTest::frame)->setVisible(false);
		$nc(JTableScrollTest::frame)->dispose();
	}
}

void clinit$JTableScrollTest($Class* class$) {
	$assignStatic(JTableScrollTest::frame, $new($JFrame));
}

JTableScrollTest::JTableScrollTest() {
}

$Class* JTableScrollTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(JTableScrollTest$$Lambda$lambda$doTest$0::classInfo$.name)) {
			return JTableScrollTest$$Lambda$lambda$doTest$0::load$(name, initialize);
		}
		if (name->equals(JTableScrollTest$$Lambda$lambda$doTest$1$1::classInfo$.name)) {
			return JTableScrollTest$$Lambda$lambda$doTest$1$1::load$(name, initialize);
		}
		if (name->equals(JTableScrollTest$$Lambda$lambda$doTest$2$2::classInfo$.name)) {
			return JTableScrollTest$$Lambda$lambda$doTest$2$2::load$(name, initialize);
		}
	}
	$loadClass(JTableScrollTest, name, initialize, &_JTableScrollTest_ClassInfo_, clinit$JTableScrollTest, allocate$JTableScrollTest);
	return class$;
}

$Class* JTableScrollTest::class$ = nullptr;