#include <com/sun/media/sound/DLSInfo.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _DLSInfo_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PUBLIC, $field(DLSInfo, name)},
	{"creationDate", "Ljava/lang/String;", nullptr, $PUBLIC, $field(DLSInfo, creationDate)},
	{"engineers", "Ljava/lang/String;", nullptr, $PUBLIC, $field(DLSInfo, engineers)},
	{"product", "Ljava/lang/String;", nullptr, $PUBLIC, $field(DLSInfo, product)},
	{"copyright", "Ljava/lang/String;", nullptr, $PUBLIC, $field(DLSInfo, copyright)},
	{"comments", "Ljava/lang/String;", nullptr, $PUBLIC, $field(DLSInfo, comments)},
	{"tools", "Ljava/lang/String;", nullptr, $PUBLIC, $field(DLSInfo, tools)},
	{"archival_location", "Ljava/lang/String;", nullptr, $PUBLIC, $field(DLSInfo, archival_location)},
	{"artist", "Ljava/lang/String;", nullptr, $PUBLIC, $field(DLSInfo, artist)},
	{"commissioned", "Ljava/lang/String;", nullptr, $PUBLIC, $field(DLSInfo, commissioned)},
	{"genre", "Ljava/lang/String;", nullptr, $PUBLIC, $field(DLSInfo, genre)},
	{"keywords", "Ljava/lang/String;", nullptr, $PUBLIC, $field(DLSInfo, keywords)},
	{"medium", "Ljava/lang/String;", nullptr, $PUBLIC, $field(DLSInfo, medium)},
	{"subject", "Ljava/lang/String;", nullptr, $PUBLIC, $field(DLSInfo, subject)},
	{"source", "Ljava/lang/String;", nullptr, $PUBLIC, $field(DLSInfo, source)},
	{"source_form", "Ljava/lang/String;", nullptr, $PUBLIC, $field(DLSInfo, source_form)},
	{"technician", "Ljava/lang/String;", nullptr, $PUBLIC, $field(DLSInfo, technician)},
	{}
};

$MethodInfo _DLSInfo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DLSInfo::*)()>(&DLSInfo::init$))},
	{}
};

$ClassInfo _DLSInfo_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.DLSInfo",
	"java.lang.Object",
	nullptr,
	_DLSInfo_FieldInfo_,
	_DLSInfo_MethodInfo_
};

$Object* allocate$DLSInfo($Class* clazz) {
	return $of($alloc(DLSInfo));
}

void DLSInfo::init$() {
	$set(this, name, "untitled"_s);
	$set(this, creationDate, nullptr);
	$set(this, engineers, nullptr);
	$set(this, product, nullptr);
	$set(this, copyright, nullptr);
	$set(this, comments, nullptr);
	$set(this, tools, nullptr);
	$set(this, archival_location, nullptr);
	$set(this, artist, nullptr);
	$set(this, commissioned, nullptr);
	$set(this, genre, nullptr);
	$set(this, keywords, nullptr);
	$set(this, medium, nullptr);
	$set(this, subject, nullptr);
	$set(this, source, nullptr);
	$set(this, source_form, nullptr);
	$set(this, technician, nullptr);
}

DLSInfo::DLSInfo() {
}

$Class* DLSInfo::load$($String* name, bool initialize) {
	$loadClass(DLSInfo, name, initialize, &_DLSInfo_ClassInfo_, allocate$DLSInfo);
	return class$;
}

$Class* DLSInfo::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com