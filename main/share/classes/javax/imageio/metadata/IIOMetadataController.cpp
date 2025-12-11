#include <javax/imageio/metadata/IIOMetadataController.h>

#include <javax/imageio/metadata/IIOMetadata.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace imageio {
		namespace metadata {

$MethodInfo _IIOMetadataController_MethodInfo_[] = {
	{"activate", "(Ljavax/imageio/metadata/IIOMetadata;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _IIOMetadataController_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.imageio.metadata.IIOMetadataController",
	nullptr,
	nullptr,
	nullptr,
	_IIOMetadataController_MethodInfo_
};

$Object* allocate$IIOMetadataController($Class* clazz) {
	return $of($alloc(IIOMetadataController));
}

$Class* IIOMetadataController::load$($String* name, bool initialize) {
	$loadClass(IIOMetadataController, name, initialize, &_IIOMetadataController_ClassInfo_, allocate$IIOMetadataController);
	return class$;
}

$Class* IIOMetadataController::class$ = nullptr;

		} // metadata
	} // imageio
} // javax