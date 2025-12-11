#include <bug8031109$1.h>

#include <bug8031109.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/net/URL.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/EditorKit.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE
#undef TRUE

using $bug8031109 = ::bug8031109;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $JComponent = ::javax::swing::JComponent;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JFrame = ::javax::swing::JFrame;
using $JScrollPane = ::javax::swing::JScrollPane;
using $Document = ::javax::swing::text::Document;
using $EditorKit = ::javax::swing::text::EditorKit;
using $JTextComponent = ::javax::swing::text::JTextComponent;

$MethodInfo _bug8031109$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug8031109$1::*)()>(&bug8031109$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug8031109$1_EnclosingMethodInfo_ = {
	"bug8031109",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug8031109$1_InnerClassesInfo_[] = {
	{"bug8031109$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8031109$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug8031109$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug8031109$1_MethodInfo_,
	nullptr,
	&_bug8031109$1_EnclosingMethodInfo_,
	_bug8031109$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8031109"
};

$Object* allocate$bug8031109$1($Class* clazz) {
	return $of($alloc(bug8031109$1));
}

void bug8031109$1::init$() {
}

void bug8031109$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($JEditorPane, editorPane, $new($JEditorPane));
	editorPane->setEditable(false);
	$var($EditorKit, defaultHtmlEditor, $JEditorPane::createEditorKitForContentType("text/html"_s));
	editorPane->setEditorKitForContentType("text/html"_s, defaultHtmlEditor);
	editorPane->setContentType("text/html"_s);
	$init($Boolean);
	$nc($(editorPane->getDocument()))->putProperty("IgnoreCharsetDirective"_s, $Boolean::TRUE);
	$var($URL, url, $bug8031109::generateHtmlFile());
	$var($String, html, $str({"<html><frameset rows=\"120px, 120 PX ,  * , 10 *\">\n   <frame name=\"top\" src=\""_s, url, "\" />\n   <frame name=\"center\" src=\""_s, url, "\" />\n   <frame name=\"main\" src=\""_s, url, "\" />\n   <noframes>\n   <body>\n      Your browser does not support frames.\n   </body>\n   </noframes>\n</frameset>"_s}));
	editorPane->setText(html);
	$var($JScrollPane, scrollPane, $new($JScrollPane, editorPane));
	$var($JFrame, frame, $new($JFrame));
	frame->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$nc($(frame->getContentPane()))->add(static_cast<$Component*>(scrollPane));
	frame->setSize(500, 500);
	frame->setVisible(true);
}

bug8031109$1::bug8031109$1() {
}

$Class* bug8031109$1::load$($String* name, bool initialize) {
	$loadClass(bug8031109$1, name, initialize, &_bug8031109$1_ClassInfo_, allocate$bug8031109$1);
	return class$;
}

$Class* bug8031109$1::class$ = nullptr;