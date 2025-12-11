#include <sun/swing/text/TextComponentPrintable$1.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <javax/swing/CellRendererPane.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/text/JTextComponent.h>
#include <sun/swing/text/TextComponentPrintable.h>
#include <jcpp.h>

#undef HEIGHT
#undef WIDTH

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CellRendererPane = ::javax::swing::CellRendererPane;
using $JComponent = ::javax::swing::JComponent;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace sun {
	namespace swing {
		namespace text {

$FieldInfo _TextComponentPrintable$1_FieldInfo_[] = {
	{"val$editor", "Ljavax/swing/JEditorPane;", nullptr, $FINAL | $SYNTHETIC, $field(TextComponentPrintable$1, val$editor)},
	{}
};

$MethodInfo _TextComponentPrintable$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JEditorPane;)V", "()V", 0, $method(static_cast<void(TextComponentPrintable$1::*)($JEditorPane*)>(&TextComponentPrintable$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TextComponentPrintable$1_EnclosingMethodInfo_ = {
	"sun.swing.text.TextComponentPrintable",
	"createFrames",
	"(Ljavax/swing/JEditorPane;)V"
};

$InnerClassInfo _TextComponentPrintable$1_InnerClassesInfo_[] = {
	{"sun.swing.text.TextComponentPrintable$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TextComponentPrintable$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.text.TextComponentPrintable$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_TextComponentPrintable$1_FieldInfo_,
	_TextComponentPrintable$1_MethodInfo_,
	nullptr,
	&_TextComponentPrintable$1_EnclosingMethodInfo_,
	_TextComponentPrintable$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.text.TextComponentPrintable"
};

$Object* allocate$TextComponentPrintable$1($Class* clazz) {
	return $of($alloc(TextComponentPrintable$1));
}

void TextComponentPrintable$1::init$($JEditorPane* val$editor) {
	$set(this, val$editor, val$editor);
}

void TextComponentPrintable$1::run() {
	int32_t WIDTH = 500;
	int32_t HEIGHT = 500;
	$var($CellRendererPane, rendererPane, $new($CellRendererPane));
	rendererPane->add(static_cast<$Component*>(this->val$editor));
	rendererPane->setSize(WIDTH, HEIGHT);
}

TextComponentPrintable$1::TextComponentPrintable$1() {
}

$Class* TextComponentPrintable$1::load$($String* name, bool initialize) {
	$loadClass(TextComponentPrintable$1, name, initialize, &_TextComponentPrintable$1_ClassInfo_, allocate$TextComponentPrintable$1);
	return class$;
}

$Class* TextComponentPrintable$1::class$ = nullptr;

		} // text
	} // swing
} // sun