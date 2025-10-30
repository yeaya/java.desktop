#include <sun/font/TextSource.h>

#include <java/awt/Font.h>
#include <java/awt/font/FontRenderContext.h>
#include <sun/font/CoreMetrics.h>
#include <jcpp.h>

#undef WITHOUT_CONTEXT
#undef WITH_CONTEXT

using $Font = ::java::awt::Font;
using $FontRenderContext = ::java::awt::font::FontRenderContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CoreMetrics = ::sun::font::CoreMetrics;

namespace sun {
	namespace font {

$FieldInfo _TextSource_FieldInfo_[] = {
	{"WITHOUT_CONTEXT", "Z", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TextSource, WITHOUT_CONTEXT)},
	{"WITH_CONTEXT", "Z", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TextSource, WITH_CONTEXT)},
	{}
};

$MethodInfo _TextSource_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TextSource::*)()>(&TextSource::init$))},
	{"getBidiLevel", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getChars", "()[C", nullptr, $PUBLIC | $ABSTRACT},
	{"getContextLength", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getContextStart", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getCoreMetrics", "()Lsun/font/CoreMetrics;", nullptr, $PUBLIC | $ABSTRACT},
	{"getFRC", "()Ljava/awt/font/FontRenderContext;", nullptr, $PUBLIC | $ABSTRACT},
	{"getFont", "()Ljava/awt/Font;", nullptr, $PUBLIC | $ABSTRACT},
	{"getLayoutFlags", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getLength", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getStart", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getSubSource", "(III)Lsun/font/TextSource;", nullptr, $PUBLIC | $ABSTRACT},
	{"toString", "(Z)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _TextSource_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.font.TextSource",
	"java.lang.Object",
	nullptr,
	_TextSource_FieldInfo_,
	_TextSource_MethodInfo_
};

$Object* allocate$TextSource($Class* clazz) {
	return $of($alloc(TextSource));
}

void TextSource::init$() {
}

TextSource::TextSource() {
}

$Class* TextSource::load$($String* name, bool initialize) {
	$loadClass(TextSource, name, initialize, &_TextSource_ClassInfo_, allocate$TextSource);
	return class$;
}

$Class* TextSource::class$ = nullptr;

	} // font
} // sun