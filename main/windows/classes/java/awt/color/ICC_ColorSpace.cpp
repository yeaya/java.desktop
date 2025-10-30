#include <java/awt/color/ICC_ColorSpace.h>

#include <java/awt/color/CMMException.h>
#include <java/awt/color/ColorSpace.h>
#include <java/awt/color/ICC_Profile.h>
#include <java/io/ObjectInputStream.h>
#include <sun/java2d/cmm/CMSManager.h>
#include <sun/java2d/cmm/ColorTransform.h>
#include <sun/java2d/cmm/PCMM.h>
#include <jcpp.h>

#undef ALMOST_TWO
#undef CLASS_ABSTRACT
#undef CLASS_COLORSPACECONVERSION
#undef CLASS_DISPLAY
#undef CLASS_INPUT
#undef CLASS_NAMEDCOLOR
#undef CLASS_OUTPUT
#undef CS_CIEXYZ
#undef TYPE_XYZ

using $ColorTransformArray = $Array<::sun::java2d::cmm::ColorTransform>;
using $CMMException = ::java::awt::color::CMMException;
using $ColorSpace = ::java::awt::color::ColorSpace;
using $ICC_Profile = ::java::awt::color::ICC_Profile;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $CMSManager = ::sun::java2d::cmm::CMSManager;
using $ColorTransform = ::sun::java2d::cmm::ColorTransform;
using $PCMM = ::sun::java2d::cmm::PCMM;

namespace java {
	namespace awt {
		namespace color {

$FieldInfo _ICC_ColorSpace_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ICC_ColorSpace, serialVersionUID)},
	{"thisProfile", "Ljava/awt/color/ICC_Profile;", nullptr, $PRIVATE, $field(ICC_ColorSpace, thisProfile)},
	{"minVal", "[F", nullptr, $PRIVATE, $field(ICC_ColorSpace, minVal)},
	{"maxVal", "[F", nullptr, $PRIVATE, $field(ICC_ColorSpace, maxVal)},
	{"diffMinMax", "[F", nullptr, $PRIVATE, $field(ICC_ColorSpace, diffMinMax)},
	{"invDiffMinMax", "[F", nullptr, $PRIVATE, $field(ICC_ColorSpace, invDiffMinMax)},
	{"needScaleInit", "Z", nullptr, $PRIVATE, $field(ICC_ColorSpace, needScaleInit)},
	{"this2srgb", "Lsun/java2d/cmm/ColorTransform;", nullptr, $PRIVATE | $VOLATILE | $TRANSIENT, $field(ICC_ColorSpace, this2srgb)},
	{"srgb2this", "Lsun/java2d/cmm/ColorTransform;", nullptr, $PRIVATE | $VOLATILE | $TRANSIENT, $field(ICC_ColorSpace, srgb2this)},
	{"this2xyz", "Lsun/java2d/cmm/ColorTransform;", nullptr, $PRIVATE | $VOLATILE | $TRANSIENT, $field(ICC_ColorSpace, this2xyz)},
	{"xyz2this", "Lsun/java2d/cmm/ColorTransform;", nullptr, $PRIVATE | $VOLATILE | $TRANSIENT, $field(ICC_ColorSpace, xyz2this)},
	{}
};

$MethodInfo _ICC_ColorSpace_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/color/ICC_Profile;)V", nullptr, $PUBLIC, $method(static_cast<void(ICC_ColorSpace::*)($ICC_Profile*)>(&ICC_ColorSpace::init$))},
	{"fromCIEXYZ", "([F)[F", nullptr, $PUBLIC},
	{"fromRGB", "([F)[F", nullptr, $PUBLIC},
	{"getMaxValue", "(I)F", nullptr, $PUBLIC},
	{"getMinValue", "(I)F", nullptr, $PUBLIC},
	{"getProfile", "()Ljava/awt/color/ICC_Profile;", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(ICC_ColorSpace::*)($ObjectInputStream*)>(&ICC_ColorSpace::readObject)), "java.lang.ClassNotFoundException,java.io.IOException"},
	{"setComponentScaling", "()V", nullptr, $PRIVATE, $method(static_cast<void(ICC_ColorSpace::*)()>(&ICC_ColorSpace::setComponentScaling))},
	{"setMinMax", "()V", nullptr, $PRIVATE, $method(static_cast<void(ICC_ColorSpace::*)()>(&ICC_ColorSpace::setMinMax))},
	{"toCIEXYZ", "([F)[F", nullptr, $PUBLIC},
	{"toRGB", "([F)[F", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ICC_ColorSpace_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.color.ICC_ColorSpace",
	"java.awt.color.ColorSpace",
	nullptr,
	_ICC_ColorSpace_FieldInfo_,
	_ICC_ColorSpace_MethodInfo_
};

