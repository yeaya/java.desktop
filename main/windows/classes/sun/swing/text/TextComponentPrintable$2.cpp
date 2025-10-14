#include <sun/swing/text/TextComponentPrintable$2.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/JTextComponent.h>
#include <sun/swing/text/TextComponentPrintable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Callable = ::java::util::concurrent::Callable;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $TextComponentPrintable = ::sun::swing::text::TextComponentPrintable;

namespace sun {
	namespace swing {
		namespace text {

$FieldInfo _TextComponentPrintable$2_FieldInfo_[] = {
	{"this$0", "Lsun/swing/text/TextComponentPrintable;", nullptr, $FINAL | $SYNTHETIC, $field(TextComponentPrintable$2, this$0)},
	{"val$textComponent", "Ljavax/swing/text/JTextComponent;", nullptr, $FINAL | $SYNTHETIC, $field(TextComponentPrintable$2, val$textComponent)},
	{}
};

$MethodInfo _TextComponentPrintable$2_MethodInfo_[] = {
	{"<init>", "(Lsun/swing/text/TextComponentPrintable;Ljavax/swing/text/JTextComponent;)V", "()V", 0, $method(static_cast<void(TextComponentPrintable$2::*)($TextComponentPrintable*,$JTextComponent*)>(&TextComponentPrintable$2::init$))},
	{"call", "()Ljavax/swing/text/JTextComponent;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _TextComponentPrintable$2_EnclosingMethodInfo_ = {
	"sun.swing.text.TextComponentPrintable",
	"createPrintShell",
	"(Ljavax/swing/text/JTextComponent;)Ljavax/swing/text/JTextComponent;"
};

$InnerClassInfo _TextComponentPrintable$2_InnerClassesInfo_[] = {
	{"sun.swing.text.TextComponentPrintable$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TextComponentPrintable$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.text.TextComponentPrintable$2",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_TextComponentPrintable$2_FieldInfo_,
	_TextComponentPrintable$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljavax/swing/text/JTextComponent;>;",
	&_TextComponentPrintable$2_EnclosingMethodInfo_,
	_TextComponentPrintable$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.text.TextComponentPrintable"
};

$Object* allocate$TextComponentPrintable$2($Class* clazz) {
	return $of($alloc(TextComponentPrintable$2));
}

void TextComponentPrintable$2::init$($TextComponentPrintable* this$0, $JTextComponent* val$textComponent) {
	$set(this, this$0, this$0);
	$set(this, val$textComponent, val$textComponent);
}

$Object* TextComponentPrintable$2::call() {
	return $of(this->this$0->createPrintShellOnEDT(this->val$textComponent));
}

TextComponentPrintable$2::TextComponentPrintable$2() {
}

$Class* TextComponentPrintable$2::load$($String* name, bool initialize) {
	$loadClass(TextComponentPrintable$2, name, initialize, &_TextComponentPrintable$2_ClassInfo_, allocate$TextComponentPrintable$2);
	return class$;
}

$Class* TextComponentPrintable$2::class$ = nullptr;

		} // text
	} // swing
} // sun