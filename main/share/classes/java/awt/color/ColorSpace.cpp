#include <java/awt/color/ColorSpace.h>

#include <java/awt/color/ColorSpace$BuiltInSpace.h>
#include <jcpp.h>

#undef CS_CIEXYZ
#undef CS_GRAY
#undef CS_LINEAR_RGB
#undef CS_PYCC
#undef GRAY
#undef LRGB
#undef PYCC
#undef SRGB
#undef TYPE_2CLR
#undef TYPE_3CLR
#undef TYPE_4CLR
#undef TYPE_5CLR
#undef TYPE_6CLR
#undef TYPE_7CLR
#undef TYPE_8CLR
#undef TYPE_9CLR
#undef TYPE_ACLR
#undef TYPE_BCLR
#undef TYPE_CCLR
#undef TYPE_CMY
#undef TYPE_CMYK
#undef TYPE_DCLR
#undef TYPE_ECLR
#undef TYPE_FCLR
#undef TYPE_GRAY
#undef TYPE_HLS
#undef TYPE_HSV
#undef TYPE_RGB
#undef TYPE_XYZ
#undef XYZ

using $ColorSpace$BuiltInSpace = ::java::awt::color::ColorSpace$BuiltInSpace;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace color {

$FieldInfo _ColorSpace_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ColorSpace, serialVersionUID)},
	{"type", "I", nullptr, $PRIVATE | $FINAL, $field(ColorSpace, type)},
	{"numComponents", "I", nullptr, $PRIVATE | $FINAL, $field(ColorSpace, numComponents)},
	{"compName", "[Ljava/lang/String;", nullptr, $PRIVATE | $VOLATILE | $TRANSIENT, $field(ColorSpace, compName)},
	{"TYPE_XYZ", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ColorSpace, TYPE_XYZ)},
	{"TYPE_Lab", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ColorSpace, TYPE_Lab)},
	{"TYPE_Luv", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ColorSpace, TYPE_Luv)},
	{"TYPE_YCbCr", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ColorSpace, TYPE_YCbCr)},
	{"TYPE_Yxy", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ColorSpace, TYPE_Yxy)},
	{"TYPE_RGB", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ColorSpace, TYPE_RGB)},
	{"TYPE_GRAY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ColorSpace, TYPE_GRAY)},
	{"TYPE_HSV", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ColorSpace, TYPE_HSV)},
	{"TYPE_HLS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ColorSpace, TYPE_HLS)},
	{"TYPE_CMYK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ColorSpace, TYPE_CMYK)},
	{"TYPE_CMY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ColorSpace, TYPE_CMY)},
	{"TYPE_2CLR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ColorSpace, TYPE_2CLR)},
	{"TYPE_3CLR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ColorSpace, TYPE_3CLR)},
	{"TYPE_4CLR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ColorSpace, TYPE_4CLR)},
	{"TYPE_5CLR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ColorSpace, TYPE_5CLR)},
	{"TYPE_6CLR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ColorSpace, TYPE_6CLR)},
	{"TYPE_7CLR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ColorSpace, TYPE_7CLR)},
	{"TYPE_8CLR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ColorSpace, TYPE_8CLR)},
	{"TYPE_9CLR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ColorSpace, TYPE_9CLR)},
	{"TYPE_ACLR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ColorSpace, TYPE_ACLR)},
	{"TYPE_BCLR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ColorSpace, TYPE_BCLR)},
	{"TYPE_CCLR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ColorSpace, TYPE_CCLR)},
	{"TYPE_DCLR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ColorSpace, TYPE_DCLR)},
	{"TYPE_ECLR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ColorSpace, TYPE_ECLR)},
	{"TYPE_FCLR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ColorSpace, TYPE_FCLR)},
	{"CS_sRGB", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ColorSpace, CS_sRGB)},
	{"CS_LINEAR_RGB", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ColorSpace, CS_LINEAR_RGB)},
	{"CS_CIEXYZ", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ColorSpace, CS_CIEXYZ)},
	{"CS_PYCC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ColorSpace, CS_PYCC)},
	{"CS_GRAY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ColorSpace, CS_GRAY)},
	{}
};

$MethodInfo _ColorSpace_MethodInfo_[] = {
	{"<init>", "(II)V", nullptr, $PROTECTED, $method(static_cast<void(ColorSpace::*)(int32_t,int32_t)>(&ColorSpace::init$))},
	{"fromCIEXYZ", "([F)[F", nullptr, $PUBLIC | $ABSTRACT},
	{"fromRGB", "([F)[F", nullptr, $PUBLIC | $ABSTRACT},
	{"getInstance", "(I)Ljava/awt/color/ColorSpace;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ColorSpace*(*)(int32_t)>(&ColorSpace::getInstance))},
	{"getMaxValue", "(I)F", nullptr, $PUBLIC},
	{"getMinValue", "(I)F", nullptr, $PUBLIC},
	{"getName", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNumComponents", "()I", nullptr, $PUBLIC},
	{"getType", "()I", nullptr, $PUBLIC},
	{"isCS_sRGB", "()Z", nullptr, $PUBLIC},
	{"rangeCheck", "(I)V", nullptr, $FINAL, $method(static_cast<void(ColorSpace::*)(int32_t)>(&ColorSpace::rangeCheck))},
	{"toCIEXYZ", "([F)[F", nullptr, $PUBLIC | $ABSTRACT},
	{"toRGB", "([F)[F", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _ColorSpace_InnerClassesInfo_[] = {
	{"java.awt.color.ColorSpace$BuiltInSpace", "java.awt.color.ColorSpace", "BuiltInSpace", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ColorSpace_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.awt.color.ColorSpace",
	"java.lang.Object",
	"java.io.Serializable",
	_ColorSpace_FieldInfo_,
	_ColorSpace_MethodInfo_,
	nullptr,
	nullptr,
	_ColorSpace_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.color.ColorSpace$BuiltInSpace"
};

$Object* allocate$ColorSpace($Class* clazz) {
	return $of($alloc(ColorSpace));
}

void ColorSpace::init$(int32_t type, int32_t numComponents) {
	this->type = type;
	this->numComponents = numComponents;
}

ColorSpace* ColorSpace::getInstance(int32_t cspace) {
	$init(ColorSpace);

	$var(ColorSpace, var$0, nullptr)
	switch (cspace) {
	case ColorSpace::CS_sRGB:
		{
			$init($ColorSpace$BuiltInSpace);
			$assign(var$0, $ColorSpace$BuiltInSpace::SRGB);
			break;
		}
	case ColorSpace::CS_LINEAR_RGB:
		{
			$init($ColorSpace$BuiltInSpace);
			$assign(var$0, $ColorSpace$BuiltInSpace::LRGB);
			break;
		}
	case ColorSpace::CS_CIEXYZ:
		{
			$init($ColorSpace$BuiltInSpace);
			$assign(var$0, $ColorSpace$BuiltInSpace::XYZ);
			break;
		}
	case ColorSpace::CS_PYCC:
		{
			$init($ColorSpace$BuiltInSpace);
			$assign(var$0, $ColorSpace$BuiltInSpace::PYCC);
			break;
		}
	case ColorSpace::CS_GRAY:
		{
			$init($ColorSpace$BuiltInSpace);
			$assign(var$0, $ColorSpace$BuiltInSpace::GRAY);
			break;
		}
	default:
		{
			{
				$throwNew($IllegalArgumentException, "Unknown color space"_s);
			}
		}
	}
	return var$0;
}

bool ColorSpace::isCS_sRGB() {
	$init($ColorSpace$BuiltInSpace);
	return this == $ColorSpace$BuiltInSpace::SRGB;
}

int32_t ColorSpace::getType() {
	return this->type;
}

int32_t ColorSpace::getNumComponents() {
	return this->numComponents;
}

$String* ColorSpace::getName(int32_t component) {
	$useLocalCurrentObjectStackCache();
	rangeCheck(component);
	if (this->compName == nullptr) {

		$var($StringArray, var$0, nullptr)
		switch (this->type) {
		case ColorSpace::TYPE_XYZ:
			{
				$assign(var$0, $new($StringArray, {
					"X"_s,
					"Y"_s,
					"Z"_s
				}));
				break;
			}
		case ColorSpace::TYPE_Lab:
			{
				$assign(var$0, $new($StringArray, {
					"L"_s,
					"a"_s,
					"b"_s
				}));
				break;
			}
		case ColorSpace::TYPE_Luv:
			{
				$assign(var$0, $new($StringArray, {
					"L"_s,
					"u"_s,
					"v"_s
				}));
				break;
			}
		case ColorSpace::TYPE_YCbCr:
			{
				$assign(var$0, $new($StringArray, {
					"Y"_s,
					"Cb"_s,
					"Cr"_s
				}));
				break;
			}
		case ColorSpace::TYPE_Yxy:
			{
				$assign(var$0, $new($StringArray, {
					"Y"_s,
					"x"_s,
					"y"_s
				}));
				break;
			}
		case ColorSpace::TYPE_RGB:
			{
				$assign(var$0, $new($StringArray, {
					"Red"_s,
					"Green"_s,
					"Blue"_s
				}));
				break;
			}
		case ColorSpace::TYPE_GRAY:
			{
				$assign(var$0, $new($StringArray, {"Gray"_s}));
				break;
			}
		case ColorSpace::TYPE_HSV:
			{
				$assign(var$0, $new($StringArray, {
					"Hue"_s,
					"Saturation"_s,
					"Value"_s
				}));
				break;
			}
		case ColorSpace::TYPE_HLS:
			{
				$assign(var$0, $new($StringArray, {
					"Hue"_s,
					"Lightness"_s,
					"Saturation"_s
				}));
				break;
			}
		case ColorSpace::TYPE_CMYK:
			{
				$assign(var$0, $new($StringArray, {
					"Cyan"_s,
					"Magenta"_s,
					"Yellow"_s,
					"Black"_s
				}));
				break;
			}
		case ColorSpace::TYPE_CMY:
			{
				$assign(var$0, $new($StringArray, {
					"Cyan"_s,
					"Magenta"_s,
					"Yellow"_s
				}));
				break;
			}
		default:
			{
				{
					$var($StringArray, tmp, $new($StringArray, getNumComponents()));
					for (int32_t i = 0; i < tmp->length; ++i) {
						tmp->set(i, $$str({"Unnamed color component("_s, $$str(i), ")"_s}));
					}
					$assign(var$0, tmp);
					break;
				}
			}
		}
		$set(this, compName, var$0);
	}
	return $nc(this->compName)->get(component);
}

float ColorSpace::getMinValue(int32_t component) {
	rangeCheck(component);
	return 0.0f;
}

float ColorSpace::getMaxValue(int32_t component) {
	rangeCheck(component);
	return 1.0f;
}

void ColorSpace::rangeCheck(int32_t component) {
	$useLocalCurrentObjectStackCache();
	if (component < 0 || component > getNumComponents() - 1) {
		$throwNew($IllegalArgumentException, $$str({"Component index out of range: "_s, $$str(component)}));
	}
}

ColorSpace::ColorSpace() {
}

$Class* ColorSpace::load$($String* name, bool initialize) {
	$loadClass(ColorSpace, name, initialize, &_ColorSpace_ClassInfo_, allocate$ColorSpace);
	return class$;
}

$Class* ColorSpace::class$ = nullptr;

		} // color
	} // awt
} // java