$Object* allocate$ICC_ColorSpace($Class* clazz) {
	return $of($alloc(ICC_ColorSpace));
}

void ICC_ColorSpace::init$($ICC_Profile* profile) {
	int32_t var$0 = $nc(profile)->getColorSpaceType();
	$ColorSpace::init$(var$0, profile->getNumComponents());
	this->needScaleInit = true;
	int32_t profileClass = $nc(profile)->getProfileClass();
	if (profileClass != $ICC_Profile::CLASS_INPUT && profileClass != $ICC_Profile::CLASS_DISPLAY && profileClass != $ICC_Profile::CLASS_OUTPUT && profileClass != $ICC_Profile::CLASS_COLORSPACECONVERSION && profileClass != $ICC_Profile::CLASS_NAMEDCOLOR && profileClass != $ICC_Profile::CLASS_ABSTRACT) {
		$throwNew($IllegalArgumentException, "Invalid profile type"_s);
	}
	$set(this, thisProfile, profile);
	setMinMax();
}

void ICC_ColorSpace::readObject($ObjectInputStream* s) {
	$nc(s)->defaultReadObject();
	if (this->thisProfile == nullptr) {
		$set(this, thisProfile, $ICC_Profile::getInstance($ColorSpace::CS_sRGB));
	}
}

$ICC_Profile* ICC_ColorSpace::getProfile() {
	return this->thisProfile;
}

$floats* ICC_ColorSpace::toRGB($floats* colorvalue) {
	$useLocalCurrentObjectStackCache();
	if (this->this2srgb == nullptr) {
		$synchronized(this) {
			if (this->this2srgb == nullptr) {
				$var($ColorTransformArray, transforms, $new($ColorTransformArray, 2));
				$var(ICC_ColorSpace, srgb, $cast(ICC_ColorSpace, getInstance($ColorSpace::CS_sRGB)));
				$var($PCMM, mdl, $CMSManager::getModule());
				transforms->set(0, $($nc(mdl)->createTransform(this->thisProfile, $ColorTransform::Any, $ColorTransform::In)));
				transforms->set(1, $(mdl->createTransform($($nc(srgb)->getProfile()), $ColorTransform::Any, $ColorTransform::Out)));
				if (this->needScaleInit) {
					setComponentScaling();
				}
				$set(this, this2srgb, mdl->createTransform(transforms));
			}
		}
	}
	int32_t nc = this->getNumComponents();
	$var($shorts, tmp, $new($shorts, nc));
	for (int32_t i = 0; i < nc; ++i) {
		tmp->set(i, $cast(int16_t, (($nc(colorvalue)->get(i) - $nc(this->minVal)->get(i)) * $nc(this->invDiffMinMax)->get(i) + 0.5f)));
	}
	$assign(tmp, $nc(this->this2srgb)->colorConvert(tmp, ($shorts*)nullptr));
	$var($floats, result, $new($floats, 3));
	for (int32_t i = 0; i < 3; ++i) {
		result->set(i, ((float)((int32_t)($nc(tmp)->get(i) & (uint32_t)0x0000FFFF))) / 65535.0f);
	}
	return result;
}

