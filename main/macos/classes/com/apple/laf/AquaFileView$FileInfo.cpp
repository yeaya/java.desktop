#include <com/apple/laf/AquaFileView$FileInfo.h>

#include <com/apple/laf/AquaFileView.h>
#include <java/io/File.h>
#include <java/io/UnsupportedEncodingException.h>
#include <javax/swing/Icon.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $UnsupportedEncodingException = ::java::io::UnsupportedEncodingException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaFileView$FileInfo_FieldInfo_[] = {
	{"isDirectory", "Z", nullptr, $FINAL, $field(AquaFileView$FileInfo, isDirectory)},
	{"absolutePath", "Ljava/lang/String;", nullptr, $FINAL, $field(AquaFileView$FileInfo, absolutePath)},
	{"pathBytes", "[B", nullptr, 0, $field(AquaFileView$FileInfo, pathBytes)},
	{"displayName", "Ljava/lang/String;", nullptr, 0, $field(AquaFileView$FileInfo, displayName)},
	{"icon", "Ljavax/swing/Icon;", nullptr, 0, $field(AquaFileView$FileInfo, icon)},
	{"launchServicesInfo", "I", nullptr, 0, $field(AquaFileView$FileInfo, launchServicesInfo)},
	{}
};

$MethodInfo _AquaFileView$FileInfo_MethodInfo_[] = {
	{"<init>", "(Ljava/io/File;)V", nullptr, 0, $method(static_cast<void(AquaFileView$FileInfo::*)($File*)>(&AquaFileView$FileInfo::init$))},
	{}
};

$InnerClassInfo _AquaFileView$FileInfo_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaFileView$FileInfo", "com.apple.laf.AquaFileView", "FileInfo", $STATIC},
	{}
};

$ClassInfo _AquaFileView$FileInfo_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaFileView$FileInfo",
	"java.lang.Object",
	nullptr,
	_AquaFileView$FileInfo_FieldInfo_,
	_AquaFileView$FileInfo_MethodInfo_,
	nullptr,
	nullptr,
	_AquaFileView$FileInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaFileView"
};

$Object* allocate$AquaFileView$FileInfo($Class* clazz) {
	return $of($alloc(AquaFileView$FileInfo));
}

void AquaFileView$FileInfo::init$($File* file) {
	this->launchServicesInfo = -1;
	this->isDirectory = $nc(file)->isDirectory();
	$set(this, absolutePath, file->getAbsolutePath());
	try {
		$set(this, pathBytes, $nc(this->absolutePath)->getBytes("UTF-8"_s));
	} catch ($UnsupportedEncodingException& e) {
		$set(this, pathBytes, $new($bytes, 0));
	}
}

AquaFileView$FileInfo::AquaFileView$FileInfo() {
}

$Class* AquaFileView$FileInfo::load$($String* name, bool initialize) {
	$loadClass(AquaFileView$FileInfo, name, initialize, &_AquaFileView$FileInfo_ClassInfo_, allocate$AquaFileView$FileInfo);
	return class$;
}

$Class* AquaFileView$FileInfo::class$ = nullptr;

		} // laf
	} // apple
} // com