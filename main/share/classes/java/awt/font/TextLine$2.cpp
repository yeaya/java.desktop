#include <java/awt/font/TextLine$2.h>

#include <java/awt/font/TextLine$Function.h>
#include <java/awt/font/TextLine.h>
#include <sun/font/TextLineComponent.h>
#include <jcpp.h>

using $TextLineComponentArray = $Array<::sun::font::TextLineComponent>;
using $TextLine = ::java::awt::font::TextLine;
using $TextLine$Function = ::java::awt::font::TextLine$Function;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TextLineComponent = ::sun::font::TextLineComponent;

namespace java {
	namespace awt {
		namespace font {

$MethodInfo _TextLine$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TextLine$2::*)()>(&TextLine$2::init$))},
	{"computeFunction", "(Ljava/awt/font/TextLine;II)F", nullptr, 0},
	{}
};

$EnclosingMethodInfo _TextLine$2_EnclosingMethodInfo_ = {
	"java.awt.font.TextLine",
	nullptr,
	nullptr
};

$InnerClassInfo _TextLine$2_InnerClassesInfo_[] = {
	{"java.awt.font.TextLine$2", nullptr, nullptr, 0},
	{"java.awt.font.TextLine$Function", "java.awt.font.TextLine", "Function", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _TextLine$2_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.font.TextLine$2",
	"java.awt.font.TextLine$Function",
	nullptr,
	nullptr,
	_TextLine$2_MethodInfo_,
	nullptr,
	&_TextLine$2_EnclosingMethodInfo_,
	_TextLine$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.font.TextLine"
};

$Object* allocate$TextLine$2($Class* clazz) {
	return $of($alloc(TextLine$2));
}

void TextLine$2::init$() {
	$TextLine$Function::init$();
}

float TextLine$2::computeFunction($TextLine* line, int32_t componentIndex, int32_t indexInArray) {
	$var($TextLineComponent, tlc, $nc($nc(line)->fComponents)->get(componentIndex));
	return $nc(tlc)->getCharAdvance(indexInArray);
}

TextLine$2::TextLine$2() {
}

$Class* TextLine$2::load$($String* name, bool initialize) {
	$loadClass(TextLine$2, name, initialize, &_TextLine$2_ClassInfo_, allocate$TextLine$2);
	return class$;
}

$Class* TextLine$2::class$ = nullptr;

		} // font
	} // awt
} // java