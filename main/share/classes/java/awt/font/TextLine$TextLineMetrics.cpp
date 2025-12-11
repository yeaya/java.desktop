#include <java/awt/font/TextLine$TextLineMetrics.h>

#include <java/awt/font/TextLine.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace font {

$FieldInfo _TextLine$TextLineMetrics_FieldInfo_[] = {
	{"ascent", "F", nullptr, $PUBLIC | $FINAL, $field(TextLine$TextLineMetrics, ascent)},
	{"descent", "F", nullptr, $PUBLIC | $FINAL, $field(TextLine$TextLineMetrics, descent)},
	{"leading", "F", nullptr, $PUBLIC | $FINAL, $field(TextLine$TextLineMetrics, leading)},
	{"advance", "F", nullptr, $PUBLIC | $FINAL, $field(TextLine$TextLineMetrics, advance)},
	{}
};

$MethodInfo _TextLine$TextLineMetrics_MethodInfo_[] = {
	{"<init>", "(FFFF)V", nullptr, $PUBLIC, $method(static_cast<void(TextLine$TextLineMetrics::*)(float,float,float,float)>(&TextLine$TextLineMetrics::init$))},
	{}
};

$InnerClassInfo _TextLine$TextLineMetrics_InnerClassesInfo_[] = {
	{"java.awt.font.TextLine$TextLineMetrics", "java.awt.font.TextLine", "TextLineMetrics", $STATIC | $FINAL},
	{}
};

$ClassInfo _TextLine$TextLineMetrics_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.awt.font.TextLine$TextLineMetrics",
	"java.lang.Object",
	nullptr,
	_TextLine$TextLineMetrics_FieldInfo_,
	_TextLine$TextLineMetrics_MethodInfo_,
	nullptr,
	nullptr,
	_TextLine$TextLineMetrics_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.font.TextLine"
};

$Object* allocate$TextLine$TextLineMetrics($Class* clazz) {
	return $of($alloc(TextLine$TextLineMetrics));
}

void TextLine$TextLineMetrics::init$(float ascent, float descent, float leading, float advance) {
	this->ascent = ascent;
	this->descent = descent;
	this->leading = leading;
	this->advance = advance;
}

TextLine$TextLineMetrics::TextLine$TextLineMetrics() {
}

$Class* TextLine$TextLineMetrics::load$($String* name, bool initialize) {
	$loadClass(TextLine$TextLineMetrics, name, initialize, &_TextLine$TextLineMetrics_ClassInfo_, allocate$TextLine$TextLineMetrics);
	return class$;
}

$Class* TextLine$TextLineMetrics::class$ = nullptr;

		} // font
	} // awt
} // java