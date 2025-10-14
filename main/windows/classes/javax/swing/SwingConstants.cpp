#include <javax/swing/SwingConstants.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef BOTTOM
#undef CENTER
#undef EAST
#undef HORIZONTAL
#undef LEADING
#undef LEFT
#undef NEXT
#undef NORTH
#undef NORTH_EAST
#undef NORTH_WEST
#undef PREVIOUS
#undef RIGHT
#undef SOUTH
#undef SOUTH_EAST
#undef SOUTH_WEST
#undef TOP
#undef TRAILING
#undef VERTICAL
#undef WEST

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;

namespace javax {
	namespace swing {

$FieldInfo _SwingConstants_FieldInfo_[] = {
	{"CENTER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SwingConstants, CENTER)},
	{"TOP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SwingConstants, TOP)},
	{"LEFT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SwingConstants, LEFT)},
	{"BOTTOM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SwingConstants, BOTTOM)},
	{"RIGHT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SwingConstants, RIGHT)},
	{"NORTH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SwingConstants, NORTH)},
	{"NORTH_EAST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SwingConstants, NORTH_EAST)},
	{"EAST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SwingConstants, EAST)},
	{"SOUTH_EAST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SwingConstants, SOUTH_EAST)},
	{"SOUTH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SwingConstants, SOUTH)},
	{"SOUTH_WEST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SwingConstants, SOUTH_WEST)},
	{"WEST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SwingConstants, WEST)},
	{"NORTH_WEST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SwingConstants, NORTH_WEST)},
	{"HORIZONTAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SwingConstants, HORIZONTAL)},
	{"VERTICAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SwingConstants, VERTICAL)},
	{"LEADING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SwingConstants, LEADING)},
	{"TRAILING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SwingConstants, TRAILING)},
	{"NEXT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SwingConstants, NEXT)},
	{"PREVIOUS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SwingConstants, PREVIOUS)},
	{}
};

$ClassInfo _SwingConstants_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.SwingConstants",
	nullptr,
	nullptr,
	_SwingConstants_FieldInfo_
};

$Object* allocate$SwingConstants($Class* clazz) {
	return $of($alloc(SwingConstants));
}

$Class* SwingConstants::load$($String* name, bool initialize) {
	$loadClass(SwingConstants, name, initialize, &_SwingConstants_ClassInfo_, allocate$SwingConstants);
	return class$;
}

$Class* SwingConstants::class$ = nullptr;

	} // swing
} // javax