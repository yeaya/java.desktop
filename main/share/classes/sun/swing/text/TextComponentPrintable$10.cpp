#include <sun/swing/text/TextComponentPrintable$10.h>

#include <sun/swing/text/TextComponentPrintable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TextComponentPrintable = ::sun::swing::text::TextComponentPrintable;

namespace sun {
	namespace swing {
		namespace text {

$FieldInfo _TextComponentPrintable$10_FieldInfo_[] = {
	{"this$0", "Lsun/swing/text/TextComponentPrintable;", nullptr, $FINAL | $SYNTHETIC, $field(TextComponentPrintable$10, this$0)},
	{"val$width", "I", nullptr, $FINAL | $SYNTHETIC, $field(TextComponentPrintable$10, val$width)},
	{}
};

$MethodInfo _TextComponentPrintable$10_MethodInfo_[] = {
	{"<init>", "(Lsun/swing/text/TextComponentPrintable;I)V", "()V", 0, $method(static_cast<void(TextComponentPrintable$10::*)($TextComponentPrintable*,int32_t)>(&TextComponentPrintable$10::init$))},
	{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _TextComponentPrintable$10_EnclosingMethodInfo_ = {
	"sun.swing.text.TextComponentPrintable",
	"layout",
	"(I)V"
};

$InnerClassInfo _TextComponentPrintable$10_InnerClassesInfo_[] = {
	{"sun.swing.text.TextComponentPrintable$10", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TextComponentPrintable$10_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.text.TextComponentPrintable$10",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_TextComponentPrintable$10_FieldInfo_,
	_TextComponentPrintable$10_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Object;>;",
	&_TextComponentPrintable$10_EnclosingMethodInfo_,
	_TextComponentPrintable$10_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.text.TextComponentPrintable"
};

$Object* allocate$TextComponentPrintable$10($Class* clazz) {
	return $of($alloc(TextComponentPrintable$10));
}

void TextComponentPrintable$10::init$($TextComponentPrintable* this$0, int32_t val$width) {
	$set(this, this$0, this$0);
	this->val$width = val$width;
}

$Object* TextComponentPrintable$10::call() {
	this->this$0->layoutOnEDT(this->val$width);
	return $of(nullptr);
}

TextComponentPrintable$10::TextComponentPrintable$10() {
}

$Class* TextComponentPrintable$10::load$($String* name, bool initialize) {
	$loadClass(TextComponentPrintable$10, name, initialize, &_TextComponentPrintable$10_ClassInfo_, allocate$TextComponentPrintable$10);
	return class$;
}

$Class* TextComponentPrintable$10::class$ = nullptr;

		} // text
	} // swing
} // sun