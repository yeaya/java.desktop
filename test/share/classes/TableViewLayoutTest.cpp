#include <TableViewLayoutTest.h>

#include <CodeBugDocument.h>
#include <CodeBugEditorKit.h>
#include <TableViewLayoutTest$1.h>
#include <TableViewLayoutTest$2.h>
#include <TableViewLayoutTest$3.h>
#include <TableViewLayoutTest$4.h>
#include <TableViewLayoutTest$5.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Frame.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/KeyEvent.h>
#include <java/lang/Math.h>
#include <java/lang/Runnable.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/event/CaretListener.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/EditorKit.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/StyledEditorKit.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE
#undef FALSE
#undef TRUE
#undef VK_BACK_SPACE
#undef VK_E
#undef VK_S
#undef VK_T

using $CodeBugDocument = ::CodeBugDocument;
using $CodeBugEditorKit = ::CodeBugEditorKit;
using $TableViewLayoutTest$1 = ::TableViewLayoutTest$1;
using $TableViewLayoutTest$2 = ::TableViewLayoutTest$2;
using $TableViewLayoutTest$3 = ::TableViewLayoutTest$3;
using $TableViewLayoutTest$4 = ::TableViewLayoutTest$4;
using $TableViewLayoutTest$5 = ::TableViewLayoutTest$5;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Frame = ::java::awt::Frame;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $PrintStream = ::java::io::PrintStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $JComponent = ::javax::swing::JComponent;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JFrame = ::javax::swing::JFrame;
using $JScrollPane = ::javax::swing::JScrollPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $CaretListener = ::javax::swing::event::CaretListener;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $DefaultEditorKit = ::javax::swing::text::DefaultEditorKit;
using $Document = ::javax::swing::text::Document;
using $EditorKit = ::javax::swing::text::EditorKit;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $StyledEditorKit = ::javax::swing::text::StyledEditorKit;

$FieldInfo _TableViewLayoutTest_FieldInfo_[] = {
	{"yCaret", "D", nullptr, $PRIVATE | $STATIC, $staticField(TableViewLayoutTest, yCaret)},
	{"xCaret", "D", nullptr, $PRIVATE | $STATIC, $staticField(TableViewLayoutTest, xCaret)},
	{"tn", "I", nullptr, $PRIVATE | $STATIC, $staticField(TableViewLayoutTest, tn)},
	{"yCarFLTab", "D", nullptr, $PRIVATE | $STATIC, $staticField(TableViewLayoutTest, yCarFLTab)},
	{"yCarLLTab", "D", nullptr, $PRIVATE | $STATIC, $staticField(TableViewLayoutTest, yCarLLTab)},
	{"xCarBTab", "D", nullptr, $PRIVATE | $STATIC, $staticField(TableViewLayoutTest, xCarBTab)},
	{"xCarETab", "D", nullptr, $PRIVATE | $STATIC, $staticField(TableViewLayoutTest, xCarETab)},
	{"dyCarFLTab", "D", nullptr, $PRIVATE | $STATIC, $staticField(TableViewLayoutTest, dyCarFLTab)},
	{"dyCarLLTab", "D", nullptr, $PRIVATE | $STATIC, $staticField(TableViewLayoutTest, dyCarLLTab)},
	{"dxCarBTab", "D", nullptr, $PRIVATE | $STATIC, $staticField(TableViewLayoutTest, dxCarBTab)},
	{"dxCarETab", "D", nullptr, $PRIVATE | $STATIC, $staticField(TableViewLayoutTest, dxCarETab)},
	{"edit", "Ljavax/swing/JEditorPane;", nullptr, $PRIVATE | $STATIC, $staticField(TableViewLayoutTest, edit)},
	{"frame", "LTableViewLayoutTest;", nullptr, $PRIVATE | $STATIC, $staticField(TableViewLayoutTest, frame)},
	{"Prop", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(TableViewLayoutTest, Prop)},
	{"isTabWrong", "Z", nullptr, $PRIVATE | $STATIC, $staticField(TableViewLayoutTest, isTabWrong)},
	{"isI18n", "Ljava/lang/Boolean;", nullptr, $PRIVATE | $STATIC, $staticField(TableViewLayoutTest, isI18n)},
	{}
};

