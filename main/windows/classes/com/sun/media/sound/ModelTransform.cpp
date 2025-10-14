#include <com/sun/media/sound/ModelTransform.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$MethodInfo _ModelTransform_MethodInfo_[] = {
	{"transform", "(D)D", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ModelTransform_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.media.sound.ModelTransform",
	nullptr,
	nullptr,
	nullptr,
	_ModelTransform_MethodInfo_
};

$Object* allocate$ModelTransform($Class* clazz) {
	return $of($alloc(ModelTransform));
}

$Class* ModelTransform::load$($String* name, bool initialize) {
	$loadClass(ModelTransform, name, initialize, &_ModelTransform_ClassInfo_, allocate$ModelTransform);
	return class$;
}

$Class* ModelTransform::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com