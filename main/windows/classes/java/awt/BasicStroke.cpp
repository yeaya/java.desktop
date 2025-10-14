#include <java/awt/BasicStroke.h>

#include <java/awt/Shape.h>
#include <java/lang/Array.h>
#include <java/lang/Attribute.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <sun/java2d/pipe/RenderingEngine.h>
#include <jcpp.h>

#undef CAP_BUTT
#undef CAP_ROUND
#undef CAP_SQUARE
#undef JOIN_BEVEL
#undef JOIN_MITER
#undef JOIN_ROUND

using $Shape = ::java::awt::Shape;
using $Stroke = ::java::awt::Stroke;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Arrays = ::java::util::Arrays;
using $RenderingEngine = ::sun::java2d::pipe::RenderingEngine;

namespace java {
	namespace awt {

$Attribute BasicStroke_Attribute_var$1[] = {
	{'s', "lineWidth"},
	{'s', "endCap"},
	{'s', "lineJoin"},
	{'s', "miterLimit"},
	{'s', "dashArray"},
	{'s', "dashPhase"},
	{'-'}
};

$NamedAttribute BasicStroke_Attribute_var$0[] = {
	{"value", '[', BasicStroke_Attribute_var$1},
	{}
};

$CompoundAttribute _BasicStroke_MethodAnnotations_init$0[] = {
	{"Ljava/beans/ConstructorProperties;", BasicStroke_Attribute_var$0},
	{}
};

$FieldInfo _BasicStroke_FieldInfo_[] = {
	{"JOIN_MITER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BasicStroke, JOIN_MITER)},
	{"JOIN_ROUND", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BasicStroke, JOIN_ROUND)},
	{"JOIN_BEVEL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BasicStroke, JOIN_BEVEL)},
	{"CAP_BUTT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BasicStroke, CAP_BUTT)},
	{"CAP_ROUND", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BasicStroke, CAP_ROUND)},
	{"CAP_SQUARE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BasicStroke, CAP_SQUARE)},
	{"width", "F", nullptr, 0, $field(BasicStroke, width)},
	{"join", "I", nullptr, 0, $field(BasicStroke, join)},
	{"cap", "I", nullptr, 0, $field(BasicStroke, cap)},
	{"miterlimit", "F", nullptr, 0, $field(BasicStroke, miterlimit)},
	{"dash", "[F", nullptr, 0, $field(BasicStroke, dash)},
	{"dash_phase", "F", nullptr, 0, $field(BasicStroke, dash_phase)},
	{}
};

$MethodInfo _BasicStroke_MethodInfo_[] = {
	{"<init>", "(FIIF[FF)V", nullptr, $PUBLIC, $method(static_cast<void(BasicStroke::*)(float,int32_t,int32_t,float,$floats*,float)>(&BasicStroke::init$)), nullptr, nullptr, _BasicStroke_MethodAnnotations_init$0},
	{"<init>", "(FIIF)V", nullptr, $PUBLIC, $method(static_cast<void(BasicStroke::*)(float,int32_t,int32_t,float)>(&BasicStroke::init$))},
	{"<init>", "(FII)V", nullptr, $PUBLIC, $method(static_cast<void(BasicStroke::*)(float,int32_t,int32_t)>(&BasicStroke::init$))},
	{"<init>", "(F)V", nullptr, $PUBLIC, $method(static_cast<void(BasicStroke::*)(float)>(&BasicStroke::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicStroke::*)()>(&BasicStroke::init$))},
	{"createStrokedShape", "(Ljava/awt/Shape;)Ljava/awt/Shape;", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getDashArray", "()[F", nullptr, $PUBLIC},
	{"getDashPhase", "()F", nullptr, $PUBLIC},
	{"getEndCap", "()I", nullptr, $PUBLIC},
	{"getLineJoin", "()I", nullptr, $PUBLIC},
	{"getLineWidth", "()F", nullptr, $PUBLIC},
	{"getMiterLimit", "()F", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _BasicStroke_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.BasicStroke",
	"java.lang.Object",
	"java.awt.Stroke",
	_BasicStroke_FieldInfo_,
	_BasicStroke_MethodInfo_
};

$Object* allocate$BasicStroke($Class* clazz) {
	return $of($alloc(BasicStroke));
}

void BasicStroke::init$(float width, int32_t cap, int32_t join, float miterlimit, $floats* dash, float dash_phase) {
	if (width < 0.0f) {
		$throwNew($IllegalArgumentException, "negative width"_s);
	}
	if (cap != BasicStroke::CAP_BUTT && cap != BasicStroke::CAP_ROUND && cap != BasicStroke::CAP_SQUARE) {
		$throwNew($IllegalArgumentException, "illegal end cap value"_s);
	}
	if (join == BasicStroke::JOIN_MITER) {
		if (miterlimit < 1.0f) {
			$throwNew($IllegalArgumentException, "miter limit < 1"_s);
		}
	} else if (join != BasicStroke::JOIN_ROUND && join != BasicStroke::JOIN_BEVEL) {
		$throwNew($IllegalArgumentException, "illegal line join value"_s);
	}
	if (dash != nullptr) {
		if (dash_phase < 0.0f) {
			$throwNew($IllegalArgumentException, "negative dash phase"_s);
		}
		bool allzero = true;
		for (int32_t i = 0; i < dash->length; ++i) {
			float d = dash->get(i);
			if (d > 0.0) {
				allzero = false;
			} else if (d < 0.0) {
				$throwNew($IllegalArgumentException, "negative dash length"_s);
			}
		}
		if (allzero) {
			$throwNew($IllegalArgumentException, "dash lengths all zero"_s);
		}
	}
	this->width = width;
	this->cap = cap;
	this->join = join;
	this->miterlimit = miterlimit;
	if (dash != nullptr) {
		$set(this, dash, $cast($floats, dash->clone()));
	}
	this->dash_phase = dash_phase;
}

void BasicStroke::init$(float width, int32_t cap, int32_t join, float miterlimit) {
	BasicStroke::init$(width, cap, join, miterlimit, nullptr, 0.0f);
}

void BasicStroke::init$(float width, int32_t cap, int32_t join) {
	BasicStroke::init$(width, cap, join, 10.0f, nullptr, 0.0f);
}

void BasicStroke::init$(float width) {
	BasicStroke::init$(width, BasicStroke::CAP_SQUARE, BasicStroke::JOIN_MITER, 10.0f, nullptr, 0.0f);
}

void BasicStroke::init$() {
	BasicStroke::init$(1.0f, BasicStroke::CAP_SQUARE, BasicStroke::JOIN_MITER, 10.0f, nullptr, 0.0f);
}

$Shape* BasicStroke::createStrokedShape($Shape* s) {
	$var($RenderingEngine, re, $RenderingEngine::getInstance());
	return $nc(re)->createStrokedShape(s, this->width, this->cap, this->join, this->miterlimit, this->dash, this->dash_phase);
}

float BasicStroke::getLineWidth() {
	return this->width;
}

int32_t BasicStroke::getEndCap() {
	return this->cap;
}

int32_t BasicStroke::getLineJoin() {
	return this->join;
}

float BasicStroke::getMiterLimit() {
	return this->miterlimit;
}

$floats* BasicStroke::getDashArray() {
	if (this->dash == nullptr) {
		return nullptr;
	}
	return $cast($floats, $nc(this->dash)->clone());
}

float BasicStroke::getDashPhase() {
	return this->dash_phase;
}

int32_t BasicStroke::hashCode() {
	int32_t hash = $Float::floatToIntBits(this->width);
	hash = hash * 31 + this->join;
	hash = hash * 31 + this->cap;
	hash = hash * 31 + $Float::floatToIntBits(this->miterlimit);
	if (this->dash != nullptr) {
		hash = hash * 31 + $Float::floatToIntBits(this->dash_phase);
		for (int32_t i = 0; i < $nc(this->dash)->length; ++i) {
			hash = hash * 31 + $Float::floatToIntBits($nc(this->dash)->get(i));
		}
	}
	return hash;
}

bool BasicStroke::equals(Object$* obj) {
	if (!($instanceOf(BasicStroke, obj))) {
		return false;
	}
	$var(BasicStroke, bs, $cast(BasicStroke, obj));
	if (this->width != $nc(bs)->width) {
		return false;
	}
	if (this->join != $nc(bs)->join) {
		return false;
	}
	if (this->cap != $nc(bs)->cap) {
		return false;
	}
	if (this->miterlimit != $nc(bs)->miterlimit) {
		return false;
	}
	if (this->dash != nullptr) {
		if (this->dash_phase != $nc(bs)->dash_phase) {
			return false;
		}
		if (!$Arrays::equals(this->dash, $nc(bs)->dash)) {
			return false;
		}
	} else if (bs->dash != nullptr) {
		return false;
	}
	return true;
}

BasicStroke::BasicStroke() {
}

$Class* BasicStroke::load$($String* name, bool initialize) {
	$loadClass(BasicStroke, name, initialize, &_BasicStroke_ClassInfo_, allocate$BasicStroke);
	return class$;
}

$Class* BasicStroke::class$ = nullptr;

	} // awt
} // java