#include <sun/swing/text/TextComponentPrintable$9.h>

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

$FieldInfo _TextComponentPrintable$9_FieldInfo_[] = {
	{"this$0", "Lsun/swing/text/TextComponentPrintable;", nullptr, $FINAL | $SYNTHETIC, $field(TextComponentPrintable$9, this$0)},
	{}
};

$MethodInfo _TextComponentPrintable$9_MethodInfo_[] = {
	{"<init>", "(Lsun/swing/text/TextComponentPrintable;)V", nullptr, 0, $method(static_cast<void(TextComponentPrintable$9::*)($TextComponentPrintable*)>(&TextComponentPrintable$9::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TextComponentPrintable$9_EnclosingMethodInfo_ = {
	"sun.swing.text.TextComponentPrintable",
	"acquireReadLock",
	"()V"
};

$InnerClassInfo _TextComponentPrintable$9_InnerClassesInfo_[] = {
	{"sun.swing.text.TextComponentPrintable$9", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TextComponentPrintable$9_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.text.TextComponentPrintable$9",
	"java.lang.Object",
	"java.lang.Runnable",
	_TextComponentPrintable$9_FieldInfo_,
	_TextComponentPrintable$9_MethodInfo_,
	nullptr,
	&_TextComponentPrintable$9_EnclosingMethodInfo_,
	_TextComponentPrintable$9_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.text.TextComponentPrintable"
};

$Object* allocate$TextComponentPrintable$9($Class* clazz) {
	return $of($alloc(TextComponentPrintable$9));
}

void TextComponentPrintable$9::init$($TextComponentPrintable* this$0) {
	$set(this, this$0, this$0);
}

void TextComponentPrintable$9::run() {
}

TextComponentPrintable$9::TextComponentPrintable$9() {
}

$Class* TextComponentPrintable$9::load$($String* name, bool initialize) {
	$loadClass(TextComponentPrintable$9, name, initialize, &_TextComponentPrintable$9_ClassInfo_, allocate$TextComponentPrintable$9);
	return class$;
}

$Class* TextComponentPrintable$9::class$ = nullptr;

		} // text
	} // swing
} // sun