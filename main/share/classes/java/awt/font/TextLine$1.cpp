#include <java/awt/font/TextLine$1.h>

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

$MethodInfo _TextLine$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TextLine$1::*)()>(&TextLine$1::init$))},
	{"computeFunction", "(Ljava/awt/font/TextLine;II)F", nullptr, 0},
	{}
};

$EnclosingMethodInfo _TextLine$1_EnclosingMethodInfo_ = {
	"java.awt.font.TextLine",
	nullptr,
	nullptr
};

$InnerClassInfo _TextLine$1_InnerClassesInfo_[] = {
	{"java.awt.font.TextLine$1", nullptr, nullptr, 0},
	{"java.awt.font.TextLine$Function", "java.awt.font.TextLine", "Function", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _TextLine$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.font.TextLine$1",
	"java.awt.font.TextLine$Function",
	nullptr,
	nullptr,
	_TextLine$1_MethodInfo_,
	nullptr,
	&_TextLine$1_EnclosingMethodInfo_,
	_TextLine$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.font.TextLine"
};

$Object* allocate$TextLine$1($Class* clazz) {
	return $of($alloc(TextLine$1));
}

void TextLine$1::init$() {
	$TextLine$Function::init$();
}

float TextLine$1::computeFunction($TextLine* line, int32_t componentIndex, int32_t indexInArray) {
	$var($TextLineComponent, tlc, $nc($nc(line)->fComponents)->get(componentIndex));
	int32_t vi = line->getComponentVisualIndex(componentIndex);
	float var$0 = $nc(line->locs)->get(vi * 2) + $nc(tlc)->getCharX(indexInArray);
	return var$0 + tlc->getCharAdvance(indexInArray);
}

TextLine$1::TextLine$1() {
}

$Class* TextLine$1::load$($String* name, bool initialize) {
	$loadClass(TextLine$1, name, initialize, &_TextLine$1_ClassInfo_, allocate$TextLine$1);
	return class$;
}

$Class* TextLine$1::class$ = nullptr;

		} // font
	} // awt
} // java