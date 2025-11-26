#include <bug6771184$1$1.h>

#include <bug6771184$1.h>
#include <java/awt/Graphics.h>
#include <java/awt/Shape.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $bug6771184$1 = ::bug6771184$1;
using $Graphics = ::java::awt::Graphics;
using $Shape = ::java::awt::Shape;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Highlighter$HighlightPainter = ::javax::swing::text::Highlighter$HighlightPainter;
using $JTextComponent = ::javax::swing::text::JTextComponent;

$FieldInfo _bug6771184$1$1_FieldInfo_[] = {
	{"this$0", "Lbug6771184$1;", nullptr, $FINAL | $SYNTHETIC, $field(bug6771184$1$1, this$0)},
	{}
};

$MethodInfo _bug6771184$1$1_MethodInfo_[] = {
	{"<init>", "(Lbug6771184$1;)V", nullptr, 0, $method(static_cast<void(bug6771184$1$1::*)($bug6771184$1*)>(&bug6771184$1$1::init$))},
	{"paint", "(Ljava/awt/Graphics;IILjava/awt/Shape;Ljavax/swing/text/JTextComponent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6771184$1$1_EnclosingMethodInfo_ = {
	"bug6771184$1",
	"run",
	"()V"
};

$InnerClassInfo _bug6771184$1$1_InnerClassesInfo_[] = {
	{"bug6771184$1", nullptr, nullptr, 0},
	{"bug6771184$1$1", nullptr, nullptr, 0},
	{"javax.swing.text.Highlighter$HighlightPainter", "javax.swing.text.Highlighter", "HighlightPainter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _bug6771184$1$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6771184$1$1",
	"java.lang.Object",
	"javax.swing.text.Highlighter$HighlightPainter",
	_bug6771184$1$1_FieldInfo_,
	_bug6771184$1$1_MethodInfo_,
	nullptr,
	&_bug6771184$1$1_EnclosingMethodInfo_,
	_bug6771184$1$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6771184"
};

$Object* allocate$bug6771184$1$1($Class* clazz) {
	return $of($alloc(bug6771184$1$1));
}

void bug6771184$1$1::init$($bug6771184$1* this$0) {
	$set(this, this$0, this$0);
}

void bug6771184$1$1::paint($Graphics* g, int32_t p0, int32_t p1, $Shape* bounds, $JTextComponent* c) {
}

bug6771184$1$1::bug6771184$1$1() {
}

$Class* bug6771184$1$1::load$($String* name, bool initialize) {
	$loadClass(bug6771184$1$1, name, initialize, &_bug6771184$1$1_ClassInfo_, allocate$bug6771184$1$1);
	return class$;
}

$Class* bug6771184$1$1::class$ = nullptr;