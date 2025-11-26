#include <javax/print/attribute/standard/MediaPrintableArea.h>

#include <javax/print/attribute/DocAttribute.h>
#include <jcpp.h>

#undef INCH
#undef MM

using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $DocAttribute = ::javax::print::attribute::DocAttribute;
using $PrintJobAttribute = ::javax::print::attribute::PrintJobAttribute;
using $PrintRequestAttribute = ::javax::print::attribute::PrintRequestAttribute;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$FieldInfo _MediaPrintableArea_FieldInfo_[] = {
	{"x", "I", nullptr, $PRIVATE, $field(MediaPrintableArea, x)},
	{"y", "I", nullptr, $PRIVATE, $field(MediaPrintableArea, y)},
	{"w", "I", nullptr, $PRIVATE, $field(MediaPrintableArea, w)},
	{"h", "I", nullptr, $PRIVATE, $field(MediaPrintableArea, h)},
	{"units", "I", nullptr, $PRIVATE, $field(MediaPrintableArea, units)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MediaPrintableArea, serialVersionUID)},
	{"INCH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MediaPrintableArea, INCH)},
	{"MM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MediaPrintableArea, MM)},
	{}
};

$MethodInfo _MediaPrintableArea_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(FFFFI)V", nullptr, $PUBLIC, $method(static_cast<void(MediaPrintableArea::*)(float,float,float,float,int32_t)>(&MediaPrintableArea::init$))},
	{"<init>", "(IIIII)V", nullptr, $PUBLIC, $method(static_cast<void(MediaPrintableArea::*)(int32_t,int32_t,int32_t,int32_t,int32_t)>(&MediaPrintableArea::init$))},
	{"convertFromMicrometers", "(II)F", nullptr, $PRIVATE | $STATIC, $method(static_cast<float(*)(int32_t,int32_t)>(&MediaPrintableArea::convertFromMicrometers))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getHeight", "(I)F", nullptr, $PUBLIC, $method(static_cast<float(MediaPrintableArea::*)(int32_t)>(&MediaPrintableArea::getHeight))},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"getPrintableArea", "(I)[F", nullptr, $PUBLIC, $method(static_cast<$floats*(MediaPrintableArea::*)(int32_t)>(&MediaPrintableArea::getPrintableArea))},
	{"getWidth", "(I)F", nullptr, $PUBLIC, $method(static_cast<float(MediaPrintableArea::*)(int32_t)>(&MediaPrintableArea::getWidth))},
	{"getX", "(I)F", nullptr, $PUBLIC, $method(static_cast<float(MediaPrintableArea::*)(int32_t)>(&MediaPrintableArea::getX))},
	{"getY", "(I)F", nullptr, $PUBLIC, $method(static_cast<float(MediaPrintableArea::*)(int32_t)>(&MediaPrintableArea::getY))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toString", "(ILjava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(MediaPrintableArea::*)(int32_t,$String*)>(&MediaPrintableArea::toString))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MediaPrintableArea_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.print.attribute.standard.MediaPrintableArea",
	"java.lang.Object",
	"javax.print.attribute.DocAttribute,javax.print.attribute.PrintRequestAttribute,javax.print.attribute.PrintJobAttribute",
	_MediaPrintableArea_FieldInfo_,
	_MediaPrintableArea_MethodInfo_
};

$Object* allocate$MediaPrintableArea($Class* clazz) {
	return $of($alloc(MediaPrintableArea));
}

$Object* MediaPrintableArea::clone() {
	 return this->$DocAttribute::clone();
}

void MediaPrintableArea::finalize() {
	this->$DocAttribute::finalize();
}

void MediaPrintableArea::init$(float x, float y, float w, float h, int32_t units) {
	if ((x < 0.0) || (y < 0.0) || (w <= 0.0) || (h <= 0.0) || (units < 1)) {
		$throwNew($IllegalArgumentException, "0 or negative value argument"_s);
	}
	this->x = $cast(int32_t, (x * units + 0.5f));
	this->y = $cast(int32_t, (y * units + 0.5f));
	this->w = $cast(int32_t, (w * units + 0.5f));
	this->h = $cast(int32_t, (h * units + 0.5f));
}

void MediaPrintableArea::init$(int32_t x, int32_t y, int32_t w, int32_t h, int32_t units) {
	if ((x < 0) || (y < 0) || (w <= 0) || (h <= 0) || (units < 1)) {
		$throwNew($IllegalArgumentException, "0 or negative value argument"_s);
	}
	this->x = x * units;
	this->y = y * units;
	this->w = w * units;
	this->h = h * units;
}

$floats* MediaPrintableArea::getPrintableArea(int32_t units) {
	return $new($floats, {
		getX(units),
		getY(units),
		getWidth(units),
		getHeight(units)
	});
}

float MediaPrintableArea::getX(int32_t units) {
	return convertFromMicrometers(this->x, units);
}

float MediaPrintableArea::getY(int32_t units) {
	return convertFromMicrometers(this->y, units);
}

float MediaPrintableArea::getWidth(int32_t units) {
	return convertFromMicrometers(this->w, units);
}

float MediaPrintableArea::getHeight(int32_t units) {
	return convertFromMicrometers(this->h, units);
}

bool MediaPrintableArea::equals(Object$* object) {
	bool ret = false;
	if ($instanceOf(MediaPrintableArea, object)) {
		$var(MediaPrintableArea, mm, $cast(MediaPrintableArea, object));
		if (this->x == $nc(mm)->x && this->y == mm->y && this->w == mm->w && this->h == mm->h) {
			ret = true;
		}
	}
	return ret;
}

$Class* MediaPrintableArea::getCategory() {
	return MediaPrintableArea::class$;
}

$String* MediaPrintableArea::getName() {
	return "media-printable-area"_s;
}

$String* MediaPrintableArea::toString(int32_t units, $String* unitsName$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($String, unitsName, unitsName$renamed);
	if (unitsName == nullptr) {
		$assign(unitsName, ""_s);
	}
	$var($floats, vals, getPrintableArea(units));
	$var($String, str, $str({"("_s, $$str($nc(vals)->get(0)), ","_s, $$str(vals->get(1)), ")->("_s, $$str(vals->get(2)), ","_s, $$str(vals->get(3)), ")"_s}));
	return $str({str, unitsName});
}

$String* MediaPrintableArea::toString() {
	return (toString(MediaPrintableArea::MM, "mm"_s));
}

int32_t MediaPrintableArea::hashCode() {
	return this->x + 37 * this->y + 43 * this->w + 47 * this->h;
}

float MediaPrintableArea::convertFromMicrometers(int32_t x, int32_t units) {
	$init(MediaPrintableArea);
	if (units < 1) {
		$throwNew($IllegalArgumentException, "units is < 1"_s);
	}
	return ((float)x) / ((float)units);
}

MediaPrintableArea::MediaPrintableArea() {
}

$Class* MediaPrintableArea::load$($String* name, bool initialize) {
	$loadClass(MediaPrintableArea, name, initialize, &_MediaPrintableArea_ClassInfo_, allocate$MediaPrintableArea);
	return class$;
}

$Class* MediaPrintableArea::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax