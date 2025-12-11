#include <javax/swing/text/TabStop.h>

#include <java/lang/Math.h>
#include <jcpp.h>

#undef ALIGN_BAR
#undef ALIGN_CENTER
#undef ALIGN_DECIMAL
#undef ALIGN_LEFT
#undef ALIGN_RIGHT
#undef LEAD_DOTS
#undef LEAD_EQUALS
#undef LEAD_HYPHENS
#undef LEAD_NONE
#undef LEAD_THICKLINE
#undef LEAD_UNDERLINE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _TabStop_FieldInfo_[] = {
	{"ALIGN_LEFT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TabStop, ALIGN_LEFT)},
	{"ALIGN_RIGHT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TabStop, ALIGN_RIGHT)},
	{"ALIGN_CENTER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TabStop, ALIGN_CENTER)},
	{"ALIGN_DECIMAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TabStop, ALIGN_DECIMAL)},
	{"ALIGN_BAR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TabStop, ALIGN_BAR)},
	{"LEAD_NONE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TabStop, LEAD_NONE)},
	{"LEAD_DOTS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TabStop, LEAD_DOTS)},
	{"LEAD_HYPHENS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TabStop, LEAD_HYPHENS)},
	{"LEAD_UNDERLINE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TabStop, LEAD_UNDERLINE)},
	{"LEAD_THICKLINE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TabStop, LEAD_THICKLINE)},
	{"LEAD_EQUALS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TabStop, LEAD_EQUALS)},
	{"alignment", "I", nullptr, $PRIVATE, $field(TabStop, alignment)},
	{"position", "F", nullptr, $PRIVATE, $field(TabStop, position)},
	{"leader", "I", nullptr, $PRIVATE, $field(TabStop, leader)},
	{}
};

$MethodInfo _TabStop_MethodInfo_[] = {
	{"<init>", "(F)V", nullptr, $PUBLIC, $method(static_cast<void(TabStop::*)(float)>(&TabStop::init$))},
	{"<init>", "(FII)V", nullptr, $PUBLIC, $method(static_cast<void(TabStop::*)(float,int32_t,int32_t)>(&TabStop::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getAlignment", "()I", nullptr, $PUBLIC},
	{"getLeader", "()I", nullptr, $PUBLIC},
	{"getPosition", "()F", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TabStop_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.TabStop",
	"java.lang.Object",
	"java.io.Serializable",
	_TabStop_FieldInfo_,
	_TabStop_MethodInfo_
};

$Object* allocate$TabStop($Class* clazz) {
	return $of($alloc(TabStop));
}

void TabStop::init$(float pos) {
	TabStop::init$(pos, TabStop::ALIGN_LEFT, TabStop::LEAD_NONE);
}

void TabStop::init$(float pos, int32_t align, int32_t leader) {
	this->alignment = align;
	this->leader = leader;
	this->position = pos;
}

float TabStop::getPosition() {
	return this->position;
}

int32_t TabStop::getAlignment() {
	return this->alignment;
}

int32_t TabStop::getLeader() {
	return this->leader;
}

bool TabStop::equals(Object$* other) {
	if ($equals(other, this)) {
		return true;
	}
	if ($instanceOf(TabStop, other)) {
		$var(TabStop, o, $cast(TabStop, other));
		return ((this->alignment == $nc(o)->alignment) && (this->leader == o->leader) && (this->position == o->position));
	}
	return false;
}

int32_t TabStop::hashCode() {
	return (this->alignment ^ this->leader) ^ $Math::round(this->position);
}

$String* TabStop::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, buf, nullptr);
	switch (this->alignment) {
	default:
		{}
	case TabStop::ALIGN_LEFT:
		{
			$assign(buf, ""_s);
			break;
		}
	case TabStop::ALIGN_RIGHT:
		{
			$assign(buf, "right "_s);
			break;
		}
	case TabStop::ALIGN_CENTER:
		{
			$assign(buf, "center "_s);
			break;
		}
	case TabStop::ALIGN_DECIMAL:
		{
			$assign(buf, "decimal "_s);
			break;
		}
	case TabStop::ALIGN_BAR:
		{
			$assign(buf, "bar "_s);
			break;
		}
	}
	$assign(buf, $str({buf, "tab @"_s, $($String::valueOf(this->position))}));
	if (this->leader != TabStop::LEAD_NONE) {
		$assign(buf, $str({buf, " (w/leaders)"_s}));
	}
	return buf;
}

TabStop::TabStop() {
}

$Class* TabStop::load$($String* name, bool initialize) {
	$loadClass(TabStop, name, initialize, &_TabStop_ClassInfo_, allocate$TabStop);
	return class$;
}

$Class* TabStop::class$ = nullptr;

		} // text
	} // swing
} // javax