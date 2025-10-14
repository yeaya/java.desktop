#include <sun/print/SunAlternateMedia.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/print/attribute/standard/Media.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EnumSyntax = ::javax::print::attribute::EnumSyntax;
using $PrintRequestAttribute = ::javax::print::attribute::PrintRequestAttribute;
using $Media = ::javax::print::attribute::standard::Media;

namespace sun {
	namespace print {

$FieldInfo _SunAlternateMedia_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SunAlternateMedia, serialVersionUID)},
	{"media", "Ljavax/print/attribute/standard/Media;", nullptr, $PRIVATE, $field(SunAlternateMedia, media)},
	{}
};

$MethodInfo _SunAlternateMedia_MethodInfo_[] = {
	{"<init>", "(Ljavax/print/attribute/standard/Media;)V", nullptr, $PUBLIC, $method(static_cast<void(SunAlternateMedia::*)($Media*)>(&SunAlternateMedia::init$))},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getMedia", "()Ljavax/print/attribute/standard/Media;", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SunAlternateMedia_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.print.SunAlternateMedia",
	"java.lang.Object",
	"javax.print.attribute.PrintRequestAttribute",
	_SunAlternateMedia_FieldInfo_,
	_SunAlternateMedia_MethodInfo_
};

$Object* allocate$SunAlternateMedia($Class* clazz) {
	return $of($alloc(SunAlternateMedia));
}

void SunAlternateMedia::init$($Media* altMedia) {
	$set(this, media, altMedia);
}

$Media* SunAlternateMedia::getMedia() {
	return this->media;
}

$Class* SunAlternateMedia::getCategory() {
	return SunAlternateMedia::class$;
}

$String* SunAlternateMedia::getName() {
	return "sun-alternate-media"_s;
}

$String* SunAlternateMedia::toString() {
	return $str({"alternate-media: "_s, $($nc(this->media)->toString())});
}

int32_t SunAlternateMedia::hashCode() {
	return $nc(this->media)->hashCode();
}

SunAlternateMedia::SunAlternateMedia() {
}

$Class* SunAlternateMedia::load$($String* name, bool initialize) {
	$loadClass(SunAlternateMedia, name, initialize, &_SunAlternateMedia_ClassInfo_, allocate$SunAlternateMedia);
	return class$;
}

$Class* SunAlternateMedia::class$ = nullptr;

	} // print
} // sun