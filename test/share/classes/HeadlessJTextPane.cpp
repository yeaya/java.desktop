#include <HeadlessJTextPane.h>

#include <javax/swing/JTextPane.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/EditorKit.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JTextPane = ::javax::swing::JTextPane;
using $Document = ::javax::swing::text::Document;
using $EditorKit = ::javax::swing::text::EditorKit;
using $JTextComponent = ::javax::swing::text::JTextComponent;

$MethodInfo _HeadlessJTextPane_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HeadlessJTextPane::*)()>(&HeadlessJTextPane::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&HeadlessJTextPane::main))},
	{}
};

$ClassInfo _HeadlessJTextPane_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HeadlessJTextPane",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HeadlessJTextPane_MethodInfo_
};

$Object* allocate$HeadlessJTextPane($Class* clazz) {
	return $of($alloc(HeadlessJTextPane));
}

void HeadlessJTextPane::init$() {
}

void HeadlessJTextPane::main($StringArray* args) {
	$var($JTextPane, tp, nullptr);
	$assign(tp, $new($JTextPane));
	tp->getEditorKit();
	tp->setContentType("text/html"_s);
	tp->getContentType();
	tp->setText("Merry Parrot"_s);
	tp->getText();
	tp->getDocument();
}

HeadlessJTextPane::HeadlessJTextPane() {
}

$Class* HeadlessJTextPane::load$($String* name, bool initialize) {
	$loadClass(HeadlessJTextPane, name, initialize, &_HeadlessJTextPane_ClassInfo_, allocate$HeadlessJTextPane);
	return class$;
}

$Class* HeadlessJTextPane::class$ = nullptr;