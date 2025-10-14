#include <java/awt/peer/RobotPeer.h>

#include <java/awt/Rectangle.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace peer {

$MethodInfo _RobotPeer_MethodInfo_[] = {
	{"getRGBPixel", "(II)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getRGBPixels", "(Ljava/awt/Rectangle;)[I", nullptr, $PUBLIC | $ABSTRACT},
	{"keyPress", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"keyRelease", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"mouseMove", "(II)V", nullptr, $PUBLIC | $ABSTRACT},
	{"mousePress", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"mouseRelease", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"mouseWheel", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"useAbsoluteCoordinates", "()Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _RobotPeer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.peer.RobotPeer",
	nullptr,
	nullptr,
	nullptr,
	_RobotPeer_MethodInfo_
};

$Object* allocate$RobotPeer($Class* clazz) {
	return $of($alloc(RobotPeer));
}

bool RobotPeer::useAbsoluteCoordinates() {
	return false;
}

$Class* RobotPeer::load$($String* name, bool initialize) {
	$loadClass(RobotPeer, name, initialize, &_RobotPeer_ClassInfo_, allocate$RobotPeer);
	return class$;
}

$Class* RobotPeer::class$ = nullptr;

		} // peer
	} // awt
} // java