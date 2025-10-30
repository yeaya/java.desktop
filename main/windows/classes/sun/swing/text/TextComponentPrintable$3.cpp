#include <sun/swing/text/TextComponentPrintable$3.h>

#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/font/FontRenderContext.h>
#include <java/util/concurrent/atomic/AtomicReference.h>
#include <javax/swing/JPasswordField.h>
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
using $JPasswordField = ::javax::swing::JPasswordField;
using $JTextField = ::javax::swing::JTextField;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $FontDesignMetrics = ::sun::font::FontDesignMetrics;
using $TextComponentPrintable = ::sun::swing::text::TextComponentPrintable;

namespace sun {
	namespace swing {
		namespace text {

$FieldInfo _TextComponentPrintable$3_FieldInfo_[] = {
	{"this$0", "Lsun/swing/text/TextComponentPrintable;", nullptr, $FINAL | $SYNTHETIC, $field(TextComponentPrintable$3, this$0)},
	{"val$textComponent", "Ljavax/swing/text/JTextComponent;", nullptr, $FINAL | $SYNTHETIC, $field(TextComponentPrintable$3, val$textComponent)},
	{}
};

$MethodInfo _TextComponentPrintable$3_MethodInfo_[] = {
	{"<init>", "(Lsun/swing/text/TextComponentPrintable;Ljavax/swing/text/JTextComponent;)V", nullptr, 0, $method(static_cast<void(TextComponentPrintable$3::*)($TextComponentPrintable*,$JTextComponent*)>(&TextComponentPrintable$3::init$))},
	{"getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TextComponentPrintable$3_EnclosingMethodInfo_ = {
	"sun.swing.text.TextComponentPrintable",
	"createPrintShellOnEDT",
	"(Ljavax/swing/text/JTextComponent;)Ljavax/swing/text/JTextComponent;"
};

$InnerClassInfo _TextComponentPrintable$3_InnerClassesInfo_[] = {
	{"sun.swing.text.TextComponentPrintable$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TextComponentPrintable$3_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.text.TextComponentPrintable$3",
	"javax.swing.JPasswordField",
	nullptr,
	_TextComponentPrintable$3_FieldInfo_,
	_TextComponentPrintable$3_MethodInfo_,
	nullptr,
	&_TextComponentPrintable$3_EnclosingMethodInfo_,
	_TextComponentPrintable$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.text.TextComponentPrintable"
};

$Object* allocate$TextComponentPrintable$3($Class* clazz) {
	return $of($alloc(TextComponentPrintable$3));
}

void TextComponentPrintable$3::init$($TextComponentPrintable* this$0, $JTextComponent* val$textComponent) {
	$set(this, this$0, this$0);
	$set(this, val$textComponent, val$textComponent);
	$JPasswordField::init$();
	{
		setEchoChar($nc(($cast($JPasswordField, this->val$textComponent)))->getEchoChar());
		setHorizontalAlignment($nc(($cast($JTextField, this->val$textComponent)))->getHorizontalAlignment());
	}
}

$FontMetrics* TextComponentPrintable$3::getFontMetrics($Font* font) {
	return ($nc(this->this$0->frc)->get() == nullptr) ? $JPasswordField::getFontMetrics(font) : static_cast<$FontMetrics*>($FontDesignMetrics::getMetrics(font, $cast($FontRenderContext, $($nc(this->this$0->frc)->get()))));
}

TextComponentPrintable$3::TextComponentPrintable$3() {
}

$Class* TextComponentPrintable$3::load$($String* name, bool initialize) {
	$loadClass(TextComponentPrintable$3, name, initialize, &_TextComponentPrintable$3_ClassInfo_, allocate$TextComponentPrintable$3);
	return class$;
}

$Class* TextComponentPrintable$3::class$ = nullptr;

		} // text
	} // swing
} // sun