$floats* ICC_ColorSpace::fromRGB($floats* rgbvalue) {
	$useLocalCurrentObjectStackCache();
	if (this->srgb2this == nullptr) {
		$synchronized(this) {
			if (this->srgb2this == nullptr) {
				$var($ColorTransformArray, transforms, $new($ColorTransformArray, 2));
				$var(ICC_ColorSpace, srgb, $cast(ICC_ColorSpace, getInstance($ColorSpace::CS_sRGB)));
				$var($PCMM, mdl, $CMSManager::getModule());
				transforms->set(0, $($nc(mdl)->createTransform($($nc(srgb)->getProfile()), $ColorTransform::Any, $ColorTransform::In)));
				transforms->set(1, $(mdl->createTransform(this->thisProfile, $ColorTransform::Any, $ColorTransform::Out)));
				if (this->needScaleInit) {
					setComponentScaling();
				}
				$set(this, srgb2this, mdl->createTransform(transforms));
			}
		}
	}
	$var($shorts, tmp, $new($shorts, 3));
	for (int32_t i = 0; i < 3; ++i) {
		tmp->set(i, $cast(int16_t, (($nc(rgbvalue)->get(i) * 65535.0f) + 0.5f)));
	}
	$assign(tmp, $nc(this->srgb2this)->colorConvert(tmp, ($shorts*)nullptr));
	int32_t nc = this->getNumComponents();
	$var($floats, result, $new($floats, nc));
	for (int32_t i = 0; i < nc; ++i) {
		result->set(i, (((float)((int32_t)($nc(tmp)->get(i) & (uint32_t)0x0000FFFF))) / 65535.0f) * $nc(this->diffMinMax)->get(i) + $nc(this->minVal)->get(i));
	}
	return result;
}

$floats* ICC_ColorSpace::toCIEXYZ($floats* colorvalue) {
	$useLocalCurrentObjectStackCache();
	if (this->this2xyz == nullptr) {
		$synchronized(this) {
			if (this->this2xyz == nullptr) {
				$var($ColorTransformArray, transforms, $new($ColorTransformArray, 2));
				$var(ICC_ColorSpace, xyz, $cast(ICC_ColorSpace, getInstance($ColorSpace::CS_CIEXYZ)));
				$var($PCMM, mdl, $CMSManager::getModule());
				try {
					transforms->set(0, $($nc(mdl)->createTransform(this->thisProfile, $ICC_Profile::icRelativeColorimetric, $ColorTransform::In)));
				} catch ($CMMException& e) {
					transforms->set(0, $($nc(mdl)->createTransform(this->thisProfile, $ColorTransform::Any, $ColorTransform::In)));
				}
				transforms->set(1, $($nc(mdl)->createTransform($($nc(xyz)->getProfile()), $ColorTransform::Any, $ColorTransform::Out)));
				if (this->needScaleInit) {
					setComponentScaling();
				}
				$set(this, this2xyz, mdl->createTransform(transforms));
			}
		}
	}
	int32_t nc = this->getNumComponents();
	$var($shorts, tmp, $new($shorts, nc));
	for (int32_t i = 0; i < nc; ++i) {
		tmp->set(i, $cast(int16_t, (($nc(colorvalue)->get(i) - $nc(this->minVal)->get(i)) * $nc(this->invDiffMinMax)->get(i) + 0.5f)));
	}
	$assign(tmp, $nc(this->this2xyz)->colorConvert(tmp, ($shorts*)nullptr));
	float ALMOST_TWO = 1.0f + (32767.0f / 32768.0f);
	$var($floats, result, $new($floats, 3));
	for (int32_t i = 0; i < 3; ++i) {
		result->set(i, (((float)((int32_t)($nc(tmp)->get(i) & (uint32_t)0x0000FFFF))) / 65535.0f) * ALMOST_TWO);
	}
	return result;
}

