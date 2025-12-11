#include <bug8015853.h>

#include <bug8015853$1.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/io/File.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Runnable.h>
#include <java/net/URI.h>
#include <java/net/URL.h>
#include <java/util/Scanner.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/EditorKit.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/StyledEditorKit.h>
#include <javax/swing/text/html/HTMLEditorKit.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE

using $bug8015853$1 = ::bug8015853$1;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $URL = ::java::net::URL;
using $Scanner = ::java::util::Scanner;
using $JComponent = ::javax::swing::JComponent;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $DefaultEditorKit = ::javax::swing::text::DefaultEditorKit;
using $EditorKit = ::javax::swing::text::EditorKit;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $StyledEditorKit = ::javax::swing::text::StyledEditorKit;
using $HTMLEditorKit = ::javax::swing::text::html::HTMLEditorKit;

$FieldInfo _bug8015853_FieldInfo_[] = {
	{"text", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(bug8015853, text)},
	{}
};

$MethodInfo _bug8015853_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8015853::*)()>(&bug8015853::init$))},
	{"createAndShowGUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug8015853::createAndShowGUI))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug8015853::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug8015853_InnerClassesInfo_[] = {
	{"bug8015853$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8015853_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug8015853",
	"java.lang.Object",
	nullptr,
	_bug8015853_FieldInfo_,
	_bug8015853_MethodInfo_,
	nullptr,
	nullptr,
	_bug8015853_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug8015853$1"
};

$Object* allocate$bug8015853($Class* clazz) {
	return $of($alloc(bug8015853));
}

$String* bug8015853::text = nullptr;

void bug8015853::init$() {
}

void bug8015853::main($StringArray* args) {
	$init(bug8015853);
	$useLocalCurrentObjectStackCache();
	try {
		$var($URL, path, $ClassLoader::getSystemResource("bug8015853.txt"_s));
		$var($File, file, $new($File, $($nc(path)->toURI())));
		$var($Scanner, scanner, $new($Scanner, file));
		while (scanner->hasNextLine()) {
			$plusAssignStatic(bug8015853::text, $$str({$(scanner->nextLine()), "\n"_s}));
		}
		scanner->close();
	} catch ($Exception& ex) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(ex));
	}
	$plusAssignStatic(bug8015853::text, bug8015853::text);
	$SwingUtilities::invokeAndWait($$new($bug8015853$1));
}

void bug8015853::createAndShowGUI() {
	$init(bug8015853);
	$useLocalCurrentObjectStackCache();
	try {
		$UIManager::setLookAndFeel("javax.swing.plaf.metal.MetalLookAndFeel"_s);
	} catch ($Exception& ex) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(ex));
	}
	$var($JFrame, frame, $new($JFrame));
	frame->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$var($JEditorPane, editorPane, $new($JEditorPane));
	$var($HTMLEditorKit, editorKit, $new($HTMLEditorKit));
	editorPane->setEditorKit(editorKit);
	editorPane->setText(bug8015853::text);
	frame->add(static_cast<$Component*>(editorPane));
	frame->setVisible(true);
}

void clinit$bug8015853($Class* class$) {
	$assignStatic(bug8015853::text, ""_s);
}

bug8015853::bug8015853() {
}

$Class* bug8015853::load$($String* name, bool initialize) {
	$loadClass(bug8015853, name, initialize, &_bug8015853_ClassInfo_, clinit$bug8015853, allocate$bug8015853);
	return class$;
}

$Class* bug8015853::class$ = nullptr;