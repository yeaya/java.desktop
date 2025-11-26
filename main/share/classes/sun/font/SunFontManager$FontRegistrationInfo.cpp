#include <sun/font/SunFontManager$FontRegistrationInfo.h>

#include <sun/font/SunFontManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunFontManager = ::sun::font::SunFontManager;

namespace sun {
	namespace font {

$FieldInfo _SunFontManager$FontRegistrationInfo_FieldInfo_[] = {
	{"fontFilePath", "Ljava/lang/String;", nullptr, 0, $field(SunFontManager$FontRegistrationInfo, fontFilePath)},
	{"nativeNames", "[Ljava/lang/String;", nullptr, 0, $field(SunFontManager$FontRegistrationInfo, nativeNames)},
	{"fontFormat", "I", nullptr, 0, $field(SunFontManager$FontRegistrationInfo, fontFormat)},
	{"javaRasterizer", "Z", nullptr, 0, $field(SunFontManager$FontRegistrationInfo, javaRasterizer)},
	{"fontRank", "I", nullptr, 0, $field(SunFontManager$FontRegistrationInfo, fontRank)},
	{}
};

$MethodInfo _SunFontManager$FontRegistrationInfo_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;[Ljava/lang/String;IZI)V", nullptr, 0, $method(static_cast<void(SunFontManager$FontRegistrationInfo::*)($String*,$StringArray*,int32_t,bool,int32_t)>(&SunFontManager$FontRegistrationInfo::init$))},
	{}
};

$InnerClassInfo _SunFontManager$FontRegistrationInfo_InnerClassesInfo_[] = {
	{"sun.font.SunFontManager$FontRegistrationInfo", "sun.font.SunFontManager", "FontRegistrationInfo", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _SunFontManager$FontRegistrationInfo_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.font.SunFontManager$FontRegistrationInfo",
	"java.lang.Object",
	nullptr,
	_SunFontManager$FontRegistrationInfo_FieldInfo_,
	_SunFontManager$FontRegistrationInfo_MethodInfo_,
	nullptr,
	nullptr,
	_SunFontManager$FontRegistrationInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.SunFontManager"
};

$Object* allocate$SunFontManager$FontRegistrationInfo($Class* clazz) {
	return $of($alloc(SunFontManager$FontRegistrationInfo));
}

void SunFontManager$FontRegistrationInfo::init$($String* fontPath, $StringArray* names, int32_t format, bool useJavaRasterizer, int32_t rank) {
	$set(this, fontFilePath, fontPath);
	$set(this, nativeNames, names);
	this->fontFormat = format;
	this->javaRasterizer = useJavaRasterizer;
	this->fontRank = rank;
}

SunFontManager$FontRegistrationInfo::SunFontManager$FontRegistrationInfo() {
}

$Class* SunFontManager$FontRegistrationInfo::load$($String* name, bool initialize) {
	$loadClass(SunFontManager$FontRegistrationInfo, name, initialize, &_SunFontManager$FontRegistrationInfo_ClassInfo_, allocate$SunFontManager$FontRegistrationInfo);
	return class$;
}

$Class* SunFontManager$FontRegistrationInfo::class$ = nullptr;

	} // font
} // sun