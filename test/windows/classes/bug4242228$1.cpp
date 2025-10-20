#include <bug4242228$1.h>

#include <bug4242228$1$1.h>
#include <bug4242228.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Window.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/JTextPane.h>
#include <javax/swing/JViewport.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/DefaultStyledDocument.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/EditorKit.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/StyledEditorKit.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <javax/swing/text/html/HTMLEditorKit.h>
#include <jcpp.h>

#undef BOTTOM

using $bug4242228 = ::bug4242228;
using $bug4242228$1$1 = ::bug4242228$1$1;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JComponent = ::javax::swing::JComponent;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JFrame = ::javax::swing::JFrame;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $JTextPane = ::javax::swing::JTextPane;
using $JViewport = ::javax::swing::JViewport;
using $SwingConstants = ::javax::swing::SwingConstants;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $DefaultEditorKit = ::javax::swing::text::DefaultEditorKit;
using $DefaultStyledDocument = ::javax::swing::text::DefaultStyledDocument;
using $Document = ::javax::swing::text::Document;
using $EditorKit = ::javax::swing::text::EditorKit;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $StyledEditorKit = ::javax::swing::text::StyledEditorKit;
using $HTMLDocument = ::javax::swing::text::html::HTMLDocument;
using $HTMLEditorKit = ::javax::swing::text::html::HTMLEditorKit;

$MethodInfo _bug4242228$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug4242228$1::*)()>(&bug4242228$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4242228$1_EnclosingMethodInfo_ = {
	"bug4242228",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug4242228$1_InnerClassesInfo_[] = {
	{"bug4242228$1", nullptr, nullptr, 0},
	{"bug4242228$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4242228$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug4242228$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug4242228$1_MethodInfo_,
	nullptr,
	&_bug4242228$1_EnclosingMethodInfo_,
	_bug4242228$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4242228"
};

$Object* allocate$bug4242228$1($Class* clazz) {
	return $of($alloc(bug4242228$1));
}

void bug4242228$1::init$() {
}

void bug4242228$1::run() {
	$useLocalCurrentObjectStackCache();
	$init($bug4242228);
	$assignStatic($bug4242228::frame, $new($JFrame, "4242228 Test"_s));
	$var($JScrollPane, sourcePane, $new($JScrollPane));
	$var($JTextPane, htmlEditor, $new($JTextPane));
	$var($JTextPane, sourceEditor, $new($JTextPane));
	$var($JScrollPane, editorPane, $new($JScrollPane));
	$assignStatic($bug4242228::tabPane, $new($JTabbedPane));
	htmlEditor->setText(" "_s);
	htmlEditor->setEditorKit($$new($HTMLEditorKit));
	sourceEditor->setText(" "_s);
	sourceEditor->setEditorKit($$new($StyledEditorKit));
	$nc($bug4242228::frame)->setLayout($$new($BorderLayout));
	$nc($(editorPane->getViewport()))->add(static_cast<$Component*>(htmlEditor));
	$nc($bug4242228::tabPane)->addTab("Editor"_s, editorPane);
	$nc($bug4242228::tabPane)->addChangeListener($$new($bug4242228$1$1, this, editorPane, htmlEditor, sourceEditor));
	$nc($(sourcePane->getViewport()))->add(static_cast<$Component*>(sourceEditor));
	$nc($bug4242228::tabPane)->addTab("Source"_s, sourcePane);
	$nc($bug4242228::tabPane)->setTabPlacement($SwingConstants::BOTTOM);
	htmlEditor->setDocument(static_cast<$Document*>(static_cast<$AbstractDocument*>(static_cast<$DefaultStyledDocument*>($$new($HTMLDocument)))));
	$nc($bug4242228::frame)->add(static_cast<$Component*>($bug4242228::tabPane));
	$nc($bug4242228::frame)->setSize(400, 300);
	$nc($bug4242228::frame)->setVisible(true);
}

bug4242228$1::bug4242228$1() {
}

$Class* bug4242228$1::load$($String* name, bool initialize) {
	$loadClass(bug4242228$1, name, initialize, &_bug4242228$1_ClassInfo_, allocate$bug4242228$1);
	return class$;
}

$Class* bug4242228$1::class$ = nullptr;