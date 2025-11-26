#include <bug8058120.h>

#include <bug8058120$1.h>
#include <bug8058120$2.h>
#include <bug8058120$3.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/lang/Runnable.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/EditorKit.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/StyledEditorKit.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <javax/swing/text/html/HTMLEditorKit.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE

using $bug8058120$1 = ::bug8058120$1;
using $bug8058120$2 = ::bug8058120$2;
using $bug8058120$3 = ::bug8058120$3;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $JComponent = ::javax::swing::JComponent;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $DefaultEditorKit = ::javax::swing::text::DefaultEditorKit;
using $Document = ::javax::swing::text::Document;
using $EditorKit = ::javax::swing::text::EditorKit;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $StyledEditorKit = ::javax::swing::text::StyledEditorKit;
using $HTMLDocument = ::javax::swing::text::html::HTMLDocument;
using $HTMLEditorKit = ::javax::swing::text::html::HTMLEditorKit;

$FieldInfo _bug8058120_FieldInfo_[] = {
	{"document", "Ljavax/swing/text/html/HTMLDocument;", nullptr, $PRIVATE | $STATIC, $staticField(bug8058120, document)},
	{"text", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug8058120, text)},
	{"textToInsert", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug8058120, textToInsert)},
	{}
};

$MethodInfo _bug8058120_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8058120::*)()>(&bug8058120::init$))},
	{"createAndShowGUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug8058120::createAndShowGUI))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug8058120::main))},
	{}
};

$InnerClassInfo _bug8058120_InnerClassesInfo_[] = {
	{"bug8058120$3", nullptr, nullptr, 0},
	{"bug8058120$2", nullptr, nullptr, 0},
	{"bug8058120$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8058120_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug8058120",
	"java.lang.Object",
	nullptr,
	_bug8058120_FieldInfo_,
	_bug8058120_MethodInfo_,
	nullptr,
	nullptr,
	_bug8058120_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug8058120$3,bug8058120$2,bug8058120$1"
};

$Object* allocate$bug8058120($Class* clazz) {
	return $of($alloc(bug8058120));
}

$HTMLDocument* bug8058120::document = nullptr;
$String* bug8058120::text = nullptr;
$String* bug8058120::textToInsert = nullptr;

void bug8058120::init$() {
}

void bug8058120::main($StringArray* args) {
	$init(bug8058120);
	$useLocalCurrentObjectStackCache();
	$var($Robot, robot, nullptr);
	try {
		$assign(robot, $new($Robot));
	} catch ($Exception& ex) {
		ex->printStackTrace();
		$throwNew($RuntimeException, "Unexpected failure"_s);
	}
	$SwingUtilities::invokeLater($$new($bug8058120$1));
	$nc(robot)->waitForIdle();
	$SwingUtilities::invokeLater($$new($bug8058120$2));
	robot->waitForIdle();
	$SwingUtilities::invokeLater($$new($bug8058120$3));
}

void bug8058120::createAndShowGUI() {
	$init(bug8058120);
	$useLocalCurrentObjectStackCache();
	try {
		$UIManager::setLookAndFeel("javax.swing.plaf.metal.MetalLookAndFeel"_s);
	} catch ($Exception& ex) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(ex));
	}
	$var($JFrame, frame, $new($JFrame, "bug8058120"_s));
	frame->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$var($JEditorPane, editorPane, $new($JEditorPane));
	editorPane->setContentType("text/html"_s);
	editorPane->setEditorKit($$new($HTMLEditorKit));
	$assignStatic(bug8058120::document, $cast($HTMLDocument, editorPane->getDocument()));
	editorPane->setText(bug8058120::text);
	frame->add(static_cast<$Component*>(editorPane));
	frame->setSize(200, 200);
	frame->setVisible(true);
}

void clinit$bug8058120($Class* class$) {
	$assignStatic(bug8058120::text, "<p id = \'ab\'>ab</p>"_s);
	$assignStatic(bug8058120::textToInsert, "c"_s);
	$assignStatic(bug8058120::document, nullptr);
}

bug8058120::bug8058120() {
}

$Class* bug8058120::load$($String* name, bool initialize) {
	$loadClass(bug8058120, name, initialize, &_bug8058120_ClassInfo_, clinit$bug8058120, allocate$bug8058120);
	return class$;
}

$Class* bug8058120::class$ = nullptr;