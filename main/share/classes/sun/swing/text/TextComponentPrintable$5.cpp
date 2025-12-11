#include <sun/swing/text/TextComponentPrintable$5.h>

#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/font/FontRenderContext.h>
#include <java/util/concurrent/atomic/AtomicReference.h>
#include <javax/swing/JTextArea.h>
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
using $JTextArea = ::javax::swing::JTextArea;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $FontDesignMetrics = ::sun::font::FontDesignMetrics;
using $TextComponentPrintable = ::sun::swing::text::TextComponentPrintable;

namespace sun {
	namespace swing {
		namespace text {

$FieldInfo _TextComponentPrintable$5_FieldInfo_[] = {
	{"this$0", "Lsun/swing/text/TextComponentPrintable;", nullptr, $FINAL | $SYNTHETIC, $field(TextComponentPrintable$5, this$0)},
	{"val$textComponent", "Ljavax/swing/text/JTextComponent;", nullptr, $FINAL | $SYNTHETIC, $field(TextComponentPrintable$5, val$textComponent)},
	{}
};

$MethodInfo _TextComponentPrintable$5_MethodInfo_[] = {
	{"<init>", "(Lsun/swing/text/TextComponentPrintable;Ljavax/swing/text/JTextComponent;)V", nullptr, 0, $method(static_cast<void(TextComponentPrintable$5::*)($TextComponentPrintable*,$JTextComponent*)>(&TextComponentPrintable$5::init$))},
	{"getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TextComponentPrintable$5_EnclosingMethodInfo_ = {
	"sun.swing.text.TextComponentPrintable",
	"createPrintShellOnEDT",
	"(Ljavax/swing/text/JTextComponent;)Ljavax/swing/text/JTextComponent;"
};

$InnerClassInfo _TextComponentPrintable$5_InnerClassesInfo_[] = {
	{"sun.swing.text.TextComponentPrintable$5", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TextComponentPrintable$5_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.text.TextComponentPrintable$5",
	"javax.swing.JTextArea",
	nullptr,
	_TextComponentPrintable$5_FieldInfo_,
	_TextComponentPrintable$5_MethodInfo_,
	nullptr,
	&_TextComponentPrintable$5_EnclosingMethodInfo_,
	_TextComponentPrintable$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.text.TextComponentPrintable"
};

$Object* allocate$TextComponentPrintable$5($Class* clazz) {
	return $of($alloc(TextComponentPrintable$5));
}

void TextComponentPrintable$5::init$($TextComponentPrintable* this$0, $JTextComponent* val$textComponent) {
	$set(this, this$0, this$0);
	$set(this, val$textComponent, val$textComponent);
	$JTextArea::init$();
	{
		$var($JTextArea, textArea, $cast($JTextArea, this->val$textComponent));
		setLineWrap($nc(textArea)->getLineWrap());
		setWrapStyleWord($nc(textArea)->getWrapStyleWord());
		setTabSize($nc(textArea)->getTabSize());
	}
}

$FontMetrics* TextComponentPrintable$5::getFontMetrics($Font* font) {
	return ($nc(this->this$0->frc)->get() == nullptr) ? $JTextArea::getFontMetrics(font) : static_cast<$FontMetrics*>($FontDesignMetrics::getMetrics(font, $cast($FontRenderContext, $($nc(this->this$0->frc)->get()))));
}

TextComponentPrintable$5::TextComponentPrintable$5() {
}

$Class* TextComponentPrintable$5::load$($String* name, bool initialize) {
	$loadClass(TextComponentPrintable$5, name, initialize, &_TextComponentPrintable$5_ClassInfo_, allocate$TextComponentPrintable$5);
	return class$;
}

$Class* TextComponentPrintable$5::class$ = nullptr;

		} // text
	} // swing
} // sun