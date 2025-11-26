#include <java/awt/font/TextLine$4.h>

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

$MethodInfo _TextLine$4_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TextLine$4::*)()>(&TextLine$4::init$))},
	{"computeFunction", "(Ljava/awt/font/TextLine;II)F", nullptr, 0},
	{}
};

$EnclosingMethodInfo _TextLine$4_EnclosingMethodInfo_ = {
	"java.awt.font.TextLine",
	nullptr,
	nullptr
};

$InnerClassInfo _TextLine$4_InnerClassesInfo_[] = {
	{"java.awt.font.TextLine$4", nullptr, nullptr, 0},
	{"java.awt.font.TextLine$Function", "java.awt.font.TextLine", "Function", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _TextLine$4_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.font.TextLine$4",
	"java.awt.font.TextLine$Function",
	nullptr,
	nullptr,
	_TextLine$4_MethodInfo_,
	nullptr,
	&_TextLine$4_EnclosingMethodInfo_,
	_TextLine$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.font.TextLine"
};

$Object* allocate$TextLine$4($Class* clazz) {
	return $of($alloc(TextLine$4));
}

void TextLine$4::init$() {
	$TextLine$Function::init$();
}

float TextLine$4::computeFunction($TextLine* line, int32_t componentIndex, int32_t indexInArray) {
	$var($TextLineComponent, tlc, $nc($nc(line)->fComponents)->get(componentIndex));
	float charPos = $nc(tlc)->getCharY(indexInArray);
	return charPos + line->getComponentShift(componentIndex);
}

TextLine$4::TextLine$4() {
}

$Class* TextLine$4::load$($String* name, bool initialize) {
	$loadClass(TextLine$4, name, initialize, &_TextLine$4_ClassInfo_, allocate$TextLine$4);
	return class$;
}

$Class* TextLine$4::class$ = nullptr;

		} // font
	} // awt
} // java