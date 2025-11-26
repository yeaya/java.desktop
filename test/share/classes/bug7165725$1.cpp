#include <bug7165725$1.h>

#include <bug7165725$1$1.h>
#include <bug7165725.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/io/IOException.h>
#include <java/net/URL.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JViewport.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/EditorKit.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/StyledEditorKit.h>
#include <javax/swing/text/html/HTMLEditorKit.h>
#include <jcpp.h>

#undef CENTER

using $bug7165725 = ::bug7165725;
using $bug7165725$1$1 = ::bug7165725$1$1;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Window = ::java::awt::Window;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $URL = ::java::net::URL;
using $JComponent = ::javax::swing::JComponent;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JFrame = ::javax::swing::JFrame;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JViewport = ::javax::swing::JViewport;
using $DefaultEditorKit = ::javax::swing::text::DefaultEditorKit;
using $EditorKit = ::javax::swing::text::EditorKit;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $StyledEditorKit = ::javax::swing::text::StyledEditorKit;
using $HTMLEditorKit = ::javax::swing::text::html::HTMLEditorKit;

$FieldInfo _bug7165725$1_FieldInfo_[] = {
	{"this$0", "Lbug7165725;", nullptr, $FINAL | $SYNTHETIC, $field(bug7165725$1, this$0)},
	{"val$urlStr", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(bug7165725$1, val$urlStr)},
	{}
};

$MethodInfo _bug7165725$1_MethodInfo_[] = {
	{"<init>", "(Lbug7165725;Ljava/lang/String;)V", "()V", 0, $method(static_cast<void(bug7165725$1::*)($bug7165725*,$String*)>(&bug7165725$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug7165725$1_EnclosingMethodInfo_ = {
	"bug7165725",
	"execute",
	"(Ljava/lang/String;Lbug7165725$GoldenElement;)V"
};

$InnerClassInfo _bug7165725$1_InnerClassesInfo_[] = {
	{"bug7165725$1", nullptr, nullptr, 0},
	{"bug7165725$1$1", nullptr, nullptr, 0},
	{"bug7165725$GoldenElement", "bug7165725", "GoldenElement", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _bug7165725$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug7165725$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug7165725$1_FieldInfo_,
	_bug7165725$1_MethodInfo_,
	nullptr,
	&_bug7165725$1_EnclosingMethodInfo_,
	_bug7165725$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug7165725"
};

$Object* allocate$bug7165725$1($Class* clazz) {
	return $of($alloc(bug7165725$1));
}

void bug7165725$1::init$($bug7165725* this$0, $String* val$urlStr) {
	$set(this, this$0, this$0);
	$set(this, val$urlStr, val$urlStr);
}

void bug7165725$1::run() {
	$useLocalCurrentObjectStackCache();
	try {
		$set(this->this$0, editorPane, $new($JEditorPane));
		$nc(this->this$0->editorPane)->setEditorKit($$new($bug7165725$1$1, this));
		$nc(this->this$0->editorPane)->setPage($$new($URL, this->val$urlStr));
	} catch ($IOException& ex) {
		$throwNew($RuntimeException, "Test failed"_s, ex);
	}
	$nc(this->this$0->editorPane)->setEditable(false);
	$var($JScrollPane, scroller, $new($JScrollPane));
	$var($JViewport, vp, scroller->getViewport());
	$nc(vp)->add(static_cast<$Component*>(this->this$0->editorPane));
	$init($BorderLayout);
	this->this$0->add(static_cast<$Component*>(scroller), $of($BorderLayout::CENTER));
	this->this$0->setDefaultCloseOperation(3);
	this->this$0->setSize(400, 400);
	this->this$0->setLocationRelativeTo(nullptr);
	this->this$0->setVisible(true);
}

bug7165725$1::bug7165725$1() {
}

$Class* bug7165725$1::load$($String* name, bool initialize) {
	$loadClass(bug7165725$1, name, initialize, &_bug7165725$1_ClassInfo_, allocate$bug7165725$1);
	return class$;
}

$Class* bug7165725$1::class$ = nullptr;