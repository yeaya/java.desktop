#include <sun/swing/text/TextComponentPrintable$8.h>

#include <java/awt/Graphics.h>
#include <java/awt/print/PageFormat.h>
#include <sun/swing/text/TextComponentPrintable.h>
#include <jcpp.h>

using $Graphics = ::java::awt::Graphics;
using $PageFormat = ::java::awt::print::PageFormat;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Callable = ::java::util::concurrent::Callable;
using $TextComponentPrintable = ::sun::swing::text::TextComponentPrintable;

namespace sun {
	namespace swing {
		namespace text {

$FieldInfo _TextComponentPrintable$8_FieldInfo_[] = {
	{"this$0", "Lsun/swing/text/TextComponentPrintable;", nullptr, $FINAL | $SYNTHETIC, $field(TextComponentPrintable$8, this$0)},
	{"val$pageIndex", "I", nullptr, $FINAL | $SYNTHETIC, $field(TextComponentPrintable$8, val$pageIndex)},
	{"val$pf", "Ljava/awt/print/PageFormat;", nullptr, $FINAL | $SYNTHETIC, $field(TextComponentPrintable$8, val$pf)},
	{"val$graphics", "Ljava/awt/Graphics;", nullptr, $FINAL | $SYNTHETIC, $field(TextComponentPrintable$8, val$graphics)},
	{}
};

$MethodInfo _TextComponentPrintable$8_MethodInfo_[] = {
	{"<init>", "(Lsun/swing/text/TextComponentPrintable;Ljava/awt/Graphics;Ljava/awt/print/PageFormat;I)V", "()V", 0, $method(static_cast<void(TextComponentPrintable$8::*)($TextComponentPrintable*,$Graphics*,$PageFormat*,int32_t)>(&TextComponentPrintable$8::init$))},
	{"call", "()Ljava/lang/Integer;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _TextComponentPrintable$8_EnclosingMethodInfo_ = {
	"sun.swing.text.TextComponentPrintable",
	"print",
	"(Ljava/awt/Graphics;Ljava/awt/print/PageFormat;I)I"
};

$InnerClassInfo _TextComponentPrintable$8_InnerClassesInfo_[] = {
	{"sun.swing.text.TextComponentPrintable$8", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TextComponentPrintable$8_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.text.TextComponentPrintable$8",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_TextComponentPrintable$8_FieldInfo_,
	_TextComponentPrintable$8_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Integer;>;",
	&_TextComponentPrintable$8_EnclosingMethodInfo_,
	_TextComponentPrintable$8_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.text.TextComponentPrintable"
};

$Object* allocate$TextComponentPrintable$8($Class* clazz) {
	return $of($alloc(TextComponentPrintable$8));
}

void TextComponentPrintable$8::init$($TextComponentPrintable* this$0, $Graphics* val$graphics, $PageFormat* val$pf, int32_t val$pageIndex) {
	$set(this, this$0, this$0);
	$set(this, val$graphics, val$graphics);
	$set(this, val$pf, val$pf);
	this->val$pageIndex = val$pageIndex;
}

$Object* TextComponentPrintable$8::call() {
	return $of($Integer::valueOf(this->this$0->printOnEDT(this->val$graphics, this->val$pf, this->val$pageIndex)));
}

TextComponentPrintable$8::TextComponentPrintable$8() {
}

$Class* TextComponentPrintable$8::load$($String* name, bool initialize) {
	$loadClass(TextComponentPrintable$8, name, initialize, &_TextComponentPrintable$8_ClassInfo_, allocate$TextComponentPrintable$8);
	return class$;
}

$Class* TextComponentPrintable$8::class$ = nullptr;

		} // text
	} // swing
} // sun