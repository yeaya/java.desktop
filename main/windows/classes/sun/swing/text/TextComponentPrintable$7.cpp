#include <sun/swing/text/TextComponentPrintable$7.h>

#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/font/FontRenderContext.h>
#include <java/util/concurrent/atomic/AtomicReference.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/EditorKit.h>
#include <javax/swing/text/JTextComponent.h>
#include <sun/font/FontDesignMetrics.h>
#include <sun/swing/text/TextComponentPrintable.h>
#include <jcpp.h>

using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $FontRenderContext = ::java::awt::font::FontRenderContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AtomicReference = ::java::util::concurrent::atomic::AtomicReference;
using $JComponent = ::javax::swing::JComponent;
using $JEditorPane = ::javax::swing::JEditorPane;
using $Document = ::javax::swing::text::Document;
using $EditorKit = ::javax::swing::text::EditorKit;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $FontDesignMetrics = ::sun::font::FontDesignMetrics;
using $TextComponentPrintable = ::sun::swing::text::TextComponentPrintable;

namespace sun {
	namespace swing {
		namespace text {

$FieldInfo _TextComponentPrintable$7_FieldInfo_[] = {
	{"this$0", "Lsun/swing/text/TextComponentPrintable;", nullptr, $FINAL | $SYNTHETIC, $field(TextComponentPrintable$7, this$0)},
	{"val$textComponent", "Ljavax/swing/text/JTextComponent;", nullptr, $FINAL | $SYNTHETIC, $field(TextComponentPrintable$7, val$textComponent)},
	{}
};

$MethodInfo _TextComponentPrintable$7_MethodInfo_[] = {
	{"<init>", "(Lsun/swing/text/TextComponentPrintable;Ljavax/swing/text/JTextComponent;)V", nullptr, 0, $method(static_cast<void(TextComponentPrintable$7::*)($TextComponentPrintable*,$JTextComponent*)>(&TextComponentPrintable$7::init$))},
	{"getEditorKit", "()Ljavax/swing/text/EditorKit;", nullptr, $PUBLIC},
	{"getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TextComponentPrintable$7_EnclosingMethodInfo_ = {
	"sun.swing.text.TextComponentPrintable",
	"createPrintShellOnEDT",
	"(Ljavax/swing/text/JTextComponent;)Ljavax/swing/text/JTextComponent;"
};

$InnerClassInfo _TextComponentPrintable$7_InnerClassesInfo_[] = {
	{"sun.swing.text.TextComponentPrintable$7", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TextComponentPrintable$7_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.text.TextComponentPrintable$7",
	"javax.swing.JEditorPane",
	nullptr,
	_TextComponentPrintable$7_FieldInfo_,
	_TextComponentPrintable$7_MethodInfo_,
	nullptr,
	&_TextComponentPrintable$7_EnclosingMethodInfo_,
	_TextComponentPrintable$7_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.text.TextComponentPrintable"
};

$Object* allocate$TextComponentPrintable$7($Class* clazz) {
	return $of($alloc(TextComponentPrintable$7));
}

void TextComponentPrintable$7::init$($TextComponentPrintable* this$0, $JTextComponent* val$textComponent) {
	$set(this, this$0, this$0);
	$set(this, val$textComponent, val$textComponent);
	$JEditorPane::init$();
}

$FontMetrics* TextComponentPrintable$7::getFontMetrics($Font* font) {
	return ($nc(this->this$0->frc)->get() == nullptr) ? $JEditorPane::getFontMetrics(font) : static_cast<$FontMetrics*>($FontDesignMetrics::getMetrics(font, $cast($FontRenderContext, $($nc(this->this$0->frc)->get()))));
}

$EditorKit* TextComponentPrintable$7::getEditorKit() {
	if (getDocument() == $nc(this->val$textComponent)->getDocument()) {
		return $nc(($cast($JEditorPane, this->val$textComponent)))->getEditorKit();
	} else {
		return $JEditorPane::getEditorKit();
	}
}

TextComponentPrintable$7::TextComponentPrintable$7() {
}

$Class* TextComponentPrintable$7::load$($String* name, bool initialize) {
	$loadClass(TextComponentPrintable$7, name, initialize, &_TextComponentPrintable$7_ClassInfo_, allocate$TextComponentPrintable$7);
	return class$;
}

$Class* TextComponentPrintable$7::class$ = nullptr;

		} // text
	} // swing
} // sun