#include <bug7165725$2.h>

#include <bug7165725$GoldenElement.h>
#include <bug7165725.h>
#include <java/awt/Window.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/text/AbstractDocument$AbstractElement.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <jcpp.h>

using $bug7165725 = ::bug7165725;
using $bug7165725$GoldenElement = ::bug7165725$GoldenElement;
using $Window = ::java::awt::Window;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JEditorPane = ::javax::swing::JEditorPane;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $AbstractDocument$AbstractElement = ::javax::swing::text::AbstractDocument$AbstractElement;
using $DefaultStyledDocument = ::javax::swing::text::DefaultStyledDocument;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $HTMLDocument = ::javax::swing::text::html::HTMLDocument;

$FieldInfo _bug7165725$2_FieldInfo_[] = {
	{"this$0", "Lbug7165725;", nullptr, $FINAL | $SYNTHETIC, $field(bug7165725$2, this$0)},
	{"val$goldenElement", "Lbug7165725$GoldenElement;", nullptr, $FINAL | $SYNTHETIC, $field(bug7165725$2, val$goldenElement)},
	{}
};

$MethodInfo _bug7165725$2_MethodInfo_[] = {
	{"<init>", "(Lbug7165725;Lbug7165725$GoldenElement;)V", "()V", 0, $method(static_cast<void(bug7165725$2::*)($bug7165725*,$bug7165725$GoldenElement*)>(&bug7165725$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug7165725$2_EnclosingMethodInfo_ = {
	"bug7165725",
	"execute",
	"(Ljava/lang/String;Lbug7165725$GoldenElement;)V"
};

$InnerClassInfo _bug7165725$2_InnerClassesInfo_[] = {
	{"bug7165725$2", nullptr, nullptr, 0},
	{"bug7165725$GoldenElement", "bug7165725", "GoldenElement", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _bug7165725$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug7165725$2",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug7165725$2_FieldInfo_,
	_bug7165725$2_MethodInfo_,
	nullptr,
	&_bug7165725$2_EnclosingMethodInfo_,
	_bug7165725$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug7165725"
};

$Object* allocate$bug7165725$2($Class* clazz) {
	return $of($alloc(bug7165725$2));
}

void bug7165725$2::init$($bug7165725* this$0, $bug7165725$GoldenElement* val$goldenElement) {
	$set(this, this$0, this$0);
	$set(this, val$goldenElement, val$goldenElement);
}

void bug7165725$2::run() {
	$useLocalCurrentObjectStackCache();
	$var($HTMLDocument, doc, $cast($HTMLDocument, $nc(this->this$0->editorPane)->getDocument()));
	$nc(doc)->dump($System::out);
	$nc(this->val$goldenElement)->checkStructureEquivalence($cast($AbstractDocument$AbstractElement, $(doc->getDefaultRootElement())));
	this->this$0->dispose();
}

bug7165725$2::bug7165725$2() {
}

$Class* bug7165725$2::load$($String* name, bool initialize) {
	$loadClass(bug7165725$2, name, initialize, &_bug7165725$2_ClassInfo_, allocate$bug7165725$2);
	return class$;
}

$Class* bug7165725$2::class$ = nullptr;