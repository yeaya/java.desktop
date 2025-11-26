#include <java/awt/font/TextLine$3.h>

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

$MethodInfo _TextLine$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TextLine$3::*)()>(&TextLine$3::init$))},
	{"computeFunction", "(Ljava/awt/font/TextLine;II)F", nullptr, 0},
	{}
};

$EnclosingMethodInfo _TextLine$3_EnclosingMethodInfo_ = {
	"java.awt.font.TextLine",
	nullptr,
	nullptr
};

$InnerClassInfo _TextLine$3_InnerClassesInfo_[] = {
	{"java.awt.font.TextLine$3", nullptr, nullptr, 0},
	{"java.awt.font.TextLine$Function", "java.awt.font.TextLine", "Function", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _TextLine$3_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.font.TextLine$3",
	"java.awt.font.TextLine$Function",
	nullptr,
	nullptr,
	_TextLine$3_MethodInfo_,
	nullptr,
	&_TextLine$3_EnclosingMethodInfo_,
	_TextLine$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.font.TextLine"
};

$Object* allocate$TextLine$3($Class* clazz) {
	return $of($alloc(TextLine$3));
}

void TextLine$3::init$() {
	$TextLine$Function::init$();
}

float TextLine$3::computeFunction($TextLine* line, int32_t componentIndex, int32_t indexInArray) {
	int32_t vi = $nc(line)->getComponentVisualIndex(componentIndex);
	$var($TextLineComponent, tlc, $nc(line->fComponents)->get(componentIndex));
	return $nc(line->locs)->get(vi * 2) + $nc(tlc)->getCharX(indexInArray);
}

TextLine$3::TextLine$3() {
}

$Class* TextLine$3::load$($String* name, bool initialize) {
	$loadClass(TextLine$3, name, initialize, &_TextLine$3_ClassInfo_, allocate$TextLine$3);
	return class$;
}

$Class* TextLine$3::class$ = nullptr;

		} // font
	} // awt
} // java