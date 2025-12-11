#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$PlanarConfiguration.h>

#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_SHORT

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _BaselineTIFFTagSet$PlanarConfiguration_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$PlanarConfiguration::*)()>(&BaselineTIFFTagSet$PlanarConfiguration::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$PlanarConfiguration_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$PlanarConfiguration", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "PlanarConfiguration", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$PlanarConfiguration_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$PlanarConfiguration",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$PlanarConfiguration_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$PlanarConfiguration_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$PlanarConfiguration($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$PlanarConfiguration));
}

void BaselineTIFFTagSet$PlanarConfiguration::init$() {
	$TIFFTag::init$("PlanarConfiguration"_s, 284, $sl(1, $TIFFTag::TIFF_SHORT), 1);
	addValueName(1, "Chunky"_s);
	addValueName(2, "Planar"_s);
}

BaselineTIFFTagSet$PlanarConfiguration::BaselineTIFFTagSet$PlanarConfiguration() {
}

$Class* BaselineTIFFTagSet$PlanarConfiguration::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$PlanarConfiguration, name, initialize, &_BaselineTIFFTagSet$PlanarConfiguration_ClassInfo_, allocate$BaselineTIFFTagSet$PlanarConfiguration);
	return class$;
}

$Class* BaselineTIFFTagSet$PlanarConfiguration::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax