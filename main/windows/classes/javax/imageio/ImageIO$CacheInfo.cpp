#include <javax/imageio/ImageIO$CacheInfo.h>

#include <java/io/File.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/imageio/ImageIO.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageIO = ::javax::imageio::ImageIO;

namespace javax {
	namespace imageio {

$FieldInfo _ImageIO$CacheInfo_FieldInfo_[] = {
	{"useCache", "Z", nullptr, 0, $field(ImageIO$CacheInfo, useCache)},
	{"cacheDirectory", "Ljava/io/File;", nullptr, 0, $field(ImageIO$CacheInfo, cacheDirectory)},
	{"hasPermission", "Ljava/lang/Boolean;", nullptr, 0, $field(ImageIO$CacheInfo, hasPermission)},
	{}
};

$MethodInfo _ImageIO$CacheInfo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ImageIO$CacheInfo::*)()>(&ImageIO$CacheInfo::init$))},
	{"getCacheDirectory", "()Ljava/io/File;", nullptr, $PUBLIC},
	{"getHasPermission", "()Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{"getUseCache", "()Z", nullptr, $PUBLIC},
	{"setCacheDirectory", "(Ljava/io/File;)V", nullptr, $PUBLIC},
	{"setHasPermission", "(Ljava/lang/Boolean;)V", nullptr, $PUBLIC},
	{"setUseCache", "(Z)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ImageIO$CacheInfo_InnerClassesInfo_[] = {
	{"javax.imageio.ImageIO$CacheInfo", "javax.imageio.ImageIO", "CacheInfo", $STATIC},
	{}
};

$ClassInfo _ImageIO$CacheInfo_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.ImageIO$CacheInfo",
	"java.lang.Object",
	nullptr,
	_ImageIO$CacheInfo_FieldInfo_,
	_ImageIO$CacheInfo_MethodInfo_,
	nullptr,
	nullptr,
	_ImageIO$CacheInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.ImageIO"
};

$Object* allocate$ImageIO$CacheInfo($Class* clazz) {
	return $of($alloc(ImageIO$CacheInfo));
}

void ImageIO$CacheInfo::init$() {
	this->useCache = true;
	$set(this, cacheDirectory, nullptr);
	$set(this, hasPermission, nullptr);
}

bool ImageIO$CacheInfo::getUseCache() {
	return this->useCache;
}

void ImageIO$CacheInfo::setUseCache(bool useCache) {
	this->useCache = useCache;
}

$File* ImageIO$CacheInfo::getCacheDirectory() {
	return this->cacheDirectory;
}

void ImageIO$CacheInfo::setCacheDirectory($File* cacheDirectory) {
	$set(this, cacheDirectory, cacheDirectory);
}

$Boolean* ImageIO$CacheInfo::getHasPermission() {
	return this->hasPermission;
}

void ImageIO$CacheInfo::setHasPermission($Boolean* hasPermission) {
	$set(this, hasPermission, hasPermission);
}

ImageIO$CacheInfo::ImageIO$CacheInfo() {
}

$Class* ImageIO$CacheInfo::load$($String* name, bool initialize) {
	$loadClass(ImageIO$CacheInfo, name, initialize, &_ImageIO$CacheInfo_ClassInfo_, allocate$ImageIO$CacheInfo);
	return class$;
}

$Class* ImageIO$CacheInfo::class$ = nullptr;

	} // imageio
} // javax