$floats* ICC_ColorSpace::fromCIEXYZ($floats* colorvalue) {
	$useLocalCurrentObjectStackCache();
	if (this->xyz2this == nullptr) {
		$synchronized(this) {
			if (this->xyz2this == nullptr) {
				$var($ColorTransformArray, transforms, $new($ColorTransformArray, 2));
				$var(ICC_ColorSpace, xyz, $cast(ICC_ColorSpace, getInstance($ColorSpace::CS_CIEXYZ)));
				$var($PCMM, mdl, $CMSManager::getModule());
				transforms->set(0, $($nc(mdl)->createTransform($($nc(xyz)->getProfile()), $ColorTransform::Any, $ColorTransform::In)));
				try {
					transforms->set(1, $(mdl->createTransform(this->thisProfile, $ICC_Profile::icRelativeColorimetric, $ColorTransform::Out)));
				} catch ($CMMException& e) {
					transforms->set(1, $(mdl->createTransform(this->thisProfile, $ColorTransform::Any, $ColorTransform::Out)));
				}
				if (this->needScaleInit) {
					setComponentScaling();
				}
				$set(this, xyz2this, mdl->createTransform(transforms));
			}
		}
	}
	$var($shorts, tmp, $new($shorts, 3));
	float ALMOST_TWO = 1.0f + (32767.0f / 32768.0f);
	float factor = 65535.0f / ALMOST_TWO;
	for (int32_t i = 0; i < 3; ++i) {
		tmp->set(i, $cast(int16_t, (($nc(colorvalue)->get(i) * factor) + 0.5f)));
	}
	$assign(tmp, $nc(this->xyz2this)->colorConvert(tmp, ($shorts*)nullptr));
	int32_t nc = this->getNumComponents();
	$var($floats, result, $new($floats, nc));
	for (int32_t i = 0; i < nc; ++i) {
		result->set(i, (((float)((int32_t)($nc(tmp)->get(i) & (uint32_t)0x0000FFFF))) / 65535.0f) * $nc(this->diffMinMax)->get(i) + $nc(this->minVal)->get(i));
	}
	return result;
}

float ICC_ColorSpace::getMinValue(int32_t component) {
	rangeCheck(component);
	return $nc(this->minVal)->get(component);
}

float ICC_ColorSpace::getMaxValue(int32_t component) {
	rangeCheck(component);
	return $nc(this->maxVal)->get(component);
}

void ICC_ColorSpace::setMinMax() {
	int32_t nc = this->getNumComponents();
	int32_t type = this->getType();
	$set(this, minVal, $new($floats, nc));
	$set(this, maxVal, $new($floats, nc));
	if (type == $ColorSpace::TYPE_Lab) {
		$nc(this->minVal)->set(0, 0.0f);
		$nc(this->maxVal)->set(0, 100.0f);
		$nc(this->minVal)->set(1, -128.0f);
		$nc(this->maxVal)->set(1, 127.0f);
		$nc(this->minVal)->set(2, -128.0f);
		$nc(this->maxVal)->set(2, 127.0f);
	} else if (type == $ColorSpace::TYPE_XYZ) {
		$nc(this->minVal)->set(0, $nc(this->minVal)->set(1, $nc(this->minVal)->set(2, 0.0f)));
		$nc(this->maxVal)->set(0, $nc(this->maxVal)->set(1, $nc(this->maxVal)->set(2, 1.0f + (32767.0f / 32768.0f))));
	} else {
		for (int32_t i = 0; i < nc; ++i) {
			$nc(this->minVal)->set(i, 0.0f);
			$nc(this->maxVal)->set(i, 1.0f);
		}
	}
}

void ICC_ColorSpace::setComponentScaling() {
	int32_t nc = this->getNumComponents();
	$set(this, diffMinMax, $new($floats, nc));
	$set(this, invDiffMinMax, $new($floats, nc));
	for (int32_t i = 0; i < nc; ++i) {
		$nc(this->minVal)->set(i, this->getMinValue(i));
		$nc(this->maxVal)->set(i, this->getMaxValue(i));
		$nc(this->diffMinMax)->set(i, $nc(this->maxVal)->get(i) - $nc(this->minVal)->get(i));
		$nc(this->invDiffMinMax)->set(i, 65535.0f / $nc(this->diffMinMax)->get(i));
	}
	this->needScaleInit = false;
}

ICC_ColorSpace::ICC_ColorSpace() {
}

$Class* ICC_ColorSpace::load$($String* name, bool initialize) {
	$loadClass(ICC_ColorSpace, name, initialize, &_ICC_ColorSpace_ClassInfo_, allocate$ICC_ColorSpace);
	return class$;
}

$Class* ICC_ColorSpace::class$ = nullptr;

		} // color
	} // awt
} // java