$MethodInfo _TableViewLayoutTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TableViewLayoutTest::*)()>(&TableViewLayoutTest::init$))},
	{"hitKey", "(Ljava/awt/Robot;I)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Robot*,int32_t)>(&TableViewLayoutTest::hitKey)), "java.lang.Exception"},
	{"initCodeBug", "()V", nullptr, $PRIVATE, $method(static_cast<void(TableViewLayoutTest::*)()>(&TableViewLayoutTest::initCodeBug))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TableViewLayoutTest::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _TableViewLayoutTest_InnerClassesInfo_[] = {
	{"TableViewLayoutTest$5", nullptr, nullptr, 0},
	{"TableViewLayoutTest$4", nullptr, nullptr, 0},
	{"TableViewLayoutTest$3", nullptr, nullptr, 0},
	{"TableViewLayoutTest$2", nullptr, nullptr, 0},
	{"TableViewLayoutTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TableViewLayoutTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TableViewLayoutTest",
	"javax.swing.JFrame",
	nullptr,
	_TableViewLayoutTest_FieldInfo_,
	_TableViewLayoutTest_MethodInfo_,
	nullptr,
	nullptr,
	_TableViewLayoutTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"TableViewLayoutTest$5,TableViewLayoutTest$4,TableViewLayoutTest$3,TableViewLayoutTest$2,TableViewLayoutTest$1"
};

$Object* allocate$TableViewLayoutTest($Class* clazz) {
	return $of($alloc(TableViewLayoutTest));
}

double TableViewLayoutTest::yCaret = 0.0;
double TableViewLayoutTest::xCaret = 0.0;
int32_t TableViewLayoutTest::tn = 0;
double TableViewLayoutTest::yCarFLTab = 0.0;
double TableViewLayoutTest::yCarLLTab = 0.0;
double TableViewLayoutTest::xCarBTab = 0.0;
double TableViewLayoutTest::xCarETab = 0.0;
double TableViewLayoutTest::dyCarFLTab = 0.0;
double TableViewLayoutTest::dyCarLLTab = 0.0;
double TableViewLayoutTest::dxCarBTab = 0.0;
double TableViewLayoutTest::dxCarETab = 0.0;
$JEditorPane* TableViewLayoutTest::edit = nullptr;
TableViewLayoutTest* TableViewLayoutTest::frame = nullptr;
$String* TableViewLayoutTest::Prop = nullptr;
bool TableViewLayoutTest::isTabWrong = false;
$Boolean* TableViewLayoutTest::isI18n = nullptr;

void TableViewLayoutTest::init$() {
	$useLocalCurrentObjectStackCache();
	$JFrame::init$("Code example for a TableView bug"_s);
	setUndecorated(true);
	setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$nc(TableViewLayoutTest::edit)->setEditorKit($$new($CodeBugEditorKit));
	initCodeBug();
	$nc($(this->getContentPane()))->add(static_cast<$Component*>($$new($JScrollPane, TableViewLayoutTest::edit)));
	this->pack();
	this->setLocationRelativeTo(nullptr);
	$nc(TableViewLayoutTest::edit)->addCaretListener($$new($TableViewLayoutTest$1, this));
}

void TableViewLayoutTest::initCodeBug() {
	$var($CodeBugDocument, doc, $cast($CodeBugDocument, $nc(TableViewLayoutTest::edit)->getDocument()));
	try {
		$nc(doc)->insertString(0, "TextB  TextE"_s, nullptr);
	} catch ($BadLocationException& ex) {
	}
	$nc(doc)->insertTable(6, 4, 3);
	try {
		doc->insertString(7, "Cell11"_s, nullptr);
		doc->insertString(14, "Cell12"_s, nullptr);
		doc->insertString(21, "Cell13"_s, nullptr);
		doc->insertString(28, "Cell21"_s, nullptr);
		doc->insertString(35, "Cell22"_s, nullptr);
		doc->insertString(42, "Cell23"_s, nullptr);
		doc->insertString(49, "Cell31"_s, nullptr);
		doc->insertString(56, "Cell32"_s, nullptr);
		doc->insertString(63, "Cell33"_s, nullptr);
		doc->insertString(70, "Cell41"_s, nullptr);
		doc->insertString(77, "Cell42"_s, nullptr);
		doc->insertString(84, "Cell43"_s, nullptr);
	} catch ($BadLocationException& ex) {
	}
}

void TableViewLayoutTest::main($StringArray* args) {
	$init(TableViewLayoutTest);
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < TableViewLayoutTest::tn; ++i) {
		$var($Robot, rob, $new($Robot));
		$SwingUtilities::invokeAndWait($$new($TableViewLayoutTest$2));
		$SwingUtilities::invokeAndWait($$new($TableViewLayoutTest$3));
		hitKey(rob, $KeyEvent::VK_T);
		hitKey(rob, $KeyEvent::VK_E);
		hitKey(rob, $KeyEvent::VK_S);
		hitKey(rob, $KeyEvent::VK_T);
		hitKey(rob, $KeyEvent::VK_BACK_SPACE);
		hitKey(rob, $KeyEvent::VK_BACK_SPACE);
		hitKey(rob, $KeyEvent::VK_BACK_SPACE);
		hitKey(rob, $KeyEvent::VK_BACK_SPACE);
		rob->waitForIdle();
		$SwingUtilities::invokeAndWait($$new($TableViewLayoutTest$4));
		$var($Object, dp, $nc($($nc(TableViewLayoutTest::edit)->getDocument()))->getProperty("i18n"_s));
		$init($Boolean);
		$var($Boolean, isI18n, $instanceOf($Boolean, dp) ? $cast($Boolean, dp) : $Boolean::FALSE);
		$var($String, i18n, $nc(isI18n)->booleanValue() ? "\nWhen i18n enable, "_s : "\nWhen i18n disable, "_s);
		if ($Math::abs(TableViewLayoutTest::yCarFLTab - TableViewLayoutTest::yCarLLTab) < 10) {
			TableViewLayoutTest::isTabWrong = $nc($Boolean::TRUE)->booleanValue();
			$assignStatic(TableViewLayoutTest::Prop, $str({TableViewLayoutTest::Prop, i18n, "test can\'t be completed : TableView layout wrong, lines overlap, see JDK-8133864."_s}));
		} else {
			if (TableViewLayoutTest::dyCarFLTab != 0 || TableViewLayoutTest::dyCarLLTab != 0) {
				TableViewLayoutTest::isTabWrong = $nc($Boolean::TRUE)->booleanValue();
				$assignStatic(TableViewLayoutTest::Prop, $str({TableViewLayoutTest::Prop, i18n, "TableView layout wrong : Table high change when inserts and removes caracters, bug never reported yet. First Line dy="_s, $$str(TableViewLayoutTest::dyCarFLTab), " Last Line dy="_s, $$str(TableViewLayoutTest::dyCarLLTab)}));
			}
			if (TableViewLayoutTest::dxCarBTab != 0 || TableViewLayoutTest::dxCarETab != 0) {
				TableViewLayoutTest::isTabWrong = $nc($Boolean::TRUE)->booleanValue();
				$assignStatic(TableViewLayoutTest::Prop, $str({TableViewLayoutTest::Prop, i18n, "TableView layout wrong : Table width change when inserts and removes caracters, see JDK-8158209 and JDK-7169915. Before Table dx="_s, $$str(TableViewLayoutTest::dxCarBTab), " After Table dx="_s, $$str(TableViewLayoutTest::dxCarETab)}));
			}
		}
		rob->waitForIdle();
		$SwingUtilities::invokeAndWait($$new($TableViewLayoutTest$5));
	}
	if (TableViewLayoutTest::isTabWrong) {
		$throwNew($RuntimeException, TableViewLayoutTest::Prop);
	}
	$nc($System::out)->println("ok"_s);
}

void TableViewLayoutTest::hitKey($Robot* robot, int32_t k) {
	$init(TableViewLayoutTest);
	$nc(robot)->delay(50);
	robot->keyPress(k);
	robot->keyRelease(k);
	robot->delay(50);
}

void clinit$TableViewLayoutTest($Class* class$) {
	TableViewLayoutTest::tn = 2;
	$assignStatic(TableViewLayoutTest::edit, $new($JEditorPane));
	$assignStatic(TableViewLayoutTest::Prop, "\n"_s);
	$init($Boolean);
	TableViewLayoutTest::isTabWrong = $nc($Boolean::FALSE)->booleanValue();
	$assignStatic(TableViewLayoutTest::isI18n, $Boolean::valueOf(false));
}

TableViewLayoutTest::TableViewLayoutTest() {
}

$Class* TableViewLayoutTest::load$($String* name, bool initialize) {
	$loadClass(TableViewLayoutTest, name, initialize, &_TableViewLayoutTest_ClassInfo_, clinit$TableViewLayoutTest, allocate$TableViewLayoutTest);
	return class$;
}

$Class* TableViewLayoutTest::class$ = nullptr;