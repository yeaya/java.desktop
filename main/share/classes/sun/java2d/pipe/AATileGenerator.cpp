#include <sun/java2d/pipe/AATileGenerator.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {
		namespace pipe {

$MethodInfo _AATileGenerator_MethodInfo_[] = {
	{"dispose", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"getAlpha", "([BII)V", nullptr, $PUBLIC | $ABSTRACT},
	{"getTileHeight", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getTileWidth", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getTypicalAlpha", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"nextTile", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _AATileGenerator_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.java2d.pipe.AATileGenerator",
	nullptr,
	nullptr,
	nullptr,
	_AATileGenerator_MethodInfo_
};

$Object* allocate$AATileGenerator($Class* clazz) {
	return $of($alloc(AATileGenerator));
}

$Class* AATileGenerator::load$($String* name, bool initialize) {
	$loadClass(AATileGenerator, name, initialize, &_AATileGenerator_ClassInfo_, allocate$AATileGenerator);
	return class$;
}

$Class* AATileGenerator::class$ = nullptr;

		} // pipe
	} // java2d
} // sun