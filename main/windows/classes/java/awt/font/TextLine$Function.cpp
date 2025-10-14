#include <java/awt/font/TextLine$Function.h>

#include <java/awt/font/TextLine.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $TextLine = ::java::awt::font::TextLine;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace font {

$MethodInfo _TextLine$Function_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(TextLine$Function::*)()>(&TextLine$Function::init$))},
	{"computeFunction", "(Ljava/awt/font/TextLine;II)F", nullptr, $ABSTRACT},
	{}
};

$InnerClassInfo _TextLine$Function_InnerClassesInfo_[] = {
	{"java.awt.font.TextLine$Function", "java.awt.font.TextLine", "Function", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _TextLine$Function_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.awt.font.TextLine$Function",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TextLine$Function_MethodInfo_,
	nullptr,
	nullptr,
	_TextLine$Function_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.font.TextLine"
};

$Object* allocate$TextLine$Function($Class* clazz) {
	return $of($alloc(TextLine$Function));
}

void TextLine$Function::init$() {
}

TextLine$Function::TextLine$Function() {
}

$Class* TextLine$Function::load$($String* name, bool initialize) {
	$loadClass(TextLine$Function, name, initialize, &_TextLine$Function_ClassInfo_, allocate$TextLine$Function);
	return class$;
}

$Class* TextLine$Function::class$ = nullptr;

		} // font
	} // awt
} // java