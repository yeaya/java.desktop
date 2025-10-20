#include <javax/print/attribute/standard/MediaSize.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/HashMap.h>
#include <java/util/Vector.h>
#include <javax/print/attribute/Size2DSyntax.h>
#include <javax/print/attribute/standard/MediaSize$Engineering.h>
#include <javax/print/attribute/standard/MediaSize$ISO.h>
#include <javax/print/attribute/standard/MediaSize$JIS.h>
#include <javax/print/attribute/standard/MediaSize$NA.h>
#include <javax/print/attribute/standard/MediaSize$Other.h>
#include <javax/print/attribute/standard/MediaSizeName.h>
#include <jcpp.h>

#undef C
#undef EXECUTIVE
#undef ISOA4
#undef JISB5
#undef LETTER
#undef NALETTER

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;
using $Vector = ::java::util::Vector;
using $Attribute = ::javax::print::attribute::Attribute;
using $Size2DSyntax = ::javax::print::attribute::Size2DSyntax;
using $MediaSize$Engineering = ::javax::print::attribute::standard::MediaSize$Engineering;
using $MediaSize$ISO = ::javax::print::attribute::standard::MediaSize$ISO;
using $MediaSize$JIS = ::javax::print::attribute::standard::MediaSize$JIS;
using $MediaSize$NA = ::javax::print::attribute::standard::MediaSize$NA;
using $MediaSize$Other = ::javax::print::attribute::standard::MediaSize$Other;
using $MediaSizeName = ::javax::print::attribute::standard::MediaSizeName;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$FieldInfo _MediaSize_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MediaSize, serialVersionUID)},
	{"mediaName", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PRIVATE, $field(MediaSize, mediaName)},
	{"mediaMap", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljavax/print/attribute/standard/MediaSizeName;Ljavax/print/attribute/standard/MediaSize;>;", $PRIVATE | $STATIC, $staticField(MediaSize, mediaMap)},
	{"sizeVector", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/print/attribute/standard/MediaSize;>;", $PRIVATE | $STATIC, $staticField(MediaSize, sizeVector)},
	{}
};

$MethodInfo _MediaSize_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(FFI)V", nullptr, $PUBLIC, $method(static_cast<void(MediaSize::*)(float,float,int32_t)>(&MediaSize::init$))},
	{"<init>", "(III)V", nullptr, $PUBLIC, $method(static_cast<void(MediaSize::*)(int32_t,int32_t,int32_t)>(&MediaSize::init$))},
	{"<init>", "(FFILjavax/print/attribute/standard/MediaSizeName;)V", nullptr, $PUBLIC, $method(static_cast<void(MediaSize::*)(float,float,int32_t,$MediaSizeName*)>(&MediaSize::init$))},
	{"<init>", "(IIILjavax/print/attribute/standard/MediaSizeName;)V", nullptr, $PUBLIC, $method(static_cast<void(MediaSize::*)(int32_t,int32_t,int32_t,$MediaSizeName*)>(&MediaSize::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"findMedia", "(FFI)Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MediaSizeName*(*)(float,float,int32_t)>(&MediaSize::findMedia))},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getMediaSizeForName", "(Ljavax/print/attribute/standard/MediaSizeName;)Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC, $method(static_cast<MediaSize*(*)($MediaSizeName*)>(&MediaSize::getMediaSizeForName))},
	{"getMediaSizeName", "()Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MediaSize_InnerClassesInfo_[] = {
	{"javax.print.attribute.standard.MediaSize$Other", "javax.print.attribute.standard.MediaSize", "Other", $PUBLIC | $STATIC | $FINAL},
	{"javax.print.attribute.standard.MediaSize$Engineering", "javax.print.attribute.standard.MediaSize", "Engineering", $PUBLIC | $STATIC | $FINAL},
	{"javax.print.attribute.standard.MediaSize$NA", "javax.print.attribute.standard.MediaSize", "NA", $PUBLIC | $STATIC | $FINAL},
	{"javax.print.attribute.standard.MediaSize$JIS", "javax.print.attribute.standard.MediaSize", "JIS", $PUBLIC | $STATIC | $FINAL},
	{"javax.print.attribute.standard.MediaSize$ISO", "javax.print.attribute.standard.MediaSize", "ISO", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _MediaSize_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.print.attribute.standard.MediaSize",
	"javax.print.attribute.Size2DSyntax",
	"javax.print.attribute.Attribute",
	_MediaSize_FieldInfo_,
	_MediaSize_MethodInfo_,
	nullptr,
	nullptr,
	_MediaSize_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.print.attribute.standard.MediaSize$Other,javax.print.attribute.standard.MediaSize$Engineering,javax.print.attribute.standard.MediaSize$NA,javax.print.attribute.standard.MediaSize$JIS,javax.print.attribute.standard.MediaSize$ISO"
};

$Object* allocate$MediaSize($Class* clazz) {
	return $of($alloc(MediaSize));
}

int32_t MediaSize::hashCode() {
	 return this->$Size2DSyntax::hashCode();
}

$String* MediaSize::toString() {
	 return this->$Size2DSyntax::toString();
}

$Object* MediaSize::clone() {
	 return this->$Size2DSyntax::clone();
}

void MediaSize::finalize() {
	this->$Size2DSyntax::finalize();
}

$HashMap* MediaSize::mediaMap = nullptr;
$Vector* MediaSize::sizeVector = nullptr;

void MediaSize::init$(float x, float y, int32_t units) {
	$Size2DSyntax::init$(x, y, units);
	if (x > y) {
		$throwNew($IllegalArgumentException, "X dimension > Y dimension"_s);
	}
	$nc(MediaSize::sizeVector)->add(this);
}

void MediaSize::init$(int32_t x, int32_t y, int32_t units) {
	$Size2DSyntax::init$(x, y, units);
	if (x > y) {
		$throwNew($IllegalArgumentException, "X dimension > Y dimension"_s);
	}
	$nc(MediaSize::sizeVector)->add(this);
}

void MediaSize::init$(float x, float y, int32_t units, $MediaSizeName* media) {
	$Size2DSyntax::init$(x, y, units);
	if (x > y) {
		$throwNew($IllegalArgumentException, "X dimension > Y dimension"_s);
	}
	if (media != nullptr && $nc(MediaSize::mediaMap)->get(media) == nullptr) {
		$set(this, mediaName, media);
		$nc(MediaSize::mediaMap)->put(this->mediaName, this);
	}
	$nc(MediaSize::sizeVector)->add(this);
}

void MediaSize::init$(int32_t x, int32_t y, int32_t units, $MediaSizeName* media) {
	$Size2DSyntax::init$(x, y, units);
	if (x > y) {
		$throwNew($IllegalArgumentException, "X dimension > Y dimension"_s);
	}
	if (media != nullptr && $nc(MediaSize::mediaMap)->get(media) == nullptr) {
		$set(this, mediaName, media);
		$nc(MediaSize::mediaMap)->put(this->mediaName, this);
	}
	$nc(MediaSize::sizeVector)->add(this);
}

$MediaSizeName* MediaSize::getMediaSizeName() {
	return this->mediaName;
}

MediaSize* MediaSize::getMediaSizeForName($MediaSizeName* media) {
	$init(MediaSize);
	return $cast(MediaSize, $nc(MediaSize::mediaMap)->get(media));
}

$MediaSizeName* MediaSize::findMedia(float x, float y, int32_t units) {
	$init(MediaSize);
	$useLocalCurrentObjectStackCache();
	$init($MediaSize$ISO);
	$var(MediaSize, match, $MediaSize$ISO::A4);
	if (x <= 0.0f || y <= 0.0f || units < 1) {
		$throwNew($IllegalArgumentException, "args must be +ve values"_s);
	}
	double ls = x * x + y * y;
	double tmp_ls = 0.0;
	$var($floats, dim, nullptr);
	float diffx = x;
	float diffy = y;
	for (int32_t i = 0; i < $nc(MediaSize::sizeVector)->size(); ++i) {
		$var(MediaSize, mediaSize, $cast(MediaSize, $nc(MediaSize::sizeVector)->elementAt(i)));
		$assign(dim, $nc(mediaSize)->getSize(units));
		if (x == $nc(dim)->get(0) && y == dim->get(1)) {
			$assign(match, mediaSize);
			break;
		} else {
			diffx = x - dim->get(0);
			diffy = y - dim->get(1);
			tmp_ls = diffx * diffx + diffy * diffy;
			if (tmp_ls < ls) {
				ls = tmp_ls;
				$assign(match, mediaSize);
			}
		}
	}
	return $nc(match)->getMediaSizeName();
}

bool MediaSize::equals(Object$* object) {
	return ($Size2DSyntax::equals(object) && $instanceOf(MediaSize, object));
}

$Class* MediaSize::getCategory() {
	return MediaSize::class$;
}

$String* MediaSize::getName() {
	return "media-size"_s;
}

void clinit$MediaSize($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(MediaSize::mediaMap, $new($HashMap, 100, (float)10));
	$assignStatic(MediaSize::sizeVector, $new($Vector, 100, 10));
	{
		$init($MediaSize$ISO);
		$var(MediaSize, ISOA4, $MediaSize$ISO::A4);
		$init($MediaSize$JIS);
		$var(MediaSize, JISB5, $MediaSize$JIS::B5);
		$init($MediaSize$NA);
		$var(MediaSize, NALETTER, $MediaSize$NA::LETTER);
		$init($MediaSize$Engineering);
		$var(MediaSize, EngineeringC, $MediaSize$Engineering::C);
		$init($MediaSize$Other);
		$var(MediaSize, OtherEXECUTIVE, $MediaSize$Other::EXECUTIVE);
	}
}

MediaSize::MediaSize() {
}

$Class* MediaSize::load$($String* name, bool initialize) {
	$loadClass(MediaSize, name, initialize, &_MediaSize_ClassInfo_, clinit$MediaSize, allocate$MediaSize);
	return class$;
}

$Class* MediaSize::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax