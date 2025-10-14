#include <javax/sound/sampled/Port.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Line = ::javax::sound::sampled::Line;

namespace javax {
	namespace sound {
		namespace sampled {

$InnerClassInfo _Port_InnerClassesInfo_[] = {
	{"javax.sound.sampled.Port$Info", "javax.sound.sampled.Port", "Info", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Port_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.sound.sampled.Port",
	nullptr,
	"javax.sound.sampled.Line",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_Port_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.sound.sampled.Port$Info"
};

$Object* allocate$Port($Class* clazz) {
	return $of($alloc(Port));
}

$Class* Port::load$($String* name, bool initialize) {
	$loadClass(Port, name, initialize, &_Port_ClassInfo_, allocate$Port);
	return class$;
}

$Class* Port::class$ = nullptr;

		} // sampled
	} // sound
} // javax