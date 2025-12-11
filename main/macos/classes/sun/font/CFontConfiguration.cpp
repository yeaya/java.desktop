#include <sun/font/CFontConfiguration.h>

#include <java/nio/charset/Charset.h>
#include <java/util/HashMap.h>
#include <sun/awt/FontConfiguration.h>
#include <sun/font/CompositeFontDescriptor.h>
#include <sun/font/SunFontManager.h>
#include <jcpp.h>

using $CompositeFontDescriptorArray = $Array<::sun::font::CompositeFontDescriptor>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $HashMap = ::java::util::HashMap;
using $FontConfiguration = ::sun::awt::FontConfiguration;
using $SunFontManager = ::sun::font::SunFontManager;

namespace sun {
	namespace font {

$FieldInfo _CFontConfiguration_FieldInfo_[] = {
	{"emptyDescriptors", "[Lsun/font/CompositeFontDescriptor;", nullptr, $PRIVATE | $STATIC, $staticField(CFontConfiguration, emptyDescriptors)},
	{"emptyStrings", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(CFontConfiguration, emptyStrings)},
	{}
};

$MethodInfo _CFontConfiguration_MethodInfo_[] = {
	{"<init>", "(Lsun/font/SunFontManager;)V", nullptr, $PUBLIC, $method(static_cast<void(CFontConfiguration::*)($SunFontManager*)>(&CFontConfiguration::init$))},
	{"<init>", "(Lsun/font/SunFontManager;ZZ)V", nullptr, $PUBLIC, $method(static_cast<void(CFontConfiguration::*)($SunFontManager*,bool,bool)>(&CFontConfiguration::init$))},
	{"get2DCompositeFontInfo", "()[Lsun/font/CompositeFontDescriptor;", nullptr, $PUBLIC},
	{"getDefaultFontCharset", "(Ljava/lang/String;)Ljava/nio/charset/Charset;", nullptr, $PROTECTED},
	{"getEncoding", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PROTECTED},
	{"getFaceNameFromComponentFontName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PROTECTED},
	{"getFallbackFamilyName", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getFileNameFromComponentFontName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PROTECTED},
	{"getNumberCoreFonts", "()I", nullptr, $PUBLIC},
	{"getPlatformFontNames", "()[Ljava/lang/String;", nullptr, $PUBLIC},
	{"initReorderMap", "()V", nullptr, $PROTECTED},
	{"mapFileName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PROTECTED},
	{}
};

$ClassInfo _CFontConfiguration_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.CFontConfiguration",
	"sun.awt.FontConfiguration",
	nullptr,
	_CFontConfiguration_FieldInfo_,
	_CFontConfiguration_MethodInfo_
};

$Object* allocate$CFontConfiguration($Class* clazz) {
	return $of($alloc(CFontConfiguration));
}

$CompositeFontDescriptorArray* CFontConfiguration::emptyDescriptors = nullptr;
$StringArray* CFontConfiguration::emptyStrings = nullptr;

void CFontConfiguration::init$($SunFontManager* fm) {
	$FontConfiguration::init$(fm);
}

void CFontConfiguration::init$($SunFontManager* fm, bool preferLocaleFonts, bool preferPropFonts) {
	$FontConfiguration::init$(fm, preferLocaleFonts, preferPropFonts);
}

int32_t CFontConfiguration::getNumberCoreFonts() {
	return 0;
}

$StringArray* CFontConfiguration::getPlatformFontNames() {
	return CFontConfiguration::emptyStrings;
}

$CompositeFontDescriptorArray* CFontConfiguration::get2DCompositeFontInfo() {
	return CFontConfiguration::emptyDescriptors;
}

$String* CFontConfiguration::mapFileName($String* fileName) {
	return ""_s;
}

$Charset* CFontConfiguration::getDefaultFontCharset($String* fontName) {
	return $Charset::forName("ISO8859_1"_s);
}

$String* CFontConfiguration::getEncoding($String* awtFontName, $String* charSubsetName) {
	return "default"_s;
}

$String* CFontConfiguration::getFaceNameFromComponentFontName($String* compFontName) {
	return compFontName;
}

$String* CFontConfiguration::getFileNameFromComponentFontName($String* compFontName) {
	return compFontName;
}

$String* CFontConfiguration::getFallbackFamilyName($String* fontName, $String* defaultFallback) {
	return defaultFallback;
}

void CFontConfiguration::initReorderMap() {
	$set(this, reorderMap, $new($HashMap));
}

void clinit$CFontConfiguration($Class* class$) {
	$assignStatic(CFontConfiguration::emptyDescriptors, $new($CompositeFontDescriptorArray, 0));
	$assignStatic(CFontConfiguration::emptyStrings, $new($StringArray, 0));
}

CFontConfiguration::CFontConfiguration() {
}

$Class* CFontConfiguration::load$($String* name, bool initialize) {
	$loadClass(CFontConfiguration, name, initialize, &_CFontConfiguration_ClassInfo_, clinit$CFontConfiguration, allocate$CFontConfiguration);
	return class$;
}

$Class* CFontConfiguration::class$ = nullptr;

	} // font
} // sun