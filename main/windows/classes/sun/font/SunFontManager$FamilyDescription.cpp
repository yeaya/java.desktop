#include <sun/font/SunFontManager$FamilyDescription.h>

#include <sun/font/SunFontManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunFontManager = ::sun::font::SunFontManager;

namespace sun {
	namespace font {

$FieldInfo _SunFontManager$FamilyDescription_FieldInfo_[] = {
	{"familyName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(SunFontManager$FamilyDescription, familyName)},
	{"plainFullName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(SunFontManager$FamilyDescription, plainFullName)},
	{"boldFullName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(SunFontManager$FamilyDescription, boldFullName)},
	{"italicFullName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(SunFontManager$FamilyDescription, italicFullName)},
	{"boldItalicFullName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(SunFontManager$FamilyDescription, boldItalicFullName)},
	{"plainFileName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(SunFontManager$FamilyDescription, plainFileName)},
	{"boldFileName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(SunFontManager$FamilyDescription, boldFileName)},
	{"italicFileName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(SunFontManager$FamilyDescription, italicFileName)},
	{"boldItalicFileName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(SunFontManager$FamilyDescription, boldItalicFileName)},
	{"failed", "Z", nullptr, 0, $field(SunFontManager$FamilyDescription, failed)},
	{}
};

$MethodInfo _SunFontManager$FamilyDescription_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SunFontManager$FamilyDescription::*)()>(&SunFontManager$FamilyDescription::init$))},
	{}
};

$InnerClassInfo _SunFontManager$FamilyDescription_InnerClassesInfo_[] = {
	{"sun.font.SunFontManager$FamilyDescription", "sun.font.SunFontManager", "FamilyDescription", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _SunFontManager$FamilyDescription_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.font.SunFontManager$FamilyDescription",
	"java.lang.Object",
	nullptr,
	_SunFontManager$FamilyDescription_FieldInfo_,
	_SunFontManager$FamilyDescription_MethodInfo_,
	nullptr,
	nullptr,
	_SunFontManager$FamilyDescription_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.SunFontManager"
};

$Object* allocate$SunFontManager$FamilyDescription($Class* clazz) {
	return $of($alloc(SunFontManager$FamilyDescription));
}

void SunFontManager$FamilyDescription::init$() {
}

SunFontManager$FamilyDescription::SunFontManager$FamilyDescription() {
}

$Class* SunFontManager$FamilyDescription::load$($String* name, bool initialize) {
	$loadClass(SunFontManager$FamilyDescription, name, initialize, &_SunFontManager$FamilyDescription_ClassInfo_, allocate$SunFontManager$FamilyDescription);
	return class$;
}

$Class* SunFontManager$FamilyDescription::class$ = nullptr;

	} // font
} // sun