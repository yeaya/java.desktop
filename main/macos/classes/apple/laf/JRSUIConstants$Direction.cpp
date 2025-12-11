#include <apple/laf/JRSUIConstants$Direction.h>

#include <apple/laf/JRSUIConstants$Property.h>
#include <apple/laf/JRSUIConstants$PropertyEncoding.h>
#include <apple/laf/JRSUIConstants.h>
#include <jcpp.h>

#undef DOWN
#undef EAST
#undef LEFT
#undef MASK
#undef NONE
#undef NORTH
#undef RIGHT
#undef SHIFT
#undef SIZE
#undef SOUTH
#undef UP
#undef WEST

using $JRSUIConstants$Property = ::apple::laf::JRSUIConstants$Property;
using $JRSUIConstants$PropertyEncoding = ::apple::laf::JRSUIConstants$PropertyEncoding;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace apple {
	namespace laf {

$FieldInfo _JRSUIConstants$Direction_FieldInfo_[] = {
	{"SHIFT", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Direction, SHIFT)},
	{"SIZE", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Direction, SIZE)},
	{"MASK", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Direction, MASK)},
	{"direction", "Lapple/laf/JRSUIConstants$PropertyEncoding;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JRSUIConstants$Direction, direction)},
	{"_none", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Direction, _none)},
	{"NONE", "Lapple/laf/JRSUIConstants$Direction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Direction, NONE)},
	{"_up", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Direction, _up)},
	{"UP", "Lapple/laf/JRSUIConstants$Direction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Direction, UP)},
	{"_down", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Direction, _down)},
	{"DOWN", "Lapple/laf/JRSUIConstants$Direction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Direction, DOWN)},
	{"_left", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Direction, _left)},
	{"LEFT", "Lapple/laf/JRSUIConstants$Direction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Direction, LEFT)},
	{"_right", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Direction, _right)},
	{"RIGHT", "Lapple/laf/JRSUIConstants$Direction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Direction, RIGHT)},
	{"_north", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Direction, _north)},
	{"NORTH", "Lapple/laf/JRSUIConstants$Direction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Direction, NORTH)},
	{"_south", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Direction, _south)},
	{"SOUTH", "Lapple/laf/JRSUIConstants$Direction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Direction, SOUTH)},
	{"_east", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Direction, _east)},
	{"EAST", "Lapple/laf/JRSUIConstants$Direction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Direction, EAST)},
	{"_west", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Direction, _west)},
	{"WEST", "Lapple/laf/JRSUIConstants$Direction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Direction, WEST)},
	{}
};

$MethodInfo _JRSUIConstants$Direction_MethodInfo_[] = {
	{"<init>", "(B)V", nullptr, 0, $method(static_cast<void(JRSUIConstants$Direction::*)(int8_t)>(&JRSUIConstants$Direction::init$))},
	{"apply", "(J)J", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _JRSUIConstants$Direction_InnerClassesInfo_[] = {
	{"apple.laf.JRSUIConstants$Direction", "apple.laf.JRSUIConstants", "Direction", $PUBLIC | $STATIC},
	{"apple.laf.JRSUIConstants$Property", "apple.laf.JRSUIConstants", "Property", $STATIC},
	{}
};

$ClassInfo _JRSUIConstants$Direction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"apple.laf.JRSUIConstants$Direction",
	"apple.laf.JRSUIConstants$Property",
	nullptr,
	_JRSUIConstants$Direction_FieldInfo_,
	_JRSUIConstants$Direction_MethodInfo_,
	nullptr,
	nullptr,
	_JRSUIConstants$Direction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"apple.laf.JRSUIConstants"
};

$Object* allocate$JRSUIConstants$Direction($Class* clazz) {
	return $of($alloc(JRSUIConstants$Direction));
}

$JRSUIConstants$PropertyEncoding* JRSUIConstants$Direction::direction = nullptr;
JRSUIConstants$Direction* JRSUIConstants$Direction::NONE = nullptr;
JRSUIConstants$Direction* JRSUIConstants$Direction::UP = nullptr;
JRSUIConstants$Direction* JRSUIConstants$Direction::DOWN = nullptr;
JRSUIConstants$Direction* JRSUIConstants$Direction::LEFT = nullptr;
JRSUIConstants$Direction* JRSUIConstants$Direction::RIGHT = nullptr;
JRSUIConstants$Direction* JRSUIConstants$Direction::NORTH = nullptr;
JRSUIConstants$Direction* JRSUIConstants$Direction::SOUTH = nullptr;
JRSUIConstants$Direction* JRSUIConstants$Direction::EAST = nullptr;
JRSUIConstants$Direction* JRSUIConstants$Direction::WEST = nullptr;

void JRSUIConstants$Direction::init$(int8_t value) {
	$JRSUIConstants$Property::init$(JRSUIConstants$Direction::direction, value);
}

$String* JRSUIConstants$Direction::toString() {
	return $JRSUIConstants$Property::toString();
}

int64_t JRSUIConstants$Direction::apply(int64_t encodedState) {
	return $JRSUIConstants$Property::apply(encodedState);
}

void clinit$JRSUIConstants$Direction($Class* class$) {
	$assignStatic(JRSUIConstants$Direction::direction, $new($JRSUIConstants$PropertyEncoding, JRSUIConstants$Direction::MASK, JRSUIConstants$Direction::SHIFT));
	$assignStatic(JRSUIConstants$Direction::NONE, $new(JRSUIConstants$Direction, JRSUIConstants$Direction::_none));
	$assignStatic(JRSUIConstants$Direction::UP, $new(JRSUIConstants$Direction, JRSUIConstants$Direction::_up));
	$assignStatic(JRSUIConstants$Direction::DOWN, $new(JRSUIConstants$Direction, JRSUIConstants$Direction::_down));
	$assignStatic(JRSUIConstants$Direction::LEFT, $new(JRSUIConstants$Direction, JRSUIConstants$Direction::_left));
	$assignStatic(JRSUIConstants$Direction::RIGHT, $new(JRSUIConstants$Direction, JRSUIConstants$Direction::_right));
	$assignStatic(JRSUIConstants$Direction::NORTH, $new(JRSUIConstants$Direction, JRSUIConstants$Direction::_north));
	$assignStatic(JRSUIConstants$Direction::SOUTH, $new(JRSUIConstants$Direction, JRSUIConstants$Direction::_south));
	$assignStatic(JRSUIConstants$Direction::EAST, $new(JRSUIConstants$Direction, JRSUIConstants$Direction::_east));
	$assignStatic(JRSUIConstants$Direction::WEST, $new(JRSUIConstants$Direction, JRSUIConstants$Direction::_west));
}

JRSUIConstants$Direction::JRSUIConstants$Direction() {
}

$Class* JRSUIConstants$Direction::load$($String* name, bool initialize) {
	$loadClass(JRSUIConstants$Direction, name, initialize, &_JRSUIConstants$Direction_ClassInfo_, clinit$JRSUIConstants$Direction, allocate$JRSUIConstants$Direction);
	return class$;
}

$Class* JRSUIConstants$Direction::class$ = nullptr;

	} // laf
} // apple