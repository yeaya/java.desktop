#include <sun/swing/text/TextComponentPrintable$4.h>

#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/font/FontRenderContext.h>
#include <java/util/concurrent/atomic/AtomicReference.h>
#include <javax/swing/JTextField.h>
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
using $JTextField = ::javax::swing::JTextField;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $FontDesignMetrics = ::sun::font::FontDesignMetrics;
using $TextComponentPrintable = ::sun::swing::text::TextComponentPrintable;

namespace sun {
	namespace swing {
		namespace text {

$FieldInfo _TextComponentPrintable$4_FieldInfo_[] = {
	{"this$0", "Lsun/swing/text/TextComponentPrintable;", nullptr, $FINAL | $SYNTHETIC, $field(TextComponentPrintable$4, this$0)},
	{"val$textComponent", "Ljavax/swing/text/JTextComponent;", nullptr, $FINAL | $SYNTHETIC, $field(TextComponentPrintable$4, val$textComponent)},
	{}
};

$MethodInfo _TextComponentPrintable$4_MethodInfo_[] = {
	{"<init>", "(Lsun/swing/text/TextComponentPrintable;Ljavax/swing/text/JTextComponent;)V", nullptr, 0, $method(static_cast<void(TextComponentPrintable$4::*)($TextComponentPrintable*,$JTextComponent*)>(&TextComponentPrintable$4::init$))},
	{"getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TextComponentPrintable$4_EnclosingMethodInfo_ = {
	"sun.swing.text.TextComponentPrintable",
	"createPrintShellOnEDT",
	"(Ljavax/swing/text/JTextComponent;)Ljavax/swing/text/JTextComponent;"
};

$InnerClassInfo _TextComponentPrintable$4_InnerClassesInfo_[] = {
	{"sun.swing.text.TextComponentPrintable$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TextComponentPrintable$4_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.text.TextComponentPrintable$4",
	"javax.swing.JTextField",
	nullptr,
	_TextComponentPrintable$4_FieldInfo_,
	_TextComponentPrintable$4_MethodInfo_,
	nullptr,
	&_TextComponentPrintable$4_EnclosingMethodInfo_,
	_TextComponentPrintable$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.text.TextComponentPrintable"
};

$Object* allocate$TextComponentPrintable$4($Class* clazz) {
	return $of($alloc(TextComponentPrintable$4));
}

void TextComponentPrintable$4::init$($TextComponentPrintable* this$0, $JTextComponent* val$textComponent) {
	$set(this, this$0, this$0);
	$set(this, val$textComponent, val$textComponent);
	$JTextField::init$();
	{
		setHorizontalAlignment($nc(($cast($JTextField, this->val$textComponent)))->getHorizontalAlignment());
	}
}

$FontMetrics* TextComponentPrintable$4::getFontMetrics($Font* font) {
	return ($nc(this->this$0->frc)->get() == nullptr) ? $JTextField::getFontMetrics(font) : static_cast<$FontMetrics*>($FontDesignMetrics::getMetrics(font, $cast($FontRenderContext, $($nc(this->this$0->frc)->get()))));
}

TextComponentPrintable$4::TextComponentPrintable$4() {
}

$Class* TextComponentPrintable$4::load$($String* name, bool initialize) {
	$loadClass(TextComponentPrintable$4, name, initialize, &_TextComponentPrintable$4_ClassInfo_, allocate$TextComponentPrintable$4);
	return class$;
}

$Class* TextComponentPrintable$4::class$ = nullptr;

		} // text
	} // swing
} // sun